#include "libkabstractwidgetjobtracker.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../extras-kcoreaddons/libkjobtrackerinterface.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkstatusbarjobtracker.hpp"
#include "libkstatusbarjobtracker.h"

KStatusBarJobTracker* k_statusbarjobtracker_new(void* parent) {
    return KStatusBarJobTracker_new((QWidget*)parent);
}

KStatusBarJobTracker* k_statusbarjobtracker_new2() {
    return KStatusBarJobTracker_new2();
}

KStatusBarJobTracker* k_statusbarjobtracker_new3(void* parent, bool button) {
    return KStatusBarJobTracker_new3((QWidget*)parent, button);
}

const QMetaObject* k_statusbarjobtracker_meta_object(void* self) {
    return KStatusBarJobTracker_MetaObject((KStatusBarJobTracker*)self);
}

void* k_statusbarjobtracker_metacast(void* self, const char* param1) {
    return KStatusBarJobTracker_Metacast((KStatusBarJobTracker*)self, param1);
}

int32_t k_statusbarjobtracker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KStatusBarJobTracker_Metacall((KStatusBarJobTracker*)self, param1, param2, param3);
}

void k_statusbarjobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KStatusBarJobTracker_OnMetacall((KStatusBarJobTracker*)self, (intptr_t)callback);
}

int32_t k_statusbarjobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KStatusBarJobTracker_QBaseMetacall((KStatusBarJobTracker*)self, param1, param2, param3);
}

