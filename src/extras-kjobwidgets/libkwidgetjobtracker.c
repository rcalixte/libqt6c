#include "libkabstractwidgetjobtracker.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../extras-kcoreaddons/libkjobtrackerinterface.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkwidgetjobtracker.hpp"
#include "libkwidgetjobtracker.h"

KWidgetJobTracker* k_widgetjobtracker_new(void* parent) {
    return KWidgetJobTracker_new((QWidget*)parent);
}

KWidgetJobTracker* k_widgetjobtracker_new2() {
    return KWidgetJobTracker_new2();
}

const QMetaObject* k_widgetjobtracker_meta_object(void* self) {
    return KWidgetJobTracker_MetaObject((KWidgetJobTracker*)self);
}

void* k_widgetjobtracker_metacast(void* self, const char* param1) {
    return KWidgetJobTracker_Metacast((KWidgetJobTracker*)self, param1);
}

int32_t k_widgetjobtracker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWidgetJobTracker_Metacall((KWidgetJobTracker*)self, param1, param2, param3);
}

void k_widgetjobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KWidgetJobTracker_OnMetacall((KWidgetJobTracker*)self, (intptr_t)callback);
}

int32_t k_widgetjobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWidgetJobTracker_QBaseMetacall((KWidgetJobTracker*)self, param1, param2, param3);
}

