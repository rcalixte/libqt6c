#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplace.hpp"
#include "libqplacematchrequest.hpp"
#include "libqplacereply.hpp"
#include "libqplacematchreply.hpp"
#include "libqplacematchreply.h"

QPlaceMatchReply* q_placematchreply_new() {
    return QPlaceMatchReply_new();
}

QPlaceMatchReply* q_placematchreply_new2(void* parent) {
    return QPlaceMatchReply_new2((QObject*)parent);
}

const QMetaObject* q_placematchreply_meta_object(void* self) {
    return QPlaceMatchReply_MetaObject((QPlaceMatchReply*)self);
}

void* q_placematchreply_metacast(void* self, const char* param1) {
    return QPlaceMatchReply_Metacast((QPlaceMatchReply*)self, param1);
}

int32_t q_placematchreply_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceMatchReply_Metacall((QPlaceMatchReply*)self, param1, param2, param3);
}

void q_placematchreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlaceMatchReply_OnMetacall((QPlaceMatchReply*)self, (intptr_t)callback);
}

int32_t q_placematchreply_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceMatchReply_QBaseMetacall((QPlaceMatchReply*)self, param1, param2, param3);
}

const char* q_placematchreply_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placematchreply_type(void* self) {
    return QPlaceMatchReply_Type((QPlaceMatchReply*)self);
}

void q_placematchreply_on_type(void* self, int32_t (*callback)()) {
    QPlaceMatchReply_OnType((QPlaceMatchReply*)self, (intptr_t)callback);
}

int32_t q_placematchreply_qbase_type(void* self) {
    return QPlaceMatchReply_QBaseType((QPlaceMatchReply*)self);
}

libqt_list /* of QPlace* */ q_placematchreply_places(void* self) {
    libqt_list _arr = QPlaceMatchReply_Places((QPlaceMatchReply*)self);
    return _arr;
}

QPlaceMatchRequest* q_placematchreply_request(void* self) {
    return QPlaceMatchReply_Request((QPlaceMatchReply*)self);
}

void q_placematchreply_set_places(void* self, libqt_list /* of QPlace* */ results) {
    QPlaceMatchReply_SetPlaces((QPlaceMatchReply*)self, results);
}

