#include "../libqcoreevent.hpp"
#include "libqgeoroute.hpp"
#include "libqgeorouterequest.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqgeoroutereply.hpp"
#include "libqgeoroutereply.h"

QGeoRouteReply* q_georoutereply_new(int32_t error, const char* errorString) {
    return QGeoRouteReply_new(error, qstring(errorString));
}

QGeoRouteReply* q_georoutereply_new2(int32_t error, const char* errorString, void* parent) {
    return QGeoRouteReply_new2(error, qstring(errorString), (QObject*)parent);
}

const QMetaObject* q_georoutereply_meta_object(void* self) {
    return QGeoRouteReply_MetaObject((QGeoRouteReply*)self);
}

void q_georoutereply_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGeoRouteReply_OnMetaObject((QGeoRouteReply*)self, (intptr_t)callback);
}

const QMetaObject* q_georoutereply_qbase_meta_object(void* self) {
    return QGeoRouteReply_QBaseMetaObject((QGeoRouteReply*)self);
}

void* q_georoutereply_metacast(void* self, const char* param1) {
    return QGeoRouteReply_Metacast((QGeoRouteReply*)self, param1);
}

void q_georoutereply_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGeoRouteReply_OnMetacast((QGeoRouteReply*)self, (intptr_t)callback);
}

void* q_georoutereply_qbase_metacast(void* self, const char* param1) {
    return QGeoRouteReply_QBaseMetacast((QGeoRouteReply*)self, param1);
}

int32_t q_georoutereply_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoRouteReply_Metacall((QGeoRouteReply*)self, param1, param2, param3);
}

void q_georoutereply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGeoRouteReply_OnMetacall((QGeoRouteReply*)self, (intptr_t)callback);
}

int32_t q_georoutereply_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoRouteReply_QBaseMetacall((QGeoRouteReply*)self, param1, param2, param3);
}

const char* q_georoutereply_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_georoutereply_is_finished(void* self) {
    return QGeoRouteReply_IsFinished((QGeoRouteReply*)self);
}

int32_t q_georoutereply_error(void* self) {
    return QGeoRouteReply_Error((QGeoRouteReply*)self);
}

