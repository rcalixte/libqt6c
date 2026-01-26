#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplacereply.hpp"
#include "libqplaceidreply.hpp"
#include "libqplaceidreply.h"

QPlaceIdReply* q_placeidreply_new(int32_t operationType) {
    return QPlaceIdReply_new(operationType);
}

QPlaceIdReply* q_placeidreply_new2(int32_t operationType, void* parent) {
    return QPlaceIdReply_new2(operationType, (QObject*)parent);
}

const QMetaObject* q_placeidreply_meta_object(void* self) {
    return QPlaceIdReply_MetaObject((QPlaceIdReply*)self);
}

void q_placeidreply_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPlaceIdReply_OnMetaObject((QPlaceIdReply*)self, (intptr_t)callback);
}

const QMetaObject* q_placeidreply_qbase_meta_object(void* self) {
    return QPlaceIdReply_QBaseMetaObject((QPlaceIdReply*)self);
}

void* q_placeidreply_metacast(void* self, const char* param1) {
    return QPlaceIdReply_Metacast((QPlaceIdReply*)self, param1);
}

void q_placeidreply_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPlaceIdReply_OnMetacast((QPlaceIdReply*)self, (intptr_t)callback);
}

void* q_placeidreply_qbase_metacast(void* self, const char* param1) {
    return QPlaceIdReply_QBaseMetacast((QPlaceIdReply*)self, param1);
}

int32_t q_placeidreply_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceIdReply_Metacall((QPlaceIdReply*)self, param1, param2, param3);
}

void q_placeidreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlaceIdReply_OnMetacall((QPlaceIdReply*)self, (intptr_t)callback);
}

int32_t q_placeidreply_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceIdReply_QBaseMetacall((QPlaceIdReply*)self, param1, param2, param3);
}

const char* q_placeidreply_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placeidreply_type(void* self) {
    return QPlaceIdReply_Type((QPlaceIdReply*)self);
}

void q_placeidreply_on_type(void* self, int32_t (*callback)()) {
    QPlaceIdReply_OnType((QPlaceIdReply*)self, (intptr_t)callback);
}

int32_t q_placeidreply_qbase_type(void* self) {
    return QPlaceIdReply_QBaseType((QPlaceIdReply*)self);
}

int32_t q_placeidreply_operation_type(void* self) {
    return QPlaceIdReply_OperationType((QPlaceIdReply*)self);
}

