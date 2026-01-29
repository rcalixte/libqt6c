#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOSERVICEPROVIDER_H
#define SRC_LOCATION_QT6C_LIBQGEOSERVICEPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html)

/// q_geoserviceprovider_new constructs a new QGeoServiceProvider object.
///
/// @param providerName const char*
///
QGeoServiceProvider* q_geoserviceprovider_new(const char* providerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html)

/// q_geoserviceprovider_new2 constructs a new QGeoServiceProvider object.
///
/// @param providerName const char*
/// @param parameters libqt_map of const char* to QVariant*
///
QGeoServiceProvider* q_geoserviceprovider_new2(const char* providerName, libqt_map parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html)

/// q_geoserviceprovider_new3 constructs a new QGeoServiceProvider object.
///
/// @param providerName const char*
/// @param parameters libqt_map of const char* to QVariant*
/// @param allowExperimental bool
///
QGeoServiceProvider* q_geoserviceprovider_new3(const char* providerName, libqt_map parameters, bool allowExperimental);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGeoServiceProvider*
///
const QMetaObject* q_geoserviceprovider_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGeoServiceProvider*
/// @param callback const QMetaObject* func()
///
void q_geoserviceprovider_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGeoServiceProvider*
///
const QMetaObject* q_geoserviceprovider_qbase_meta_object(void* self);

/// @param self QGeoServiceProvider*
/// @param param1 const char*
///
void* q_geoserviceprovider_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGeoServiceProvider*
/// @param callback void* func(QGeoServiceProvider* self, const char* param1)
///
void q_geoserviceprovider_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGeoServiceProvider*
/// @param param1 const char*
///
void* q_geoserviceprovider_qbase_metacast(void* self, const char* param1);

