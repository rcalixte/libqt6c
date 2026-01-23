#include "../libqcoreevent.hpp"
#include "libqgeocodingmanager.hpp"
#include "libqgeoroutingmanager.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplacemanager.hpp"
#include "../libqvariant.hpp"
#include "libqgeoserviceprovider.hpp"
#include "libqgeoserviceprovider.h"

QGeoServiceProvider* q_geoserviceprovider_new(const char* providerName) {
    return QGeoServiceProvider_new(qstring(providerName));
}

QGeoServiceProvider* q_geoserviceprovider_new2(const char* providerName, libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geoserviceprovider_new2\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geoserviceprovider_new2\n");
        abort();
    }
    const char** parameters_karr = (const char**)parameters.keys;
    libqt_string* parameters_kdest = (libqt_string*)parameters_ret.keys;
    QVariant** parameters_varr = (QVariant**)parameters.values;
    QVariant** parameters_vdest = (QVariant**)parameters_ret.values;
    for (size_t i = 0; i < parameters_ret.len; ++i) {
        parameters_kdest[i] = qstring(parameters_karr[i]);
        parameters_vdest[i] = parameters_varr[i];
    }

    QGeoServiceProvider* _out = QGeoServiceProvider_new2(qstring(providerName), parameters_ret);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

QGeoServiceProvider* q_geoserviceprovider_new3(const char* providerName, libqt_map /* of const char* to QVariant* */ parameters, bool allowExperimental) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geoserviceprovider_new3\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geoserviceprovider_new3\n");
        abort();
    }
    const char** parameters_karr = (const char**)parameters.keys;
    libqt_string* parameters_kdest = (libqt_string*)parameters_ret.keys;
    QVariant** parameters_varr = (QVariant**)parameters.values;
    QVariant** parameters_vdest = (QVariant**)parameters_ret.values;
    for (size_t i = 0; i < parameters_ret.len; ++i) {
        parameters_kdest[i] = qstring(parameters_karr[i]);
        parameters_vdest[i] = parameters_varr[i];
    }

    QGeoServiceProvider* _out = QGeoServiceProvider_new3(qstring(providerName), parameters_ret, allowExperimental);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

const QMetaObject* q_geoserviceprovider_meta_object(void* self) {
    return QGeoServiceProvider_MetaObject((QGeoServiceProvider*)self);
}

void* q_geoserviceprovider_metacast(void* self, const char* param1) {
    return QGeoServiceProvider_Metacast((QGeoServiceProvider*)self, param1);
}

int32_t q_geoserviceprovider_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoServiceProvider_Metacall((QGeoServiceProvider*)self, param1, param2, param3);
}

void q_geoserviceprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGeoServiceProvider_OnMetacall((QGeoServiceProvider*)self, (intptr_t)callback);
}

int32_t q_geoserviceprovider_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoServiceProvider_QBaseMetacall((QGeoServiceProvider*)self, param1, param2, param3);
}

