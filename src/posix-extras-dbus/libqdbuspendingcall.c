#include "../libqcoreevent.hpp"
#include "libqdbuserror.hpp"
#include "libqdbusmessage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqdbuspendingcall.hpp"
#include "libqdbuspendingcall.h"

QDBusPendingCall* q_dbuspendingcall_new(void* other) {
    return QDBusPendingCall_new((QDBusPendingCall*)other);
}

void q_dbuspendingcall_operator_assign(void* self, void* other) {
    QDBusPendingCall_OperatorAssign((QDBusPendingCall*)self, (QDBusPendingCall*)other);
}

void q_dbuspendingcall_swap(void* self, void* other) {
    QDBusPendingCall_Swap((QDBusPendingCall*)self, (QDBusPendingCall*)other);
}

bool q_dbuspendingcall_is_finished(void* self) {
    return QDBusPendingCall_IsFinished((QDBusPendingCall*)self);
}

void q_dbuspendingcall_wait_for_finished(void* self) {
    QDBusPendingCall_WaitForFinished((QDBusPendingCall*)self);
}

bool q_dbuspendingcall_is_error(void* self) {
    return QDBusPendingCall_IsError((QDBusPendingCall*)self);
}

bool q_dbuspendingcall_is_valid(void* self) {
    return QDBusPendingCall_IsValid((QDBusPendingCall*)self);
}

QDBusError* q_dbuspendingcall_error(void* self) {
    return QDBusPendingCall_Error((QDBusPendingCall*)self);
}

QDBusMessage* q_dbuspendingcall_reply(void* self) {
    return QDBusPendingCall_Reply((QDBusPendingCall*)self);
}

QDBusPendingCall* q_dbuspendingcall_from_error(void* error) {
    return QDBusPendingCall_FromError((QDBusError*)error);
}

QDBusPendingCall* q_dbuspendingcall_from_completed_call(void* message) {
    return QDBusPendingCall_FromCompletedCall((QDBusMessage*)message);
}

void q_dbuspendingcall_delete(void* self) {
    QDBusPendingCall_Delete((QDBusPendingCall*)(self));
}

QDBusPendingCallWatcher* q_dbuspendingcallwatcher_new(void* call) {
    return QDBusPendingCallWatcher_new((QDBusPendingCall*)call);
}

QDBusPendingCallWatcher* q_dbuspendingcallwatcher_new2(void* call, void* parent) {
    return QDBusPendingCallWatcher_new2((QDBusPendingCall*)call, (QObject*)parent);
}

const QMetaObject* q_dbuspendingcallwatcher_meta_object(void* self) {
    return QDBusPendingCallWatcher_MetaObject((QDBusPendingCallWatcher*)self);
}

void* q_dbuspendingcallwatcher_metacast(void* self, const char* param1) {
    return QDBusPendingCallWatcher_Metacast((QDBusPendingCallWatcher*)self, param1);
}

int32_t q_dbuspendingcallwatcher_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusPendingCallWatcher_Metacall((QDBusPendingCallWatcher*)self, param1, param2, param3);
}

