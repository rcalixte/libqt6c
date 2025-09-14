#include "../extras-kcoreaddons/libkjob.hpp"
#include "../extras-kcoreaddons/libkjobtrackerinterface.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkabstractwidgetjobtracker.hpp"
#include "libkabstractwidgetjobtracker.h"

KAbstractWidgetJobTracker* k_abstractwidgetjobtracker_new(void* parent) {
    return KAbstractWidgetJobTracker_new((QWidget*)parent);
}

KAbstractWidgetJobTracker* k_abstractwidgetjobtracker_new2() {
    return KAbstractWidgetJobTracker_new2();
}

const QMetaObject* k_abstractwidgetjobtracker_meta_object(void* self) {
    return KAbstractWidgetJobTracker_MetaObject((KAbstractWidgetJobTracker*)self);
}

void* k_abstractwidgetjobtracker_metacast(void* self, const char* param1) {
    return KAbstractWidgetJobTracker_Metacast((KAbstractWidgetJobTracker*)self, param1);
}

int32_t k_abstractwidgetjobtracker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAbstractWidgetJobTracker_Metacall((KAbstractWidgetJobTracker*)self, param1, param2, param3);
}

void k_abstractwidgetjobtracker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KAbstractWidgetJobTracker_OnMetacall((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

int32_t k_abstractwidgetjobtracker_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAbstractWidgetJobTracker_QBaseMetacall((KAbstractWidgetJobTracker*)self, param1, param2, param3);
}

const char* k_abstractwidgetjobtracker_tr(const char* s) {
    libqt_string _str = KAbstractWidgetJobTracker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_abstractwidgetjobtracker_register_job(void* self, void* job) {
    KAbstractWidgetJobTracker_RegisterJob((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_register_job(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnRegisterJob((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_qbase_register_job(void* self, void* job) {
    KAbstractWidgetJobTracker_QBaseRegisterJob((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_unregister_job(void* self, void* job) {
    KAbstractWidgetJobTracker_UnregisterJob((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_unregister_job(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnUnregisterJob((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_qbase_unregister_job(void* self, void* job) {
    KAbstractWidgetJobTracker_QBaseUnregisterJob((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

QWidget* k_abstractwidgetjobtracker_widget(void* self, void* job) {
    return KAbstractWidgetJobTracker_Widget((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_widget(void* self, QWidget* (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnWidget((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

QWidget* k_abstractwidgetjobtracker_qbase_widget(void* self, void* job) {
    return KAbstractWidgetJobTracker_QBaseWidget((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_set_stop_on_close(void* self, void* job, bool stopOnClose) {
    KAbstractWidgetJobTracker_SetStopOnClose((KAbstractWidgetJobTracker*)self, (KJob*)job, stopOnClose);
}

bool k_abstractwidgetjobtracker_stop_on_close(void* self, void* job) {
    return KAbstractWidgetJobTracker_StopOnClose((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_set_auto_delete(void* self, void* job, bool autoDelete) {
    KAbstractWidgetJobTracker_SetAutoDelete((KAbstractWidgetJobTracker*)self, (KJob*)job, autoDelete);
}

bool k_abstractwidgetjobtracker_auto_delete(void* self, void* job) {
    return KAbstractWidgetJobTracker_AutoDelete((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_finished(void* self, void* job) {
    KAbstractWidgetJobTracker_Finished((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_finished(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnFinished((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_qbase_finished(void* self, void* job) {
    KAbstractWidgetJobTracker_QBaseFinished((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_slot_stop(void* self, void* job) {
    KAbstractWidgetJobTracker_SlotStop((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_slot_stop(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnSlotStop((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_qbase_slot_stop(void* self, void* job) {
    KAbstractWidgetJobTracker_QBaseSlotStop((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_slot_suspend(void* self, void* job) {
    KAbstractWidgetJobTracker_SlotSuspend((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_slot_suspend(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnSlotSuspend((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_qbase_slot_suspend(void* self, void* job) {
    KAbstractWidgetJobTracker_QBaseSlotSuspend((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_slot_resume(void* self, void* job) {
    KAbstractWidgetJobTracker_SlotResume((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_slot_resume(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnSlotResume((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_qbase_slot_resume(void* self, void* job) {
    KAbstractWidgetJobTracker_QBaseSlotResume((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_slot_clean(void* self, void* job) {
    KAbstractWidgetJobTracker_SlotClean((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_slot_clean(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnSlotClean((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_qbase_slot_clean(void* self, void* job) {
    KAbstractWidgetJobTracker_QBaseSlotClean((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_stopped(void* self, void* job) {
    KAbstractWidgetJobTracker_Stopped((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_stopped(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Stopped((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_suspend(void* self, void* job) {
    KAbstractWidgetJobTracker_Suspend((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_suspend(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Suspend((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_resume(void* self, void* job) {
    KAbstractWidgetJobTracker_Resume((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_resume(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_Connect_Resume((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

const char* k_abstractwidgetjobtracker_tr2(const char* s, const char* c) {
    libqt_string _str = KAbstractWidgetJobTracker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_abstractwidgetjobtracker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KAbstractWidgetJobTracker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_abstractwidgetjobtracker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_abstractwidgetjobtracker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_abstractwidgetjobtracker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_abstractwidgetjobtracker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_abstractwidgetjobtracker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_abstractwidgetjobtracker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_abstractwidgetjobtracker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_abstractwidgetjobtracker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_abstractwidgetjobtracker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_abstractwidgetjobtracker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_abstractwidgetjobtracker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_abstractwidgetjobtracker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_abstractwidgetjobtracker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_abstractwidgetjobtracker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_abstractwidgetjobtracker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_abstractwidgetjobtracker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_abstractwidgetjobtracker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_abstractwidgetjobtracker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_abstractwidgetjobtracker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_abstractwidgetjobtracker_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_abstractwidgetjobtracker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_abstractwidgetjobtracker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_abstractwidgetjobtracker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_abstractwidgetjobtracker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_abstractwidgetjobtracker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_abstractwidgetjobtracker_dynamic_property_names");
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

QBindingStorage* k_abstractwidgetjobtracker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_abstractwidgetjobtracker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_abstractwidgetjobtracker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_abstractwidgetjobtracker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_abstractwidgetjobtracker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_abstractwidgetjobtracker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_abstractwidgetjobtracker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_abstractwidgetjobtracker_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_abstractwidgetjobtracker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_abstractwidgetjobtracker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_abstractwidgetjobtracker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_abstractwidgetjobtracker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_abstractwidgetjobtracker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_suspended(void* self, void* job) {
    KAbstractWidgetJobTracker_Suspended((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_qbase_suspended(void* self, void* job) {
    KAbstractWidgetJobTracker_QBaseSuspended((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_suspended(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnSuspended((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_resumed(void* self, void* job) {
    KAbstractWidgetJobTracker_Resumed((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_qbase_resumed(void* self, void* job) {
    KAbstractWidgetJobTracker_QBaseResumed((KAbstractWidgetJobTracker*)self, (KJob*)job);
}

void k_abstractwidgetjobtracker_on_resumed(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnResumed((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KAbstractWidgetJobTracker_Description((KAbstractWidgetJobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_abstractwidgetjobtracker_qbase_description(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KAbstractWidgetJobTracker_QBaseDescription((KAbstractWidgetJobTracker*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_abstractwidgetjobtracker_on_description(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */)) {
    KAbstractWidgetJobTracker_OnDescription((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_info_message(void* self, void* job, const char* message) {
    KAbstractWidgetJobTracker_InfoMessage((KAbstractWidgetJobTracker*)self, (KJob*)job, qstring(message));
}

void k_abstractwidgetjobtracker_qbase_info_message(void* self, void* job, const char* message) {
    KAbstractWidgetJobTracker_QBaseInfoMessage((KAbstractWidgetJobTracker*)self, (KJob*)job, qstring(message));
}

void k_abstractwidgetjobtracker_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KAbstractWidgetJobTracker_OnInfoMessage((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_warning(void* self, void* job, const char* message) {
    KAbstractWidgetJobTracker_Warning((KAbstractWidgetJobTracker*)self, (KJob*)job, qstring(message));
}

void k_abstractwidgetjobtracker_qbase_warning(void* self, void* job, const char* message) {
    KAbstractWidgetJobTracker_QBaseWarning((KAbstractWidgetJobTracker*)self, (KJob*)job, qstring(message));
}

void k_abstractwidgetjobtracker_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KAbstractWidgetJobTracker_OnWarning((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KAbstractWidgetJobTracker_TotalAmount((KAbstractWidgetJobTracker*)self, (KJob*)job, unit, amount);
}

void k_abstractwidgetjobtracker_qbase_total_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KAbstractWidgetJobTracker_QBaseTotalAmount((KAbstractWidgetJobTracker*)self, (KJob*)job, unit, amount);
}

void k_abstractwidgetjobtracker_on_total_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KAbstractWidgetJobTracker_OnTotalAmount((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KAbstractWidgetJobTracker_ProcessedAmount((KAbstractWidgetJobTracker*)self, (KJob*)job, unit, amount);
}

void k_abstractwidgetjobtracker_qbase_processed_amount(void* self, void* job, int32_t unit, uint64_t amount) {
    KAbstractWidgetJobTracker_QBaseProcessedAmount((KAbstractWidgetJobTracker*)self, (KJob*)job, unit, amount);
}

void k_abstractwidgetjobtracker_on_processed_amount(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KAbstractWidgetJobTracker_OnProcessedAmount((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_percent(void* self, void* job, uint64_t percent) {
    KAbstractWidgetJobTracker_Percent((KAbstractWidgetJobTracker*)self, (KJob*)job, percent);
}

void k_abstractwidgetjobtracker_qbase_percent(void* self, void* job, uint64_t percent) {
    KAbstractWidgetJobTracker_QBasePercent((KAbstractWidgetJobTracker*)self, (KJob*)job, percent);
}

void k_abstractwidgetjobtracker_on_percent(void* self, void (*callback)(void*, void*, uint64_t)) {
    KAbstractWidgetJobTracker_OnPercent((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_speed(void* self, void* job, uint64_t value) {
    KAbstractWidgetJobTracker_Speed((KAbstractWidgetJobTracker*)self, (KJob*)job, value);
}

void k_abstractwidgetjobtracker_qbase_speed(void* self, void* job, uint64_t value) {
    KAbstractWidgetJobTracker_QBaseSpeed((KAbstractWidgetJobTracker*)self, (KJob*)job, value);
}

void k_abstractwidgetjobtracker_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KAbstractWidgetJobTracker_OnSpeed((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

bool k_abstractwidgetjobtracker_event(void* self, void* event) {
    return KAbstractWidgetJobTracker_Event((KAbstractWidgetJobTracker*)self, (QEvent*)event);
}

bool k_abstractwidgetjobtracker_qbase_event(void* self, void* event) {
    return KAbstractWidgetJobTracker_QBaseEvent((KAbstractWidgetJobTracker*)self, (QEvent*)event);
}

void k_abstractwidgetjobtracker_on_event(void* self, bool (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnEvent((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

bool k_abstractwidgetjobtracker_event_filter(void* self, void* watched, void* event) {
    return KAbstractWidgetJobTracker_EventFilter((KAbstractWidgetJobTracker*)self, (QObject*)watched, (QEvent*)event);
}

bool k_abstractwidgetjobtracker_qbase_event_filter(void* self, void* watched, void* event) {
    return KAbstractWidgetJobTracker_QBaseEventFilter((KAbstractWidgetJobTracker*)self, (QObject*)watched, (QEvent*)event);
}

void k_abstractwidgetjobtracker_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KAbstractWidgetJobTracker_OnEventFilter((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_timer_event(void* self, void* event) {
    KAbstractWidgetJobTracker_TimerEvent((KAbstractWidgetJobTracker*)self, (QTimerEvent*)event);
}

void k_abstractwidgetjobtracker_qbase_timer_event(void* self, void* event) {
    KAbstractWidgetJobTracker_QBaseTimerEvent((KAbstractWidgetJobTracker*)self, (QTimerEvent*)event);
}

void k_abstractwidgetjobtracker_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnTimerEvent((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_child_event(void* self, void* event) {
    KAbstractWidgetJobTracker_ChildEvent((KAbstractWidgetJobTracker*)self, (QChildEvent*)event);
}

void k_abstractwidgetjobtracker_qbase_child_event(void* self, void* event) {
    KAbstractWidgetJobTracker_QBaseChildEvent((KAbstractWidgetJobTracker*)self, (QChildEvent*)event);
}

void k_abstractwidgetjobtracker_on_child_event(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnChildEvent((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_custom_event(void* self, void* event) {
    KAbstractWidgetJobTracker_CustomEvent((KAbstractWidgetJobTracker*)self, (QEvent*)event);
}

void k_abstractwidgetjobtracker_qbase_custom_event(void* self, void* event) {
    KAbstractWidgetJobTracker_QBaseCustomEvent((KAbstractWidgetJobTracker*)self, (QEvent*)event);
}

void k_abstractwidgetjobtracker_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnCustomEvent((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_connect_notify(void* self, void* signal) {
    KAbstractWidgetJobTracker_ConnectNotify((KAbstractWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_abstractwidgetjobtracker_qbase_connect_notify(void* self, void* signal) {
    KAbstractWidgetJobTracker_QBaseConnectNotify((KAbstractWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_abstractwidgetjobtracker_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnConnectNotify((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_disconnect_notify(void* self, void* signal) {
    KAbstractWidgetJobTracker_DisconnectNotify((KAbstractWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_abstractwidgetjobtracker_qbase_disconnect_notify(void* self, void* signal) {
    KAbstractWidgetJobTracker_QBaseDisconnectNotify((KAbstractWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_abstractwidgetjobtracker_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnDisconnectNotify((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

QObject* k_abstractwidgetjobtracker_sender(void* self) {
    return KAbstractWidgetJobTracker_Sender((KAbstractWidgetJobTracker*)self);
}

QObject* k_abstractwidgetjobtracker_qbase_sender(void* self) {
    return KAbstractWidgetJobTracker_QBaseSender((KAbstractWidgetJobTracker*)self);
}

void k_abstractwidgetjobtracker_on_sender(void* self, QObject* (*callback)()) {
    KAbstractWidgetJobTracker_OnSender((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

int32_t k_abstractwidgetjobtracker_sender_signal_index(void* self) {
    return KAbstractWidgetJobTracker_SenderSignalIndex((KAbstractWidgetJobTracker*)self);
}

int32_t k_abstractwidgetjobtracker_qbase_sender_signal_index(void* self) {
    return KAbstractWidgetJobTracker_QBaseSenderSignalIndex((KAbstractWidgetJobTracker*)self);
}

void k_abstractwidgetjobtracker_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KAbstractWidgetJobTracker_OnSenderSignalIndex((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

int32_t k_abstractwidgetjobtracker_receivers(void* self, const char* signal) {
    return KAbstractWidgetJobTracker_Receivers((KAbstractWidgetJobTracker*)self, signal);
}

int32_t k_abstractwidgetjobtracker_qbase_receivers(void* self, const char* signal) {
    return KAbstractWidgetJobTracker_QBaseReceivers((KAbstractWidgetJobTracker*)self, signal);
}

void k_abstractwidgetjobtracker_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KAbstractWidgetJobTracker_OnReceivers((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

bool k_abstractwidgetjobtracker_is_signal_connected(void* self, void* signal) {
    return KAbstractWidgetJobTracker_IsSignalConnected((KAbstractWidgetJobTracker*)self, (QMetaMethod*)signal);
}

bool k_abstractwidgetjobtracker_qbase_is_signal_connected(void* self, void* signal) {
    return KAbstractWidgetJobTracker_QBaseIsSignalConnected((KAbstractWidgetJobTracker*)self, (QMetaMethod*)signal);
}

void k_abstractwidgetjobtracker_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KAbstractWidgetJobTracker_OnIsSignalConnected((KAbstractWidgetJobTracker*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_abstractwidgetjobtracker_delete(void* self) {
    KAbstractWidgetJobTracker_Delete((KAbstractWidgetJobTracker*)(self));
}
