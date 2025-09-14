#include "../extras-kcoreaddons/libkjob.hpp"
#include "../extras-kcoreaddons/libkjobtrackerinterface.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkuiserverv2jobtracker.hpp"
#include "libkuiserverv2jobtracker.h"

KUiServerV2JobTracker* k_uiserverv2jobtracker_new() {
    return KUiServerV2JobTracker_new();
}

KUiServerV2JobTracker* k_uiserverv2jobtracker_new2(void* parent) {
    return KUiServerV2JobTracker_new2((QObject*)parent);
}

const QMetaObject* k_uiserverv2jobtracker_meta_object(void* self) {
    return KUiServerV2JobTracker_MetaObject((KUiServerV2JobTracker*)self);
}

void* k_uiserverv2jobtracker_metacast(void* self, const char* param1) {
    return KUiServerV2JobTracker_Metacast((KUiServerV2JobTracker*)self, param1);
}

int32_t k_uiserverv2jobtracker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUiServerV2JobTracker_Metacall((KUiServerV2JobTracker*)self, param1, param2, param3);
}

void k_uiserverv2jobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KUiServerV2JobTracker_OnMetacall((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

int32_t k_uiserverv2jobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUiServerV2JobTracker_QBaseMetacall((KUiServerV2JobTracker*)self, param1, param2, param3);
}

const char* k_uiserverv2jobtracker_tr(const char* s) {
    libqt_string _str = KUiServerV2JobTracker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_uiserverv2jobtracker_register_job(void* self, void* job) {
    KUiServerV2JobTracker_RegisterJob((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_on_register_job(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnRegisterJob((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_register_job(void* self, void* job) {
    KUiServerV2JobTracker_QBaseRegisterJob((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_unregister_job(void* self, void* job) {
    KUiServerV2JobTracker_UnregisterJob((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_on_unregister_job(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnUnregisterJob((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_unregister_job(void* self, void* job) {
    KUiServerV2JobTracker_QBaseUnregisterJob((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_finished(void* self, void* job) {
    KUiServerV2JobTracker_Finished((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_on_finished(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnFinished((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_finished(void* self, void* job) {
    KUiServerV2JobTracker_QBaseFinished((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_suspended(void* self, void* job) {
    KUiServerV2JobTracker_Suspended((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_on_suspended(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnSuspended((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_suspended(void* self, void* job) {
    KUiServerV2JobTracker_QBaseSuspended((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_resumed(void* self, void* job) {
    KUiServerV2JobTracker_Resumed((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_on_resumed(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnResumed((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_resumed(void* self, void* job) {
    KUiServerV2JobTracker_QBaseResumed((KUiServerV2JobTracker*)self, (KJob*)job);
}

void k_uiserverv2jobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KUiServerV2JobTracker_Description((KUiServerV2JobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_uiserverv2jobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */)) {
    KUiServerV2JobTracker_OnDescription((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KUiServerV2JobTracker_QBaseDescription((KUiServerV2JobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_uiserverv2jobtracker_info_message(void* self, void* job, const char* message) {
    KUiServerV2JobTracker_InfoMessage((KUiServerV2JobTracker*)self, (KJob*)job, qstring(message));
}

void k_uiserverv2jobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KUiServerV2JobTracker_OnInfoMessage((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_info_message(void* self, void* job, const char* message) {
    KUiServerV2JobTracker_QBaseInfoMessage((KUiServerV2JobTracker*)self, (KJob*)job, qstring(message));
}

void k_uiserverv2jobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KUiServerV2JobTracker_TotalAmount((KUiServerV2JobTracker*)self, (KJob*)job, unit, amount);
}

void k_uiserverv2jobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KUiServerV2JobTracker_OnTotalAmount((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KUiServerV2JobTracker_QBaseTotalAmount((KUiServerV2JobTracker*)self, (KJob*)job, unit, amount);
}

void k_uiserverv2jobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KUiServerV2JobTracker_ProcessedAmount((KUiServerV2JobTracker*)self, (KJob*)job, unit, amount);
}

void k_uiserverv2jobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KUiServerV2JobTracker_OnProcessedAmount((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KUiServerV2JobTracker_QBaseProcessedAmount((KUiServerV2JobTracker*)self, (KJob*)job, unit, amount);
}

void k_uiserverv2jobtracker_percent(void* self, void* job, uint64_t percent) {
    KUiServerV2JobTracker_Percent((KUiServerV2JobTracker*)self, (KJob*)job, percent);
}

void k_uiserverv2jobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t)) {
    KUiServerV2JobTracker_OnPercent((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_percent(void* self, void* job, uint64_t percent) {
    KUiServerV2JobTracker_QBasePercent((KUiServerV2JobTracker*)self, (KJob*)job, percent);
}

void k_uiserverv2jobtracker_speed(void* self, void* job, uint64_t value) {
    KUiServerV2JobTracker_Speed((KUiServerV2JobTracker*)self, (KJob*)job, value);
}

void k_uiserverv2jobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KUiServerV2JobTracker_OnSpeed((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_qbase_speed(void* self, void* job, uint64_t value) {
    KUiServerV2JobTracker_QBaseSpeed((KUiServerV2JobTracker*)self, (KJob*)job, value);
}

const char* k_uiserverv2jobtracker_tr2(const char* s, const char* c) {
    libqt_string _str = KUiServerV2JobTracker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_uiserverv2jobtracker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KUiServerV2JobTracker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_uiserverv2jobtracker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_uiserverv2jobtracker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_uiserverv2jobtracker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_uiserverv2jobtracker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_uiserverv2jobtracker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_uiserverv2jobtracker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_uiserverv2jobtracker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_uiserverv2jobtracker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_uiserverv2jobtracker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_uiserverv2jobtracker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_uiserverv2jobtracker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_uiserverv2jobtracker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_uiserverv2jobtracker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_uiserverv2jobtracker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_uiserverv2jobtracker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_uiserverv2jobtracker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_uiserverv2jobtracker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_uiserverv2jobtracker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_uiserverv2jobtracker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_uiserverv2jobtracker_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_uiserverv2jobtracker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_uiserverv2jobtracker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_uiserverv2jobtracker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_uiserverv2jobtracker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_uiserverv2jobtracker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_uiserverv2jobtracker_dynamic_property_names");
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

QBindingStorage* k_uiserverv2jobtracker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_uiserverv2jobtracker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_uiserverv2jobtracker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_uiserverv2jobtracker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_uiserverv2jobtracker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_uiserverv2jobtracker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_uiserverv2jobtracker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_uiserverv2jobtracker_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_uiserverv2jobtracker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_uiserverv2jobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_uiserverv2jobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_uiserverv2jobtracker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_uiserverv2jobtracker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_warning(void* self, void* job, const char* message) {
    KUiServerV2JobTracker_Warning((KUiServerV2JobTracker*)self, (KJob*)job, qstring(message));
}

void k_uiserverv2jobtracker_qbase_warning(void* self, void* job, const char* message) {
    KUiServerV2JobTracker_QBaseWarning((KUiServerV2JobTracker*)self, (KJob*)job, qstring(message));
}

void k_uiserverv2jobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KUiServerV2JobTracker_OnWarning((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

bool k_uiserverv2jobtracker_event(void* self, void* event) {
    return KUiServerV2JobTracker_Event((KUiServerV2JobTracker*)self, (QEvent*)event);
}

bool k_uiserverv2jobtracker_qbase_event(void* self, void* event) {
    return KUiServerV2JobTracker_QBaseEvent((KUiServerV2JobTracker*)self, (QEvent*)event);
}

void k_uiserverv2jobtracker_on_event(void* self, bool (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnEvent((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

bool k_uiserverv2jobtracker_event_filter(void* self, void* watched, void* event) {
    return KUiServerV2JobTracker_EventFilter((KUiServerV2JobTracker*)self, (QObject*)watched, (QEvent*)event);
}

bool k_uiserverv2jobtracker_qbase_event_filter(void* self, void* watched, void* event) {
    return KUiServerV2JobTracker_QBaseEventFilter((KUiServerV2JobTracker*)self, (QObject*)watched, (QEvent*)event);
}

void k_uiserverv2jobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KUiServerV2JobTracker_OnEventFilter((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_timer_event(void* self, void* event) {
    KUiServerV2JobTracker_TimerEvent((KUiServerV2JobTracker*)self, (QTimerEvent*)event);
}

void k_uiserverv2jobtracker_qbase_timer_event(void* self, void* event) {
    KUiServerV2JobTracker_QBaseTimerEvent((KUiServerV2JobTracker*)self, (QTimerEvent*)event);
}

void k_uiserverv2jobtracker_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnTimerEvent((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_child_event(void* self, void* event) {
    KUiServerV2JobTracker_ChildEvent((KUiServerV2JobTracker*)self, (QChildEvent*)event);
}

void k_uiserverv2jobtracker_qbase_child_event(void* self, void* event) {
    KUiServerV2JobTracker_QBaseChildEvent((KUiServerV2JobTracker*)self, (QChildEvent*)event);
}

void k_uiserverv2jobtracker_on_child_event(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnChildEvent((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_custom_event(void* self, void* event) {
    KUiServerV2JobTracker_CustomEvent((KUiServerV2JobTracker*)self, (QEvent*)event);
}

void k_uiserverv2jobtracker_qbase_custom_event(void* self, void* event) {
    KUiServerV2JobTracker_QBaseCustomEvent((KUiServerV2JobTracker*)self, (QEvent*)event);
}

void k_uiserverv2jobtracker_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnCustomEvent((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_connect_notify(void* self, void* signal) {
    KUiServerV2JobTracker_ConnectNotify((KUiServerV2JobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverv2jobtracker_qbase_connect_notify(void* self, void* signal) {
    KUiServerV2JobTracker_QBaseConnectNotify((KUiServerV2JobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverv2jobtracker_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnConnectNotify((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_disconnect_notify(void* self, void* signal) {
    KUiServerV2JobTracker_DisconnectNotify((KUiServerV2JobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverv2jobtracker_qbase_disconnect_notify(void* self, void* signal) {
    KUiServerV2JobTracker_QBaseDisconnectNotify((KUiServerV2JobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverv2jobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnDisconnectNotify((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

QObject* k_uiserverv2jobtracker_sender(void* self) {
    return KUiServerV2JobTracker_Sender((KUiServerV2JobTracker*)self);
}

QObject* k_uiserverv2jobtracker_qbase_sender(void* self) {
    return KUiServerV2JobTracker_QBaseSender((KUiServerV2JobTracker*)self);
}

void k_uiserverv2jobtracker_on_sender(void* self, QObject* (*callback)()) {
    KUiServerV2JobTracker_OnSender((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

int32_t k_uiserverv2jobtracker_sender_signal_index(void* self) {
    return KUiServerV2JobTracker_SenderSignalIndex((KUiServerV2JobTracker*)self);
}

int32_t k_uiserverv2jobtracker_qbase_sender_signal_index(void* self) {
    return KUiServerV2JobTracker_QBaseSenderSignalIndex((KUiServerV2JobTracker*)self);
}

void k_uiserverv2jobtracker_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KUiServerV2JobTracker_OnSenderSignalIndex((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

int32_t k_uiserverv2jobtracker_receivers(void* self, const char* signal) {
    return KUiServerV2JobTracker_Receivers((KUiServerV2JobTracker*)self, signal);
}

int32_t k_uiserverv2jobtracker_qbase_receivers(void* self, const char* signal) {
    return KUiServerV2JobTracker_QBaseReceivers((KUiServerV2JobTracker*)self, signal);
}

void k_uiserverv2jobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KUiServerV2JobTracker_OnReceivers((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

bool k_uiserverv2jobtracker_is_signal_connected(void* self, void* signal) {
    return KUiServerV2JobTracker_IsSignalConnected((KUiServerV2JobTracker*)self, (QMetaMethod*)signal);
}

bool k_uiserverv2jobtracker_qbase_is_signal_connected(void* self, void* signal) {
    return KUiServerV2JobTracker_QBaseIsSignalConnected((KUiServerV2JobTracker*)self, (QMetaMethod*)signal);
}

void k_uiserverv2jobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KUiServerV2JobTracker_OnIsSignalConnected((KUiServerV2JobTracker*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_uiserverv2jobtracker_delete(void* self) {
    KUiServerV2JobTracker_Delete((KUiServerV2JobTracker*)(self));
}