const char* q_placeidreply_id(void* self) {
    libqt_string _str = QPlaceIdReply_Id((QPlaceIdReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placeidreply_set_id(void* self, const char* identifier) {
    QPlaceIdReply_SetId((QPlaceIdReply*)self, qstring(identifier));
}

void q_placeidreply_on_set_id(void* self, void (*callback)(void*, const char*)) {
    QPlaceIdReply_OnSetId((QPlaceIdReply*)self, (intptr_t)callback);
}

void q_placeidreply_qbase_set_id(void* self, const char* identifier) {
    QPlaceIdReply_QBaseSetId((QPlaceIdReply*)self, qstring(identifier));
}

const char* q_placeidreply_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placeidreply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_placeidreply_is_finished(void* self) {
    return QPlaceReply_IsFinished((QPlaceReply*)self);
}

const char* q_placeidreply_error_string(void* self) {
    libqt_string _str = QPlaceReply_ErrorString((QPlaceReply*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placeidreply_error(void* self) {
    return QPlaceReply_Error((QPlaceReply*)self);
}

void q_placeidreply_finished(void* self) {
    QPlaceReply_Finished((QPlaceReply*)self);
}

void q_placeidreply_on_finished(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Finished((QPlaceReply*)self, (intptr_t)callback);
}

void q_placeidreply_content_updated(void* self) {
    QPlaceReply_ContentUpdated((QPlaceReply*)self);
}

void q_placeidreply_on_content_updated(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_ContentUpdated((QPlaceReply*)self, (intptr_t)callback);
}

void q_placeidreply_aborted(void* self) {
    QPlaceReply_Aborted((QPlaceReply*)self);
}

void q_placeidreply_on_aborted(void* self, void (*callback)(void*)) {
    QPlaceReply_Connect_Aborted((QPlaceReply*)self, (intptr_t)callback);
}

void q_placeidreply_error_occurred(void* self, int32_t error) {
    QPlaceReply_ErrorOccurred((QPlaceReply*)self, error);
}

void q_placeidreply_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QPlaceReply_Connect_ErrorOccurred((QPlaceReply*)self, (intptr_t)callback);
}

void q_placeidreply_error_occurred2(void* self, int32_t error, const char* errorString) {
    QPlaceReply_ErrorOccurred2((QPlaceReply*)self, error, qstring(errorString));
}

void q_placeidreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceReply_Connect_ErrorOccurred2((QPlaceReply*)self, (intptr_t)callback);
}

const char* q_placeidreply_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placeidreply_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_placeidreply_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_placeidreply_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_placeidreply_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_placeidreply_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_placeidreply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_placeidreply_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_placeidreply_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_placeidreply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_placeidreply_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_placeidreply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_placeidreply_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_placeidreply_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_placeidreply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_placeidreply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_placeidreply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_placeidreply_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_placeidreply_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_placeidreply_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_placeidreply_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_placeidreply_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_placeidreply_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_placeidreply_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_placeidreply_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_placeidreply_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placeidreply_dynamic_property_names\n");
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

QBindingStorage* q_placeidreply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_placeidreply_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_placeidreply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_placeidreply_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_placeidreply_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_placeidreply_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_placeidreply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_placeidreply_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_placeidreply_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_placeidreply_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_placeidreply_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_placeidreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_placeidreply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_placeidreply_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_placeidreply_abort(void* self) {
    QPlaceIdReply_Abort((QPlaceIdReply*)self);
}

void q_placeidreply_qbase_abort(void* self) {
    QPlaceIdReply_QBaseAbort((QPlaceIdReply*)self);
}

void q_placeidreply_on_abort(void* self, void (*callback)()) {
    QPlaceIdReply_OnAbort((QPlaceIdReply*)self, (intptr_t)callback);
}

bool q_placeidreply_event(void* self, void* event) {
    return QPlaceIdReply_Event((QPlaceIdReply*)self, (QEvent*)event);
}

bool q_placeidreply_qbase_event(void* self, void* event) {
    return QPlaceIdReply_QBaseEvent((QPlaceIdReply*)self, (QEvent*)event);
}

void q_placeidreply_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlaceIdReply_OnEvent((QPlaceIdReply*)self, (intptr_t)callback);
}

bool q_placeidreply_event_filter(void* self, void* watched, void* event) {
    return QPlaceIdReply_EventFilter((QPlaceIdReply*)self, (QObject*)watched, (QEvent*)event);
}

bool q_placeidreply_qbase_event_filter(void* self, void* watched, void* event) {
    return QPlaceIdReply_QBaseEventFilter((QPlaceIdReply*)self, (QObject*)watched, (QEvent*)event);
}

void q_placeidreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlaceIdReply_OnEventFilter((QPlaceIdReply*)self, (intptr_t)callback);
}

void q_placeidreply_timer_event(void* self, void* event) {
    QPlaceIdReply_TimerEvent((QPlaceIdReply*)self, (QTimerEvent*)event);
}

void q_placeidreply_qbase_timer_event(void* self, void* event) {
    QPlaceIdReply_QBaseTimerEvent((QPlaceIdReply*)self, (QTimerEvent*)event);
}

void q_placeidreply_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlaceIdReply_OnTimerEvent((QPlaceIdReply*)self, (intptr_t)callback);
}

void q_placeidreply_child_event(void* self, void* event) {
    QPlaceIdReply_ChildEvent((QPlaceIdReply*)self, (QChildEvent*)event);
}

void q_placeidreply_qbase_child_event(void* self, void* event) {
    QPlaceIdReply_QBaseChildEvent((QPlaceIdReply*)self, (QChildEvent*)event);
}

void q_placeidreply_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlaceIdReply_OnChildEvent((QPlaceIdReply*)self, (intptr_t)callback);
}

void q_placeidreply_custom_event(void* self, void* event) {
    QPlaceIdReply_CustomEvent((QPlaceIdReply*)self, (QEvent*)event);
}

void q_placeidreply_qbase_custom_event(void* self, void* event) {
    QPlaceIdReply_QBaseCustomEvent((QPlaceIdReply*)self, (QEvent*)event);
}

