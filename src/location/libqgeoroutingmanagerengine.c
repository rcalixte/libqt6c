#include "../libqcoreevent.hpp"
#include "libqgeoroute.hpp"
#include "libqgeoroutereply.hpp"
#include "libqgeorouterequest.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqgeoroutingmanagerengine.hpp"
#include "libqgeoroutingmanagerengine.h"

QGeoRoutingManagerEngine* q_georoutingmanagerengine_new(libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    parameters_ret.values = malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
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

    QGeoRoutingManagerEngine* _out = QGeoRoutingManagerEngine_new(parameters_ret);
    libqt_free(parameters_ret.keys);
    libqt_free(parameters_ret.values);
    return _out;
}

QGeoRoutingManagerEngine* q_georoutingmanagerengine_new2(libqt_map /* of const char* to QVariant* */ parameters, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    parameters_ret.values = malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
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

    QGeoRoutingManagerEngine* _out = QGeoRoutingManagerEngine_new2(parameters_ret, (QObject*)parent);
    libqt_free(parameters_ret.keys);
    libqt_free(parameters_ret.values);
    return _out;
}

const QMetaObject* q_georoutingmanagerengine_meta_object(void* self) {
    return QGeoRoutingManagerEngine_MetaObject((QGeoRoutingManagerEngine*)self);
}

void* q_georoutingmanagerengine_metacast(void* self, const char* param1) {
    return QGeoRoutingManagerEngine_Metacast((QGeoRoutingManagerEngine*)self, param1);
}

int32_t q_georoutingmanagerengine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoRoutingManagerEngine_Metacall((QGeoRoutingManagerEngine*)self, param1, param2, param3);
}

