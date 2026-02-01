#include "libqgeoroute.hpp"
#include "libqgeoroutereply.hpp"
#include "libqgeorouterequest.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqgeoroutingmanager.hpp"
#include "libqgeoroutingmanager.h"

const QMetaObject* q_georoutingmanager_meta_object(void* self) {
    return QGeoRoutingManager_MetaObject((QGeoRoutingManager*)self);
}

void* q_georoutingmanager_metacast(void* self, const char* param1) {
    return QGeoRoutingManager_Metacast((QGeoRoutingManager*)self, param1);
}

int32_t q_georoutingmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoRoutingManager_Metacall((QGeoRoutingManager*)self, param1, param2, param3);
}

const char* q_georoutingmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_georoutingmanager_manager_name(void* self) {
    libqt_string _str = QGeoRoutingManager_ManagerName((QGeoRoutingManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_georoutingmanager_manager_version(void* self) {
    return QGeoRoutingManager_ManagerVersion((QGeoRoutingManager*)self);
}

QGeoRouteReply* q_georoutingmanager_calculate_route(void* self, void* request) {
    return QGeoRoutingManager_CalculateRoute((QGeoRoutingManager*)self, (QGeoRouteRequest*)request);
}

QGeoRouteReply* q_georoutingmanager_update_route(void* self, void* route, void* position) {
    return QGeoRoutingManager_UpdateRoute((QGeoRoutingManager*)self, (QGeoRoute*)route, (QGeoCoordinate*)position);
}

int32_t q_georoutingmanager_supported_travel_modes(void* self) {
    return QGeoRoutingManager_SupportedTravelModes((QGeoRoutingManager*)self);
}

int32_t q_georoutingmanager_supported_feature_types(void* self) {
    return QGeoRoutingManager_SupportedFeatureTypes((QGeoRoutingManager*)self);
}

int32_t q_georoutingmanager_supported_feature_weights(void* self) {
    return QGeoRoutingManager_SupportedFeatureWeights((QGeoRoutingManager*)self);
}

int32_t q_georoutingmanager_supported_route_optimizations(void* self) {
    return QGeoRoutingManager_SupportedRouteOptimizations((QGeoRoutingManager*)self);
}

int32_t q_georoutingmanager_supported_segment_details(void* self) {
    return QGeoRoutingManager_SupportedSegmentDetails((QGeoRoutingManager*)self);
}

int32_t q_georoutingmanager_supported_maneuver_details(void* self) {
    return QGeoRoutingManager_SupportedManeuverDetails((QGeoRoutingManager*)self);
}

void q_georoutingmanager_set_locale(void* self, void* locale) {
    QGeoRoutingManager_SetLocale((QGeoRoutingManager*)self, (QLocale*)locale);
}

QLocale* q_georoutingmanager_locale(void* self) {
    return QGeoRoutingManager_Locale((QGeoRoutingManager*)self);
}

void q_georoutingmanager_set_measurement_system(void* self, int32_t system) {
    QGeoRoutingManager_SetMeasurementSystem((QGeoRoutingManager*)self, system);
}

int32_t q_georoutingmanager_measurement_system(void* self) {
    return QGeoRoutingManager_MeasurementSystem((QGeoRoutingManager*)self);
}

void q_georoutingmanager_finished(void* self, void* reply) {
    QGeoRoutingManager_Finished((QGeoRoutingManager*)self, (QGeoRouteReply*)reply);
}

void q_georoutingmanager_on_finished(void* self, void (*callback)(void*, void*)) {
    QGeoRoutingManager_Connect_Finished((QGeoRoutingManager*)self, (intptr_t)callback);
}

void q_georoutingmanager_error_occurred(void* self, void* reply, int32_t error) {
    QGeoRoutingManager_ErrorOccurred((QGeoRoutingManager*)self, (QGeoRouteReply*)reply, error);
}

void q_georoutingmanager_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t)) {
    QGeoRoutingManager_Connect_ErrorOccurred((QGeoRoutingManager*)self, (intptr_t)callback);
}

const char* q_georoutingmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_georoutingmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_georoutingmanager_error_occurred3(void* self, void* reply, int32_t error, const char* errorString) {
    QGeoRoutingManager_ErrorOccurred3((QGeoRoutingManager*)self, (QGeoRouteReply*)reply, error, qstring(errorString));
}

void q_georoutingmanager_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*)) {
    QGeoRoutingManager_Connect_ErrorOccurred3((QGeoRoutingManager*)self, (intptr_t)callback);
}

bool q_georoutingmanager_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_georoutingmanager_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_georoutingmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_georoutingmanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_georoutingmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_georoutingmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_georoutingmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_georoutingmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_georoutingmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_georoutingmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_georoutingmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_georoutingmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_georoutingmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_georoutingmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_georoutingmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_georoutingmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_georoutingmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_georoutingmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_georoutingmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_georoutingmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_georoutingmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_georoutingmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_georoutingmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_georoutingmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_georoutingmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_georoutingmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_georoutingmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_georoutingmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_georoutingmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_georoutingmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_georoutingmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_georoutingmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_georoutingmanager_dynamic_property_names\n");
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

QBindingStorage* q_georoutingmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_georoutingmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_georoutingmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_georoutingmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_georoutingmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_georoutingmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_georoutingmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_georoutingmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_georoutingmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_georoutingmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_georoutingmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_georoutingmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_georoutingmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_georoutingmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_georoutingmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_georoutingmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_georoutingmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_georoutingmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_georoutingmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_georoutingmanager_delete(void* self) {
    QGeoRoutingManager_Delete((QGeoRoutingManager*)(self));
}
