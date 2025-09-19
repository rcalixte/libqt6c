#include "../extras-kcoreaddons/libkjob.hpp"
#include "../extras-kcoreaddons/libkjobtrackerinterface.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkuiserverjobtracker.hpp"
#include "libkuiserverjobtracker.h"

KUiServerJobTracker* k_uiserverjobtracker_new() {
    return KUiServerJobTracker_new();
}

KUiServerJobTracker* k_uiserverjobtracker_new2(void* parent) {
    return KUiServerJobTracker_new2((QObject*)parent);
}

const QMetaObject* k_uiserverjobtracker_meta_object(void* self) {
    return KUiServerJobTracker_MetaObject((KUiServerJobTracker*)self);
}

void* k_uiserverjobtracker_metacast(void* self, const char* param1) {
    return KUiServerJobTracker_Metacast((KUiServerJobTracker*)self, param1);
}

int32_t k_uiserverjobtracker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUiServerJobTracker_Metacall((KUiServerJobTracker*)self, param1, param2, param3);
}

void k_uiserverjobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KUiServerJobTracker_OnMetacall((KUiServerJobTracker*)self, (intptr_t)callback);
}

int32_t k_uiserverjobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUiServerJobTracker_QBaseMetacall((KUiServerJobTracker*)self, param1, param2, param3);
}