const char* q_georoutereply_error_string(void* self) {
    libqt_string _str = QGeoRouteReply_ErrorString((QGeoRouteReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGeoRouteRequest* q_georoutereply_request(void* self) {
    return QGeoRouteReply_Request((QGeoRouteReply*)self);
}

libqt_list /* of QGeoRoute* */ q_georoutereply_routes(void* self) {
    libqt_list _arr = QGeoRouteReply_Routes((QGeoRouteReply*)self);
    return _arr;
}

void q_georoutereply_abort(void* self) {
    QGeoRouteReply_Abort((QGeoRouteReply*)self);
}

void q_georoutereply_on_abort(void* self, void (*callback)()) {
    QGeoRouteReply_OnAbort((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_qbase_abort(void* self) {
    QGeoRouteReply_QBaseAbort((QGeoRouteReply*)self);
}

void q_georoutereply_finished(void* self) {
    QGeoRouteReply_Finished((QGeoRouteReply*)self);
}

void q_georoutereply_on_finished(void* self, void (*callback)(void*)) {
    QGeoRouteReply_Connect_Finished((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_aborted(void* self) {
    QGeoRouteReply_Aborted((QGeoRouteReply*)self);
}

void q_georoutereply_on_aborted(void* self, void (*callback)(void*)) {
    QGeoRouteReply_Connect_Aborted((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_error_occurred(void* self, int32_t error) {
    QGeoRouteReply_ErrorOccurred((QGeoRouteReply*)self, error);
}

void q_georoutereply_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QGeoRouteReply_Connect_ErrorOccurred((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_set_error(void* self, int32_t error, const char* errorString) {
    QGeoRouteReply_SetError((QGeoRouteReply*)self, error, qstring(errorString));
}

void q_georoutereply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*)) {
    QGeoRouteReply_OnSetError((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_qbase_set_error(void* self, int32_t error, const char* errorString) {
    QGeoRouteReply_QBaseSetError((QGeoRouteReply*)self, error, qstring(errorString));
}

void q_georoutereply_set_finished(void* self, bool finished) {
    QGeoRouteReply_SetFinished((QGeoRouteReply*)self, finished);
}

void q_georoutereply_on_set_finished(void* self, void (*callback)(void*, bool)) {
    QGeoRouteReply_OnSetFinished((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_qbase_set_finished(void* self, bool finished) {
    QGeoRouteReply_QBaseSetFinished((QGeoRouteReply*)self, finished);
}

void q_georoutereply_set_routes(void* self, libqt_list /* of QGeoRoute* */ routes) {
    QGeoRouteReply_SetRoutes((QGeoRouteReply*)self, routes);
}

void q_georoutereply_on_set_routes(void* self, void (*callback)(void*, QGeoRoute**)) {
    QGeoRouteReply_OnSetRoutes((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_qbase_set_routes(void* self, libqt_list /* of QGeoRoute* */ routes) {
    QGeoRouteReply_QBaseSetRoutes((QGeoRouteReply*)self, routes);
}

void q_georoutereply_add_routes(void* self, libqt_list /* of QGeoRoute* */ routes) {
    QGeoRouteReply_AddRoutes((QGeoRouteReply*)self, routes);
}

void q_georoutereply_on_add_routes(void* self, void (*callback)(void*, QGeoRoute**)) {
    QGeoRouteReply_OnAddRoutes((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_qbase_add_routes(void* self, libqt_list /* of QGeoRoute* */ routes) {
    QGeoRouteReply_QBaseAddRoutes((QGeoRouteReply*)self, routes);
}

const char* q_georoutereply_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_georoutereply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_georoutereply_error_occurred2(void* self, int32_t error, const char* errorString) {
    QGeoRouteReply_ErrorOccurred2((QGeoRouteReply*)self, error, qstring(errorString));
}

void q_georoutereply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*)) {
    QGeoRouteReply_Connect_ErrorOccurred2((QGeoRouteReply*)self, (intptr_t)callback);
}

const char* q_georoutereply_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_georoutereply_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_georoutereply_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_georoutereply_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_georoutereply_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_georoutereply_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_georoutereply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_georoutereply_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_georoutereply_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_georoutereply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_georoutereply_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_georoutereply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_georoutereply_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_georoutereply_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_georoutereply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_georoutereply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_georoutereply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_georoutereply_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_georoutereply_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_georoutereply_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_georoutereply_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_georoutereply_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_georoutereply_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_georoutereply_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_georoutereply_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_georoutereply_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_georoutereply_dynamic_property_names\n");
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

QBindingStorage* q_georoutereply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_georoutereply_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_georoutereply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_georoutereply_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_georoutereply_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_georoutereply_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_georoutereply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_georoutereply_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_georoutereply_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_georoutereply_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_georoutereply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_georoutereply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_georoutereply_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_georoutereply_event(void* self, void* event) {
    return QGeoRouteReply_Event((QGeoRouteReply*)self, (QEvent*)event);
}

bool q_georoutereply_qbase_event(void* self, void* event) {
    return QGeoRouteReply_QBaseEvent((QGeoRouteReply*)self, (QEvent*)event);
}

void q_georoutereply_on_event(void* self, bool (*callback)(void*, void*)) {
    QGeoRouteReply_OnEvent((QGeoRouteReply*)self, (intptr_t)callback);
}

bool q_georoutereply_event_filter(void* self, void* watched, void* event) {
    return QGeoRouteReply_EventFilter((QGeoRouteReply*)self, (QObject*)watched, (QEvent*)event);
}

bool q_georoutereply_qbase_event_filter(void* self, void* watched, void* event) {
    return QGeoRouteReply_QBaseEventFilter((QGeoRouteReply*)self, (QObject*)watched, (QEvent*)event);
}

void q_georoutereply_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGeoRouteReply_OnEventFilter((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_timer_event(void* self, void* event) {
    QGeoRouteReply_TimerEvent((QGeoRouteReply*)self, (QTimerEvent*)event);
}

void q_georoutereply_qbase_timer_event(void* self, void* event) {
    QGeoRouteReply_QBaseTimerEvent((QGeoRouteReply*)self, (QTimerEvent*)event);
}

void q_georoutereply_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGeoRouteReply_OnTimerEvent((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_child_event(void* self, void* event) {
    QGeoRouteReply_ChildEvent((QGeoRouteReply*)self, (QChildEvent*)event);
}

void q_georoutereply_qbase_child_event(void* self, void* event) {
    QGeoRouteReply_QBaseChildEvent((QGeoRouteReply*)self, (QChildEvent*)event);
}

void q_georoutereply_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGeoRouteReply_OnChildEvent((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_custom_event(void* self, void* event) {
    QGeoRouteReply_CustomEvent((QGeoRouteReply*)self, (QEvent*)event);
}

void q_georoutereply_qbase_custom_event(void* self, void* event) {
    QGeoRouteReply_QBaseCustomEvent((QGeoRouteReply*)self, (QEvent*)event);
}

void q_georoutereply_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGeoRouteReply_OnCustomEvent((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_connect_notify(void* self, void* signal) {
    QGeoRouteReply_ConnectNotify((QGeoRouteReply*)self, (QMetaMethod*)signal);
}

void q_georoutereply_qbase_connect_notify(void* self, void* signal) {
    QGeoRouteReply_QBaseConnectNotify((QGeoRouteReply*)self, (QMetaMethod*)signal);
}

void q_georoutereply_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoRouteReply_OnConnectNotify((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_disconnect_notify(void* self, void* signal) {
    QGeoRouteReply_DisconnectNotify((QGeoRouteReply*)self, (QMetaMethod*)signal);
}

void q_georoutereply_qbase_disconnect_notify(void* self, void* signal) {
    QGeoRouteReply_QBaseDisconnectNotify((QGeoRouteReply*)self, (QMetaMethod*)signal);
}

void q_georoutereply_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGeoRouteReply_OnDisconnectNotify((QGeoRouteReply*)self, (intptr_t)callback);
}

QObject* q_georoutereply_sender(void* self) {
    return QGeoRouteReply_Sender((QGeoRouteReply*)self);
}

QObject* q_georoutereply_qbase_sender(void* self) {
    return QGeoRouteReply_QBaseSender((QGeoRouteReply*)self);
}

void q_georoutereply_on_sender(void* self, QObject* (*callback)()) {
    QGeoRouteReply_OnSender((QGeoRouteReply*)self, (intptr_t)callback);
}

int32_t q_georoutereply_sender_signal_index(void* self) {
    return QGeoRouteReply_SenderSignalIndex((QGeoRouteReply*)self);
}

int32_t q_georoutereply_qbase_sender_signal_index(void* self) {
    return QGeoRouteReply_QBaseSenderSignalIndex((QGeoRouteReply*)self);
}

void q_georoutereply_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGeoRouteReply_OnSenderSignalIndex((QGeoRouteReply*)self, (intptr_t)callback);
}

int32_t q_georoutereply_receivers(void* self, const char* signal) {
    return QGeoRouteReply_Receivers((QGeoRouteReply*)self, signal);
}

int32_t q_georoutereply_qbase_receivers(void* self, const char* signal) {
    return QGeoRouteReply_QBaseReceivers((QGeoRouteReply*)self, signal);
}

void q_georoutereply_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGeoRouteReply_OnReceivers((QGeoRouteReply*)self, (intptr_t)callback);
}

bool q_georoutereply_is_signal_connected(void* self, void* signal) {
    return QGeoRouteReply_IsSignalConnected((QGeoRouteReply*)self, (QMetaMethod*)signal);
}

bool q_georoutereply_qbase_is_signal_connected(void* self, void* signal) {
    return QGeoRouteReply_QBaseIsSignalConnected((QGeoRouteReply*)self, (QMetaMethod*)signal);
}

void q_georoutereply_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGeoRouteReply_OnIsSignalConnected((QGeoRouteReply*)self, (intptr_t)callback);
}

void q_georoutereply_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_georoutereply_delete(void* self) {
    QGeoRouteReply_Delete((QGeoRouteReply*)(self));
}
