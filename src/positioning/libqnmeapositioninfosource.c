#include "../libqbytearrayview.hpp"
#include "../libqcoreevent.hpp"
#include "libqgeopositioninfo.hpp"
#include "libqgeopositioninfosource.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqnmeapositioninfosource.hpp"
#include "libqnmeapositioninfosource.h"

QNmeaPositionInfoSource* q_nmeapositioninfosource_new(int32_t updateMode) {
    return QNmeaPositionInfoSource_new(updateMode);
}

QNmeaPositionInfoSource* q_nmeapositioninfosource_new2(int32_t updateMode, void* parent) {
    return QNmeaPositionInfoSource_new2(updateMode, (QObject*)parent);
}

const QMetaObject* q_nmeapositioninfosource_meta_object(void* self) {
    return QNmeaPositionInfoSource_MetaObject((QNmeaPositionInfoSource*)self);
}

void* q_nmeapositioninfosource_metacast(void* self, const char* param1) {
    return QNmeaPositionInfoSource_Metacast((QNmeaPositionInfoSource*)self, param1);
}

int32_t q_nmeapositioninfosource_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QNmeaPositionInfoSource_Metacall((QNmeaPositionInfoSource*)self, param1, param2, param3);
}

void q_nmeapositioninfosource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QNmeaPositionInfoSource_OnMetacall((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_nmeapositioninfosource_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QNmeaPositionInfoSource_QBaseMetacall((QNmeaPositionInfoSource*)self, param1, param2, param3);
}

const char* q_nmeapositioninfosource_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_nmeapositioninfosource_set_user_equivalent_range_error(void* self, double uere) {
    QNmeaPositionInfoSource_SetUserEquivalentRangeError((QNmeaPositionInfoSource*)self, uere);
}

double q_nmeapositioninfosource_user_equivalent_range_error(void* self) {
    return QNmeaPositionInfoSource_UserEquivalentRangeError((QNmeaPositionInfoSource*)self);
}

int32_t q_nmeapositioninfosource_update_mode(void* self) {
    return QNmeaPositionInfoSource_UpdateMode((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_set_device(void* self, void* source) {
    QNmeaPositionInfoSource_SetDevice((QNmeaPositionInfoSource*)self, (QIODevice*)source);
}

QIODevice* q_nmeapositioninfosource_device(void* self) {
    return QNmeaPositionInfoSource_Device((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_set_update_interval(void* self, int msec) {
    QNmeaPositionInfoSource_SetUpdateInterval((QNmeaPositionInfoSource*)self, msec);
}

void q_nmeapositioninfosource_on_set_update_interval(void* self, void (*callback)(void*, int)) {
    QNmeaPositionInfoSource_OnSetUpdateInterval((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_qbase_set_update_interval(void* self, int msec) {
    QNmeaPositionInfoSource_QBaseSetUpdateInterval((QNmeaPositionInfoSource*)self, msec);
}

QGeoPositionInfo* q_nmeapositioninfosource_last_known_position(void* self, bool fromSatellitePositioningMethodsOnly) {
    return QNmeaPositionInfoSource_LastKnownPosition((QNmeaPositionInfoSource*)self, fromSatellitePositioningMethodsOnly);
}

void q_nmeapositioninfosource_on_last_known_position(void* self, QGeoPositionInfo* (*callback)(void*, bool)) {
    QNmeaPositionInfoSource_OnLastKnownPosition((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

QGeoPositionInfo* q_nmeapositioninfosource_qbase_last_known_position(void* self, bool fromSatellitePositioningMethodsOnly) {
    return QNmeaPositionInfoSource_QBaseLastKnownPosition((QNmeaPositionInfoSource*)self, fromSatellitePositioningMethodsOnly);
}

int32_t q_nmeapositioninfosource_supported_positioning_methods(void* self) {
    return QNmeaPositionInfoSource_SupportedPositioningMethods((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_on_supported_positioning_methods(void* self, int32_t (*callback)()) {
    QNmeaPositionInfoSource_OnSupportedPositioningMethods((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_nmeapositioninfosource_qbase_supported_positioning_methods(void* self) {
    return QNmeaPositionInfoSource_QBaseSupportedPositioningMethods((QNmeaPositionInfoSource*)self);
}

int32_t q_nmeapositioninfosource_minimum_update_interval(void* self) {
    return QNmeaPositionInfoSource_MinimumUpdateInterval((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_on_minimum_update_interval(void* self, int32_t (*callback)()) {
    QNmeaPositionInfoSource_OnMinimumUpdateInterval((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_nmeapositioninfosource_qbase_minimum_update_interval(void* self) {
    return QNmeaPositionInfoSource_QBaseMinimumUpdateInterval((QNmeaPositionInfoSource*)self);
}

int32_t q_nmeapositioninfosource_error(void* self) {
    return QNmeaPositionInfoSource_Error((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_on_error(void* self, int32_t (*callback)()) {
    QNmeaPositionInfoSource_OnError((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_nmeapositioninfosource_qbase_error(void* self) {
    return QNmeaPositionInfoSource_QBaseError((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_start_updates(void* self) {
    QNmeaPositionInfoSource_StartUpdates((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_on_start_updates(void* self, void (*callback)()) {
    QNmeaPositionInfoSource_OnStartUpdates((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_qbase_start_updates(void* self) {
    QNmeaPositionInfoSource_QBaseStartUpdates((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_stop_updates(void* self) {
    QNmeaPositionInfoSource_StopUpdates((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_on_stop_updates(void* self, void (*callback)()) {
    QNmeaPositionInfoSource_OnStopUpdates((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_qbase_stop_updates(void* self) {
    QNmeaPositionInfoSource_QBaseStopUpdates((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_request_update(void* self, int timeout) {
    QNmeaPositionInfoSource_RequestUpdate((QNmeaPositionInfoSource*)self, timeout);
}

void q_nmeapositioninfosource_on_request_update(void* self, void (*callback)(void*, int)) {
    QNmeaPositionInfoSource_OnRequestUpdate((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_qbase_request_update(void* self, int timeout) {
    QNmeaPositionInfoSource_QBaseRequestUpdate((QNmeaPositionInfoSource*)self, timeout);
}

bool q_nmeapositioninfosource_parse_pos_info_from_nmea_data(void* self, const char* data, int size, void* posInfo, bool* hasFix) {
    return QNmeaPositionInfoSource_ParsePosInfoFromNmeaData((QNmeaPositionInfoSource*)self, data, size, (QGeoPositionInfo*)posInfo, (bool*)hasFix);
}

void q_nmeapositioninfosource_on_parse_pos_info_from_nmea_data(void* self, bool (*callback)(void*, const char*, int, void*, bool*)) {
    QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

bool q_nmeapositioninfosource_qbase_parse_pos_info_from_nmea_data(void* self, const char* data, int size, void* posInfo, bool* hasFix) {
    return QNmeaPositionInfoSource_QBaseParsePosInfoFromNmeaData((QNmeaPositionInfoSource*)self, data, size, (QGeoPositionInfo*)posInfo, (bool*)hasFix);
}

bool q_nmeapositioninfosource_parse_pos_info_from_nmea_data2(void* self, const char* data, void* posInfo, bool* hasFix) {
    return QNmeaPositionInfoSource_ParsePosInfoFromNmeaData2((QNmeaPositionInfoSource*)self, qstring(data), (QGeoPositionInfo*)posInfo, (bool*)hasFix);
}

void q_nmeapositioninfosource_on_parse_pos_info_from_nmea_data2(void* self, bool (*callback)(void*, const char*, void*, bool*)) {
    QNmeaPositionInfoSource_OnParsePosInfoFromNmeaData2((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

bool q_nmeapositioninfosource_qbase_parse_pos_info_from_nmea_data2(void* self, const char* data, void* posInfo, bool* hasFix) {
    return QNmeaPositionInfoSource_QBaseParsePosInfoFromNmeaData2((QNmeaPositionInfoSource*)self, qstring(data), (QGeoPositionInfo*)posInfo, (bool*)hasFix);
}

void q_nmeapositioninfosource_set_error(void* self, int32_t positionError) {
    QNmeaPositionInfoSource_SetError((QNmeaPositionInfoSource*)self, positionError);
}

void q_nmeapositioninfosource_on_set_error(void* self, void (*callback)(void*, int32_t)) {
    QNmeaPositionInfoSource_OnSetError((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_qbase_set_error(void* self, int32_t positionError) {
    QNmeaPositionInfoSource_QBaseSetError((QNmeaPositionInfoSource*)self, positionError);
}

const char* q_nmeapositioninfosource_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_nmeapositioninfosource_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_nmeapositioninfosource_update_interval(void* self) {
    return QGeoPositionInfoSource_UpdateInterval((QGeoPositionInfoSource*)self);
}

int32_t q_nmeapositioninfosource_preferred_positioning_methods(void* self) {
    return QGeoPositionInfoSource_PreferredPositioningMethods((QGeoPositionInfoSource*)self);
}

const char* q_nmeapositioninfosource_source_name(void* self) {
    libqt_string _str = QGeoPositionInfoSource_SourceName((QGeoPositionInfoSource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGeoPositionInfoSource* q_nmeapositioninfosource_create_default_source(void* parent) {
    return QGeoPositionInfoSource_CreateDefaultSource((QObject*)parent);
}

QGeoPositionInfoSource* q_nmeapositioninfosource_create_default_source2(libqt_map /* of const char* to QVariant* */ parameters, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_nmeapositioninfosource_create_default_source2\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_nmeapositioninfosource_create_default_source2\n");
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

QGeoPositionInfoSource* q_nmeapositioninfosource_create_source(const char* sourceName, void* parent) {
    return QGeoPositionInfoSource_CreateSource(qstring(sourceName), (QObject*)parent);
}

QGeoPositionInfoSource* q_nmeapositioninfosource_create_source2(const char* sourceName, libqt_map /* of const char* to QVariant* */ parameters, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_nmeapositioninfosource_create_source2\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_nmeapositioninfosource_create_source2\n");
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

const char** q_nmeapositioninfosource_available_sources() {
    libqt_list _arr = QGeoPositionInfoSource_AvailableSources();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_nmeapositioninfosource_available_sources\n");
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

void q_nmeapositioninfosource_position_updated(void* self, void* update) {
    QGeoPositionInfoSource_PositionUpdated((QGeoPositionInfoSource*)self, (QGeoPositionInfo*)update);
}

void q_nmeapositioninfosource_on_position_updated(void* self, void (*callback)(void*, void*)) {
    QGeoPositionInfoSource_Connect_PositionUpdated((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_error_occurred(void* self, int32_t param1) {
    QGeoPositionInfoSource_ErrorOccurred((QGeoPositionInfoSource*)self, param1);
}

void q_nmeapositioninfosource_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QGeoPositionInfoSource_Connect_ErrorOccurred((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_supported_positioning_methods_changed(void* self) {
    QGeoPositionInfoSource_SupportedPositioningMethodsChanged((QGeoPositionInfoSource*)self);
}

void q_nmeapositioninfosource_on_supported_positioning_methods_changed(void* self, void (*callback)(void*)) {
    QGeoPositionInfoSource_Connect_SupportedPositioningMethodsChanged((QGeoPositionInfoSource*)self, (intptr_t)callback);
}

const char* q_nmeapositioninfosource_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_nmeapositioninfosource_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_nmeapositioninfosource_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_nmeapositioninfosource_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_nmeapositioninfosource_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_nmeapositioninfosource_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_nmeapositioninfosource_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_nmeapositioninfosource_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_nmeapositioninfosource_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_nmeapositioninfosource_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_nmeapositioninfosource_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_nmeapositioninfosource_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_nmeapositioninfosource_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_nmeapositioninfosource_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_nmeapositioninfosource_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_nmeapositioninfosource_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_nmeapositioninfosource_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_nmeapositioninfosource_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_nmeapositioninfosource_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_nmeapositioninfosource_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_nmeapositioninfosource_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_nmeapositioninfosource_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_nmeapositioninfosource_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_nmeapositioninfosource_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_nmeapositioninfosource_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_nmeapositioninfosource_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_nmeapositioninfosource_dynamic_property_names\n");
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

QBindingStorage* q_nmeapositioninfosource_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_nmeapositioninfosource_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_nmeapositioninfosource_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_nmeapositioninfosource_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_nmeapositioninfosource_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_nmeapositioninfosource_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_nmeapositioninfosource_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_nmeapositioninfosource_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_nmeapositioninfosource_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_nmeapositioninfosource_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_nmeapositioninfosource_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_nmeapositioninfosource_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_nmeapositioninfosource_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_nmeapositioninfosource_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_set_preferred_positioning_methods(void* self, int32_t methods) {
    QNmeaPositionInfoSource_SetPreferredPositioningMethods((QNmeaPositionInfoSource*)self, methods);
}

void q_nmeapositioninfosource_qbase_set_preferred_positioning_methods(void* self, int32_t methods) {
    QNmeaPositionInfoSource_QBaseSetPreferredPositioningMethods((QNmeaPositionInfoSource*)self, methods);
}

void q_nmeapositioninfosource_on_set_preferred_positioning_methods(void* self, void (*callback)(void*, int32_t)) {
    QNmeaPositionInfoSource_OnSetPreferredPositioningMethods((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

bool q_nmeapositioninfosource_set_backend_property(void* self, const char* name, void* value) {
    return QNmeaPositionInfoSource_SetBackendProperty((QNmeaPositionInfoSource*)self, qstring(name), (QVariant*)value);
}

bool q_nmeapositioninfosource_qbase_set_backend_property(void* self, const char* name, void* value) {
    return QNmeaPositionInfoSource_QBaseSetBackendProperty((QNmeaPositionInfoSource*)self, qstring(name), (QVariant*)value);
}

void q_nmeapositioninfosource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, void*)) {
    QNmeaPositionInfoSource_OnSetBackendProperty((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

QVariant* q_nmeapositioninfosource_backend_property(void* self, const char* name) {
    return QNmeaPositionInfoSource_BackendProperty((QNmeaPositionInfoSource*)self, qstring(name));
}

QVariant* q_nmeapositioninfosource_qbase_backend_property(void* self, const char* name) {
    return QNmeaPositionInfoSource_QBaseBackendProperty((QNmeaPositionInfoSource*)self, qstring(name));
}

void q_nmeapositioninfosource_on_backend_property(void* self, QVariant* (*callback)(void*, const char*)) {
    QNmeaPositionInfoSource_OnBackendProperty((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

bool q_nmeapositioninfosource_event(void* self, void* event) {
    return QNmeaPositionInfoSource_Event((QNmeaPositionInfoSource*)self, (QEvent*)event);
}

bool q_nmeapositioninfosource_qbase_event(void* self, void* event) {
    return QNmeaPositionInfoSource_QBaseEvent((QNmeaPositionInfoSource*)self, (QEvent*)event);
}

void q_nmeapositioninfosource_on_event(void* self, bool (*callback)(void*, void*)) {
    QNmeaPositionInfoSource_OnEvent((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

bool q_nmeapositioninfosource_event_filter(void* self, void* watched, void* event) {
    return QNmeaPositionInfoSource_EventFilter((QNmeaPositionInfoSource*)self, (QObject*)watched, (QEvent*)event);
}

bool q_nmeapositioninfosource_qbase_event_filter(void* self, void* watched, void* event) {
    return QNmeaPositionInfoSource_QBaseEventFilter((QNmeaPositionInfoSource*)self, (QObject*)watched, (QEvent*)event);
}

void q_nmeapositioninfosource_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QNmeaPositionInfoSource_OnEventFilter((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_timer_event(void* self, void* event) {
    QNmeaPositionInfoSource_TimerEvent((QNmeaPositionInfoSource*)self, (QTimerEvent*)event);
}

void q_nmeapositioninfosource_qbase_timer_event(void* self, void* event) {
    QNmeaPositionInfoSource_QBaseTimerEvent((QNmeaPositionInfoSource*)self, (QTimerEvent*)event);
}

void q_nmeapositioninfosource_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QNmeaPositionInfoSource_OnTimerEvent((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_child_event(void* self, void* event) {
    QNmeaPositionInfoSource_ChildEvent((QNmeaPositionInfoSource*)self, (QChildEvent*)event);
}

void q_nmeapositioninfosource_qbase_child_event(void* self, void* event) {
    QNmeaPositionInfoSource_QBaseChildEvent((QNmeaPositionInfoSource*)self, (QChildEvent*)event);
}

void q_nmeapositioninfosource_on_child_event(void* self, void (*callback)(void*, void*)) {
    QNmeaPositionInfoSource_OnChildEvent((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_custom_event(void* self, void* event) {
    QNmeaPositionInfoSource_CustomEvent((QNmeaPositionInfoSource*)self, (QEvent*)event);
}

void q_nmeapositioninfosource_qbase_custom_event(void* self, void* event) {
    QNmeaPositionInfoSource_QBaseCustomEvent((QNmeaPositionInfoSource*)self, (QEvent*)event);
}

void q_nmeapositioninfosource_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QNmeaPositionInfoSource_OnCustomEvent((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_connect_notify(void* self, void* signal) {
    QNmeaPositionInfoSource_ConnectNotify((QNmeaPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_nmeapositioninfosource_qbase_connect_notify(void* self, void* signal) {
    QNmeaPositionInfoSource_QBaseConnectNotify((QNmeaPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_nmeapositioninfosource_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QNmeaPositionInfoSource_OnConnectNotify((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_disconnect_notify(void* self, void* signal) {
    QNmeaPositionInfoSource_DisconnectNotify((QNmeaPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_nmeapositioninfosource_qbase_disconnect_notify(void* self, void* signal) {
    QNmeaPositionInfoSource_QBaseDisconnectNotify((QNmeaPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_nmeapositioninfosource_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QNmeaPositionInfoSource_OnDisconnectNotify((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

QObject* q_nmeapositioninfosource_sender(void* self) {
    return QNmeaPositionInfoSource_Sender((QNmeaPositionInfoSource*)self);
}

QObject* q_nmeapositioninfosource_qbase_sender(void* self) {
    return QNmeaPositionInfoSource_QBaseSender((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_on_sender(void* self, QObject* (*callback)()) {
    QNmeaPositionInfoSource_OnSender((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_nmeapositioninfosource_sender_signal_index(void* self) {
    return QNmeaPositionInfoSource_SenderSignalIndex((QNmeaPositionInfoSource*)self);
}

int32_t q_nmeapositioninfosource_qbase_sender_signal_index(void* self) {
    return QNmeaPositionInfoSource_QBaseSenderSignalIndex((QNmeaPositionInfoSource*)self);
}

void q_nmeapositioninfosource_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QNmeaPositionInfoSource_OnSenderSignalIndex((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

int32_t q_nmeapositioninfosource_receivers(void* self, const char* signal) {
    return QNmeaPositionInfoSource_Receivers((QNmeaPositionInfoSource*)self, signal);
}

int32_t q_nmeapositioninfosource_qbase_receivers(void* self, const char* signal) {
    return QNmeaPositionInfoSource_QBaseReceivers((QNmeaPositionInfoSource*)self, signal);
}

void q_nmeapositioninfosource_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QNmeaPositionInfoSource_OnReceivers((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

bool q_nmeapositioninfosource_is_signal_connected(void* self, void* signal) {
    return QNmeaPositionInfoSource_IsSignalConnected((QNmeaPositionInfoSource*)self, (QMetaMethod*)signal);
}

bool q_nmeapositioninfosource_qbase_is_signal_connected(void* self, void* signal) {
    return QNmeaPositionInfoSource_QBaseIsSignalConnected((QNmeaPositionInfoSource*)self, (QMetaMethod*)signal);
}

void q_nmeapositioninfosource_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QNmeaPositionInfoSource_OnIsSignalConnected((QNmeaPositionInfoSource*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_nmeapositioninfosource_delete(void* self) {
    QNmeaPositionInfoSource_Delete((QNmeaPositionInfoSource*)(self));
}
