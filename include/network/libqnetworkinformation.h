#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKINFORMATION_H
#define SRC_NETWORK_QT6C_LIBQNETWORKINFORMATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QNetworkInformation*
///
const QMetaObject* q_networkinformation_meta_object(void* self);

/// @param self QNetworkInformation*
/// @param param1 const char*
///
void* q_networkinformation_metacast(void* self, const char* param1);

/// @param self QNetworkInformation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_networkinformation_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_networkinformation_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#reachability)
///
/// @param self QNetworkInformation*
///
/// @return enum QNetworkInformation__Reachability
///
int32_t q_networkinformation_reachability(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#isBehindCaptivePortal)
///
/// @param self QNetworkInformation*
///
bool q_networkinformation_is_behind_captive_portal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#transportMedium)
///
/// @param self QNetworkInformation*
///
/// @return enum QNetworkInformation__TransportMedium
///
int32_t q_networkinformation_transport_medium(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#isMetered)
///
/// @param self QNetworkInformation*
///
bool q_networkinformation_is_metered(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#backendName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkInformation*
///
const char* q_networkinformation_backend_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#supports)
///
/// @param self QNetworkInformation*
/// @param features flag of enum QNetworkInformation__Feature
///
bool q_networkinformation_supports(void* self, int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#supportedFeatures)
///
/// @param self QNetworkInformation*
///
/// @return flag of enum QNetworkInformation__Feature
///
int32_t q_networkinformation_supported_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#loadDefaultBackend)
///
bool q_networkinformation_load_default_backend();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#loadBackendByFeatures)
///
/// @param features flag of enum QNetworkInformation__Feature
///
bool q_networkinformation_load_backend_by_features(int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#load)
///
/// @param features flag of enum QNetworkInformation__Feature
///
bool q_networkinformation_load2(int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#availableBackends)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_networkinformation_available_backends();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#instance)
///
QNetworkInformation* q_networkinformation_instance();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#reachabilityChanged)
///
/// @param self QNetworkInformation*
/// @param newReachability enum QNetworkInformation__Reachability
///
void q_networkinformation_reachability_changed(void* self, int32_t newReachability);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#reachabilityChanged)
///
/// @param self QNetworkInformation*
/// @param callback void func(QNetworkInformation* self, enum QNetworkInformation__Reachability newReachability)
///
void q_networkinformation_on_reachability_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#isBehindCaptivePortalChanged)
///
/// @param self QNetworkInformation*
/// @param state bool
///
void q_networkinformation_is_behind_captive_portal_changed(void* self, bool state);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#isBehindCaptivePortalChanged)
///
/// @param self QNetworkInformation*
/// @param callback void func(QNetworkInformation* self, bool state)
///
void q_networkinformation_on_is_behind_captive_portal_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#transportMediumChanged)
///
/// @param self QNetworkInformation*
/// @param current enum QNetworkInformation__TransportMedium
///
void q_networkinformation_transport_medium_changed(void* self, int32_t current);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#transportMediumChanged)
///
/// @param self QNetworkInformation*
/// @param callback void func(QNetworkInformation* self, enum QNetworkInformation__TransportMedium current)
///
void q_networkinformation_on_transport_medium_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#isMeteredChanged)
///
/// @param self QNetworkInformation*
/// @param isMetered bool
///
void q_networkinformation_is_metered_changed(void* self, bool isMetered);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#isMeteredChanged)
///
/// @param self QNetworkInformation*
/// @param callback void func(QNetworkInformation* self, bool isMetered)
///
void q_networkinformation_on_is_metered_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_networkinformation_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_networkinformation_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QNetworkInformation*
/// @param event QEvent*
///
bool q_networkinformation_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QNetworkInformation*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_networkinformation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkInformation*
///
const char* q_networkinformation_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QNetworkInformation*
/// @param name char*
///
void q_networkinformation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QNetworkInformation*
///
bool q_networkinformation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QNetworkInformation*
///
bool q_networkinformation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QNetworkInformation*
///
bool q_networkinformation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QNetworkInformation*
///
bool q_networkinformation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QNetworkInformation*
/// @param b bool
///
bool q_networkinformation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QNetworkInformation*
///
QThread* q_networkinformation_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNetworkInformation*
/// @param thread QThread*
///
bool q_networkinformation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkInformation*
/// @param interval int
///
int32_t q_networkinformation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkInformation*
/// @param time int64_t of nanoseconds
///
int32_t q_networkinformation_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkInformation*
/// @param id int
///
void q_networkinformation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkInformation*
/// @param id enum Qt__TimerId
///
void q_networkinformation_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QNetworkInformation*
///
/// @return libqt_list of QObject*
///
libqt_list q_networkinformation_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QNetworkInformation*
/// @param parent QObject*
///
void q_networkinformation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QNetworkInformation*
/// @param filterObj QObject*
///
void q_networkinformation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QNetworkInformation*
/// @param obj QObject*
///
void q_networkinformation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_networkinformation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkInformation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_networkinformation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_networkinformation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_networkinformation_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QNetworkInformation*
///
void q_networkinformation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QNetworkInformation*
///
void q_networkinformation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QNetworkInformation*
/// @param name const char*
/// @param value QVariant*
///
bool q_networkinformation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QNetworkInformation*
/// @param name const char*
///
QVariant* q_networkinformation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkInformation*
///
const char** q_networkinformation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkInformation*
///
QBindingStorage* q_networkinformation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkInformation*
///
const QBindingStorage* q_networkinformation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkInformation*
///
void q_networkinformation_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkInformation*
/// @param callback void func(QNetworkInformation* self)
///
void q_networkinformation_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QNetworkInformation*
///
QObject* q_networkinformation_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QNetworkInformation*
/// @param classname const char*
///
bool q_networkinformation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QNetworkInformation*
///
void q_networkinformation_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNetworkInformation*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_networkinformation_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkInformation*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_networkinformation_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkInformation*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_networkinformation_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_networkinformation_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkInformation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_networkinformation_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkInformation*
/// @param param1 QObject*
///
void q_networkinformation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkInformation*
/// @param callback void func(QNetworkInformation* self, QObject* param1)
///
void q_networkinformation_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QNetworkInformation*
/// @param callback void func(QNetworkInformation* self, const char* objectName)
///
void q_networkinformation_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#public-types)

typedef enum {
    QNETWORKINFORMATION_REACHABILITY_UNKNOWN = 0,
    QNETWORKINFORMATION_REACHABILITY_DISCONNECTED = 1,
    QNETWORKINFORMATION_REACHABILITY_LOCAL = 2,
    QNETWORKINFORMATION_REACHABILITY_SITE = 3,
    QNETWORKINFORMATION_REACHABILITY_ONLINE = 4
} QNetworkInformation__Reachability;

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#public-types)

typedef enum {
    QNETWORKINFORMATION_TRANSPORTMEDIUM_UNKNOWN = 0,
    QNETWORKINFORMATION_TRANSPORTMEDIUM_ETHERNET = 1,
    QNETWORKINFORMATION_TRANSPORTMEDIUM_CELLULAR = 2,
    QNETWORKINFORMATION_TRANSPORTMEDIUM_WIFI = 3,
    QNETWORKINFORMATION_TRANSPORTMEDIUM_BLUETOOTH = 4
} QNetworkInformation__TransportMedium;

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinformation.html#public-types)

typedef enum {
    QNETWORKINFORMATION_FEATURE_REACHABILITY = 1,
    QNETWORKINFORMATION_FEATURE_CAPTIVEPORTAL = 2,
    QNETWORKINFORMATION_FEATURE_TRANSPORTMEDIUM = 4,
    QNETWORKINFORMATION_FEATURE_METERED = 8
} QNetworkInformation__Feature;

#endif
