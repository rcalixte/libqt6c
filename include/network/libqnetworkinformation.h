#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKINFORMATION_H
#define SRC_NETWORKQT6C_LIBQNETWORKINFORMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkinformation.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QNetworkInformation* self ```
const QMetaObject* q_networkinformation_meta_object(void* self);

/// ``` QNetworkInformation* self, const char* param1 ```
void* q_networkinformation_metacast(void* self, const char* param1);

/// ``` QNetworkInformation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkinformation_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_networkinformation_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#reachability)
///
/// ``` QNetworkInformation* self ```
int64_t q_networkinformation_reachability(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isBehindCaptivePortal)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_behind_captive_portal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#transportMedium)
///
/// ``` QNetworkInformation* self ```
int64_t q_networkinformation_transport_medium(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isMetered)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_metered(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#backendName)
///
/// ``` QNetworkInformation* self ```
const char* q_networkinformation_backend_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#supports)
///
/// ``` QNetworkInformation* self, int features ```
bool q_networkinformation_supports(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#supportedFeatures)
///
/// ``` QNetworkInformation* self ```
int64_t q_networkinformation_supported_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#loadDefaultBackend)
///
///
bool q_networkinformation_load_default_backend();

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#loadBackendByFeatures)
///
/// ``` int features ```
bool q_networkinformation_load_backend_by_features(int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#load)
///
/// ``` int features ```
bool q_networkinformation_load2(int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#availableBackends)
///
///
const char** q_networkinformation_available_backends();

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#instance)
///
///
QNetworkInformation* q_networkinformation_instance();

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#reachabilityChanged)
///
/// ``` QNetworkInformation* self, enum QNetworkInformation__Reachability newReachability ```
void q_networkinformation_reachability_changed(void* self, int64_t newReachability);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#reachabilityChanged)
///
/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, enum QNetworkInformation__Reachability) ```
void q_networkinformation_on_reachability_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isBehindCaptivePortalChanged)
///
/// ``` QNetworkInformation* self, bool state ```
void q_networkinformation_is_behind_captive_portal_changed(void* self, bool state);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isBehindCaptivePortalChanged)
///
/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, bool) ```
void q_networkinformation_on_is_behind_captive_portal_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#transportMediumChanged)
///
/// ``` QNetworkInformation* self, enum QNetworkInformation__TransportMedium current ```
void q_networkinformation_transport_medium_changed(void* self, int64_t current);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#transportMediumChanged)
///
/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, enum QNetworkInformation__TransportMedium) ```
void q_networkinformation_on_transport_medium_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isMeteredChanged)
///
/// ``` QNetworkInformation* self, bool isMetered ```
void q_networkinformation_is_metered_changed(void* self, bool isMetered);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isMeteredChanged)
///
/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, bool) ```
void q_networkinformation_on_is_metered_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_networkinformation_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_networkinformation_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QNetworkInformation* self, QEvent* event ```
bool q_networkinformation_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QNetworkInformation* self, QObject* watched, QEvent* event ```
bool q_networkinformation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QNetworkInformation* self ```
const char* q_networkinformation_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QNetworkInformation* self, char* name ```
void q_networkinformation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QNetworkInformation* self, bool b ```
bool q_networkinformation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QNetworkInformation* self ```
QThread* q_networkinformation_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkInformation* self, QThread* thread ```
bool q_networkinformation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkInformation* self, int interval ```
int32_t q_networkinformation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkInformation* self, int id ```
void q_networkinformation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkInformation* self, enum Qt__TimerId id ```
void q_networkinformation_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QNetworkInformation* self ```
libqt_list /* of QObject* */ q_networkinformation_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QNetworkInformation* self, QObject* parent ```
void q_networkinformation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QNetworkInformation* self, QObject* filterObj ```
void q_networkinformation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QNetworkInformation* self, QObject* obj ```
void q_networkinformation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_networkinformation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkInformation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_networkinformation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_networkinformation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_networkinformation_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QNetworkInformation* self ```
void q_networkinformation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QNetworkInformation* self ```
void q_networkinformation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QNetworkInformation* self, const char* name, QVariant* value ```
bool q_networkinformation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QNetworkInformation* self, const char* name ```
QVariant* q_networkinformation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QNetworkInformation* self ```
const char** q_networkinformation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkInformation* self ```
QBindingStorage* q_networkinformation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkInformation* self ```
const QBindingStorage* q_networkinformation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkInformation* self ```
void q_networkinformation_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*) ```
void q_networkinformation_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QNetworkInformation* self ```
QObject* q_networkinformation_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QNetworkInformation* self, const char* classname ```
bool q_networkinformation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QNetworkInformation* self ```
void q_networkinformation_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkInformation* self, QThread* thread, Disambiguated_t* param2 ```
bool q_networkinformation_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkInformation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_networkinformation_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkinformation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkInformation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkinformation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkInformation* self, QObject* param1 ```
void q_networkinformation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, QObject*) ```
void q_networkinformation_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, const char*) ```
void q_networkinformation_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// https://doc.qt.io/qt-6/qnetworkinformation.html#types

typedef enum {
    QNETWORKINFORMATION_REACHABILITY_UNKNOWN = 0,
    QNETWORKINFORMATION_REACHABILITY_DISCONNECTED = 1,
    QNETWORKINFORMATION_REACHABILITY_LOCAL = 2,
    QNETWORKINFORMATION_REACHABILITY_SITE = 3,
    QNETWORKINFORMATION_REACHABILITY_ONLINE = 4
} QNetworkInformation__Reachability;

typedef enum {
    QNETWORKINFORMATION_TRANSPORTMEDIUM_UNKNOWN = 0,
    QNETWORKINFORMATION_TRANSPORTMEDIUM_ETHERNET = 1,
    QNETWORKINFORMATION_TRANSPORTMEDIUM_CELLULAR = 2,
    QNETWORKINFORMATION_TRANSPORTMEDIUM_WIFI = 3,
    QNETWORKINFORMATION_TRANSPORTMEDIUM_BLUETOOTH = 4
} QNetworkInformation__TransportMedium;

typedef enum {
    QNETWORKINFORMATION_FEATURE_REACHABILITY = 1,
    QNETWORKINFORMATION_FEATURE_CAPTIVEPORTAL = 2,
    QNETWORKINFORMATION_FEATURE_TRANSPORTMEDIUM = 4,
    QNETWORKINFORMATION_FEATURE_METERED = 8
} QNetworkInformation__Feature;

#endif