const char* k_widgetjobtracker_tr(const char* s) {
    libqt_string _str = KWidgetJobTracker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* k_widgetjobtracker_widget(void* self, void* job) {
    return KWidgetJobTracker_Widget((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KWidgetJobTracker_OnWidget((KWidgetJobTracker*)self, (intptr_t)callback);
}

QWidget* k_widgetjobtracker_qbase_widget(void* self, void* job) {
    return KWidgetJobTracker_QBaseWidget((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_register_job(void* self, void* job) {
    KWidgetJobTracker_RegisterJob((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_register_job(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnRegisterJob((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_register_job(void* self, void* job) {
    KWidgetJobTracker_QBaseRegisterJob((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_unregister_job(void* self, void* job) {
    KWidgetJobTracker_UnregisterJob((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_unregister_job(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnUnregisterJob((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_unregister_job(void* self, void* job) {
    KWidgetJobTracker_QBaseUnregisterJob((KWidgetJobTracker*)self, (KJob*)job);
}

bool k_widgetjobtracker_keep_open(void* self, void* job) {
    return KWidgetJobTracker_KeepOpen((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_info_message(void* self, void* job, const char* message) {
    KWidgetJobTracker_InfoMessage((KWidgetJobTracker*)self, (KJob*)job, qstring(message));
}

void k_widgetjobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KWidgetJobTracker_OnInfoMessage((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_info_message(void* self, void* job, const char* message) {
    KWidgetJobTracker_QBaseInfoMessage((KWidgetJobTracker*)self, (KJob*)job, qstring(message));
}

void k_widgetjobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KWidgetJobTracker_Description((KWidgetJobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_widgetjobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */)) {
    KWidgetJobTracker_OnDescription((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KWidgetJobTracker_QBaseDescription((KWidgetJobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_widgetjobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KWidgetJobTracker_TotalAmount((KWidgetJobTracker*)self, (KJob*)job, unit, amount);
}

void k_widgetjobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KWidgetJobTracker_OnTotalAmount((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KWidgetJobTracker_QBaseTotalAmount((KWidgetJobTracker*)self, (KJob*)job, unit, amount);
}

void k_widgetjobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KWidgetJobTracker_ProcessedAmount((KWidgetJobTracker*)self, (KJob*)job, unit, amount);
}

void k_widgetjobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KWidgetJobTracker_OnProcessedAmount((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KWidgetJobTracker_QBaseProcessedAmount((KWidgetJobTracker*)self, (KJob*)job, unit, amount);
}

void k_widgetjobtracker_percent(void* self, void* job, uint64_t percent) {
    KWidgetJobTracker_Percent((KWidgetJobTracker*)self, (KJob*)job, percent);
}

void k_widgetjobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t)) {
    KWidgetJobTracker_OnPercent((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_percent(void* self, void* job, uint64_t percent) {
    KWidgetJobTracker_QBasePercent((KWidgetJobTracker*)self, (KJob*)job, percent);
}

void k_widgetjobtracker_speed(void* self, void* job, uint64_t value) {
    KWidgetJobTracker_Speed((KWidgetJobTracker*)self, (KJob*)job, value);
}

void k_widgetjobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KWidgetJobTracker_OnSpeed((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_speed(void* self, void* job, uint64_t value) {
    KWidgetJobTracker_QBaseSpeed((KWidgetJobTracker*)self, (KJob*)job, value);
}

void k_widgetjobtracker_slot_clean(void* self, void* job) {
    KWidgetJobTracker_SlotClean((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_slot_clean(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnSlotClean((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_slot_clean(void* self, void* job) {
    KWidgetJobTracker_QBaseSlotClean((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_suspended(void* self, void* job) {
    KWidgetJobTracker_Suspended((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_suspended(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnSuspended((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_suspended(void* self, void* job) {
    KWidgetJobTracker_QBaseSuspended((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_resumed(void* self, void* job) {
    KWidgetJobTracker_Resumed((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_resumed(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnResumed((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_qbase_resumed(void* self, void* job) {
    KWidgetJobTracker_QBaseResumed((KWidgetJobTracker*)self, (KJob*)job);
}

const char* k_widgetjobtracker_tr2(const char* s, const char* c) {
    libqt_string _str = KWidgetJobTracker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_widgetjobtracker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KWidgetJobTracker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_widgetjobtracker_set_stop_on_close(void* self, void* job, bool stopOnClose) {
    KAbstractWidgetJobTracker_SetStopOnClose((KAbstractWidgetJobTracker*)self, (KJob*)job, stopOnClose);
}

bool k_widgetjobtracker_stop_on_close(void* self, void* job) {
    return KAbstractWidgetJobTracker_StopOnClose((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_set_auto_delete(void* self, void* job, bool autoDelete) {
    KAbstractWidgetJobTracker_SetAutoDelete((KAbstractWidgetJobTracker*)self, (KJob*)job, autoDelete);
}

bool k_widgetjobtracker_auto_delete(void* self, void* job) {
    return KAbstractWidgetJobTracker_AutoDelete((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_stopped(void* self, void* job) {
    KAbstractWidgetJobTracker_Stopped((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_stopped(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Stopped((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_suspend(void* self, void* job) {
    KAbstractWidgetJobTracker_Suspend((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_suspend(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Suspend((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_resume(void* self, void* job) {
    KAbstractWidgetJobTracker_Resume((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_resume(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Resume((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

const char* k_widgetjobtracker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_widgetjobtracker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_widgetjobtracker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_widgetjobtracker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_widgetjobtracker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_widgetjobtracker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_widgetjobtracker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_widgetjobtracker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_widgetjobtracker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_widgetjobtracker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_widgetjobtracker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_widgetjobtracker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_widgetjobtracker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_widgetjobtracker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_widgetjobtracker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_widgetjobtracker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_widgetjobtracker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_widgetjobtracker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_widgetjobtracker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_widgetjobtracker_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_widgetjobtracker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_widgetjobtracker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_widgetjobtracker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_widgetjobtracker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_widgetjobtracker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_widgetjobtracker_dynamic_property_names");
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

QBindingStorage* k_widgetjobtracker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_widgetjobtracker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_widgetjobtracker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_widgetjobtracker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_widgetjobtracker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_widgetjobtracker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_widgetjobtracker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_widgetjobtracker_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_widgetjobtracker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_widgetjobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_widgetjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_widgetjobtracker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_widgetjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_widgetjobtracker_finished(void* self, void* job) {
    KWidgetJobTracker_Finished((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_qbase_finished(void* self, void* job) {
    KWidgetJobTracker_QBaseFinished((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_finished(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnFinished((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_slot_stop(void* self, void* job) {
    KWidgetJobTracker_SlotStop((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_qbase_slot_stop(void* self, void* job) {
    KWidgetJobTracker_QBaseSlotStop((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_slot_stop(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnSlotStop((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_slot_suspend(void* self, void* job) {
    KWidgetJobTracker_SlotSuspend((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_qbase_slot_suspend(void* self, void* job) {
    KWidgetJobTracker_QBaseSlotSuspend((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_slot_suspend(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnSlotSuspend((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_slot_resume(void* self, void* job) {
    KWidgetJobTracker_SlotResume((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_qbase_slot_resume(void* self, void* job) {
    KWidgetJobTracker_QBaseSlotResume((KWidgetJobTracker*)self, (KJob*)job);
}

void k_widgetjobtracker_on_slot_resume(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnSlotResume((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_warning(void* self, void* job, const char* message) {
    KWidgetJobTracker_Warning((KWidgetJobTracker*)self, (KJob*)job, qstring(message));
}

void k_widgetjobtracker_qbase_warning(void* self, void* job, const char* message) {
    KWidgetJobTracker_QBaseWarning((KWidgetJobTracker*)self, (KJob*)job, qstring(message));
}

void k_widgetjobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KWidgetJobTracker_OnWarning((KWidgetJobTracker*)self, (intptr_t)callback);
}

bool k_widgetjobtracker_event(void* self, void* event) {
    return KWidgetJobTracker_Event((KWidgetJobTracker*)self, (QEvent*)event);
}

bool k_widgetjobtracker_qbase_event(void* self, void* event) {
    return KWidgetJobTracker_QBaseEvent((KWidgetJobTracker*)self, (QEvent*)event);
}

void k_widgetjobtracker_on_event(void* self, bool (*callback)(void*, void*)) {
    KWidgetJobTracker_OnEvent((KWidgetJobTracker*)self, (intptr_t)callback);
}

bool k_widgetjobtracker_event_filter(void* self, void* watched, void* event) {
    return KWidgetJobTracker_EventFilter((KWidgetJobTracker*)self, (QObject*)watched, (QEvent*)event);
}

bool k_widgetjobtracker_qbase_event_filter(void* self, void* watched, void* event) {
    return KWidgetJobTracker_QBaseEventFilter((KWidgetJobTracker*)self, (QObject*)watched, (QEvent*)event);
}

void k_widgetjobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KWidgetJobTracker_OnEventFilter((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_timer_event(void* self, void* event) {
    KWidgetJobTracker_TimerEvent((KWidgetJobTracker*)self, (QTimerEvent*)event);
}

void k_widgetjobtracker_qbase_timer_event(void* self, void* event) {
    KWidgetJobTracker_QBaseTimerEvent((KWidgetJobTracker*)self, (QTimerEvent*)event);
}

void k_widgetjobtracker_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnTimerEvent((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_child_event(void* self, void* event) {
    KWidgetJobTracker_ChildEvent((KWidgetJobTracker*)self, (QChildEvent*)event);
}

void k_widgetjobtracker_qbase_child_event(void* self, void* event) {
    KWidgetJobTracker_QBaseChildEvent((KWidgetJobTracker*)self, (QChildEvent*)event);
}

void k_widgetjobtracker_on_child_event(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnChildEvent((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_custom_event(void* self, void* event) {
    KWidgetJobTracker_CustomEvent((KWidgetJobTracker*)self, (QEvent*)event);
}

void k_widgetjobtracker_qbase_custom_event(void* self, void* event) {
    KWidgetJobTracker_QBaseCustomEvent((KWidgetJobTracker*)self, (QEvent*)event);
}

void k_widgetjobtracker_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnCustomEvent((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_connect_notify(void* self, void* signal) {
    KWidgetJobTracker_ConnectNotify((KWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_widgetjobtracker_qbase_connect_notify(void* self, void* signal) {
    KWidgetJobTracker_QBaseConnectNotify((KWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_widgetjobtracker_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnConnectNotify((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_disconnect_notify(void* self, void* signal) {
    KWidgetJobTracker_DisconnectNotify((KWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_widgetjobtracker_qbase_disconnect_notify(void* self, void* signal) {
    KWidgetJobTracker_QBaseDisconnectNotify((KWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_widgetjobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KWidgetJobTracker_OnDisconnectNotify((KWidgetJobTracker*)self, (intptr_t)callback);
}

QObject* k_widgetjobtracker_sender(void* self) {
    return KWidgetJobTracker_Sender((KWidgetJobTracker*)self);
}

QObject* k_widgetjobtracker_qbase_sender(void* self) {
    return KWidgetJobTracker_QBaseSender((KWidgetJobTracker*)self);
}

void k_widgetjobtracker_on_sender(void* self, QObject* (*callback)()) {
    KWidgetJobTracker_OnSender((KWidgetJobTracker*)self, (intptr_t)callback);
}

int32_t k_widgetjobtracker_sender_signal_index(void* self) {
    return KWidgetJobTracker_SenderSignalIndex((KWidgetJobTracker*)self);
}

int32_t k_widgetjobtracker_qbase_sender_signal_index(void* self) {
    return KWidgetJobTracker_QBaseSenderSignalIndex((KWidgetJobTracker*)self);
}

void k_widgetjobtracker_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KWidgetJobTracker_OnSenderSignalIndex((KWidgetJobTracker*)self, (intptr_t)callback);
}

int32_t k_widgetjobtracker_receivers(void* self, const char* signal) {
    return KWidgetJobTracker_Receivers((KWidgetJobTracker*)self, signal);
}

int32_t k_widgetjobtracker_qbase_receivers(void* self, const char* signal) {
    return KWidgetJobTracker_QBaseReceivers((KWidgetJobTracker*)self, signal);
}

void k_widgetjobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KWidgetJobTracker_OnReceivers((KWidgetJobTracker*)self, (intptr_t)callback);
}

bool k_widgetjobtracker_is_signal_connected(void* self, void* signal) {
    return KWidgetJobTracker_IsSignalConnected((KWidgetJobTracker*)self, (QMetaMethod*)signal);
}

bool k_widgetjobtracker_qbase_is_signal_connected(void* self, void* signal) {
    return KWidgetJobTracker_QBaseIsSignalConnected((KWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_widgetjobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KWidgetJobTracker_OnIsSignalConnected((KWidgetJobTracker*)self, (intptr_t)callback);
}

void k_widgetjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_widgetjobtracker_delete(void* self) {
    KWidgetJobTracker_Delete((KWidgetJobTracker*)(self));
}