/// @param self QGeoServiceProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geoserviceprovider_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGeoServiceProvider*
/// @param callback int32_t func(QGeoServiceProvider* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_geoserviceprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGeoServiceProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geoserviceprovider_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_geoserviceprovider_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#availableServiceProviders)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_geoserviceprovider_available_service_providers();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#routingFeatures)
///
/// @param self QGeoServiceProvider*
///
/// @return flag of enum QGeoServiceProvider__RoutingFeature
///
int32_t q_geoserviceprovider_routing_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#geocodingFeatures)
///
/// @param self QGeoServiceProvider*
///
/// @return flag of enum QGeoServiceProvider__GeocodingFeature
///
int32_t q_geoserviceprovider_geocoding_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#mappingFeatures)
///
/// @param self QGeoServiceProvider*
///
/// @return flag of enum QGeoServiceProvider__MappingFeature
///
int32_t q_geoserviceprovider_mapping_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#placesFeatures)
///
/// @param self QGeoServiceProvider*
///
/// @return flag of enum QGeoServiceProvider__PlacesFeature
///
int32_t q_geoserviceprovider_places_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#navigationFeatures)
///
/// @param self QGeoServiceProvider*
///
/// @return flag of enum QGeoServiceProvider__NavigationFeature
///
int32_t q_geoserviceprovider_navigation_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#geocodingManager)
///
/// @param self QGeoServiceProvider*
///
QGeoCodingManager* q_geoserviceprovider_geocoding_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#routingManager)
///
/// @param self QGeoServiceProvider*
///
QGeoRoutingManager* q_geoserviceprovider_routing_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#placeManager)
///
/// @param self QGeoServiceProvider*
///
QPlaceManager* q_geoserviceprovider_place_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#error)
///
/// @param self QGeoServiceProvider*
///
/// @return enum QGeoServiceProvider__Error
///
int32_t q_geoserviceprovider_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoServiceProvider*
///
const char* q_geoserviceprovider_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#mappingError)
///
/// @param self QGeoServiceProvider*
///
/// @return enum QGeoServiceProvider__Error
///
int32_t q_geoserviceprovider_mapping_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#mappingErrorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoServiceProvider*
///
const char* q_geoserviceprovider_mapping_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#geocodingError)
///
/// @param self QGeoServiceProvider*
///
/// @return enum QGeoServiceProvider__Error
///
int32_t q_geoserviceprovider_geocoding_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#geocodingErrorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoServiceProvider*
///
const char* q_geoserviceprovider_geocoding_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#routingError)
///
/// @param self QGeoServiceProvider*
///
/// @return enum QGeoServiceProvider__Error
///
int32_t q_geoserviceprovider_routing_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#routingErrorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoServiceProvider*
///
const char* q_geoserviceprovider_routing_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#placesError)
///
/// @param self QGeoServiceProvider*
///
/// @return enum QGeoServiceProvider__Error
///
int32_t q_geoserviceprovider_places_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#placesErrorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoServiceProvider*
///
const char* q_geoserviceprovider_places_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#navigationError)
///
/// @param self QGeoServiceProvider*
///
/// @return enum QGeoServiceProvider__Error
///
int32_t q_geoserviceprovider_navigation_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#navigationErrorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoServiceProvider*
///
const char* q_geoserviceprovider_navigation_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#setParameters)
///
/// @param self QGeoServiceProvider*
/// @param parameters libqt_map of const char* to QVariant*
///
void q_geoserviceprovider_set_parameters(void* self, libqt_map parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#setLocale)
///
/// @param self QGeoServiceProvider*
/// @param locale QLocale*
///
void q_geoserviceprovider_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#setAllowExperimental)
///
/// @param self QGeoServiceProvider*
/// @param allow bool
///
void q_geoserviceprovider_set_allow_experimental(void* self, bool allow);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_geoserviceprovider_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_geoserviceprovider_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoServiceProvider*
///
const char* q_geoserviceprovider_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoServiceProvider*
/// @param name char*
///
void q_geoserviceprovider_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGeoServiceProvider*
///
bool q_geoserviceprovider_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoServiceProvider*
///
bool q_geoserviceprovider_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoServiceProvider*
///
bool q_geoserviceprovider_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoServiceProvider*
///
bool q_geoserviceprovider_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoServiceProvider*
/// @param b bool
///
bool q_geoserviceprovider_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGeoServiceProvider*
///
QThread* q_geoserviceprovider_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoServiceProvider*
/// @param thread QThread*
///
bool q_geoserviceprovider_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoServiceProvider*
/// @param interval int
///
int32_t q_geoserviceprovider_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoServiceProvider*
/// @param time int64_t of nanoseconds
///
int32_t q_geoserviceprovider_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoServiceProvider*
/// @param id int
///
void q_geoserviceprovider_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoServiceProvider*
/// @param id enum Qt__TimerId
///
void q_geoserviceprovider_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGeoServiceProvider*
///
/// @return libqt_list of QObject*
///
libqt_list q_geoserviceprovider_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoServiceProvider*
/// @param parent QObject*
///
void q_geoserviceprovider_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoServiceProvider*
/// @param filterObj QObject*
///
void q_geoserviceprovider_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoServiceProvider*
/// @param obj QObject*
///
void q_geoserviceprovider_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_geoserviceprovider_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoServiceProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_geoserviceprovider_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_geoserviceprovider_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_geoserviceprovider_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoServiceProvider*
///
void q_geoserviceprovider_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoServiceProvider*
///
void q_geoserviceprovider_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoServiceProvider*
/// @param name const char*
/// @param value QVariant*
///
bool q_geoserviceprovider_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoServiceProvider*
/// @param name const char*
///
QVariant* q_geoserviceprovider_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoServiceProvider*
///
const char** q_geoserviceprovider_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoServiceProvider*
///
QBindingStorage* q_geoserviceprovider_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoServiceProvider*
///
const QBindingStorage* q_geoserviceprovider_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoServiceProvider*
///
void q_geoserviceprovider_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoServiceProvider*
/// @param callback void func(QGeoServiceProvider* self)
///
void q_geoserviceprovider_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGeoServiceProvider*
///
QObject* q_geoserviceprovider_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoServiceProvider*
/// @param classname const char*
///
bool q_geoserviceprovider_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoServiceProvider*
///
void q_geoserviceprovider_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoServiceProvider*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_geoserviceprovider_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoServiceProvider*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_geoserviceprovider_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_geoserviceprovider_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoServiceProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geoserviceprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoServiceProvider*
/// @param param1 QObject*
///
void q_geoserviceprovider_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoServiceProvider*
/// @param callback void func(QGeoServiceProvider* self, QObject* param1)
///
void q_geoserviceprovider_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param event QEvent*
///
bool q_geoserviceprovider_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param event QEvent*
///
bool q_geoserviceprovider_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback bool func(QGeoServiceProvider* self, QEvent* event)
///
void q_geoserviceprovider_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geoserviceprovider_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geoserviceprovider_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback bool func(QGeoServiceProvider* self, QObject* watched, QEvent* event)
///
void q_geoserviceprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param event QTimerEvent*
///
void q_geoserviceprovider_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param event QTimerEvent*
///
void q_geoserviceprovider_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback void func(QGeoServiceProvider* self, QTimerEvent* event)
///
void q_geoserviceprovider_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param event QChildEvent*
///
void q_geoserviceprovider_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param event QChildEvent*
///
void q_geoserviceprovider_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback void func(QGeoServiceProvider* self, QChildEvent* event)
///
void q_geoserviceprovider_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param event QEvent*
///
void q_geoserviceprovider_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param event QEvent*
///
void q_geoserviceprovider_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback void func(QGeoServiceProvider* self, QEvent* event)
///
void q_geoserviceprovider_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param signal QMetaMethod*
///
void q_geoserviceprovider_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param signal QMetaMethod*
///
void q_geoserviceprovider_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback void func(QGeoServiceProvider* self, QMetaMethod* signal)
///
void q_geoserviceprovider_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param signal QMetaMethod*
///
void q_geoserviceprovider_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param signal QMetaMethod*
///
void q_geoserviceprovider_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback void func(QGeoServiceProvider* self, QMetaMethod* signal)
///
void q_geoserviceprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
///
QObject* q_geoserviceprovider_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
///
QObject* q_geoserviceprovider_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback QObject* func()
///
void q_geoserviceprovider_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
///
int32_t q_geoserviceprovider_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
///
int32_t q_geoserviceprovider_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback int32_t func()
///
void q_geoserviceprovider_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param signal const char*
///
int32_t q_geoserviceprovider_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param signal const char*
///
int32_t q_geoserviceprovider_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback int32_t func(QGeoServiceProvider* self, const char* signal)
///
void q_geoserviceprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param signal QMetaMethod*
///
bool q_geoserviceprovider_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param signal QMetaMethod*
///
bool q_geoserviceprovider_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoServiceProvider*
/// @param callback bool func(QGeoServiceProvider* self, QMetaMethod* signal)
///
void q_geoserviceprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoServiceProvider*
/// @param callback void func(QGeoServiceProvider* self, const char* objectName)
///
void q_geoserviceprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#dtor.QGeoServiceProvider)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoServiceProvider*
///
void q_geoserviceprovider_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#public-types)

typedef enum {
    QGEOSERVICEPROVIDER_ERROR_NOERROR = 0,
    QGEOSERVICEPROVIDER_ERROR_NOTSUPPORTEDERROR = 1,
    QGEOSERVICEPROVIDER_ERROR_UNKNOWNPARAMETERERROR = 2,
    QGEOSERVICEPROVIDER_ERROR_MISSINGREQUIREDPARAMETERERROR = 3,
    QGEOSERVICEPROVIDER_ERROR_CONNECTIONERROR = 4,
    QGEOSERVICEPROVIDER_ERROR_LOADERERROR = 5
} QGeoServiceProvider__Error;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#public-types)

typedef enum {
    QGEOSERVICEPROVIDER_ROUTINGFEATURE_NOROUTINGFEATURES = 0,
    QGEOSERVICEPROVIDER_ROUTINGFEATURE_ONLINEROUTINGFEATURE = 1,
    QGEOSERVICEPROVIDER_ROUTINGFEATURE_OFFLINEROUTINGFEATURE = 2,
    QGEOSERVICEPROVIDER_ROUTINGFEATURE_LOCALIZEDROUTINGFEATURE = 4,
    QGEOSERVICEPROVIDER_ROUTINGFEATURE_ROUTEUPDATESFEATURE = 8,
    QGEOSERVICEPROVIDER_ROUTINGFEATURE_ALTERNATIVEROUTESFEATURE = 16,
    QGEOSERVICEPROVIDER_ROUTINGFEATURE_EXCLUDEAREASROUTINGFEATURE = 32,
    QGEOSERVICEPROVIDER_ROUTINGFEATURE_ANYROUTINGFEATURES = -1
} QGeoServiceProvider__RoutingFeature;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#public-types)

typedef enum {
    QGEOSERVICEPROVIDER_GEOCODINGFEATURE_NOGEOCODINGFEATURES = 0,
    QGEOSERVICEPROVIDER_GEOCODINGFEATURE_ONLINEGEOCODINGFEATURE = 1,
    QGEOSERVICEPROVIDER_GEOCODINGFEATURE_OFFLINEGEOCODINGFEATURE = 2,
    QGEOSERVICEPROVIDER_GEOCODINGFEATURE_REVERSEGEOCODINGFEATURE = 4,
    QGEOSERVICEPROVIDER_GEOCODINGFEATURE_LOCALIZEDGEOCODINGFEATURE = 8,
    QGEOSERVICEPROVIDER_GEOCODINGFEATURE_ANYGEOCODINGFEATURES = -1
} QGeoServiceProvider__GeocodingFeature;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#public-types)

typedef enum {
    QGEOSERVICEPROVIDER_MAPPINGFEATURE_NOMAPPINGFEATURES = 0,
    QGEOSERVICEPROVIDER_MAPPINGFEATURE_ONLINEMAPPINGFEATURE = 1,
    QGEOSERVICEPROVIDER_MAPPINGFEATURE_OFFLINEMAPPINGFEATURE = 2,
    QGEOSERVICEPROVIDER_MAPPINGFEATURE_LOCALIZEDMAPPINGFEATURE = 4,
    QGEOSERVICEPROVIDER_MAPPINGFEATURE_ANYMAPPINGFEATURES = -1
} QGeoServiceProvider__MappingFeature;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#public-types)

typedef enum {
    QGEOSERVICEPROVIDER_PLACESFEATURE_NOPLACESFEATURES = 0,
    QGEOSERVICEPROVIDER_PLACESFEATURE_ONLINEPLACESFEATURE = 1,
    QGEOSERVICEPROVIDER_PLACESFEATURE_OFFLINEPLACESFEATURE = 2,
    QGEOSERVICEPROVIDER_PLACESFEATURE_SAVEPLACEFEATURE = 4,
    QGEOSERVICEPROVIDER_PLACESFEATURE_REMOVEPLACEFEATURE = 8,
    QGEOSERVICEPROVIDER_PLACESFEATURE_SAVECATEGORYFEATURE = 16,
    QGEOSERVICEPROVIDER_PLACESFEATURE_REMOVECATEGORYFEATURE = 32,
    QGEOSERVICEPROVIDER_PLACESFEATURE_PLACERECOMMENDATIONSFEATURE = 64,
    QGEOSERVICEPROVIDER_PLACESFEATURE_SEARCHSUGGESTIONSFEATURE = 128,
    QGEOSERVICEPROVIDER_PLACESFEATURE_LOCALIZEDPLACESFEATURE = 256,
    QGEOSERVICEPROVIDER_PLACESFEATURE_NOTIFICATIONSFEATURE = 512,
    QGEOSERVICEPROVIDER_PLACESFEATURE_PLACEMATCHINGFEATURE = 1024,
    QGEOSERVICEPROVIDER_PLACESFEATURE_ANYPLACESFEATURES = -1
} QGeoServiceProvider__PlacesFeature;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceprovider.html#public-types)

typedef enum {
    QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_NONAVIGATIONFEATURES = 0,
    QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_ONLINENAVIGATIONFEATURE = 1,
    QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_OFFLINENAVIGATIONFEATURE = 2,
    QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_ANYNAVIGATIONFEATURES = -1
} QGeoServiceProvider__NavigationFeature;

#endif