void q_placeidreply_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlaceIdReply_OnCustomEvent((QPlaceIdReply*)self, (intptr_t)callback);
}

void q_placeidreply_connect_notify(void* self, void* signal) {
    QPlaceIdReply_ConnectNotify((QPlaceIdReply*)self, (QMetaMethod*)signal);
}

void q_placeidreply_qbase_connect_notify(void* self, void* signal) {
    QPlaceIdReply_QBaseConnectNotify((QPlaceIdReply*)self, (QMetaMethod*)signal);
}

void q_placeidreply_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceIdReply_OnConnectNotify((QPlaceIdReply*)self, (intptr_t)callback);
}

void q_placeidreply_disconnect_notify(void* self, void* signal) {
    QPlaceIdReply_DisconnectNotify((QPlaceIdReply*)self, (QMetaMethod*)signal);
}

void q_placeidreply_qbase_disconnect_notify(void* self, void* signal) {
    QPlaceIdReply_QBaseDisconnectNotify((QPlaceIdReply*)self, (QMetaMethod*)signal);
}

void q_placeidreply_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceIdReply_OnDisconnectNotify((QPlaceIdReply*)self, (intptr_t)callback);
}

void q_placeidreply_set_finished(void* self, bool finished) {
    QPlaceIdReply_SetFinished((QPlaceIdReply*)self, finished);
}

void q_placeidreply_qbase_set_finished(void* self, bool finished) {
    QPlaceIdReply_QBaseSetFinished((QPlaceIdReply*)self, finished);
}

void q_placeidreply_on_set_finished(void* self, void (*callback)(void*, bool)) {
    QPlaceIdReply_OnSetFinished((QPlaceIdReply*)self, (intptr_t)callback);
}

void q_placeidreply_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceIdReply_SetError((QPlaceIdReply*)self, error, qstring(errorString));
}

void q_placeidreply_qbase_set_error(void* self, int32_t error, const char* errorString) {
    QPlaceIdReply_QBaseSetError((QPlaceIdReply*)self, error, qstring(errorString));
}

void q_placeidreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*)) {
    QPlaceIdReply_OnSetError((QPlaceIdReply*)self, (intptr_t)callback);
}

QObject* q_placeidreply_sender(void* self) {
    return QPlaceIdReply_Sender((QPlaceIdReply*)self);
}

QObject* q_placeidreply_qbase_sender(void* self) {
    return QPlaceIdReply_QBaseSender((QPlaceIdReply*)self);
}

void q_placeidreply_on_sender(void* self, QObject* (*callback)()) {
    QPlaceIdReply_OnSender((QPlaceIdReply*)self, (intptr_t)callback);
}

int32_t q_placeidreply_sender_signal_index(void* self) {
    return QPlaceIdReply_SenderSignalIndex((QPlaceIdReply*)self);
}

int32_t q_placeidreply_qbase_sender_signal_index(void* self) {
    return QPlaceIdReply_QBaseSenderSignalIndex((QPlaceIdReply*)self);
}

void q_placeidreply_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPlaceIdReply_OnSenderSignalIndex((QPlaceIdReply*)self, (intptr_t)callback);
}

int32_t q_placeidreply_receivers(void* self, const char* signal) {
    return QPlaceIdReply_Receivers((QPlaceIdReply*)self, signal);
}

int32_t q_placeidreply_qbase_receivers(void* self, const char* signal) {
    return QPlaceIdReply_QBaseReceivers((QPlaceIdReply*)self, signal);
}

void q_placeidreply_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPlaceIdReply_OnReceivers((QPlaceIdReply*)self, (intptr_t)callback);
}

bool q_placeidreply_is_signal_connected(void* self, void* signal) {
    return QPlaceIdReply_IsSignalConnected((QPlaceIdReply*)self, (QMetaMethod*)signal);
}

bool q_placeidreply_qbase_is_signal_connected(void* self, void* signal) {
    return QPlaceIdReply_QBaseIsSignalConnected((QPlaceIdReply*)self, (QMetaMethod*)signal);
}

void q_placeidreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPlaceIdReply_OnIsSignalConnected((QPlaceIdReply*)self, (intptr_t)callback);
}

void q_placeidreply_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_placeidreply_delete(void* self) {
    QPlaceIdReply_Delete((QPlaceIdReply*)(self));
}
