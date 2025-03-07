#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKINFORMATION_H
#define SRC_NETWORKQT6C_LIBQNETWORKINFORMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QMetaObject* q_networkinformation_meta_object(void* self);
void* q_networkinformation_metacast(void* self, const char* param1);
int32_t q_networkinformation_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_networkinformation_tr(const char* s);
int64_t q_networkinformation_reachability(void* self);
bool q_networkinformation_is_behind_captive_portal(void* self);
int64_t q_networkinformation_transport_medium(void* self);
bool q_networkinformation_is_metered(void* self);
const char* q_networkinformation_backend_name(void* self);
bool q_networkinformation_supports(void* self, int64_t features);
int64_t q_networkinformation_supported_features(void* self);
bool q_networkinformation_load_default_backend();
bool q_networkinformation_load_backend_by_features(int64_t features);
bool q_networkinformation_load_with_features(int64_t features);
const char** q_networkinformation_available_backends();
QNetworkInformation* q_networkinformation_instance();
void q_networkinformation_reachability_changed(void* self, int64_t newReachability);
void q_networkinformation_on_reachability_changed(void* self, void (*slot)(void*, int64_t));
void q_networkinformation_is_behind_captive_portal_changed(void* self, bool state);
void q_networkinformation_on_is_behind_captive_portal_changed(void* self, void (*slot)(void*, bool));
void q_networkinformation_transport_medium_changed(void* self, int64_t current);
void q_networkinformation_on_transport_medium_changed(void* self, void (*slot)(void*, int64_t));
void q_networkinformation_is_metered_changed(void* self, bool isMetered);
void q_networkinformation_on_is_metered_changed(void* self, void (*slot)(void*, bool));
const char* q_networkinformation_tr2(const char* s, const char* c);
const char* q_networkinformation_tr3(const char* s, const char* c, int n);
bool q_networkinformation_event(void* self, void* event);
bool q_networkinformation_event_filter(void* self, void* watched, void* event);
const char* q_networkinformation_object_name(void* self);
void q_networkinformation_set_object_name(void* self, const char* name);
bool q_networkinformation_is_widget_type(void* self);
bool q_networkinformation_is_window_type(void* self);
bool q_networkinformation_is_quick_item_type(void* self);
bool q_networkinformation_signals_blocked(void* self);
bool q_networkinformation_block_signals(void* self, bool b);
QThread* q_networkinformation_thread(void* self);
void q_networkinformation_move_to_thread(void* self, void* thread);
int32_t q_networkinformation_start_timer(void* self, int interval);
void q_networkinformation_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_networkinformation_children(void* self);
void q_networkinformation_set_parent(void* self, void* parent);
void q_networkinformation_install_event_filter(void* self, void* filterObj);
void q_networkinformation_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_networkinformation_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_networkinformation_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_networkinformation_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_networkinformation_disconnect_with_q_meta_object_connection(void* param1);
void q_networkinformation_dump_object_tree(void* self);
void q_networkinformation_dump_object_info(void* self);
bool q_networkinformation_set_property(void* self, const char* name, void* value);
QVariant* q_networkinformation_property(void* self, const char* name);
const char** q_networkinformation_dynamic_property_names(void* self);
QBindingStorage* q_networkinformation_binding_storage(void* self);
QBindingStorage* q_networkinformation_binding_storage2(void* self);
void q_networkinformation_destroyed(void* self);
void q_networkinformation_on_destroyed(void* self, void (*slot)(void*));
QObject* q_networkinformation_parent(void* self);
bool q_networkinformation_inherits(void* self, const char* classname);
void q_networkinformation_delete_later(void* self);
int32_t q_networkinformation_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_networkinformation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_networkinformation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_networkinformation_destroyed1(void* self, void* param1);
void q_networkinformation_on_destroyed1(void* self, void (*slot)(void*, void*));

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