const char* k_statusbarjobtracker_tr(const char* s) {
    libqt_string _str = KStatusBarJobTracker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusbarjobtracker_register_job(void* self, void* job) {
    KStatusBarJobTracker_RegisterJob((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_register_job(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnRegisterJob((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_qbase_register_job(void* self, void* job) {
    KStatusBarJobTracker_QBaseRegisterJob((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_unregister_job(void* self, void* job) {
    KStatusBarJobTracker_UnregisterJob((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_unregister_job(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnUnregisterJob((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_qbase_unregister_job(void* self, void* job) {
    KStatusBarJobTracker_QBaseUnregisterJob((KStatusBarJobTracker*)self, (KJob*)job);
}

QWidget* k_statusbarjobtracker_widget(void* self, void* job) {
    return KStatusBarJobTracker_Widget((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnWidget((KStatusBarJobTracker*)self, (intptr_t)callback);
}

QWidget* k_statusbarjobtracker_qbase_widget(void* self, void* job) {
    return KStatusBarJobTracker_QBaseWidget((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_set_status_bar_mode(void* self, int32_t statusBarMode) {
    KStatusBarJobTracker_SetStatusBarMode((KStatusBarJobTracker*)self, statusBarMode);
}

void k_statusbarjobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KStatusBarJobTracker_Description((KStatusBarJobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_statusbarjobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */)) {
    KStatusBarJobTracker_OnDescription((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KStatusBarJobTracker_QBaseDescription((KStatusBarJobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_statusbarjobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KStatusBarJobTracker_TotalAmount((KStatusBarJobTracker*)self, (KJob*)job, unit, amount);
}

void k_statusbarjobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KStatusBarJobTracker_OnTotalAmount((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KStatusBarJobTracker_QBaseTotalAmount((KStatusBarJobTracker*)self, (KJob*)job, unit, amount);
}

void k_statusbarjobtracker_percent(void* self, void* job, uint64_t percent) {
    KStatusBarJobTracker_Percent((KStatusBarJobTracker*)self, (KJob*)job, percent);
}

void k_statusbarjobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t)) {
    KStatusBarJobTracker_OnPercent((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_qbase_percent(void* self, void* job, uint64_t percent) {
    KStatusBarJobTracker_QBasePercent((KStatusBarJobTracker*)self, (KJob*)job, percent);
}

void k_statusbarjobtracker_speed(void* self, void* job, uint64_t value) {
    KStatusBarJobTracker_Speed((KStatusBarJobTracker*)self, (KJob*)job, value);
}

void k_statusbarjobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KStatusBarJobTracker_OnSpeed((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_qbase_speed(void* self, void* job, uint64_t value) {
    KStatusBarJobTracker_QBaseSpeed((KStatusBarJobTracker*)self, (KJob*)job, value);
}

void k_statusbarjobtracker_slot_clean(void* self, void* job) {
    KStatusBarJobTracker_SlotClean((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_slot_clean(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnSlotClean((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_qbase_slot_clean(void* self, void* job) {
    KStatusBarJobTracker_QBaseSlotClean((KStatusBarJobTracker*)self, (KJob*)job);
}

const char* k_statusbarjobtracker_tr2(const char* s, const char* c) {
    libqt_string _str = KStatusBarJobTracker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_statusbarjobtracker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KStatusBarJobTracker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusbarjobtracker_set_stop_on_close(void* self, void* job, bool stopOnClose) {
    KAbstractWidgetJobTracker_SetStopOnClose((KAbstractWidgetJobTracker*)self, (KJob*)job, stopOnClose);
}

bool k_statusbarjobtracker_stop_on_close(void* self, void* job) {
    return KAbstractWidgetJobTracker_StopOnClose((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_set_auto_delete(void* self, void* job, bool autoDelete) {
    KAbstractWidgetJobTracker_SetAutoDelete((KAbstractWidgetJobTracker*)self, (KJob*)job, autoDelete);
}

bool k_statusbarjobtracker_auto_delete(void* self, void* job) {
    return KAbstractWidgetJobTracker_AutoDelete((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_stopped(void* self, void* job) {
    KAbstractWidgetJobTracker_Stopped((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_stopped(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Stopped((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_suspend(void* self, void* job) {
    KAbstractWidgetJobTracker_Suspend((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_suspend(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Suspend((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_resume(void* self, void* job) {
    KAbstractWidgetJobTracker_Resume((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_resume(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Resume((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

const char* k_statusbarjobtracker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_statusbarjobtracker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_statusbarjobtracker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_statusbarjobtracker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_statusbarjobtracker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_statusbarjobtracker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_statusbarjobtracker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_statusbarjobtracker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_statusbarjobtracker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_statusbarjobtracker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_statusbarjobtracker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_statusbarjobtracker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_statusbarjobtracker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_statusbarjobtracker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_statusbarjobtracker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_statusbarjobtracker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_statusbarjobtracker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_statusbarjobtracker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_statusbarjobtracker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_statusbarjobtracker_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_statusbarjobtracker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_statusbarjobtracker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_statusbarjobtracker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_statusbarjobtracker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_statusbarjobtracker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_statusbarjobtracker_dynamic_property_names");
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

QBindingStorage* k_statusbarjobtracker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_statusbarjobtracker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_statusbarjobtracker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_statusbarjobtracker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_statusbarjobtracker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_statusbarjobtracker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_statusbarjobtracker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_statusbarjobtracker_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_statusbarjobtracker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_statusbarjobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_statusbarjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_statusbarjobtracker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_statusbarjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_finished(void* self, void* job) {
    KStatusBarJobTracker_Finished((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_qbase_finished(void* self, void* job) {
    KStatusBarJobTracker_QBaseFinished((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_finished(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnFinished((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_slot_stop(void* self, void* job) {
    KStatusBarJobTracker_SlotStop((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_qbase_slot_stop(void* self, void* job) {
    KStatusBarJobTracker_QBaseSlotStop((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_slot_stop(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnSlotStop((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_slot_suspend(void* self, void* job) {
    KStatusBarJobTracker_SlotSuspend((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_qbase_slot_suspend(void* self, void* job) {
    KStatusBarJobTracker_QBaseSlotSuspend((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_slot_suspend(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnSlotSuspend((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_slot_resume(void* self, void* job) {
    KStatusBarJobTracker_SlotResume((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_qbase_slot_resume(void* self, void* job) {
    KStatusBarJobTracker_QBaseSlotResume((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_slot_resume(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnSlotResume((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_suspended(void* self, void* job) {
    KStatusBarJobTracker_Suspended((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_qbase_suspended(void* self, void* job) {
    KStatusBarJobTracker_QBaseSuspended((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_suspended(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnSuspended((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_resumed(void* self, void* job) {
    KStatusBarJobTracker_Resumed((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_qbase_resumed(void* self, void* job) {
    KStatusBarJobTracker_QBaseResumed((KStatusBarJobTracker*)self, (KJob*)job);
}

void k_statusbarjobtracker_on_resumed(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnResumed((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_info_message(void* self, void* job, const char* message) {
    KStatusBarJobTracker_InfoMessage((KStatusBarJobTracker*)self, (KJob*)job, qstring(message));
}

void k_statusbarjobtracker_qbase_info_message(void* self, void* job, const char* message) {
    KStatusBarJobTracker_QBaseInfoMessage((KStatusBarJobTracker*)self, (KJob*)job, qstring(message));
}

void k_statusbarjobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KStatusBarJobTracker_OnInfoMessage((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_warning(void* self, void* job, const char* message) {
    KStatusBarJobTracker_Warning((KStatusBarJobTracker*)self, (KJob*)job, qstring(message));
}

void k_statusbarjobtracker_qbase_warning(void* self, void* job, const char* message) {
    KStatusBarJobTracker_QBaseWarning((KStatusBarJobTracker*)self, (KJob*)job, qstring(message));
}

void k_statusbarjobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KStatusBarJobTracker_OnWarning((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KStatusBarJobTracker_ProcessedAmount((KStatusBarJobTracker*)self, (KJob*)job, unit, amount);
}

void k_statusbarjobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KStatusBarJobTracker_QBaseProcessedAmount((KStatusBarJobTracker*)self, (KJob*)job, unit, amount);
}

void k_statusbarjobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KStatusBarJobTracker_OnProcessedAmount((KStatusBarJobTracker*)self, (intptr_t)callback);
}

bool k_statusbarjobtracker_event(void* self, void* event) {
    return KStatusBarJobTracker_Event((KStatusBarJobTracker*)self, (QEvent*)event);
}

bool k_statusbarjobtracker_qbase_event(void* self, void* event) {
    return KStatusBarJobTracker_QBaseEvent((KStatusBarJobTracker*)self, (QEvent*)event);
}

void k_statusbarjobtracker_on_event(void* self, bool (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnEvent((KStatusBarJobTracker*)self, (intptr_t)callback);
}

bool k_statusbarjobtracker_event_filter(void* self, void* watched, void* event) {
    return KStatusBarJobTracker_EventFilter((KStatusBarJobTracker*)self, (QObject*)watched, (QEvent*)event);
}

bool k_statusbarjobtracker_qbase_event_filter(void* self, void* watched, void* event) {
    return KStatusBarJobTracker_QBaseEventFilter((KStatusBarJobTracker*)self, (QObject*)watched, (QEvent*)event);
}

void k_statusbarjobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KStatusBarJobTracker_OnEventFilter((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_timer_event(void* self, void* event) {
    KStatusBarJobTracker_TimerEvent((KStatusBarJobTracker*)self, (QTimerEvent*)event);
}

void k_statusbarjobtracker_qbase_timer_event(void* self, void* event) {
    KStatusBarJobTracker_QBaseTimerEvent((KStatusBarJobTracker*)self, (QTimerEvent*)event);
}

void k_statusbarjobtracker_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnTimerEvent((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_child_event(void* self, void* event) {
    KStatusBarJobTracker_ChildEvent((KStatusBarJobTracker*)self, (QChildEvent*)event);
}

void k_statusbarjobtracker_qbase_child_event(void* self, void* event) {
    KStatusBarJobTracker_QBaseChildEvent((KStatusBarJobTracker*)self, (QChildEvent*)event);
}

void k_statusbarjobtracker_on_child_event(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnChildEvent((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_custom_event(void* self, void* event) {
    KStatusBarJobTracker_CustomEvent((KStatusBarJobTracker*)self, (QEvent*)event);
}

void k_statusbarjobtracker_qbase_custom_event(void* self, void* event) {
    KStatusBarJobTracker_QBaseCustomEvent((KStatusBarJobTracker*)self, (QEvent*)event);
}

void k_statusbarjobtracker_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnCustomEvent((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_connect_notify(void* self, void* signal) {
    KStatusBarJobTracker_ConnectNotify((KStatusBarJobTracker*)self, (QMetaMethod*)signal);
}

void k_statusbarjobtracker_qbase_connect_notify(void* self, void* signal) {
    KStatusBarJobTracker_QBaseConnectNotify((KStatusBarJobTracker*)self, (QMetaMethod*)signal);
}

void k_statusbarjobtracker_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnConnectNotify((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_disconnect_notify(void* self, void* signal) {
    KStatusBarJobTracker_DisconnectNotify((KStatusBarJobTracker*)self, (QMetaMethod*)signal);
}

void k_statusbarjobtracker_qbase_disconnect_notify(void* self, void* signal) {
    KStatusBarJobTracker_QBaseDisconnectNotify((KStatusBarJobTracker*)self, (QMetaMethod*)signal);
}

void k_statusbarjobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnDisconnectNotify((KStatusBarJobTracker*)self, (intptr_t)callback);
}

QObject* k_statusbarjobtracker_sender(void* self) {
    return KStatusBarJobTracker_Sender((KStatusBarJobTracker*)self);
}

QObject* k_statusbarjobtracker_qbase_sender(void* self) {
    return KStatusBarJobTracker_QBaseSender((KStatusBarJobTracker*)self);
}

void k_statusbarjobtracker_on_sender(void* self, QObject* (*callback)()) {
    KStatusBarJobTracker_OnSender((KStatusBarJobTracker*)self, (intptr_t)callback);
}

int32_t k_statusbarjobtracker_sender_signal_index(void* self) {
    return KStatusBarJobTracker_SenderSignalIndex((KStatusBarJobTracker*)self);
}

int32_t k_statusbarjobtracker_qbase_sender_signal_index(void* self) {
    return KStatusBarJobTracker_QBaseSenderSignalIndex((KStatusBarJobTracker*)self);
}

void k_statusbarjobtracker_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KStatusBarJobTracker_OnSenderSignalIndex((KStatusBarJobTracker*)self, (intptr_t)callback);
}

int32_t k_statusbarjobtracker_receivers(void* self, const char* signal) {
    return KStatusBarJobTracker_Receivers((KStatusBarJobTracker*)self, signal);
}

int32_t k_statusbarjobtracker_qbase_receivers(void* self, const char* signal) {
    return KStatusBarJobTracker_QBaseReceivers((KStatusBarJobTracker*)self, signal);
}

void k_statusbarjobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KStatusBarJobTracker_OnReceivers((KStatusBarJobTracker*)self, (intptr_t)callback);
}

bool k_statusbarjobtracker_is_signal_connected(void* self, void* signal) {
    return KStatusBarJobTracker_IsSignalConnected((KStatusBarJobTracker*)self, (QMetaMethod*)signal);
}

bool k_statusbarjobtracker_qbase_is_signal_connected(void* self, void* signal) {
    return KStatusBarJobTracker_QBaseIsSignalConnected((KStatusBarJobTracker*)self, (QMetaMethod*)signal);
}

void k_statusbarjobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KStatusBarJobTracker_OnIsSignalConnected((KStatusBarJobTracker*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_statusbarjobtracker_delete(void* self) {
    KStatusBarJobTracker_Delete((KStatusBarJobTracker*)(self));
}