const char* q_geoserviceprovider_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_geoserviceprovider_available_service_providers() {
    libqt_list _arr = QGeoServiceProvider_AvailableServiceProviders();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geoserviceprovider_available_service_providers\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

int32_t q_geoserviceprovider_routing_features(void* self) {
    return QGeoServiceProvider_RoutingFeatures((QGeoServiceProvider*)self);
}

int32_t q_geoserviceprovider_geocoding_features(void* self) {
    return QGeoServiceProvider_GeocodingFeatures((QGeoServiceProvider*)self);
}

int32_t q_geoserviceprovider_mapping_features(void* self) {
    return QGeoServiceProvider_MappingFeatures((QGeoServiceProvider*)self);
}

int32_t q_geoserviceprovider_places_features(void* self) {
    return QGeoServiceProvider_PlacesFeatures((QGeoServiceProvider*)self);
}

int32_t q_geoserviceprovider_navigation_features(void* self) {
    return QGeoServiceProvider_NavigationFeatures((QGeoServiceProvider*)self);
}

QGeoCodingManager* q_geoserviceprovider_geocoding_manager(void* self) {
    return QGeoServiceProvider_GeocodingManager((QGeoServiceProvider*)self);
}

QGeoRoutingManager* q_geoserviceprovider_routing_manager(void* self) {
    return QGeoServiceProvider_RoutingManager((QGeoServiceProvider*)self);
}

QPlaceManager* q_geoserviceprovider_place_manager(void* self) {
    return QGeoServiceProvider_PlaceManager((QGeoServiceProvider*)self);
}

int32_t q_geoserviceprovider_error(void* self) {
    return QGeoServiceProvider_Error((QGeoServiceProvider*)self);
}

const char* q_geoserviceprovider_error_string(void* self) {
    libqt_string _str = QGeoServiceProvider_ErrorString((QGeoServiceProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_geoserviceprovider_mapping_error(void* self) {
    return QGeoServiceProvider_MappingError((QGeoServiceProvider*)self);
}

const char* q_geoserviceprovider_mapping_error_string(void* self) {
    libqt_string _str = QGeoServiceProvider_MappingErrorString((QGeoServiceProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_geoserviceprovider_geocoding_error(void* self) {
    return QGeoServiceProvider_GeocodingError((QGeoServiceProvider*)self);
}

const char* q_geoserviceprovider_geocoding_error_string(void* self) {
    libqt_string _str = QGeoServiceProvider_GeocodingErrorString((QGeoServiceProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_geoserviceprovider_routing_error(void* self) {
    return QGeoServiceProvider_RoutingError((QGeoServiceProvider*)self);
}

const char* q_geoserviceprovider_routing_error_string(void* self) {
    libqt_string _str = QGeoServiceProvider_RoutingErrorString((QGeoServiceProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_geoserviceprovider_places_error(void* self) {
    return QGeoServiceProvider_PlacesError((QGeoServiceProvider*)self);
}

const char* q_geoserviceprovider_places_error_string(void* self) {
    libqt_string _str = QGeoServiceProvider_PlacesErrorString((QGeoServiceProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_geoserviceprovider_navigation_error(void* self) {
    return QGeoServiceProvider_NavigationError((QGeoServiceProvider*)self);
}

const char* q_geoserviceprovider_navigation_error_string(void* self) {
    libqt_string _str = QGeoServiceProvider_NavigationErrorString((QGeoServiceProvider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoserviceprovider_set_parameters(void* self, libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geoserviceprovider_set_parameters\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geoserviceprovider_set_parameters\n");
        abort();
    }
    const char** parameters_karr = (const char**)parameters.keys;
    libqt_string* parameters_kdest = (libqt_string*)parameters_ret.keys;
    QVariant** parameters_varr = (QVariant**)parameters.values;
    QVariant** parameters_vdest = (QVariant**)parameters_ret.values;
    for (size_t i = 0; i < parameters_ret.len; ++i) {
        parameters_kdest[i] = qstring(parameters_karr[i]);
        parameters_vdest[i] = parameters_varr[i];
    }
    QGeoServiceProvider_SetParameters((QGeoServiceProvider*)self, parameters_ret);
    free(parameters_ret.keys);
    free(parameters_ret.values);
}

void q_geoserviceprovider_set_locale(void* self, void* locale) {
    QGeoServiceProvider_SetLocale((QGeoServiceProvider*)self, (QLocale*)locale);
}

void q_geoserviceprovider_set_allow_experimental(void* self, bool allow) {
    QGeoServiceProvider_SetAllowExperimental((QGeoServiceProvider*)self, allow);
}

const char* q_geoserviceprovider_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geoserviceprovider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geoserviceprovider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoserviceprovider_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_geoserviceprovider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_geoserviceprovider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_geoserviceprovider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_geoserviceprovider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_geoserviceprovider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_geoserviceprovider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_geoserviceprovider_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_geoserviceprovider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_geoserviceprovider_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_geoserviceprovider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_geoserviceprovider_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_geoserviceprovider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_geoserviceprovider_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_geoserviceprovider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_geoserviceprovider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_geoserviceprovider_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_geoserviceprovider_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_geoserviceprovider_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_geoserviceprovider_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_geoserviceprovider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_geoserviceprovider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_geoserviceprovider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_geoserviceprovider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_geoserviceprovider_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geoserviceprovider_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_geoserviceprovider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_geoserviceprovider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_geoserviceprovider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_geoserviceprovider_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_geoserviceprovider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_geoserviceprovider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_geoserviceprovider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_geoserviceprovider_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_geoserviceprovider_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_geoserviceprovider_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_geoserviceprovider_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_geoserviceprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_geoserviceprovider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_geoserviceprovider_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_geoserviceprovider_event(void* self, void* event) {
    return QGeoServiceProvider_Event((QGeoServiceProvider*)self, (QEvent*)event);
}

bool q_geoserviceprovider_qbase_event(void* self, void* event) {
    return QGeoServiceProvider_QBaseEvent((QGeoServiceProvider*)self, (QEvent*)event);
}

void q_geoserviceprovider_on_event(void* self, bool (*callback)(void*, void*)) {
    QGeoServiceProvider_OnEvent((QGeoServiceProvider*)self, (intptr_t)callback);
}

bool q_geoserviceprovider_event_filter(void* self, void* watched, void* event) {
    return QGeoServiceProvider_EventFilter((QGeoServiceProvider*)self, (QObject*)watched, (QEvent*)event);
}

bool q_geoserviceprovider_qbase_event_filter(void* self, void* watched, void* event) {
    return QGeoServiceProvider_QBaseEventFilter((QGeoServiceProvider*)self, (QObject*)watched, (QEvent*)event);
}

void q_geoserviceprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGeoServiceProvider_OnEventFilter((QGeoServiceProvider*)self, (intptr_t)callback);
}

void q_geoserviceprovider_timer_event(void* self, void* event) {
    QGeoServiceProvider_TimerEvent((QGeoServiceProvider*)self, (QTimerEvent*)event);
}

void q_geoserviceprovider_qbase_timer_event(void* self, void* event) {
    QGeoServiceProvider_QBaseTimerEvent((QGeoServiceProvider*)self, (QTimerEvent*)event);
}

void q_geoserviceprovider_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGeoServiceProvider_OnTimerEvent((QGeoServiceProvider*)self, (intptr_t)callback);
}

void q_geoserviceprovider_child_event(void* self, void* event) {
    QGeoServiceProvider_ChildEvent((QGeoServiceProvider*)self, (QChildEvent*)event);
}

void q_geoserviceprovider_qbase_child_event(void* self, void* event) {
    QGeoServiceProvider_QBaseChildEvent((QGeoServiceProvider*)self, (QChildEvent*)event);
}

void q_geoserviceprovider_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGeoServiceProvider_OnChildEvent((QGeoServiceProvider*)self, (intptr_t)callback);
}

void q_geoserviceprovider_custom_event(void* self, void* event) {
    QGeoServiceProvider_CustomEvent((QGeoServiceProvider*)self, (QEvent*)event);
}

void q_geoserviceprovider_qbase_custom_event(void* self, void* event) {
    QGeoServiceProvider_QBaseCustomEvent((QGeoServiceProvider*)self, (QEvent*)event);
}

void q_geoserviceprovider_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGeoServiceProvider_OnCustomEvent((QGeoServiceProvider*)self, (intptr_t)callback);
}

void q_geoserviceprovider_connect_notify(void* self, void* signal) {
    QGeoServiceProvider_ConnectNotify((QGeoServiceProvider*)self, (QMetaMethod*)signal);
}

void q_geoserviceprovider_qbase_connect_notify(void* self, void* signal) {
    QGeoServiceProvider_QBaseConnectNotify((QGeoServiceProvider*)self, (QMetaMethod*)signal);
}

void q_geoserviceprovider_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoServiceProvider_OnConnectNotify((QGeoServiceProvider*)self, (intptr_t)callback);
}

void q_geoserviceprovider_disconnect_notify(void* self, void* signal) {
    QGeoServiceProvider_DisconnectNotify((QGeoServiceProvider*)self, (QMetaMethod*)signal);
}

void q_geoserviceprovider_qbase_disconnect_notify(void* self, void* signal) {
    QGeoServiceProvider_QBaseDisconnectNotify((QGeoServiceProvider*)self, (QMetaMethod*)signal);
}

void q_geoserviceprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoServiceProvider_OnDisconnectNotify((QGeoServiceProvider*)self, (intptr_t)callback);
}

QObject* q_geoserviceprovider_sender(void* self) {
    return QGeoServiceProvider_Sender((QGeoServiceProvider*)self);
}

QObject* q_geoserviceprovider_qbase_sender(void* self) {
    return QGeoServiceProvider_QBaseSender((QGeoServiceProvider*)self);
}

void q_geoserviceprovider_on_sender(void* self, QObject* (*callback)()) {
    QGeoServiceProvider_OnSender((QGeoServiceProvider*)self, (intptr_t)callback);
}

int32_t q_geoserviceprovider_sender_signal_index(void* self) {
    return QGeoServiceProvider_SenderSignalIndex((QGeoServiceProvider*)self);
}

int32_t q_geoserviceprovider_qbase_sender_signal_index(void* self) {
    return QGeoServiceProvider_QBaseSenderSignalIndex((QGeoServiceProvider*)self);
}

void q_geoserviceprovider_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGeoServiceProvider_OnSenderSignalIndex((QGeoServiceProvider*)self, (intptr_t)callback);
}

int32_t q_geoserviceprovider_receivers(void* self, const char* signal) {
    return QGeoServiceProvider_Receivers((QGeoServiceProvider*)self, signal);
}

int32_t q_geoserviceprovider_qbase_receivers(void* self, const char* signal) {
    return QGeoServiceProvider_QBaseReceivers((QGeoServiceProvider*)self, signal);
}

void q_geoserviceprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGeoServiceProvider_OnReceivers((QGeoServiceProvider*)self, (intptr_t)callback);
}

bool q_geoserviceprovider_is_signal_connected(void* self, void* signal) {
    return QGeoServiceProvider_IsSignalConnected((QGeoServiceProvider*)self, (QMetaMethod*)signal);
}

bool q_geoserviceprovider_qbase_is_signal_connected(void* self, void* signal) {
    return QGeoServiceProvider_QBaseIsSignalConnected((QGeoServiceProvider*)self, (QMetaMethod*)signal);
}

void q_geoserviceprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGeoServiceProvider_OnIsSignalConnected((QGeoServiceProvider*)self, (intptr_t)callback);
}

void q_geoserviceprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_geoserviceprovider_delete(void* self) {
    QGeoServiceProvider_Delete((QGeoServiceProvider*)(self));
}
