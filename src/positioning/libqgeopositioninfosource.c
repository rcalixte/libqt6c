#include "../libqcoreevent.hpp"
#include "libqgeopositioninfo.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqgeopositioninfosource.hpp"
#include "libqgeopositioninfosource.h"

QGeoPositionInfoSource* q_geopositioninfosource_new(void* parent) {
    return QGeoPositionInfoSource_new((QObject*)parent);
}

const QMetaObject* q_geopositioninfosource_meta_object(void* self) {
    return QGeoPositionInfoSource_MetaObject((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGeoPositionInfoSource_OnMetaObject((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

const QMetaObject* q_geopositioninfosource_qbase_meta_object(void* self) {
    return QGeoPositionInfoSource_QBaseMetaObject((QGeoPositionInfoSource*)self);
}

void* q_geopositioninfosource_metacast(void* self, const char* param1) {
    return QGeoPositionInfoSource_Metacast((QGeoPositionInfoSource*)self, param1);
}

void q_geopositioninfosource_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGeoPositionInfoSource_OnMetacast((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void* q_geopositioninfosource_qbase_metacast(void* self, const char* param1) {
    return QGeoPositionInfoSource_QBaseMetacast((QGeoPositionInfoSource*)self, param1);
}

int32_t q_geopositioninfosource_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoPositionInfoSource_Metacall((QGeoPositionInfoSource*)self, param1, param2, param3);
}

void q_geopositioninfosource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGeoPositionInfoSource_OnMetacall((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_geopositioninfosource_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoPositionInfoSource_QBaseMetacall((QGeoPositionInfoSource*)self, param1, param2, param3);
}

const char* q_geopositioninfosource_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geopositioninfosource_set_update_interval(void* self, int msec) {
    QGeoPositionInfoSource_SetUpdateInterval((QGeoPositionInfoSource*)self, msec);
}

void q_geopositioninfosource_on_set_update_interval(void* self, void (*callback)(void*, int)) {
    QGeoPositionInfoSource_OnSetUpdateInterval((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_qbase_set_update_interval(void* self, int msec) {
    QGeoPositionInfoSource_QBaseSetUpdateInterval((QGeoPositionInfoSource*)self, msec);
}

int32_t q_geopositioninfosource_update_interval(void* self) {
    return QGeoPositionInfoSource_UpdateInterval((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_set_preferred_positioning_methods(void* self, int32_t methods) {
    QGeoPositionInfoSource_SetPreferredPositioningMethods((QGeoPositionInfoSource*)self, methods);
}

void q_geopositioninfosource_on_set_preferred_positioning_methods(void* self, void (*callback)(void*, int32_t)) {
    QGeoPositionInfoSource_OnSetPreferredPositioningMethods((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_qbase_set_preferred_positioning_methods(void* self, int32_t methods) {
    QGeoPositionInfoSource_QBaseSetPreferredPositioningMethods((QGeoPositionInfoSource*)self, methods);
}

int32_t q_geopositioninfosource_preferred_positioning_methods(void* self) {
    return QGeoPositionInfoSource_PreferredPositioningMethods((QGeoPositionInfoSource*)self);
}

QGeoPositionInfo* q_geopositioninfosource_last_known_position(void* self, bool fromSatellitePositioningMethodsOnly) {
    return QGeoPositionInfoSource_LastKnownPosition((QGeoPositionInfoSource*)self, fromSatellitePositioningMethodsOnly);
}

void q_geopositioninfosource_on_last_known_position(void* self, QGeoPositionInfo* (*callback)(void*, bool)) {
    QGeoPositionInfoSource_OnLastKnownPosition((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

QGeoPositionInfo* q_geopositioninfosource_qbase_last_known_position(void* self, bool fromSatellitePositioningMethodsOnly) {
    return QGeoPositionInfoSource_QBaseLastKnownPosition((QGeoPositionInfoSource*)self, fromSatellitePositioningMethodsOnly);
}

int32_t q_geopositioninfosource_supported_positioning_methods(void* self) {
    return QGeoPositionInfoSource_SupportedPositioningMethods((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_on_supported_positioning_methods(void* self, int32_t (*callback)()) {
    QGeoPositionInfoSource_OnSupportedPositioningMethods((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_geopositioninfosource_qbase_supported_positioning_methods(void* self) {
    return QGeoPositionInfoSource_QBaseSupportedPositioningMethods((QGeoPositionInfoSource*)self);
}

int32_t q_geopositioninfosource_minimum_update_interval(void* self) {
    return QGeoPositionInfoSource_MinimumUpdateInterval((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_on_minimum_update_interval(void* self, int32_t (*callback)()) {
    QGeoPositionInfoSource_OnMinimumUpdateInterval((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_geopositioninfosource_qbase_minimum_update_interval(void* self) {
    return QGeoPositionInfoSource_QBaseMinimumUpdateInterval((QGeoPositionInfoSource*)self);
}

const char* q_geopositioninfosource_source_name(void* self) {
    libqt_string _str = QGeoPositionInfoSource_SourceName((QGeoPositionInfoSource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_geopositioninfosource_set_backend_property(void* self, const char* name, void* value) {
    return QGeoPositionInfoSource_SetBackendProperty((QGeoPositionInfoSource*)self, qstring(name), (QVariant*)value);
}

void q_geopositioninfosource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, void*)) {
    QGeoPositionInfoSource_OnSetBackendProperty((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

bool q_geopositioninfosource_qbase_set_backend_property(void* self, const char* name, void* value) {
    return QGeoPositionInfoSource_QBaseSetBackendProperty((QGeoPositionInfoSource*)self, qstring(name), (QVariant*)value);
}

QVariant* q_geopositioninfosource_backend_property(void* self, const char* name) {
    return QGeoPositionInfoSource_BackendProperty((QGeoPositionInfoSource*)self, qstring(name));
}

void q_geopositioninfosource_on_backend_property(void* self, QVariant* (*callback)(void*, const char*)) {
    QGeoPositionInfoSource_OnBackendProperty((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

QVariant* q_geopositioninfosource_qbase_backend_property(void* self, const char* name) {
    return QGeoPositionInfoSource_QBaseBackendProperty((QGeoPositionInfoSource*)self, qstring(name));
}

QGeoPositionInfoSource* q_geopositioninfosource_create_default_source(void* parent) {
    return QGeoPositionInfoSource_CreateDefaultSource((QObject*)parent);
}

QGeoPositionInfoSource* q_geopositioninfosource_create_default_source2(libqt_map /* of const char* to QVariant* */ parameters, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geopositioninfosource_create_default_source2\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geopositioninfosource_create_default_source2\n");
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
    QGeoPositionInfoSource* _out = QGeoPositionInfoSource_CreateDefaultSource2(parameters_ret, (QObject*)parent);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

QGeoPositionInfoSource* q_geopositioninfosource_create_source(const char* sourceName, void* parent) {
    return QGeoPositionInfoSource_CreateSource(qstring(sourceName), (QObject*)parent);
}

QGeoPositionInfoSource* q_geopositioninfosource_create_source2(const char* sourceName, libqt_map /* of const char* to QVariant* */ parameters, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geopositioninfosource_create_source2\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geopositioninfosource_create_source2\n");
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
    QGeoPositionInfoSource* _out = QGeoPositionInfoSource_CreateSource2(qstring(sourceName), parameters_ret, (QObject*)parent);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

const char** q_geopositioninfosource_available_sources() {
    libqt_list _arr = QGeoPositionInfoSource_AvailableSources();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geopositioninfosource_available_sources\n");
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

int32_t q_geopositioninfosource_error(void* self) {
    return QGeoPositionInfoSource_Error((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_on_error(void* self, int32_t (*callback)()) {
    QGeoPositionInfoSource_OnError((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_geopositioninfosource_qbase_error(void* self) {
    return QGeoPositionInfoSource_QBaseError((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_start_updates(void* self) {
    QGeoPositionInfoSource_StartUpdates((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_on_start_updates(void* self, void (*callback)()) {
    QGeoPositionInfoSource_OnStartUpdates((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_qbase_start_updates(void* self) {
    QGeoPositionInfoSource_QBaseStartUpdates((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_stop_updates(void* self) {
    QGeoPositionInfoSource_StopUpdates((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_on_stop_updates(void* self, void (*callback)()) {
    QGeoPositionInfoSource_OnStopUpdates((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_qbase_stop_updates(void* self) {
    QGeoPositionInfoSource_QBaseStopUpdates((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_request_update(void* self, int timeout) {
    QGeoPositionInfoSource_RequestUpdate((QGeoPositionInfoSource*)self, timeout);
}

void q_geopositioninfosource_on_request_update(void* self, void (*callback)(void*, int)) {
    QGeoPositionInfoSource_OnRequestUpdate((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_qbase_request_update(void* self, int timeout) {
    QGeoPositionInfoSource_QBaseRequestUpdate((QGeoPositionInfoSource*)self, timeout);
}

void q_geopositioninfosource_position_updated(void* self, void* update) {
    QGeoPositionInfoSource_PositionUpdated((QGeoPositionInfoSource*)self, (QGeoPositionInfo*)update);
}

void q_geopositioninfosource_on_position_updated(void* self, void (*callback)(void*, void*)) {
    QGeoPositionInfoSource_Connect_PositionUpdated((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_error_occurred(void* self, int32_t param1) {
    QGeoPositionInfoSource_ErrorOccurred((QGeoPositionInfoSource*)self, param1);
}

void q_geopositioninfosource_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QGeoPositionInfoSource_Connect_ErrorOccurred((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_supported_positioning_methods_changed(void* self) {
    QGeoPositionInfoSource_SupportedPositioningMethodsChanged((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_on_supported_positioning_methods_changed(void* self, void (*callback)(void*)) {
    QGeoPositionInfoSource_Connect_SupportedPositioningMethodsChanged((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

const char* q_geopositioninfosource_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geopositioninfosource_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geopositioninfosource_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geopositioninfosource_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_geopositioninfosource_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_geopositioninfosource_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_geopositioninfosource_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_geopositioninfosource_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_geopositioninfosource_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_geopositioninfosource_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_geopositioninfosource_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_geopositioninfosource_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_geopositioninfosource_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_geopositioninfosource_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_geopositioninfosource_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_geopositioninfosource_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_geopositioninfosource_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_geopositioninfosource_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_geopositioninfosource_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_geopositioninfosource_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_geopositioninfosource_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_geopositioninfosource_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_geopositioninfosource_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_geopositioninfosource_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_geopositioninfosource_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_geopositioninfosource_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_geopositioninfosource_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_geopositioninfosource_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geopositioninfosource_dynamic_property_names\n");
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

QBindingStorage* q_geopositioninfosource_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_geopositioninfosource_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_geopositioninfosource_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_geopositioninfosource_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_geopositioninfosource_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_geopositioninfosource_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_geopositioninfosource_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_geopositioninfosource_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_geopositioninfosource_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_geopositioninfosource_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_geopositioninfosource_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_geopositioninfosource_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_geopositioninfosource_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_geopositioninfosource_event(void* self, void* event) {
    return QGeoPositionInfoSource_Event((QGeoPositionInfoSource*)self, (QEvent*)event);
}

bool q_geopositioninfosource_qbase_event(void* self, void* event) {
    return QGeoPositionInfoSource_QBaseEvent((QGeoPositionInfoSource*)self, (QEvent*)event);
}

void q_geopositioninfosource_on_event(void* self, bool (*callback)(void*, void*)) {
    QGeoPositionInfoSource_OnEvent((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

bool q_geopositioninfosource_event_filter(void* self, void* watched, void* event) {
    return QGeoPositionInfoSource_EventFilter((QGeoPositionInfoSource*)self, (QObject*)watched, (QEvent*)event);
}

bool q_geopositioninfosource_qbase_event_filter(void* self, void* watched, void* event) {
    return QGeoPositionInfoSource_QBaseEventFilter((QGeoPositionInfoSource*)self, (QObject*)watched, (QEvent*)event);
}

void q_geopositioninfosource_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGeoPositionInfoSource_OnEventFilter((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_timer_event(void* self, void* event) {
    QGeoPositionInfoSource_TimerEvent((QGeoPositionInfoSource*)self, (QTimerEvent*)event);
}

void q_geopositioninfosource_qbase_timer_event(void* self, void* event) {
    QGeoPositionInfoSource_QBaseTimerEvent((QGeoPositionInfoSource*)self, (QTimerEvent*)event);
}

void q_geopositioninfosource_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGeoPositionInfoSource_OnTimerEvent((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_child_event(void* self, void* event) {
    QGeoPositionInfoSource_ChildEvent((QGeoPositionInfoSource*)self, (QChildEvent*)event);
}

void q_geopositioninfosource_qbase_child_event(void* self, void* event) {
    QGeoPositionInfoSource_QBaseChildEvent((QGeoPositionInfoSource*)self, (QChildEvent*)event);
}

void q_geopositioninfosource_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGeoPositionInfoSource_OnChildEvent((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_custom_event(void* self, void* event) {
    QGeoPositionInfoSource_CustomEvent((QGeoPositionInfoSource*)self, (QEvent*)event);
}

void q_geopositioninfosource_qbase_custom_event(void* self, void* event) {
    QGeoPositionInfoSource_QBaseCustomEvent((QGeoPositionInfoSource*)self, (QEvent*)event);
}

void q_geopositioninfosource_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGeoPositionInfoSource_OnCustomEvent((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_connect_notify(void* self, void* signal) {
    QGeoPositionInfoSource_ConnectNotify((QGeoPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_geopositioninfosource_qbase_connect_notify(void* self, void* signal) {
    QGeoPositionInfoSource_QBaseConnectNotify((QGeoPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_geopositioninfosource_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoPositionInfoSource_OnConnectNotify((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_disconnect_notify(void* self, void* signal) {
    QGeoPositionInfoSource_DisconnectNotify((QGeoPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_geopositioninfosource_qbase_disconnect_notify(void* self, void* signal) {
    QGeoPositionInfoSource_QBaseDisconnectNotify((QGeoPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_geopositioninfosource_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoPositionInfoSource_OnDisconnectNotify((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

QObject* q_geopositioninfosource_sender(void* self) {
    return QGeoPositionInfoSource_Sender((QGeoPositionInfoSource*)self);
}

QObject* q_geopositioninfosource_qbase_sender(void* self) {
    return QGeoPositionInfoSource_QBaseSender((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_on_sender(void* self, QObject* (*callback)()) {
    QGeoPositionInfoSource_OnSender((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_geopositioninfosource_sender_signal_index(void* self) {
    return QGeoPositionInfoSource_SenderSignalIndex((QGeoPositionInfoSource*)self);
}

int32_t q_geopositioninfosource_qbase_sender_signal_index(void* self) {
    return QGeoPositionInfoSource_QBaseSenderSignalIndex((QGeoPositionInfoSource*)self);
}

void q_geopositioninfosource_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGeoPositionInfoSource_OnSenderSignalIndex((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_geopositioninfosource_receivers(void* self, const char* signal) {
    return QGeoPositionInfoSource_Receivers((QGeoPositionInfoSource*)self, signal);
}

int32_t q_geopositioninfosource_qbase_receivers(void* self, const char* signal) {
    return QGeoPositionInfoSource_QBaseReceivers((QGeoPositionInfoSource*)self, signal);
}

void q_geopositioninfosource_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGeoPositionInfoSource_OnReceivers((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

bool q_geopositioninfosource_is_signal_connected(void* self, void* signal) {
    return QGeoPositionInfoSource_IsSignalConnected((QGeoPositionInfoSource*)self, (QMetaMethod*)signal);
}

bool q_geopositioninfosource_qbase_is_signal_connected(void* self, void* signal) {
    return QGeoPositionInfoSource_QBaseIsSignalConnected((QGeoPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_geopositioninfosource_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGeoPositionInfoSource_OnIsSignalConnected((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_geopositioninfosource_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_geopositioninfosource_delete(void* self) {
    QGeoPositionInfoSource_Delete((QGeoPositionInfoSource*)(self));
}