void q_dbuspendingcallwatcher_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDBusPendingCallWatcher_OnMetacall((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

int32_t q_dbuspendingcallwatcher_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusPendingCallWatcher_QBaseMetacall((QDBusPendingCallWatcher*)self, param1, param2, param3);
}

const char* q_dbuspendingcallwatcher_tr(const char* s) {
    libqt_string _str = QDBusPendingCallWatcher_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbuspendingcallwatcher_wait_for_finished(void* self) {
    QDBusPendingCallWatcher_WaitForFinished((QDBusPendingCallWatcher*)self);
}

void q_dbuspendingcallwatcher_finished(void* self) {
    QDBusPendingCallWatcher_Finished((QDBusPendingCallWatcher*)self);
}

void q_dbuspendingcallwatcher_on_finished(void* self, void (*callback)(void*)) {
    QDBusPendingCallWatcher_Connect_Finished((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

const char* q_dbuspendingcallwatcher_tr2(const char* s, const char* c) {
    libqt_string _str = QDBusPendingCallWatcher_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbuspendingcallwatcher_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDBusPendingCallWatcher_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbuspendingcallwatcher_finished1(void* self, void* selfVal) {
    QDBusPendingCallWatcher_Finished1((QDBusPendingCallWatcher*)self, (QDBusPendingCallWatcher*)selfVal);
}

void q_dbuspendingcallwatcher_on_finished1(void* self, void (*callback)(void*, void*)) {
    QDBusPendingCallWatcher_Connect_Finished1((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

const char* q_dbuspendingcallwatcher_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbuspendingcallwatcher_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dbuspendingcallwatcher_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dbuspendingcallwatcher_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dbuspendingcallwatcher_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dbuspendingcallwatcher_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dbuspendingcallwatcher_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dbuspendingcallwatcher_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dbuspendingcallwatcher_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dbuspendingcallwatcher_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_dbuspendingcallwatcher_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dbuspendingcallwatcher_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dbuspendingcallwatcher_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dbuspendingcallwatcher_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_dbuspendingcallwatcher_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dbuspendingcallwatcher_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dbuspendingcallwatcher_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dbuspendingcallwatcher_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dbuspendingcallwatcher_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dbuspendingcallwatcher_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_dbuspendingcallwatcher_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dbuspendingcallwatcher_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dbuspendingcallwatcher_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dbuspendingcallwatcher_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dbuspendingcallwatcher_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dbuspendingcallwatcher_dynamic_property_names");
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

QBindingStorage* q_dbuspendingcallwatcher_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dbuspendingcallwatcher_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dbuspendingcallwatcher_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dbuspendingcallwatcher_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dbuspendingcallwatcher_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dbuspendingcallwatcher_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dbuspendingcallwatcher_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_dbuspendingcallwatcher_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_dbuspendingcallwatcher_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_dbuspendingcallwatcher_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_dbuspendingcallwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_dbuspendingcallwatcher_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dbuspendingcallwatcher_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_dbuspendingcallwatcher_operator_assign(void* self, void* other) {
    QDBusPendingCall_OperatorAssign((QDBusPendingCall*)self, (QDBusPendingCall*)other);
}

void q_dbuspendingcallwatcher_swap(void* self, void* other) {
    QDBusPendingCall_Swap((QDBusPendingCall*)self, (QDBusPendingCall*)other);
}

bool q_dbuspendingcallwatcher_is_finished(void* self) {
    return QDBusPendingCall_IsFinished((QDBusPendingCall*)self);
}

bool q_dbuspendingcallwatcher_is_error(void* self) {
    return QDBusPendingCall_IsError((QDBusPendingCall*)self);
}

bool q_dbuspendingcallwatcher_is_valid(void* self) {
    return QDBusPendingCall_IsValid((QDBusPendingCall*)self);
}

QDBusError* q_dbuspendingcallwatcher_error(void* self) {
    return QDBusPendingCall_Error((QDBusPendingCall*)self);
}

QDBusMessage* q_dbuspendingcallwatcher_reply(void* self) {
    return QDBusPendingCall_Reply((QDBusPendingCall*)self);
}

QDBusPendingCall* q_dbuspendingcallwatcher_from_error(void* error) {
    return QDBusPendingCall_FromError((QDBusError*)error);
}

QDBusPendingCall* q_dbuspendingcallwatcher_from_completed_call(void* message) {
    return QDBusPendingCall_FromCompletedCall((QDBusMessage*)message);
}

bool q_dbuspendingcallwatcher_event(void* self, void* event) {
    return QDBusPendingCallWatcher_Event((QDBusPendingCallWatcher*)self, (QEvent*)event);
}

bool q_dbuspendingcallwatcher_qbase_event(void* self, void* event) {
    return QDBusPendingCallWatcher_QBaseEvent((QDBusPendingCallWatcher*)self, (QEvent*)event);
}

void q_dbuspendingcallwatcher_on_event(void* self, bool (*callback)(void*, void*)) {
    QDBusPendingCallWatcher_OnEvent((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

bool q_dbuspendingcallwatcher_event_filter(void* self, void* watched, void* event) {
    return QDBusPendingCallWatcher_EventFilter((QDBusPendingCallWatcher*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dbuspendingcallwatcher_qbase_event_filter(void* self, void* watched, void* event) {
    return QDBusPendingCallWatcher_QBaseEventFilter((QDBusPendingCallWatcher*)self, (QObject*)watched, (QEvent*)event);
}

void q_dbuspendingcallwatcher_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDBusPendingCallWatcher_OnEventFilter((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

void q_dbuspendingcallwatcher_timer_event(void* self, void* event) {
    QDBusPendingCallWatcher_TimerEvent((QDBusPendingCallWatcher*)self, (QTimerEvent*)event);
}

void q_dbuspendingcallwatcher_qbase_timer_event(void* self, void* event) {
    QDBusPendingCallWatcher_QBaseTimerEvent((QDBusPendingCallWatcher*)self, (QTimerEvent*)event);
}

void q_dbuspendingcallwatcher_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDBusPendingCallWatcher_OnTimerEvent((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

void q_dbuspendingcallwatcher_child_event(void* self, void* event) {
    QDBusPendingCallWatcher_ChildEvent((QDBusPendingCallWatcher*)self, (QChildEvent*)event);
}

void q_dbuspendingcallwatcher_qbase_child_event(void* self, void* event) {
    QDBusPendingCallWatcher_QBaseChildEvent((QDBusPendingCallWatcher*)self, (QChildEvent*)event);
}

void q_dbuspendingcallwatcher_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDBusPendingCallWatcher_OnChildEvent((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

void q_dbuspendingcallwatcher_custom_event(void* self, void* event) {
    QDBusPendingCallWatcher_CustomEvent((QDBusPendingCallWatcher*)self, (QEvent*)event);
}

void q_dbuspendingcallwatcher_qbase_custom_event(void* self, void* event) {
    QDBusPendingCallWatcher_QBaseCustomEvent((QDBusPendingCallWatcher*)self, (QEvent*)event);
}

void q_dbuspendingcallwatcher_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDBusPendingCallWatcher_OnCustomEvent((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

void q_dbuspendingcallwatcher_connect_notify(void* self, void* signal) {
    QDBusPendingCallWatcher_ConnectNotify((QDBusPendingCallWatcher*)self, (QMetaMethod*)signal);
}

void q_dbuspendingcallwatcher_qbase_connect_notify(void* self, void* signal) {
    QDBusPendingCallWatcher_QBaseConnectNotify((QDBusPendingCallWatcher*)self, (QMetaMethod*)signal);
}

void q_dbuspendingcallwatcher_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusPendingCallWatcher_OnConnectNotify((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

void q_dbuspendingcallwatcher_disconnect_notify(void* self, void* signal) {
    QDBusPendingCallWatcher_DisconnectNotify((QDBusPendingCallWatcher*)self, (QMetaMethod*)signal);
}

void q_dbuspendingcallwatcher_qbase_disconnect_notify(void* self, void* signal) {
    QDBusPendingCallWatcher_QBaseDisconnectNotify((QDBusPendingCallWatcher*)self, (QMetaMethod*)signal);
}

void q_dbuspendingcallwatcher_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusPendingCallWatcher_OnDisconnectNotify((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

QObject* q_dbuspendingcallwatcher_sender(void* self) {
    return QDBusPendingCallWatcher_Sender((QDBusPendingCallWatcher*)self);
}

QObject* q_dbuspendingcallwatcher_qbase_sender(void* self) {
    return QDBusPendingCallWatcher_QBaseSender((QDBusPendingCallWatcher*)self);
}

void q_dbuspendingcallwatcher_on_sender(void* self, QObject* (*callback)()) {
    QDBusPendingCallWatcher_OnSender((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

int32_t q_dbuspendingcallwatcher_sender_signal_index(void* self) {
    return QDBusPendingCallWatcher_SenderSignalIndex((QDBusPendingCallWatcher*)self);
}

int32_t q_dbuspendingcallwatcher_qbase_sender_signal_index(void* self) {
    return QDBusPendingCallWatcher_QBaseSenderSignalIndex((QDBusPendingCallWatcher*)self);
}

void q_dbuspendingcallwatcher_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDBusPendingCallWatcher_OnSenderSignalIndex((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

int32_t q_dbuspendingcallwatcher_receivers(void* self, const char* signal) {
    return QDBusPendingCallWatcher_Receivers((QDBusPendingCallWatcher*)self, signal);
}

int32_t q_dbuspendingcallwatcher_qbase_receivers(void* self, const char* signal) {
    return QDBusPendingCallWatcher_QBaseReceivers((QDBusPendingCallWatcher*)self, signal);
}

void q_dbuspendingcallwatcher_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDBusPendingCallWatcher_OnReceivers((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

bool q_dbuspendingcallwatcher_is_signal_connected(void* self, void* signal) {
    return QDBusPendingCallWatcher_IsSignalConnected((QDBusPendingCallWatcher*)self, (QMetaMethod*)signal);
}

bool q_dbuspendingcallwatcher_qbase_is_signal_connected(void* self, void* signal) {
    return QDBusPendingCallWatcher_QBaseIsSignalConnected((QDBusPendingCallWatcher*)self, (QMetaMethod*)signal);
}

void q_dbuspendingcallwatcher_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDBusPendingCallWatcher_OnIsSignalConnected((QDBusPendingCallWatcher*)self, (intptr_t)callback);
}

void q_dbuspendingcallwatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dbuspendingcallwatcher_delete(void* self) {
    QDBusPendingCallWatcher_Delete((QDBusPendingCallWatcher*)(self));
}