const char* k_uiserverjobtracker_tr(const char* s) {
    libqt_string _str = KUiServerJobTracker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_uiserverjobtracker_register_job(void* self, void* job) {
    KUiServerJobTracker_RegisterJob((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_on_register_job(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnRegisterJob((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_register_job(void* self, void* job) {
    KUiServerJobTracker_QBaseRegisterJob((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_unregister_job(void* self, void* job) {
    KUiServerJobTracker_UnregisterJob((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_on_unregister_job(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnUnregisterJob((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_unregister_job(void* self, void* job) {
    KUiServerJobTracker_QBaseUnregisterJob((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_finished(void* self, void* job) {
    KUiServerJobTracker_Finished((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_on_finished(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnFinished((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_finished(void* self, void* job) {
    KUiServerJobTracker_QBaseFinished((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_suspended(void* self, void* job) {
    KUiServerJobTracker_Suspended((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_on_suspended(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnSuspended((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_suspended(void* self, void* job) {
    KUiServerJobTracker_QBaseSuspended((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_resumed(void* self, void* job) {
    KUiServerJobTracker_Resumed((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_on_resumed(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnResumed((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_resumed(void* self, void* job) {
    KUiServerJobTracker_QBaseResumed((KUiServerJobTracker*)self, (KJob*)job);
}

void k_uiserverjobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KUiServerJobTracker_Description((KUiServerJobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_uiserverjobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */)) {
    KUiServerJobTracker_OnDescription((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KUiServerJobTracker_QBaseDescription((KUiServerJobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_uiserverjobtracker_info_message(void* self, void* job, const char* message) {
    KUiServerJobTracker_InfoMessage((KUiServerJobTracker*)self, (KJob*)job, qstring(message));
}

void k_uiserverjobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KUiServerJobTracker_OnInfoMessage((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_info_message(void* self, void* job, const char* message) {
    KUiServerJobTracker_QBaseInfoMessage((KUiServerJobTracker*)self, (KJob*)job, qstring(message));
}

void k_uiserverjobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KUiServerJobTracker_TotalAmount((KUiServerJobTracker*)self, (KJob*)job, unit, amount);
}

void k_uiserverjobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KUiServerJobTracker_OnTotalAmount((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KUiServerJobTracker_QBaseTotalAmount((KUiServerJobTracker*)self, (KJob*)job, unit, amount);
}

void k_uiserverjobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KUiServerJobTracker_ProcessedAmount((KUiServerJobTracker*)self, (KJob*)job, unit, amount);
}

void k_uiserverjobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KUiServerJobTracker_OnProcessedAmount((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KUiServerJobTracker_QBaseProcessedAmount((KUiServerJobTracker*)self, (KJob*)job, unit, amount);
}

void k_uiserverjobtracker_percent(void* self, void* job, uint64_t percent) {
    KUiServerJobTracker_Percent((KUiServerJobTracker*)self, (KJob*)job, percent);
}

void k_uiserverjobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t)) {
    KUiServerJobTracker_OnPercent((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_percent(void* self, void* job, uint64_t percent) {
    KUiServerJobTracker_QBasePercent((KUiServerJobTracker*)self, (KJob*)job, percent);
}

void k_uiserverjobtracker_speed(void* self, void* job, uint64_t value) {
    KUiServerJobTracker_Speed((KUiServerJobTracker*)self, (KJob*)job, value);
}

void k_uiserverjobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KUiServerJobTracker_OnSpeed((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_qbase_speed(void* self, void* job, uint64_t value) {
    KUiServerJobTracker_QBaseSpeed((KUiServerJobTracker*)self, (KJob*)job, value);
}

const char* k_uiserverjobtracker_tr2(const char* s, const char* c) {
    libqt_string _str = KUiServerJobTracker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_uiserverjobtracker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KUiServerJobTracker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_uiserverjobtracker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_uiserverjobtracker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_uiserverjobtracker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_uiserverjobtracker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_uiserverjobtracker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_uiserverjobtracker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_uiserverjobtracker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_uiserverjobtracker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_uiserverjobtracker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_uiserverjobtracker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_uiserverjobtracker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_uiserverjobtracker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_uiserverjobtracker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_uiserverjobtracker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_uiserverjobtracker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_uiserverjobtracker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_uiserverjobtracker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_uiserverjobtracker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_uiserverjobtracker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_uiserverjobtracker_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_uiserverjobtracker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_uiserverjobtracker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_uiserverjobtracker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_uiserverjobtracker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_uiserverjobtracker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_uiserverjobtracker_dynamic_property_names");
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

QBindingStorage* k_uiserverjobtracker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_uiserverjobtracker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_uiserverjobtracker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_uiserverjobtracker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_uiserverjobtracker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_uiserverjobtracker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_uiserverjobtracker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_uiserverjobtracker_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_uiserverjobtracker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_uiserverjobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_uiserverjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_uiserverjobtracker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_uiserverjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_warning(void* self, void* job, const char* message) {
    KUiServerJobTracker_Warning((KUiServerJobTracker*)self, (KJob*)job, qstring(message));
}

void k_uiserverjobtracker_qbase_warning(void* self, void* job, const char* message) {
    KUiServerJobTracker_QBaseWarning((KUiServerJobTracker*)self, (KJob*)job, qstring(message));
}

void k_uiserverjobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KUiServerJobTracker_OnWarning((KUiServerJobTracker*)self, (intptr_t)callback);
}

bool k_uiserverjobtracker_event(void* self, void* event) {
    return KUiServerJobTracker_Event((KUiServerJobTracker*)self, (QEvent*)event);
}

bool k_uiserverjobtracker_qbase_event(void* self, void* event) {
    return KUiServerJobTracker_QBaseEvent((KUiServerJobTracker*)self, (QEvent*)event);
}

void k_uiserverjobtracker_on_event(void* self, bool (*callback)(void*, void*)) {
    KUiServerJobTracker_OnEvent((KUiServerJobTracker*)self, (intptr_t)callback);
}

bool k_uiserverjobtracker_event_filter(void* self, void* watched, void* event) {
    return KUiServerJobTracker_EventFilter((KUiServerJobTracker*)self, (QObject*)watched, (QEvent*)event);
}

bool k_uiserverjobtracker_qbase_event_filter(void* self, void* watched, void* event) {
    return KUiServerJobTracker_QBaseEventFilter((KUiServerJobTracker*)self, (QObject*)watched, (QEvent*)event);
}

void k_uiserverjobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KUiServerJobTracker_OnEventFilter((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_timer_event(void* self, void* event) {
    KUiServerJobTracker_TimerEvent((KUiServerJobTracker*)self, (QTimerEvent*)event);
}

void k_uiserverjobtracker_qbase_timer_event(void* self, void* event) {
    KUiServerJobTracker_QBaseTimerEvent((KUiServerJobTracker*)self, (QTimerEvent*)event);
}

void k_uiserverjobtracker_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnTimerEvent((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_child_event(void* self, void* event) {
    KUiServerJobTracker_ChildEvent((KUiServerJobTracker*)self, (QChildEvent*)event);
}

void k_uiserverjobtracker_qbase_child_event(void* self, void* event) {
    KUiServerJobTracker_QBaseChildEvent((KUiServerJobTracker*)self, (QChildEvent*)event);
}

void k_uiserverjobtracker_on_child_event(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnChildEvent((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_custom_event(void* self, void* event) {
    KUiServerJobTracker_CustomEvent((KUiServerJobTracker*)self, (QEvent*)event);
}

void k_uiserverjobtracker_qbase_custom_event(void* self, void* event) {
    KUiServerJobTracker_QBaseCustomEvent((KUiServerJobTracker*)self, (QEvent*)event);
}

void k_uiserverjobtracker_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnCustomEvent((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_connect_notify(void* self, void* signal) {
    KUiServerJobTracker_ConnectNotify((KUiServerJobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverjobtracker_qbase_connect_notify(void* self, void* signal) {
    KUiServerJobTracker_QBaseConnectNotify((KUiServerJobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverjobtracker_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnConnectNotify((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_disconnect_notify(void* self, void* signal) {
    KUiServerJobTracker_DisconnectNotify((KUiServerJobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverjobtracker_qbase_disconnect_notify(void* self, void* signal) {
    KUiServerJobTracker_QBaseDisconnectNotify((KUiServerJobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverjobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KUiServerJobTracker_OnDisconnectNotify((KUiServerJobTracker*)self, (intptr_t)callback);
}

QObject* k_uiserverjobtracker_sender(void* self) {
    return KUiServerJobTracker_Sender((KUiServerJobTracker*)self);
}

QObject* k_uiserverjobtracker_qbase_sender(void* self) {
    return KUiServerJobTracker_QBaseSender((KUiServerJobTracker*)self);
}

void k_uiserverjobtracker_on_sender(void* self, QObject* (*callback)()) {
    KUiServerJobTracker_OnSender((KUiServerJobTracker*)self, (intptr_t)callback);
}

int32_t k_uiserverjobtracker_sender_signal_index(void* self) {
    return KUiServerJobTracker_SenderSignalIndex((KUiServerJobTracker*)self);
}

int32_t k_uiserverjobtracker_qbase_sender_signal_index(void* self) {
    return KUiServerJobTracker_QBaseSenderSignalIndex((KUiServerJobTracker*)self);
}

void k_uiserverjobtracker_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KUiServerJobTracker_OnSenderSignalIndex((KUiServerJobTracker*)self, (intptr_t)callback);
}

int32_t k_uiserverjobtracker_receivers(void* self, const char* signal) {
    return KUiServerJobTracker_Receivers((KUiServerJobTracker*)self, signal);
}

int32_t k_uiserverjobtracker_qbase_receivers(void* self, const char* signal) {
    return KUiServerJobTracker_QBaseReceivers((KUiServerJobTracker*)self, signal);
}

void k_uiserverjobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KUiServerJobTracker_OnReceivers((KUiServerJobTracker*)self, (intptr_t)callback);
}

bool k_uiserverjobtracker_is_signal_connected(void* self, void* signal) {
    return KUiServerJobTracker_IsSignalConnected((KUiServerJobTracker*)self, (QMetaMethod*)signal);
}

bool k_uiserverjobtracker_qbase_is_signal_connected(void* self, void* signal) {
    return KUiServerJobTracker_QBaseIsSignalConnected((KUiServerJobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverjobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KUiServerJobTracker_OnIsSignalConnected((KUiServerJobTracker*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_uiserverjobtracker_delete(void* self) {
    KUiServerJobTracker_Delete((KUiServerJobTracker*)(self));
}
