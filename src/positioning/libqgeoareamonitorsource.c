#include "../libqcoreevent.hpp"
#include "libqgeoareamonitorinfo.hpp"
#include "libqgeopositioninfo.hpp"
#include "libqgeopositioninfosource.hpp"
#include "libqgeoshape.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqgeoareamonitorsource.hpp"
#include "libqgeoareamonitorsource.h"

QGeoAreaMonitorSource* q_geoareamonitorsource_new(void* parent) {
    return QGeoAreaMonitorSource_new((QObject*)parent);
}

const QMetaObject* q_geoareamonitorsource_meta_object(void* self) {
    return QGeoAreaMonitorSource_MetaObject((QGeoAreaMonitorSource*)self);
}

void* q_geoareamonitorsource_metacast(void* self, const char* param1) {
    return QGeoAreaMonitorSource_Metacast((QGeoAreaMonitorSource*)self, param1);
}

int32_t q_geoareamonitorsource_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoAreaMonitorSource_Metacall((QGeoAreaMonitorSource*)self, param1, param2, param3);
}

void q_geoareamonitorsource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGeoAreaMonitorSource_OnMetacall((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

int32_t q_geoareamonitorsource_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoAreaMonitorSource_QBaseMetacall((QGeoAreaMonitorSource*)self, param1, param2, param3);
}

const char* q_geoareamonitorsource_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGeoAreaMonitorSource* q_geoareamonitorsource_create_default_source(void* parent) {
    return QGeoAreaMonitorSource_CreateDefaultSource((QObject*)parent);
}

QGeoAreaMonitorSource* q_geoareamonitorsource_create_source(const char* sourceName, void* parent) {
    return QGeoAreaMonitorSource_CreateSource(qstring(sourceName), (QObject*)parent);
}

const char** q_geoareamonitorsource_available_sources() {
    libqt_list _arr = QGeoAreaMonitorSource_AvailableSources();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geoareamonitorsource_available_sources");
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

void q_geoareamonitorsource_set_position_info_source(void* self, void* source) {
    QGeoAreaMonitorSource_SetPositionInfoSource((QGeoAreaMonitorSource*)self, (QGeoPositionInfoSource*)source);
}

void q_geoareamonitorsource_on_set_position_info_source(void* self, void (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnSetPositionInfoSource((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_qbase_set_position_info_source(void* self, void* source) {
    QGeoAreaMonitorSource_QBaseSetPositionInfoSource((QGeoAreaMonitorSource*)self, (QGeoPositionInfoSource*)source);
}

QGeoPositionInfoSource* q_geoareamonitorsource_position_info_source(void* self) {
    return QGeoAreaMonitorSource_PositionInfoSource((QGeoAreaMonitorSource*)self);
}

void q_geoareamonitorsource_on_position_info_source(void* self, QGeoPositionInfoSource* (*callback)()) {
    QGeoAreaMonitorSource_OnPositionInfoSource((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

QGeoPositionInfoSource* q_geoareamonitorsource_qbase_position_info_source(void* self) {
    return QGeoAreaMonitorSource_QBasePositionInfoSource((QGeoAreaMonitorSource*)self);
}

const char* q_geoareamonitorsource_source_name(void* self) {
    libqt_string _str = QGeoAreaMonitorSource_SourceName((QGeoAreaMonitorSource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_geoareamonitorsource_error(void* self) {
    return QGeoAreaMonitorSource_Error((QGeoAreaMonitorSource*)self);
}

void q_geoareamonitorsource_on_error(void* self, int32_t (*callback)()) {
    QGeoAreaMonitorSource_OnError((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

int32_t q_geoareamonitorsource_qbase_error(void* self) {
    return QGeoAreaMonitorSource_QBaseError((QGeoAreaMonitorSource*)self);
}

int64_t q_geoareamonitorsource_supported_area_monitor_features(void* self) {
    return QGeoAreaMonitorSource_SupportedAreaMonitorFeatures((QGeoAreaMonitorSource*)self);
}

void q_geoareamonitorsource_on_supported_area_monitor_features(void* self, int64_t (*callback)()) {
    QGeoAreaMonitorSource_OnSupportedAreaMonitorFeatures((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

int64_t q_geoareamonitorsource_qbase_supported_area_monitor_features(void* self) {
    return QGeoAreaMonitorSource_QBaseSupportedAreaMonitorFeatures((QGeoAreaMonitorSource*)self);
}

bool q_geoareamonitorsource_start_monitoring(void* self, void* monitor) {
    return QGeoAreaMonitorSource_StartMonitoring((QGeoAreaMonitorSource*)self, (QGeoAreaMonitorInfo*)monitor);
}

void q_geoareamonitorsource_on_start_monitoring(void* self, bool (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnStartMonitoring((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

bool q_geoareamonitorsource_qbase_start_monitoring(void* self, void* monitor) {
    return QGeoAreaMonitorSource_QBaseStartMonitoring((QGeoAreaMonitorSource*)self, (QGeoAreaMonitorInfo*)monitor);
}

bool q_geoareamonitorsource_stop_monitoring(void* self, void* monitor) {
    return QGeoAreaMonitorSource_StopMonitoring((QGeoAreaMonitorSource*)self, (QGeoAreaMonitorInfo*)monitor);
}

void q_geoareamonitorsource_on_stop_monitoring(void* self, bool (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnStopMonitoring((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

bool q_geoareamonitorsource_qbase_stop_monitoring(void* self, void* monitor) {
    return QGeoAreaMonitorSource_QBaseStopMonitoring((QGeoAreaMonitorSource*)self, (QGeoAreaMonitorInfo*)monitor);
}

bool q_geoareamonitorsource_request_update(void* self, void* monitor, const char* signal) {
    return QGeoAreaMonitorSource_RequestUpdate((QGeoAreaMonitorSource*)self, (QGeoAreaMonitorInfo*)monitor, signal);
}

void q_geoareamonitorsource_on_request_update(void* self, bool (*callback)(void*, void*, const char*)) {
    QGeoAreaMonitorSource_OnRequestUpdate((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

bool q_geoareamonitorsource_qbase_request_update(void* self, void* monitor, const char* signal) {
    return QGeoAreaMonitorSource_QBaseRequestUpdate((QGeoAreaMonitorSource*)self, (QGeoAreaMonitorInfo*)monitor, signal);
}

libqt_list /* of QGeoAreaMonitorInfo* */ q_geoareamonitorsource_active_monitors(void* self) {
    libqt_list _arr = QGeoAreaMonitorSource_ActiveMonitors((QGeoAreaMonitorSource*)self);
    return _arr;
}

void q_geoareamonitorsource_on_active_monitors(void* self, QGeoAreaMonitorInfo** (*callback)()) {
    QGeoAreaMonitorSource_OnActiveMonitors((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

libqt_list /* of QGeoAreaMonitorInfo* */ q_geoareamonitorsource_qbase_active_monitors(void* self) {
    libqt_list _arr = QGeoAreaMonitorSource_QBaseActiveMonitors((QGeoAreaMonitorSource*)self);
    return _arr;
}

libqt_list /* of QGeoAreaMonitorInfo* */ q_geoareamonitorsource_active_monitors2(void* self, void* lookupArea) {
    libqt_list _arr = QGeoAreaMonitorSource_ActiveMonitors2((QGeoAreaMonitorSource*)self, (QGeoShape*)lookupArea);
    return _arr;
}

void q_geoareamonitorsource_on_active_monitors2(void* self, QGeoAreaMonitorInfo** (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnActiveMonitors2((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

libqt_list /* of QGeoAreaMonitorInfo* */ q_geoareamonitorsource_qbase_active_monitors2(void* self, void* lookupArea) {
    libqt_list _arr = QGeoAreaMonitorSource_QBaseActiveMonitors2((QGeoAreaMonitorSource*)self, (QGeoShape*)lookupArea);
    return _arr;
}

bool q_geoareamonitorsource_set_backend_property(void* self, const char* name, void* value) {
    return QGeoAreaMonitorSource_SetBackendProperty((QGeoAreaMonitorSource*)self, qstring(name), (QVariant*)value);
}

void q_geoareamonitorsource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, void*)) {
    QGeoAreaMonitorSource_OnSetBackendProperty((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

bool q_geoareamonitorsource_qbase_set_backend_property(void* self, const char* name, void* value) {
    return QGeoAreaMonitorSource_QBaseSetBackendProperty((QGeoAreaMonitorSource*)self, qstring(name), (QVariant*)value);
}

QVariant* q_geoareamonitorsource_backend_property(void* self, const char* name) {
    return QGeoAreaMonitorSource_BackendProperty((QGeoAreaMonitorSource*)self, qstring(name));
}

void q_geoareamonitorsource_on_backend_property(void* self, QVariant* (*callback)(void*, const char*)) {
    QGeoAreaMonitorSource_OnBackendProperty((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

QVariant* q_geoareamonitorsource_qbase_backend_property(void* self, const char* name) {
    return QGeoAreaMonitorSource_QBaseBackendProperty((QGeoAreaMonitorSource*)self, qstring(name));
}

void q_geoareamonitorsource_area_entered(void* self, void* monitor, void* update) {
    QGeoAreaMonitorSource_AreaEntered((QGeoAreaMonitorSource*)self, (QGeoAreaMonitorInfo*)monitor, (QGeoPositionInfo*)update);
}

void q_geoareamonitorsource_on_area_entered(void* self, void (*callback)(void*, void*, void*)) {
    QGeoAreaMonitorSource_Connect_AreaEntered((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_area_exited(void* self, void* monitor, void* update) {
    QGeoAreaMonitorSource_AreaExited((QGeoAreaMonitorSource*)self, (QGeoAreaMonitorInfo*)monitor, (QGeoPositionInfo*)update);
}

void q_geoareamonitorsource_on_area_exited(void* self, void (*callback)(void*, void*, void*)) {
    QGeoAreaMonitorSource_Connect_AreaExited((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_monitor_expired(void* self, void* monitor) {
    QGeoAreaMonitorSource_MonitorExpired((QGeoAreaMonitorSource*)self, (QGeoAreaMonitorInfo*)monitor);
}

void q_geoareamonitorsource_on_monitor_expired(void* self, void (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_Connect_MonitorExpired((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_error_occurred(void* self, int32_t error) {
    QGeoAreaMonitorSource_ErrorOccurred((QGeoAreaMonitorSource*)self, error);
}

void q_geoareamonitorsource_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QGeoAreaMonitorSource_Connect_ErrorOccurred((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

const char* q_geoareamonitorsource_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geoareamonitorsource_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geoareamonitorsource_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoareamonitorsource_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_geoareamonitorsource_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_geoareamonitorsource_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_geoareamonitorsource_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_geoareamonitorsource_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_geoareamonitorsource_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_geoareamonitorsource_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_geoareamonitorsource_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_geoareamonitorsource_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_geoareamonitorsource_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_geoareamonitorsource_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_geoareamonitorsource_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_geoareamonitorsource_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_geoareamonitorsource_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_geoareamonitorsource_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_geoareamonitorsource_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_geoareamonitorsource_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_geoareamonitorsource_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_geoareamonitorsource_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_geoareamonitorsource_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_geoareamonitorsource_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_geoareamonitorsource_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_geoareamonitorsource_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_geoareamonitorsource_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geoareamonitorsource_dynamic_property_names");
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

QBindingStorage* q_geoareamonitorsource_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_geoareamonitorsource_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_geoareamonitorsource_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_geoareamonitorsource_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_geoareamonitorsource_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_geoareamonitorsource_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_geoareamonitorsource_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_geoareamonitorsource_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_geoareamonitorsource_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_geoareamonitorsource_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_geoareamonitorsource_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_geoareamonitorsource_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_geoareamonitorsource_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_geoareamonitorsource_event(void* self, void* event) {
    return QGeoAreaMonitorSource_Event((QGeoAreaMonitorSource*)self, (QEvent*)event);
}

bool q_geoareamonitorsource_qbase_event(void* self, void* event) {
    return QGeoAreaMonitorSource_QBaseEvent((QGeoAreaMonitorSource*)self, (QEvent*)event);
}

void q_geoareamonitorsource_on_event(void* self, bool (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnEvent((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

bool q_geoareamonitorsource_event_filter(void* self, void* watched, void* event) {
    return QGeoAreaMonitorSource_EventFilter((QGeoAreaMonitorSource*)self, (QObject*)watched, (QEvent*)event);
}

bool q_geoareamonitorsource_qbase_event_filter(void* self, void* watched, void* event) {
    return QGeoAreaMonitorSource_QBaseEventFilter((QGeoAreaMonitorSource*)self, (QObject*)watched, (QEvent*)event);
}

void q_geoareamonitorsource_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGeoAreaMonitorSource_OnEventFilter((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_timer_event(void* self, void* event) {
    QGeoAreaMonitorSource_TimerEvent((QGeoAreaMonitorSource*)self, (QTimerEvent*)event);
}

void q_geoareamonitorsource_qbase_timer_event(void* self, void* event) {
    QGeoAreaMonitorSource_QBaseTimerEvent((QGeoAreaMonitorSource*)self, (QTimerEvent*)event);
}

void q_geoareamonitorsource_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnTimerEvent((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_child_event(void* self, void* event) {
    QGeoAreaMonitorSource_ChildEvent((QGeoAreaMonitorSource*)self, (QChildEvent*)event);
}

void q_geoareamonitorsource_qbase_child_event(void* self, void* event) {
    QGeoAreaMonitorSource_QBaseChildEvent((QGeoAreaMonitorSource*)self, (QChildEvent*)event);
}

void q_geoareamonitorsource_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnChildEvent((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_custom_event(void* self, void* event) {
    QGeoAreaMonitorSource_CustomEvent((QGeoAreaMonitorSource*)self, (QEvent*)event);
}

void q_geoareamonitorsource_qbase_custom_event(void* self, void* event) {
    QGeoAreaMonitorSource_QBaseCustomEvent((QGeoAreaMonitorSource*)self, (QEvent*)event);
}

void q_geoareamonitorsource_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnCustomEvent((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_connect_notify(void* self, void* signal) {
    QGeoAreaMonitorSource_ConnectNotify((QGeoAreaMonitorSource*)self, (QMetaMethod*)signal);
}

void q_geoareamonitorsource_qbase_connect_notify(void* self, void* signal) {
    QGeoAreaMonitorSource_QBaseConnectNotify((QGeoAreaMonitorSource*)self, (QMetaMethod*)signal);
}

void q_geoareamonitorsource_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnConnectNotify((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_disconnect_notify(void* self, void* signal) {
    QGeoAreaMonitorSource_DisconnectNotify((QGeoAreaMonitorSource*)self, (QMetaMethod*)signal);
}

void q_geoareamonitorsource_qbase_disconnect_notify(void* self, void* signal) {
    QGeoAreaMonitorSource_QBaseDisconnectNotify((QGeoAreaMonitorSource*)self, (QMetaMethod*)signal);
}

void q_geoareamonitorsource_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnDisconnectNotify((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

QObject* q_geoareamonitorsource_sender(void* self) {
    return QGeoAreaMonitorSource_Sender((QGeoAreaMonitorSource*)self);
}

QObject* q_geoareamonitorsource_qbase_sender(void* self) {
    return QGeoAreaMonitorSource_QBaseSender((QGeoAreaMonitorSource*)self);
}

void q_geoareamonitorsource_on_sender(void* self, QObject* (*callback)()) {
    QGeoAreaMonitorSource_OnSender((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

int32_t q_geoareamonitorsource_sender_signal_index(void* self) {
    return QGeoAreaMonitorSource_SenderSignalIndex((QGeoAreaMonitorSource*)self);
}

int32_t q_geoareamonitorsource_qbase_sender_signal_index(void* self) {
    return QGeoAreaMonitorSource_QBaseSenderSignalIndex((QGeoAreaMonitorSource*)self);
}

void q_geoareamonitorsource_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGeoAreaMonitorSource_OnSenderSignalIndex((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

int32_t q_geoareamonitorsource_receivers(void* self, const char* signal) {
    return QGeoAreaMonitorSource_Receivers((QGeoAreaMonitorSource*)self, signal);
}

int32_t q_geoareamonitorsource_qbase_receivers(void* self, const char* signal) {
    return QGeoAreaMonitorSource_QBaseReceivers((QGeoAreaMonitorSource*)self, signal);
}

void q_geoareamonitorsource_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGeoAreaMonitorSource_OnReceivers((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

bool q_geoareamonitorsource_is_signal_connected(void* self, void* signal) {
    return QGeoAreaMonitorSource_IsSignalConnected((QGeoAreaMonitorSource*)self, (QMetaMethod*)signal);
}

bool q_geoareamonitorsource_qbase_is_signal_connected(void* self, void* signal) {
    return QGeoAreaMonitorSource_QBaseIsSignalConnected((QGeoAreaMonitorSource*)self, (QMetaMethod*)signal);
}

void q_geoareamonitorsource_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGeoAreaMonitorSource_OnIsSignalConnected((QGeoAreaMonitorSource*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_geoareamonitorsource_delete(void* self) {
    QGeoAreaMonitorSource_Delete((QGeoAreaMonitorSource*)(self));
}