void q_placematchreply_on_set_places(void* self, void (*callback)(void*, QPlace**)) {
    QPlaceMatchReply_OnSetPlaces((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_qbase_set_places(void* self, libqt_list /* of QPlace* */ results) {
    QPlaceMatchReply_QBaseSetPlaces((QPlaceMatchReply*)self, results);
}

void q_placematchreply_set_request(void* self, void* request) {
    QPlaceMatchReply_SetRequest((QPlaceMatchReply*)self, (QPlaceMatchRequest*)request);
}

void q_placematchreply_on_set_request(void* self, void (*callback)(void*, void*)) {
    QPlaceMatchReply_OnSetRequest((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_qbase_set_request(void* self, void* request) {
    QPlaceMatchReply_QBaseSetRequest((QPlaceMatchReply*)self, (QPlaceMatchRequest*)request);
}

const char* q_placematchreply_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placematchreply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_placematchreply_is_finished(void* self) {
    return QPlaceReply_IsFinished((QPlaceReply*)self);
}

const char* q_placematchreply_error_string(void* self) {
    libqt_string _str = QPlaceReply_ErrorString((QPlaceReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placematchreply_error(void* self) {
    return QPlaceReply_Error((QPlaceReply*)self);
}

void q_placematchreply_finished(void* self) {
    QPlaceReply_Finished((QPlaceReply*)self);
}

void q_placematchreply_on_finished(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Finished((QPlaceReply*)self, (intptr_t)callback);
}

void q_placematchreply_content_updated(void* self) {
    QPlaceReply_ContentUpdated((QPlaceReply*)self);
}

void q_placematchreply_on_content_updated(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_ContentUpdated((QPlaceReply*)self, (intptr_t)callback);
}

void q_placematchreply_aborted(void* self) {
    QPlaceReply_Aborted((QPlaceReply*)self);
}

void q_placematchreply_on_aborted(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Aborted((QPlaceReply*)self, (intptr_t)callback);
}

void q_placematchreply_error_occurred(void* self, int32_t error) {
    QPlaceReply_ErrorOccurred((QPlaceReply*)self, error);
}

void q_placematchreply_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QPlaceReply_Connect_ErrorOccurred((QPlaceReply*)self, (intptr_t)callback);
}

void q_placematchreply_error_occurred2(void* self, int32_t error, const char* errorString) {
    QPlaceReply_ErrorOccurred2((QPlaceReply*)self, error, qstring(errorString));
}

void q_placematchreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceReply_Connect_ErrorOccurred2((QPlaceReply*)self, (intptr_t)callback);
}

const char* q_placematchreply_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placematchreply_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_placematchreply_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_placematchreply_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_placematchreply_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_placematchreply_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_placematchreply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_placematchreply_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_placematchreply_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_placematchreply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_placematchreply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_placematchreply_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_placematchreply_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_placematchreply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_placematchreply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_placematchreply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_placematchreply_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_placematchreply_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_placematchreply_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_placematchreply_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_placematchreply_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_placematchreply_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_placematchreply_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_placematchreply_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_placematchreply_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placematchreply_dynamic_property_names\n");
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

QBindingStorage* q_placematchreply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_placematchreply_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_placematchreply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_placematchreply_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_placematchreply_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_placematchreply_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_placematchreply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_placematchreply_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_placematchreply_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_placematchreply_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_placematchreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_placematchreply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_placematchreply_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_placematchreply_abort(void* self) {
    QPlaceMatchReply_Abort((QPlaceMatchReply*)self);
}

void q_placematchreply_qbase_abort(void* self) {
    QPlaceMatchReply_QBaseAbort((QPlaceMatchReply*)self);
}

void q_placematchreply_on_abort(void* self, void (*callback)()) {
    QPlaceMatchReply_OnAbort((QPlaceMatchReply*)self, (intptr_t)callback);
}

bool q_placematchreply_event(void* self, void* event) {
    return QPlaceMatchReply_Event((QPlaceMatchReply*)self, (QEvent*)event);
}

bool q_placematchreply_qbase_event(void* self, void* event) {
    return QPlaceMatchReply_QBaseEvent((QPlaceMatchReply*)self, (QEvent*)event);
}

void q_placematchreply_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlaceMatchReply_OnEvent((QPlaceMatchReply*)self, (intptr_t)callback);
}

bool q_placematchreply_event_filter(void* self, void* watched, void* event) {
    return QPlaceMatchReply_EventFilter((QPlaceMatchReply*)self, (QObject*)watched, (QEvent*)event);
}

bool q_placematchreply_qbase_event_filter(void* self, void* watched, void* event) {
    return QPlaceMatchReply_QBaseEventFilter((QPlaceMatchReply*)self, (QObject*)watched, (QEvent*)event);
}

void q_placematchreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlaceMatchReply_OnEventFilter((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_timer_event(void* self, void* event) {
    QPlaceMatchReply_TimerEvent((QPlaceMatchReply*)self, (QTimerEvent*)event);
}

void q_placematchreply_qbase_timer_event(void* self, void* event) {
    QPlaceMatchReply_QBaseTimerEvent((QPlaceMatchReply*)self, (QTimerEvent*)event);
}

void q_placematchreply_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlaceMatchReply_OnTimerEvent((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_child_event(void* self, void* event) {
    QPlaceMatchReply_ChildEvent((QPlaceMatchReply*)self, (QChildEvent*)event);
}

void q_placematchreply_qbase_child_event(void* self, void* event) {
    QPlaceMatchReply_QBaseChildEvent((QPlaceMatchReply*)self, (QChildEvent*)event);
}

void q_placematchreply_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlaceMatchReply_OnChildEvent((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_custom_event(void* self, void* event) {
    QPlaceMatchReply_CustomEvent((QPlaceMatchReply*)self, (QEvent*)event);
}

void q_placematchreply_qbase_custom_event(void* self, void* event) {
    QPlaceMatchReply_QBaseCustomEvent((QPlaceMatchReply*)self, (QEvent*)event);
}

void q_placematchreply_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlaceMatchReply_OnCustomEvent((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_connect_notify(void* self, void* signal) {
    QPlaceMatchReply_ConnectNotify((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_qbase_connect_notify(void* self, void* signal) {
    QPlaceMatchReply_QBaseConnectNotify((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceMatchReply_OnConnectNotify((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_disconnect_notify(void* self, void* signal) {
    QPlaceMatchReply_DisconnectNotify((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_qbase_disconnect_notify(void* self, void* signal) {
    QPlaceMatchReply_QBaseDisconnectNotify((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceMatchReply_OnDisconnectNotify((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_set_finished(void* self, bool finished) {
    QPlaceMatchReply_SetFinished((QPlaceMatchReply*)self, finished);
}

void q_placematchreply_qbase_set_finished(void* self, bool finished) {
    QPlaceMatchReply_QBaseSetFinished((QPlaceMatchReply*)self, finished);
}

void q_placematchreply_on_set_finished(void* self, void (*callback)(void*, bool)) {
    QPlaceMatchReply_OnSetFinished((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceMatchReply_SetError((QPlaceMatchReply*)self, error, qstring(errorString));
}

void q_placematchreply_qbase_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceMatchReply_QBaseSetError((QPlaceMatchReply*)self, error, qstring(errorString));
}

void q_placematchreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceMatchReply_OnSetError((QPlaceMatchReply*)self, (intptr_t)callback);
}

QObject* q_placematchreply_sender(void* self) {
    return QPlaceMatchReply_Sender((QPlaceMatchReply*)self);
}

QObject* q_placematchreply_qbase_sender(void* self) {
    return QPlaceMatchReply_QBaseSender((QPlaceMatchReply*)self);
}

void q_placematchreply_on_sender(void* self, QObject* (*callback)()) {
    QPlaceMatchReply_OnSender((QPlaceMatchReply*)self, (intptr_t)callback);
}

int32_t q_placematchreply_sender_signal_index(void* self) {
    return QPlaceMatchReply_SenderSignalIndex((QPlaceMatchReply*)self);
}

int32_t q_placematchreply_qbase_sender_signal_index(void* self) {
    return QPlaceMatchReply_QBaseSenderSignalIndex((QPlaceMatchReply*)self);
}

void q_placematchreply_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPlaceMatchReply_OnSenderSignalIndex((QPlaceMatchReply*)self, (intptr_t)callback);
}

int32_t q_placematchreply_receivers(void* self, const char* signal) {
    return QPlaceMatchReply_Receivers((QPlaceMatchReply*)self, signal);
}

int32_t q_placematchreply_qbase_receivers(void* self, const char* signal) {
    return QPlaceMatchReply_QBaseReceivers((QPlaceMatchReply*)self, signal);
}

void q_placematchreply_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPlaceMatchReply_OnReceivers((QPlaceMatchReply*)self, (intptr_t)callback);
}

bool q_placematchreply_is_signal_connected(void* self, void* signal) {
    return QPlaceMatchReply_IsSignalConnected((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

bool q_placematchreply_qbase_is_signal_connected(void* self, void* signal) {
    return QPlaceMatchReply_QBaseIsSignalConnected((QPlaceMatchReply*)self, (QMetaMethod*)signal);
}

void q_placematchreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPlaceMatchReply_OnIsSignalConnected((QPlaceMatchReply*)self, (intptr_t)callback);
}

void q_placematchreply_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_placematchreply_delete(void* self) {
    QPlaceMatchReply_Delete((QPlaceMatchReply*)(self));
}