void q_georoutingmanagerengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGeoRoutingManagerEngine_OnMetacall((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

int32_t q_georoutingmanagerengine_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoRoutingManagerEngine_QBaseMetacall((QGeoRoutingManagerEngine*)self, param1, param2, param3);
}

const char* q_georoutingmanagerengine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_georoutingmanagerengine_manager_name(void* self) {
    libqt_string _str = QGeoRoutingManagerEngine_ManagerName((QGeoRoutingManagerEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_georoutingmanagerengine_manager_version(void* self) {
    return QGeoRoutingManagerEngine_ManagerVersion((QGeoRoutingManagerEngine*)self);
}

QGeoRouteReply* q_georoutingmanagerengine_calculate_route(void* self, void* request) {
    return QGeoRoutingManagerEngine_CalculateRoute((QGeoRoutingManagerEngine*)self, (QGeoRouteRequest*)request);
}

void q_georoutingmanagerengine_on_calculate_route(void* self, QGeoRouteReply* (*callback)(void*, void*)) {
    QGeoRoutingManagerEngine_OnCalculateRoute((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

QGeoRouteReply* q_georoutingmanagerengine_qbase_calculate_route(void* self, void* request) {
    return QGeoRoutingManagerEngine_QBaseCalculateRoute((QGeoRoutingManagerEngine*)self, (QGeoRouteRequest*)request);
}

QGeoRouteReply* q_georoutingmanagerengine_update_route(void* self, void* route, void* position) {
    return QGeoRoutingManagerEngine_UpdateRoute((QGeoRoutingManagerEngine*)self, (QGeoRoute*)route, (QGeoCoordinate*)position);
}

void q_georoutingmanagerengine_on_update_route(void* self, QGeoRouteReply* (*callback)(void*, void*, void*)) {
    QGeoRoutingManagerEngine_OnUpdateRoute((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

QGeoRouteReply* q_georoutingmanagerengine_qbase_update_route(void* self, void* route, void* position) {
    return QGeoRoutingManagerEngine_QBaseUpdateRoute((QGeoRoutingManagerEngine*)self, (QGeoRoute*)route, (QGeoCoordinate*)position);
}

int32_t q_georoutingmanagerengine_supported_travel_modes(void* self) {
    return QGeoRoutingManagerEngine_SupportedTravelModes((QGeoRoutingManagerEngine*)self);
}

int32_t q_georoutingmanagerengine_supported_feature_types(void* self) {
    return QGeoRoutingManagerEngine_SupportedFeatureTypes((QGeoRoutingManagerEngine*)self);
}

int32_t q_georoutingmanagerengine_supported_feature_weights(void* self) {
    return QGeoRoutingManagerEngine_SupportedFeatureWeights((QGeoRoutingManagerEngine*)self);
}

int32_t q_georoutingmanagerengine_supported_route_optimizations(void* self) {
    return QGeoRoutingManagerEngine_SupportedRouteOptimizations((QGeoRoutingManagerEngine*)self);
}

int32_t q_georoutingmanagerengine_supported_segment_details(void* self) {
    return QGeoRoutingManagerEngine_SupportedSegmentDetails((QGeoRoutingManagerEngine*)self);
}

int32_t q_georoutingmanagerengine_supported_maneuver_details(void* self) {
    return QGeoRoutingManagerEngine_SupportedManeuverDetails((QGeoRoutingManagerEngine*)self);
}

void q_georoutingmanagerengine_set_locale(void* self, void* locale) {
    QGeoRoutingManagerEngine_SetLocale((QGeoRoutingManagerEngine*)self, (QLocale*)locale);
}

QLocale* q_georoutingmanagerengine_locale(void* self) {
    return QGeoRoutingManagerEngine_Locale((QGeoRoutingManagerEngine*)self);
}

void q_georoutingmanagerengine_set_measurement_system(void* self, int32_t system) {
    QGeoRoutingManagerEngine_SetMeasurementSystem((QGeoRoutingManagerEngine*)self, system);
}

int32_t q_georoutingmanagerengine_measurement_system(void* self) {
    return QGeoRoutingManagerEngine_MeasurementSystem((QGeoRoutingManagerEngine*)self);
}

void q_georoutingmanagerengine_finished(void* self, void* reply) {
    QGeoRoutingManagerEngine_Finished((QGeoRoutingManagerEngine*)self, (QGeoRouteReply*)reply);
}

void q_georoutingmanagerengine_on_finished(void* self, void (*callback)(void*, void*)) {
    QGeoRoutingManagerEngine_Connect_Finished((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_error_occurred(void* self, void* reply, int32_t error) {
    QGeoRoutingManagerEngine_ErrorOccurred((QGeoRoutingManagerEngine*)self, (QGeoRouteReply*)reply, error);
}

void q_georoutingmanagerengine_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t)) {
    QGeoRoutingManagerEngine_Connect_ErrorOccurred((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_set_supported_travel_modes(void* self, int32_t travelModes) {
    QGeoRoutingManagerEngine_SetSupportedTravelModes((QGeoRoutingManagerEngine*)self, travelModes);
}

void q_georoutingmanagerengine_on_set_supported_travel_modes(void* self, void (*callback)(void*, int32_t)) {
    QGeoRoutingManagerEngine_OnSetSupportedTravelModes((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_qbase_set_supported_travel_modes(void* self, int32_t travelModes) {
    QGeoRoutingManagerEngine_QBaseSetSupportedTravelModes((QGeoRoutingManagerEngine*)self, travelModes);
}

void q_georoutingmanagerengine_set_supported_feature_types(void* self, int32_t featureTypes) {
    QGeoRoutingManagerEngine_SetSupportedFeatureTypes((QGeoRoutingManagerEngine*)self, featureTypes);
}

void q_georoutingmanagerengine_on_set_supported_feature_types(void* self, void (*callback)(void*, int32_t)) {
    QGeoRoutingManagerEngine_OnSetSupportedFeatureTypes((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_qbase_set_supported_feature_types(void* self, int32_t featureTypes) {
    QGeoRoutingManagerEngine_QBaseSetSupportedFeatureTypes((QGeoRoutingManagerEngine*)self, featureTypes);
}

void q_georoutingmanagerengine_set_supported_feature_weights(void* self, int32_t featureWeights) {
    QGeoRoutingManagerEngine_SetSupportedFeatureWeights((QGeoRoutingManagerEngine*)self, featureWeights);
}

void q_georoutingmanagerengine_on_set_supported_feature_weights(void* self, void (*callback)(void*, int32_t)) {
    QGeoRoutingManagerEngine_OnSetSupportedFeatureWeights((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_qbase_set_supported_feature_weights(void* self, int32_t featureWeights) {
    QGeoRoutingManagerEngine_QBaseSetSupportedFeatureWeights((QGeoRoutingManagerEngine*)self, featureWeights);
}

void q_georoutingmanagerengine_set_supported_route_optimizations(void* self, int32_t optimizations) {
    QGeoRoutingManagerEngine_SetSupportedRouteOptimizations((QGeoRoutingManagerEngine*)self, optimizations);
}

void q_georoutingmanagerengine_on_set_supported_route_optimizations(void* self, void (*callback)(void*, int32_t)) {
    QGeoRoutingManagerEngine_OnSetSupportedRouteOptimizations((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_qbase_set_supported_route_optimizations(void* self, int32_t optimizations) {
    QGeoRoutingManagerEngine_QBaseSetSupportedRouteOptimizations((QGeoRoutingManagerEngine*)self, optimizations);
}

void q_georoutingmanagerengine_set_supported_segment_details(void* self, int32_t segmentDetails) {
    QGeoRoutingManagerEngine_SetSupportedSegmentDetails((QGeoRoutingManagerEngine*)self, segmentDetails);
}

void q_georoutingmanagerengine_on_set_supported_segment_details(void* self, void (*callback)(void*, int32_t)) {
    QGeoRoutingManagerEngine_OnSetSupportedSegmentDetails((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_qbase_set_supported_segment_details(void* self, int32_t segmentDetails) {
    QGeoRoutingManagerEngine_QBaseSetSupportedSegmentDetails((QGeoRoutingManagerEngine*)self, segmentDetails);
}

void q_georoutingmanagerengine_set_supported_maneuver_details(void* self, int32_t maneuverDetails) {
    QGeoRoutingManagerEngine_SetSupportedManeuverDetails((QGeoRoutingManagerEngine*)self, maneuverDetails);
}

void q_georoutingmanagerengine_on_set_supported_maneuver_details(void* self, void (*callback)(void*, int32_t)) {
    QGeoRoutingManagerEngine_OnSetSupportedManeuverDetails((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_qbase_set_supported_maneuver_details(void* self, int32_t maneuverDetails) {
    QGeoRoutingManagerEngine_QBaseSetSupportedManeuverDetails((QGeoRoutingManagerEngine*)self, maneuverDetails);
}

const char* q_georoutingmanagerengine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_georoutingmanagerengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_georoutingmanagerengine_error_occurred3(void* self, void* reply, int32_t error, const char* errorString) {
    QGeoRoutingManagerEngine_ErrorOccurred3((QGeoRoutingManagerEngine*)self, (QGeoRouteReply*)reply, error, qstring(errorString));
}

void q_georoutingmanagerengine_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*)) {
    QGeoRoutingManagerEngine_Connect_ErrorOccurred3((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

const char* q_georoutingmanagerengine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_georoutingmanagerengine_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_georoutingmanagerengine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_georoutingmanagerengine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_georoutingmanagerengine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_georoutingmanagerengine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_georoutingmanagerengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_georoutingmanagerengine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_georoutingmanagerengine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_georoutingmanagerengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_georoutingmanagerengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_georoutingmanagerengine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_georoutingmanagerengine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_georoutingmanagerengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_georoutingmanagerengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_georoutingmanagerengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_georoutingmanagerengine_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_georoutingmanagerengine_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_georoutingmanagerengine_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_georoutingmanagerengine_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_georoutingmanagerengine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_georoutingmanagerengine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_georoutingmanagerengine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_georoutingmanagerengine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_georoutingmanagerengine_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_georoutingmanagerengine_dynamic_property_names");
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

QBindingStorage* q_georoutingmanagerengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_georoutingmanagerengine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_georoutingmanagerengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_georoutingmanagerengine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_georoutingmanagerengine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_georoutingmanagerengine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_georoutingmanagerengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_georoutingmanagerengine_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_georoutingmanagerengine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_georoutingmanagerengine_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_georoutingmanagerengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_georoutingmanagerengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_georoutingmanagerengine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_georoutingmanagerengine_event(void* self, void* event) {
    return QGeoRoutingManagerEngine_Event((QGeoRoutingManagerEngine*)self, (QEvent*)event);
}

bool q_georoutingmanagerengine_qbase_event(void* self, void* event) {
    return QGeoRoutingManagerEngine_QBaseEvent((QGeoRoutingManagerEngine*)self, (QEvent*)event);
}

void q_georoutingmanagerengine_on_event(void* self, bool (*callback)(void*, void*)) {
    QGeoRoutingManagerEngine_OnEvent((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

bool q_georoutingmanagerengine_event_filter(void* self, void* watched, void* event) {
    return QGeoRoutingManagerEngine_EventFilter((QGeoRoutingManagerEngine*)self, (QObject*)watched, (QEvent*)event);
}

bool q_georoutingmanagerengine_qbase_event_filter(void* self, void* watched, void* event) {
    return QGeoRoutingManagerEngine_QBaseEventFilter((QGeoRoutingManagerEngine*)self, (QObject*)watched, (QEvent*)event);
}

void q_georoutingmanagerengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGeoRoutingManagerEngine_OnEventFilter((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_timer_event(void* self, void* event) {
    QGeoRoutingManagerEngine_TimerEvent((QGeoRoutingManagerEngine*)self, (QTimerEvent*)event);
}

void q_georoutingmanagerengine_qbase_timer_event(void* self, void* event) {
    QGeoRoutingManagerEngine_QBaseTimerEvent((QGeoRoutingManagerEngine*)self, (QTimerEvent*)event);
}

void q_georoutingmanagerengine_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGeoRoutingManagerEngine_OnTimerEvent((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_child_event(void* self, void* event) {
    QGeoRoutingManagerEngine_ChildEvent((QGeoRoutingManagerEngine*)self, (QChildEvent*)event);
}

void q_georoutingmanagerengine_qbase_child_event(void* self, void* event) {
    QGeoRoutingManagerEngine_QBaseChildEvent((QGeoRoutingManagerEngine*)self, (QChildEvent*)event);
}

void q_georoutingmanagerengine_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGeoRoutingManagerEngine_OnChildEvent((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_custom_event(void* self, void* event) {
    QGeoRoutingManagerEngine_CustomEvent((QGeoRoutingManagerEngine*)self, (QEvent*)event);
}

void q_georoutingmanagerengine_qbase_custom_event(void* self, void* event) {
    QGeoRoutingManagerEngine_QBaseCustomEvent((QGeoRoutingManagerEngine*)self, (QEvent*)event);
}

void q_georoutingmanagerengine_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGeoRoutingManagerEngine_OnCustomEvent((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_connect_notify(void* self, void* signal) {
    QGeoRoutingManagerEngine_ConnectNotify((QGeoRoutingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_georoutingmanagerengine_qbase_connect_notify(void* self, void* signal) {
    QGeoRoutingManagerEngine_QBaseConnectNotify((QGeoRoutingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_georoutingmanagerengine_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoRoutingManagerEngine_OnConnectNotify((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_disconnect_notify(void* self, void* signal) {
    QGeoRoutingManagerEngine_DisconnectNotify((QGeoRoutingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_georoutingmanagerengine_qbase_disconnect_notify(void* self, void* signal) {
    QGeoRoutingManagerEngine_QBaseDisconnectNotify((QGeoRoutingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_georoutingmanagerengine_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoRoutingManagerEngine_OnDisconnectNotify((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

QObject* q_georoutingmanagerengine_sender(void* self) {
    return QGeoRoutingManagerEngine_Sender((QGeoRoutingManagerEngine*)self);
}

QObject* q_georoutingmanagerengine_qbase_sender(void* self) {
    return QGeoRoutingManagerEngine_QBaseSender((QGeoRoutingManagerEngine*)self);
}

void q_georoutingmanagerengine_on_sender(void* self, QObject* (*callback)()) {
    QGeoRoutingManagerEngine_OnSender((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

int32_t q_georoutingmanagerengine_sender_signal_index(void* self) {
    return QGeoRoutingManagerEngine_SenderSignalIndex((QGeoRoutingManagerEngine*)self);
}

int32_t q_georoutingmanagerengine_qbase_sender_signal_index(void* self) {
    return QGeoRoutingManagerEngine_QBaseSenderSignalIndex((QGeoRoutingManagerEngine*)self);
}

void q_georoutingmanagerengine_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGeoRoutingManagerEngine_OnSenderSignalIndex((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

int32_t q_georoutingmanagerengine_receivers(void* self, const char* signal) {
    return QGeoRoutingManagerEngine_Receivers((QGeoRoutingManagerEngine*)self, signal);
}

int32_t q_georoutingmanagerengine_qbase_receivers(void* self, const char* signal) {
    return QGeoRoutingManagerEngine_QBaseReceivers((QGeoRoutingManagerEngine*)self, signal);
}

void q_georoutingmanagerengine_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGeoRoutingManagerEngine_OnReceivers((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

bool q_georoutingmanagerengine_is_signal_connected(void* self, void* signal) {
    return QGeoRoutingManagerEngine_IsSignalConnected((QGeoRoutingManagerEngine*)self, (QMetaMethod*)signal);
}

bool q_georoutingmanagerengine_qbase_is_signal_connected(void* self, void* signal) {
    return QGeoRoutingManagerEngine_QBaseIsSignalConnected((QGeoRoutingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_georoutingmanagerengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGeoRoutingManagerEngine_OnIsSignalConnected((QGeoRoutingManagerEngine*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_georoutingmanagerengine_delete(void* self) {
    QGeoRoutingManagerEngine_Delete((QGeoRoutingManagerEngine*)(self));
}
