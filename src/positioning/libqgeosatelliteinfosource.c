#include "../libqcoreevent.hpp"
#include "libqgeosatelliteinfo.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqgeosatelliteinfosource.hpp"
#include "libqgeosatelliteinfosource.h"

QGeoSatelliteInfoSource* q_geosatelliteinfosource_new(void* parent) {
    return QGeoSatelliteInfoSource_new((QObject*)parent);
}

const QMetaObject* q_geosatelliteinfosource_meta_object(void* self) {
    return QGeoSatelliteInfoSource_MetaObject((QGeoSatelliteInfoSource*)self);
}

void q_geosatelliteinfosource_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGeoSatelliteInfoSource_OnMetaObject((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

const QMetaObject* q_geosatelliteinfosource_qbase_meta_object(void* self) {
    return QGeoSatelliteInfoSource_QBaseMetaObject((QGeoSatelliteInfoSource*)self);
}

void* q_geosatelliteinfosource_metacast(void* self, const char* param1) {
    return QGeoSatelliteInfoSource_Metacast((QGeoSatelliteInfoSource*)self, param1);
}

void q_geosatelliteinfosource_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGeoSatelliteInfoSource_OnMetacast((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void* q_geosatelliteinfosource_qbase_metacast(void* self, const char* param1) {
    return QGeoSatelliteInfoSource_QBaseMetacast((QGeoSatelliteInfoSource*)self, param1);
}

int32_t q_geosatelliteinfosource_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoSatelliteInfoSource_Metacall((QGeoSatelliteInfoSource*)self, param1, param2, param3);
}

void q_geosatelliteinfosource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGeoSatelliteInfoSource_OnMetacall((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

int32_t q_geosatelliteinfosource_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoSatelliteInfoSource_QBaseMetacall((QGeoSatelliteInfoSource*)self, param1, param2, param3);
}

const char* q_geosatelliteinfosource_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGeoSatelliteInfoSource* q_geosatelliteinfosource_create_default_source(void* parent) {
    return QGeoSatelliteInfoSource_CreateDefaultSource((QObject*)parent);
}

QGeoSatelliteInfoSource* q_geosatelliteinfosource_create_source(const char* sourceName, void* parent) {
    return QGeoSatelliteInfoSource_CreateSource(qstring(sourceName), (QObject*)parent);
}

QGeoSatelliteInfoSource* q_geosatelliteinfosource_create_default_source2(libqt_map /* of const char* to QVariant* */ parameters, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geosatelliteinfosource_create_default_source2\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geosatelliteinfosource_create_default_source2\n");
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
    QGeoSatelliteInfoSource* _out = QGeoSatelliteInfoSource_CreateDefaultSource2(parameters_ret, (QObject*)parent);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

QGeoSatelliteInfoSource* q_geosatelliteinfosource_create_source2(const char* sourceName, libqt_map /* of const char* to QVariant* */ parameters, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geosatelliteinfosource_create_source2\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geosatelliteinfosource_create_source2\n");
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
    QGeoSatelliteInfoSource* _out = QGeoSatelliteInfoSource_CreateSource2(qstring(sourceName), parameters_ret, (QObject*)parent);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

const char** q_geosatelliteinfosource_available_sources() {
    libqt_list _arr = QGeoSatelliteInfoSource_AvailableSources();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geosatelliteinfosource_available_sources\n");
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

const char* q_geosatelliteinfosource_source_name(void* self) {
    libqt_string _str = QGeoSatelliteInfoSource_SourceName((QGeoSatelliteInfoSource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geosatelliteinfosource_set_update_interval(void* self, int msec) {
    QGeoSatelliteInfoSource_SetUpdateInterval((QGeoSatelliteInfoSource*)self, msec);
}

void q_geosatelliteinfosource_on_set_update_interval(void* self, void (*callback)(void*, int)) {
    QGeoSatelliteInfoSource_OnSetUpdateInterval((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_qbase_set_update_interval(void* self, int msec) {
    QGeoSatelliteInfoSource_QBaseSetUpdateInterval((QGeoSatelliteInfoSource*)self, msec);
}

int32_t q_geosatelliteinfosource_update_interval(void* self) {
    return QGeoSatelliteInfoSource_UpdateInterval((QGeoSatelliteInfoSource*)self);
}

int32_t q_geosatelliteinfosource_minimum_update_interval(void* self) {
    return QGeoSatelliteInfoSource_MinimumUpdateInterval((QGeoSatelliteInfoSource*)self);
}

void q_geosatelliteinfosource_on_minimum_update_interval(void* self, int32_t (*callback)()) {
    QGeoSatelliteInfoSource_OnMinimumUpdateInterval((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

int32_t q_geosatelliteinfosource_qbase_minimum_update_interval(void* self) {
    return QGeoSatelliteInfoSource_QBaseMinimumUpdateInterval((QGeoSatelliteInfoSource*)self);
}

int32_t q_geosatelliteinfosource_error(void* self) {
    return QGeoSatelliteInfoSource_Error((QGeoSatelliteInfoSource*)self);
}

void q_geosatelliteinfosource_on_error(void* self, int32_t (*callback)()) {
    QGeoSatelliteInfoSource_OnError((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

int32_t q_geosatelliteinfosource_qbase_error(void* self) {
    return QGeoSatelliteInfoSource_QBaseError((QGeoSatelliteInfoSource*)self);
}

bool q_geosatelliteinfosource_set_backend_property(void* self, const char* name, void* value) {
    return QGeoSatelliteInfoSource_SetBackendProperty((QGeoSatelliteInfoSource*)self, qstring(name), (QVariant*)value);
}

void q_geosatelliteinfosource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, void*)) {
    QGeoSatelliteInfoSource_OnSetBackendProperty((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

bool q_geosatelliteinfosource_qbase_set_backend_property(void* self, const char* name, void* value) {
    return QGeoSatelliteInfoSource_QBaseSetBackendProperty((QGeoSatelliteInfoSource*)self, qstring(name), (QVariant*)value);
}

QVariant* q_geosatelliteinfosource_backend_property(void* self, const char* name) {
    return QGeoSatelliteInfoSource_BackendProperty((QGeoSatelliteInfoSource*)self, qstring(name));
}

void q_geosatelliteinfosource_on_backend_property(void* self, QVariant* (*callback)(void*, const char*)) {
    QGeoSatelliteInfoSource_OnBackendProperty((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

QVariant* q_geosatelliteinfosource_qbase_backend_property(void* self, const char* name) {
    return QGeoSatelliteInfoSource_QBaseBackendProperty((QGeoSatelliteInfoSource*)self, qstring(name));
}

void q_geosatelliteinfosource_start_updates(void* self) {
    QGeoSatelliteInfoSource_StartUpdates((QGeoSatelliteInfoSource*)self);
}

void q_geosatelliteinfosource_on_start_updates(void* self, void (*callback)()) {
    QGeoSatelliteInfoSource_OnStartUpdates((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_qbase_start_updates(void* self) {
    QGeoSatelliteInfoSource_QBaseStartUpdates((QGeoSatelliteInfoSource*)self);
}

void q_geosatelliteinfosource_stop_updates(void* self) {
    QGeoSatelliteInfoSource_StopUpdates((QGeoSatelliteInfoSource*)self);
}

void q_geosatelliteinfosource_on_stop_updates(void* self, void (*callback)()) {
    QGeoSatelliteInfoSource_OnStopUpdates((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_qbase_stop_updates(void* self) {
    QGeoSatelliteInfoSource_QBaseStopUpdates((QGeoSatelliteInfoSource*)self);
}

void q_geosatelliteinfosource_request_update(void* self, int timeout) {
    QGeoSatelliteInfoSource_RequestUpdate((QGeoSatelliteInfoSource*)self, timeout);
}

void q_geosatelliteinfosource_on_request_update(void* self, void (*callback)(void*, int)) {
    QGeoSatelliteInfoSource_OnRequestUpdate((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_qbase_request_update(void* self, int timeout) {
    QGeoSatelliteInfoSource_QBaseRequestUpdate((QGeoSatelliteInfoSource*)self, timeout);
}

void q_geosatelliteinfosource_satellites_in_view_updated(void* self, libqt_list /* of QGeoSatelliteInfo* */ satellites) {
    QGeoSatelliteInfoSource_SatellitesInViewUpdated((QGeoSatelliteInfoSource*)self, satellites);
}

void q_geosatelliteinfosource_on_satellites_in_view_updated(void* self, void (*callback)(void*, libqt_list /* of QGeoSatelliteInfo* */)) {
    QGeoSatelliteInfoSource_Connect_SatellitesInViewUpdated((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_satellites_in_use_updated(void* self, libqt_list /* of QGeoSatelliteInfo* */ satellites) {
    QGeoSatelliteInfoSource_SatellitesInUseUpdated((QGeoSatelliteInfoSource*)self, satellites);
}

void q_geosatelliteinfosource_on_satellites_in_use_updated(void* self, void (*callback)(void*, libqt_list /* of QGeoSatelliteInfo* */)) {
    QGeoSatelliteInfoSource_Connect_SatellitesInUseUpdated((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_error_occurred(void* self, int32_t param1) {
    QGeoSatelliteInfoSource_ErrorOccurred((QGeoSatelliteInfoSource*)self, param1);
}

void q_geosatelliteinfosource_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QGeoSatelliteInfoSource_Connect_ErrorOccurred((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

const char* q_geosatelliteinfosource_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geosatelliteinfosource_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geosatelliteinfosource_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geosatelliteinfosource_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_geosatelliteinfosource_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_geosatelliteinfosource_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_geosatelliteinfosource_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_geosatelliteinfosource_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_geosatelliteinfosource_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_geosatelliteinfosource_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_geosatelliteinfosource_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_geosatelliteinfosource_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_geosatelliteinfosource_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_geosatelliteinfosource_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_geosatelliteinfosource_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_geosatelliteinfosource_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_geosatelliteinfosource_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_geosatelliteinfosource_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_geosatelliteinfosource_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_geosatelliteinfosource_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_geosatelliteinfosource_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_geosatelliteinfosource_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_geosatelliteinfosource_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_geosatelliteinfosource_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_geosatelliteinfosource_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_geosatelliteinfosource_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_geosatelliteinfosource_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_geosatelliteinfosource_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_geosatelliteinfosource_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_geosatelliteinfosource_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_geosatelliteinfosource_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_geosatelliteinfosource_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geosatelliteinfosource_dynamic_property_names\n");
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

QBindingStorage* q_geosatelliteinfosource_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_geosatelliteinfosource_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_geosatelliteinfosource_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_geosatelliteinfosource_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_geosatelliteinfosource_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_geosatelliteinfosource_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_geosatelliteinfosource_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_geosatelliteinfosource_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_geosatelliteinfosource_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_geosatelliteinfosource_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_geosatelliteinfosource_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_geosatelliteinfosource_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_geosatelliteinfosource_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_geosatelliteinfosource_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_geosatelliteinfosource_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_geosatelliteinfosource_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_geosatelliteinfosource_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_geosatelliteinfosource_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_geosatelliteinfosource_event(void* self, void* event) {
    return QGeoSatelliteInfoSource_Event((QGeoSatelliteInfoSource*)self, (QEvent*)event);
}

bool q_geosatelliteinfosource_qbase_event(void* self, void* event) {
    return QGeoSatelliteInfoSource_QBaseEvent((QGeoSatelliteInfoSource*)self, (QEvent*)event);
}

void q_geosatelliteinfosource_on_event(void* self, bool (*callback)(void*, void*)) {
    QGeoSatelliteInfoSource_OnEvent((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

bool q_geosatelliteinfosource_event_filter(void* self, void* watched, void* event) {
    return QGeoSatelliteInfoSource_EventFilter((QGeoSatelliteInfoSource*)self, (QObject*)watched, (QEvent*)event);
}

bool q_geosatelliteinfosource_qbase_event_filter(void* self, void* watched, void* event) {
    return QGeoSatelliteInfoSource_QBaseEventFilter((QGeoSatelliteInfoSource*)self, (QObject*)watched, (QEvent*)event);
}

void q_geosatelliteinfosource_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGeoSatelliteInfoSource_OnEventFilter((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_timer_event(void* self, void* event) {
    QGeoSatelliteInfoSource_TimerEvent((QGeoSatelliteInfoSource*)self, (QTimerEvent*)event);
}

void q_geosatelliteinfosource_qbase_timer_event(void* self, void* event) {
    QGeoSatelliteInfoSource_QBaseTimerEvent((QGeoSatelliteInfoSource*)self, (QTimerEvent*)event);
}

void q_geosatelliteinfosource_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGeoSatelliteInfoSource_OnTimerEvent((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_child_event(void* self, void* event) {
    QGeoSatelliteInfoSource_ChildEvent((QGeoSatelliteInfoSource*)self, (QChildEvent*)event);
}

void q_geosatelliteinfosource_qbase_child_event(void* self, void* event) {
    QGeoSatelliteInfoSource_QBaseChildEvent((QGeoSatelliteInfoSource*)self, (QChildEvent*)event);
}

void q_geosatelliteinfosource_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGeoSatelliteInfoSource_OnChildEvent((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_custom_event(void* self, void* event) {
    QGeoSatelliteInfoSource_CustomEvent((QGeoSatelliteInfoSource*)self, (QEvent*)event);
}

void q_geosatelliteinfosource_qbase_custom_event(void* self, void* event) {
    QGeoSatelliteInfoSource_QBaseCustomEvent((QGeoSatelliteInfoSource*)self, (QEvent*)event);
}

void q_geosatelliteinfosource_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGeoSatelliteInfoSource_OnCustomEvent((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_connect_notify(void* self, void* signal) {
    QGeoSatelliteInfoSource_ConnectNotify((QGeoSatelliteInfoSource*)self, (QMetaMethod*)signal);
}

void q_geosatelliteinfosource_qbase_connect_notify(void* self, void* signal) {
    QGeoSatelliteInfoSource_QBaseConnectNotify((QGeoSatelliteInfoSource*)self, (QMetaMethod*)signal);
}

void q_geosatelliteinfosource_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoSatelliteInfoSource_OnConnectNotify((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_disconnect_notify(void* self, void* signal) {
    QGeoSatelliteInfoSource_DisconnectNotify((QGeoSatelliteInfoSource*)self, (QMetaMethod*)signal);
}

void q_geosatelliteinfosource_qbase_disconnect_notify(void* self, void* signal) {
    QGeoSatelliteInfoSource_QBaseDisconnectNotify((QGeoSatelliteInfoSource*)self, (QMetaMethod*)signal);
}

void q_geosatelliteinfosource_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoSatelliteInfoSource_OnDisconnectNotify((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

QObject* q_geosatelliteinfosource_sender(void* self) {
    return QGeoSatelliteInfoSource_Sender((QGeoSatelliteInfoSource*)self);
}

QObject* q_geosatelliteinfosource_qbase_sender(void* self) {
    return QGeoSatelliteInfoSource_QBaseSender((QGeoSatelliteInfoSource*)self);
}

void q_geosatelliteinfosource_on_sender(void* self, QObject* (*callback)()) {
    QGeoSatelliteInfoSource_OnSender((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

int32_t q_geosatelliteinfosource_sender_signal_index(void* self) {
    return QGeoSatelliteInfoSource_SenderSignalIndex((QGeoSatelliteInfoSource*)self);
}

int32_t q_geosatelliteinfosource_qbase_sender_signal_index(void* self) {
    return QGeoSatelliteInfoSource_QBaseSenderSignalIndex((QGeoSatelliteInfoSource*)self);
}

void q_geosatelliteinfosource_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGeoSatelliteInfoSource_OnSenderSignalIndex((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

int32_t q_geosatelliteinfosource_receivers(void* self, const char* signal) {
    return QGeoSatelliteInfoSource_Receivers((QGeoSatelliteInfoSource*)self, signal);
}

int32_t q_geosatelliteinfosource_qbase_receivers(void* self, const char* signal) {
    return QGeoSatelliteInfoSource_QBaseReceivers((QGeoSatelliteInfoSource*)self, signal);
}

void q_geosatelliteinfosource_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGeoSatelliteInfoSource_OnReceivers((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

bool q_geosatelliteinfosource_is_signal_connected(void* self, void* signal) {
    return QGeoSatelliteInfoSource_IsSignalConnected((QGeoSatelliteInfoSource*)self, (QMetaMethod*)signal);
}

bool q_geosatelliteinfosource_qbase_is_signal_connected(void* self, void* signal) {
    return QGeoSatelliteInfoSource_QBaseIsSignalConnected((QGeoSatelliteInfoSource*)self, (QMetaMethod*)signal);
}

void q_geosatelliteinfosource_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGeoSatelliteInfoSource_OnIsSignalConnected((QGeoSatelliteInfoSource*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_geosatelliteinfosource_delete(void* self) {
    QGeoSatelliteInfoSource_Delete((QGeoSatelliteInfoSource*)(self));
}
