#include "../libqcoreevent.hpp"
#include "libqgeocodereply.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqgeocodingmanagerengine.hpp"
#include "libqgeocodingmanagerengine.h"

QGeoCodingManagerEngine* q_geocodingmanagerengine_new(libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geocodingmanagerengine_new\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geocodingmanagerengine_new\n");
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

    QGeoCodingManagerEngine* _out = QGeoCodingManagerEngine_new(parameters_ret);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

QGeoCodingManagerEngine* q_geocodingmanagerengine_new2(libqt_map /* of const char* to QVariant* */ parameters, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geocodingmanagerengine_new2\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geocodingmanagerengine_new2\n");
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

    QGeoCodingManagerEngine* _out = QGeoCodingManagerEngine_new2(parameters_ret, (QObject*)parent);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

const QMetaObject* q_geocodingmanagerengine_meta_object(void* self) {
    return QGeoCodingManagerEngine_MetaObject((QGeoCodingManagerEngine*)self);
}

void q_geocodingmanagerengine_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGeoCodingManagerEngine_OnMetaObject((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

const QMetaObject* q_geocodingmanagerengine_qbase_meta_object(void* self) {
    return QGeoCodingManagerEngine_QBaseMetaObject((QGeoCodingManagerEngine*)self);
}

void* q_geocodingmanagerengine_metacast(void* self, const char* param1) {
    return QGeoCodingManagerEngine_Metacast((QGeoCodingManagerEngine*)self, param1);
}

void q_geocodingmanagerengine_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGeoCodingManagerEngine_OnMetacast((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

void* q_geocodingmanagerengine_qbase_metacast(void* self, const char* param1) {
    return QGeoCodingManagerEngine_QBaseMetacast((QGeoCodingManagerEngine*)self, param1);
}

int32_t q_geocodingmanagerengine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoCodingManagerEngine_Metacall((QGeoCodingManagerEngine*)self, param1, param2, param3);
}

void q_geocodingmanagerengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGeoCodingManagerEngine_OnMetacall((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

int32_t q_geocodingmanagerengine_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoCodingManagerEngine_QBaseMetacall((QGeoCodingManagerEngine*)self, param1, param2, param3);
}

const char* q_geocodingmanagerengine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geocodingmanagerengine_manager_name(void* self) {
    libqt_string _str = QGeoCodingManagerEngine_ManagerName((QGeoCodingManagerEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_geocodingmanagerengine_manager_version(void* self) {
    return QGeoCodingManagerEngine_ManagerVersion((QGeoCodingManagerEngine*)self);
}

QGeoCodeReply* q_geocodingmanagerengine_geocode(void* self, void* address, void* bounds) {
    return QGeoCodingManagerEngine_Geocode((QGeoCodingManagerEngine*)self, (QGeoAddress*)address, (QGeoShape*)bounds);
}

void q_geocodingmanagerengine_on_geocode(void* self, QGeoCodeReply* (*callback)(void*, void*, void*)) {
    QGeoCodingManagerEngine_OnGeocode((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

QGeoCodeReply* q_geocodingmanagerengine_qbase_geocode(void* self, void* address, void* bounds) {
    return QGeoCodingManagerEngine_QBaseGeocode((QGeoCodingManagerEngine*)self, (QGeoAddress*)address, (QGeoShape*)bounds);
}

QGeoCodeReply* q_geocodingmanagerengine_geocode2(void* self, const char* address, int limit, int offset, void* bounds) {
    return QGeoCodingManagerEngine_Geocode2((QGeoCodingManagerEngine*)self, qstring(address), limit, offset, (QGeoShape*)bounds);
}

void q_geocodingmanagerengine_on_geocode2(void* self, QGeoCodeReply* (*callback)(void*, const char*, int, int, void*)) {
    QGeoCodingManagerEngine_OnGeocode2((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

QGeoCodeReply* q_geocodingmanagerengine_qbase_geocode2(void* self, const char* address, int limit, int offset, void* bounds) {
    return QGeoCodingManagerEngine_QBaseGeocode2((QGeoCodingManagerEngine*)self, qstring(address), limit, offset, (QGeoShape*)bounds);
}

QGeoCodeReply* q_geocodingmanagerengine_reverse_geocode(void* self, void* coordinate, void* bounds) {
    return QGeoCodingManagerEngine_ReverseGeocode((QGeoCodingManagerEngine*)self, (QGeoCoordinate*)coordinate, (QGeoShape*)bounds);
}

void q_geocodingmanagerengine_on_reverse_geocode(void* self, QGeoCodeReply* (*callback)(void*, void*, void*)) {
    QGeoCodingManagerEngine_OnReverseGeocode((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

QGeoCodeReply* q_geocodingmanagerengine_qbase_reverse_geocode(void* self, void* coordinate, void* bounds) {
    return QGeoCodingManagerEngine_QBaseReverseGeocode((QGeoCodingManagerEngine*)self, (QGeoCoordinate*)coordinate, (QGeoShape*)bounds);
}

void q_geocodingmanagerengine_set_locale(void* self, void* locale) {
    QGeoCodingManagerEngine_SetLocale((QGeoCodingManagerEngine*)self, (QLocale*)locale);
}

QLocale* q_geocodingmanagerengine_locale(void* self) {
    return QGeoCodingManagerEngine_Locale((QGeoCodingManagerEngine*)self);
}

void q_geocodingmanagerengine_finished(void* self, void* reply) {
    QGeoCodingManagerEngine_Finished((QGeoCodingManagerEngine*)self, (QGeoCodeReply*)reply);
}

void q_geocodingmanagerengine_on_finished(void* self, void (*callback)(void*, void*)) {
    QGeoCodingManagerEngine_Connect_Finished((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

void q_geocodingmanagerengine_error_occurred(void* self, void* reply, int32_t error) {
    QGeoCodingManagerEngine_ErrorOccurred((QGeoCodingManagerEngine*)self, (QGeoCodeReply*)reply, error);
}

void q_geocodingmanagerengine_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t)) {
    QGeoCodingManagerEngine_Connect_ErrorOccurred((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

const char* q_geocodingmanagerengine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geocodingmanagerengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geocodingmanagerengine_error_occurred3(void* self, void* reply, int32_t error, const char* errorString) {
    QGeoCodingManagerEngine_ErrorOccurred3((QGeoCodingManagerEngine*)self, (QGeoCodeReply*)reply, error, qstring(errorString));
}

void q_geocodingmanagerengine_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*)) {
    QGeoCodingManagerEngine_Connect_ErrorOccurred3((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

const char* q_geocodingmanagerengine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geocodingmanagerengine_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_geocodingmanagerengine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_geocodingmanagerengine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_geocodingmanagerengine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_geocodingmanagerengine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_geocodingmanagerengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_geocodingmanagerengine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_geocodingmanagerengine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_geocodingmanagerengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_geocodingmanagerengine_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_geocodingmanagerengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_geocodingmanagerengine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_geocodingmanagerengine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_geocodingmanagerengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_geocodingmanagerengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_geocodingmanagerengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_geocodingmanagerengine_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_geocodingmanagerengine_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_geocodingmanagerengine_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_geocodingmanagerengine_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_geocodingmanagerengine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_geocodingmanagerengine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_geocodingmanagerengine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_geocodingmanagerengine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_geocodingmanagerengine_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geocodingmanagerengine_dynamic_property_names\n");
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

QBindingStorage* q_geocodingmanagerengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_geocodingmanagerengine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_geocodingmanagerengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_geocodingmanagerengine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_geocodingmanagerengine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_geocodingmanagerengine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_geocodingmanagerengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_geocodingmanagerengine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_geocodingmanagerengine_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_geocodingmanagerengine_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_geocodingmanagerengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_geocodingmanagerengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_geocodingmanagerengine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_geocodingmanagerengine_event(void* self, void* event) {
    return QGeoCodingManagerEngine_Event((QGeoCodingManagerEngine*)self, (QEvent*)event);
}

bool q_geocodingmanagerengine_qbase_event(void* self, void* event) {
    return QGeoCodingManagerEngine_QBaseEvent((QGeoCodingManagerEngine*)self, (QEvent*)event);
}

void q_geocodingmanagerengine_on_event(void* self, bool (*callback)(void*, void*)) {
    QGeoCodingManagerEngine_OnEvent((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

bool q_geocodingmanagerengine_event_filter(void* self, void* watched, void* event) {
    return QGeoCodingManagerEngine_EventFilter((QGeoCodingManagerEngine*)self, (QObject*)watched, (QEvent*)event);
}

bool q_geocodingmanagerengine_qbase_event_filter(void* self, void* watched, void* event) {
    return QGeoCodingManagerEngine_QBaseEventFilter((QGeoCodingManagerEngine*)self, (QObject*)watched, (QEvent*)event);
}

void q_geocodingmanagerengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGeoCodingManagerEngine_OnEventFilter((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

void q_geocodingmanagerengine_timer_event(void* self, void* event) {
    QGeoCodingManagerEngine_TimerEvent((QGeoCodingManagerEngine*)self, (QTimerEvent*)event);
}

void q_geocodingmanagerengine_qbase_timer_event(void* self, void* event) {
    QGeoCodingManagerEngine_QBaseTimerEvent((QGeoCodingManagerEngine*)self, (QTimerEvent*)event);
}

void q_geocodingmanagerengine_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGeoCodingManagerEngine_OnTimerEvent((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

void q_geocodingmanagerengine_child_event(void* self, void* event) {
    QGeoCodingManagerEngine_ChildEvent((QGeoCodingManagerEngine*)self, (QChildEvent*)event);
}

void q_geocodingmanagerengine_qbase_child_event(void* self, void* event) {
    QGeoCodingManagerEngine_QBaseChildEvent((QGeoCodingManagerEngine*)self, (QChildEvent*)event);
}

void q_geocodingmanagerengine_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGeoCodingManagerEngine_OnChildEvent((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

void q_geocodingmanagerengine_custom_event(void* self, void* event) {
    QGeoCodingManagerEngine_CustomEvent((QGeoCodingManagerEngine*)self, (QEvent*)event);
}

void q_geocodingmanagerengine_qbase_custom_event(void* self, void* event) {
    QGeoCodingManagerEngine_QBaseCustomEvent((QGeoCodingManagerEngine*)self, (QEvent*)event);
}

void q_geocodingmanagerengine_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGeoCodingManagerEngine_OnCustomEvent((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

void q_geocodingmanagerengine_connect_notify(void* self, void* signal) {
    QGeoCodingManagerEngine_ConnectNotify((QGeoCodingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_geocodingmanagerengine_qbase_connect_notify(void* self, void* signal) {
    QGeoCodingManagerEngine_QBaseConnectNotify((QGeoCodingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_geocodingmanagerengine_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoCodingManagerEngine_OnConnectNotify((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

void q_geocodingmanagerengine_disconnect_notify(void* self, void* signal) {
    QGeoCodingManagerEngine_DisconnectNotify((QGeoCodingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_geocodingmanagerengine_qbase_disconnect_notify(void* self, void* signal) {
    QGeoCodingManagerEngine_QBaseDisconnectNotify((QGeoCodingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_geocodingmanagerengine_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoCodingManagerEngine_OnDisconnectNotify((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

QObject* q_geocodingmanagerengine_sender(void* self) {
    return QGeoCodingManagerEngine_Sender((QGeoCodingManagerEngine*)self);
}

QObject* q_geocodingmanagerengine_qbase_sender(void* self) {
    return QGeoCodingManagerEngine_QBaseSender((QGeoCodingManagerEngine*)self);
}

void q_geocodingmanagerengine_on_sender(void* self, QObject* (*callback)()) {
    QGeoCodingManagerEngine_OnSender((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

int32_t q_geocodingmanagerengine_sender_signal_index(void* self) {
    return QGeoCodingManagerEngine_SenderSignalIndex((QGeoCodingManagerEngine*)self);
}

int32_t q_geocodingmanagerengine_qbase_sender_signal_index(void* self) {
    return QGeoCodingManagerEngine_QBaseSenderSignalIndex((QGeoCodingManagerEngine*)self);
}

void q_geocodingmanagerengine_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGeoCodingManagerEngine_OnSenderSignalIndex((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

int32_t q_geocodingmanagerengine_receivers(void* self, const char* signal) {
    return QGeoCodingManagerEngine_Receivers((QGeoCodingManagerEngine*)self, signal);
}

int32_t q_geocodingmanagerengine_qbase_receivers(void* self, const char* signal) {
    return QGeoCodingManagerEngine_QBaseReceivers((QGeoCodingManagerEngine*)self, signal);
}

void q_geocodingmanagerengine_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGeoCodingManagerEngine_OnReceivers((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

bool q_geocodingmanagerengine_is_signal_connected(void* self, void* signal) {
    return QGeoCodingManagerEngine_IsSignalConnected((QGeoCodingManagerEngine*)self, (QMetaMethod*)signal);
}

bool q_geocodingmanagerengine_qbase_is_signal_connected(void* self, void* signal) {
    return QGeoCodingManagerEngine_QBaseIsSignalConnected((QGeoCodingManagerEngine*)self, (QMetaMethod*)signal);
}

void q_geocodingmanagerengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGeoCodingManagerEngine_OnIsSignalConnected((QGeoCodingManagerEngine*)self, (intptr_t)callback);
}

void q_geocodingmanagerengine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_geocodingmanagerengine_delete(void* self) {
    QGeoCodingManagerEngine_Delete((QGeoCodingManagerEngine*)(self));
}
