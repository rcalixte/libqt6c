#include "libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkcompositejob.hpp"
#include "libkcompositejob.h"

KCompositeJob* k_compositejob_new() {
    return KCompositeJob_new();
}

KCompositeJob* k_compositejob_new2(void* parent) {
    return KCompositeJob_new2((QObject*)parent);
}

const QMetaObject* k_compositejob_meta_object(void* self) {
    return KCompositeJob_MetaObject((KCompositeJob*)self);
}

void* k_compositejob_metacast(void* self, const char* param1) {
    return KCompositeJob_Metacast((KCompositeJob*)self, param1);
}

int32_t k_compositejob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCompositeJob_Metacall((KCompositeJob*)self, param1, param2, param3);
}

void k_compositejob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCompositeJob_OnMetacall((KCompositeJob*)self, (intptr_t)callback);
}

int32_t k_compositejob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCompositeJob_QBaseMetacall((KCompositeJob*)self, param1, param2, param3);
}

const char* k_compositejob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_compositejob_add_subjob(void* self, void* job) {
    return KCompositeJob_AddSubjob((KCompositeJob*)self, (KJob*)job);
}

void k_compositejob_on_add_subjob(void* self, bool (*callback)(void*, void*)) {
    KCompositeJob_OnAddSubjob((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_qbase_add_subjob(void* self, void* job) {
    return KCompositeJob_QBaseAddSubjob((KCompositeJob*)self, (KJob*)job);
}

bool k_compositejob_remove_subjob(void* self, void* job) {
    return KCompositeJob_RemoveSubjob((KCompositeJob*)self, (KJob*)job);
}

void k_compositejob_on_remove_subjob(void* self, bool (*callback)(void*, void*)) {
    KCompositeJob_OnRemoveSubjob((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_qbase_remove_subjob(void* self, void* job) {
    return KCompositeJob_QBaseRemoveSubjob((KCompositeJob*)self, (KJob*)job);
}

bool k_compositejob_has_subjobs(void* self) {
    return KCompositeJob_HasSubjobs((KCompositeJob*)self);
}

void k_compositejob_on_has_subjobs(void* self, bool (*callback)()) {
    KCompositeJob_OnHasSubjobs((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_qbase_has_subjobs(void* self) {
    return KCompositeJob_QBaseHasSubjobs((KCompositeJob*)self);
}

libqt_list /* of KJob* */ k_compositejob_subjobs(void* self) {
    libqt_list _arr = KCompositeJob_Subjobs((KCompositeJob*)self);
    return _arr;
}

void k_compositejob_on_subjobs(void* self, KJob** (*callback)()) {
    KCompositeJob_OnSubjobs((KCompositeJob*)self, (intptr_t)callback);
}

libqt_list /* of KJob* */ k_compositejob_qbase_subjobs(void* self) {
    libqt_list _arr = KCompositeJob_QBaseSubjobs((KCompositeJob*)self);
    return _arr;
}

void k_compositejob_clear_subjobs(void* self) {
    KCompositeJob_ClearSubjobs((KCompositeJob*)self);
}

void k_compositejob_on_clear_subjobs(void* self, void (*callback)()) {
    KCompositeJob_OnClearSubjobs((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_qbase_clear_subjobs(void* self) {
    KCompositeJob_QBaseClearSubjobs((KCompositeJob*)self);
}

void k_compositejob_slot_result(void* self, void* job) {
    KCompositeJob_SlotResult((KCompositeJob*)self, (KJob*)job);
}

void k_compositejob_on_slot_result(void* self, void (*callback)(void*, void*)) {
    KCompositeJob_OnSlotResult((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_qbase_slot_result(void* self, void* job) {
    KCompositeJob_QBaseSlotResult((KCompositeJob*)self, (KJob*)job);
}

void k_compositejob_slot_info_message(void* self, void* job, const char* message) {
    KCompositeJob_SlotInfoMessage((KCompositeJob*)self, (KJob*)job, qstring(message));
}

void k_compositejob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KCompositeJob_OnSlotInfoMessage((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_qbase_slot_info_message(void* self, void* job, const char* message) {
    KCompositeJob_QBaseSlotInfoMessage((KCompositeJob*)self, (KJob*)job, qstring(message));
}

const char* k_compositejob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_compositejob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_compositejob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_compositejob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_compositejob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_compositejob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_compositejob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_compositejob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_compositejob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_compositejob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_compositejob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_compositejob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_compositejob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_compositejob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_compositejob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_compositejob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_compositejob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_compositejob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_compositejob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_compositejob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_compositejob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_compositejob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_compositejob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_compositejob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_compositejob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_compositejob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_compositejob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_compositejob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_compositejob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_compositejob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_compositejob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_compositejob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_compositejob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_compositejob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_compositejob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_compositejob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_compositejob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_compositejob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_compositejob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_compositejob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_compositejob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_compositejob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_compositejob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_compositejob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_compositejob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_compositejob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_compositejob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_compositejob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_compositejob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_compositejob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_compositejob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_compositejob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_compositejob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_compositejob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_compositejob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_compositejob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_compositejob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_compositejob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_compositejob_dynamic_property_names");
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

QBindingStorage* k_compositejob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_compositejob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_compositejob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_compositejob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_compositejob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_compositejob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_compositejob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_compositejob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_compositejob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_compositejob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_compositejob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_compositejob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_compositejob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_compositejob_start(void* self) {
    KCompositeJob_Start((KCompositeJob*)self);
}

void k_compositejob_qbase_start(void* self) {
    KCompositeJob_QBaseStart((KCompositeJob*)self);
}

void k_compositejob_on_start(void* self, void (*callback)()) {
    KCompositeJob_OnStart((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_do_kill(void* self) {
    return KCompositeJob_DoKill((KCompositeJob*)self);
}

bool k_compositejob_qbase_do_kill(void* self) {
    return KCompositeJob_QBaseDoKill((KCompositeJob*)self);
}

void k_compositejob_on_do_kill(void* self, bool (*callback)()) {
    KCompositeJob_OnDoKill((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_do_suspend(void* self) {
    return KCompositeJob_DoSuspend((KCompositeJob*)self);
}

bool k_compositejob_qbase_do_suspend(void* self) {
    return KCompositeJob_QBaseDoSuspend((KCompositeJob*)self);
}

void k_compositejob_on_do_suspend(void* self, bool (*callback)()) {
    KCompositeJob_OnDoSuspend((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_do_resume(void* self) {
    return KCompositeJob_DoResume((KCompositeJob*)self);
}

bool k_compositejob_qbase_do_resume(void* self) {
    return KCompositeJob_QBaseDoResume((KCompositeJob*)self);
}

void k_compositejob_on_do_resume(void* self, bool (*callback)()) {
    KCompositeJob_OnDoResume((KCompositeJob*)self, (intptr_t)callback);
}

const char* k_compositejob_error_string(void* self) {
    libqt_string _str = KCompositeJob_ErrorString((KCompositeJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_compositejob_qbase_error_string(void* self) {
    libqt_string _str = KCompositeJob_QBaseErrorString((KCompositeJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_compositejob_on_error_string(void* self, const char* (*callback)()) {
    KCompositeJob_OnErrorString((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_event(void* self, void* event) {
    return KCompositeJob_Event((KCompositeJob*)self, (QEvent*)event);
}

bool k_compositejob_qbase_event(void* self, void* event) {
    return KCompositeJob_QBaseEvent((KCompositeJob*)self, (QEvent*)event);
}

void k_compositejob_on_event(void* self, bool (*callback)(void*, void*)) {
    KCompositeJob_OnEvent((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_event_filter(void* self, void* watched, void* event) {
    return KCompositeJob_EventFilter((KCompositeJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_compositejob_qbase_event_filter(void* self, void* watched, void* event) {
    return KCompositeJob_QBaseEventFilter((KCompositeJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_compositejob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCompositeJob_OnEventFilter((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_timer_event(void* self, void* event) {
    KCompositeJob_TimerEvent((KCompositeJob*)self, (QTimerEvent*)event);
}

void k_compositejob_qbase_timer_event(void* self, void* event) {
    KCompositeJob_QBaseTimerEvent((KCompositeJob*)self, (QTimerEvent*)event);
}

void k_compositejob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCompositeJob_OnTimerEvent((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_child_event(void* self, void* event) {
    KCompositeJob_ChildEvent((KCompositeJob*)self, (QChildEvent*)event);
}

void k_compositejob_qbase_child_event(void* self, void* event) {
    KCompositeJob_QBaseChildEvent((KCompositeJob*)self, (QChildEvent*)event);
}

void k_compositejob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCompositeJob_OnChildEvent((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_custom_event(void* self, void* event) {
    KCompositeJob_CustomEvent((KCompositeJob*)self, (QEvent*)event);
}

void k_compositejob_qbase_custom_event(void* self, void* event) {
    KCompositeJob_QBaseCustomEvent((KCompositeJob*)self, (QEvent*)event);
}

void k_compositejob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCompositeJob_OnCustomEvent((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_connect_notify(void* self, void* signal) {
    KCompositeJob_ConnectNotify((KCompositeJob*)self, (QMetaMethod*)signal);
}

void k_compositejob_qbase_connect_notify(void* self, void* signal) {
    KCompositeJob_QBaseConnectNotify((KCompositeJob*)self, (QMetaMethod*)signal);
}

void k_compositejob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCompositeJob_OnConnectNotify((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_disconnect_notify(void* self, void* signal) {
    KCompositeJob_DisconnectNotify((KCompositeJob*)self, (QMetaMethod*)signal);
}

void k_compositejob_qbase_disconnect_notify(void* self, void* signal) {
    KCompositeJob_QBaseDisconnectNotify((KCompositeJob*)self, (QMetaMethod*)signal);
}

void k_compositejob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCompositeJob_OnDisconnectNotify((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_set_capabilities(void* self, int32_t capabilities) {
    KCompositeJob_SetCapabilities((KCompositeJob*)self, capabilities);
}

void k_compositejob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KCompositeJob_QBaseSetCapabilities((KCompositeJob*)self, capabilities);
}

void k_compositejob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KCompositeJob_OnSetCapabilities((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_is_finished(void* self) {
    return KCompositeJob_IsFinished((KCompositeJob*)self);
}

bool k_compositejob_qbase_is_finished(void* self) {
    return KCompositeJob_QBaseIsFinished((KCompositeJob*)self);
}

void k_compositejob_on_is_finished(void* self, bool (*callback)()) {
    KCompositeJob_OnIsFinished((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_set_error(void* self, int errorCode) {
    KCompositeJob_SetError((KCompositeJob*)self, errorCode);
}

void k_compositejob_qbase_set_error(void* self, int errorCode) {
    KCompositeJob_QBaseSetError((KCompositeJob*)self, errorCode);
}

void k_compositejob_on_set_error(void* self, void (*callback)(void*, int)) {
    KCompositeJob_OnSetError((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_set_error_text(void* self, const char* errorText) {
    KCompositeJob_SetErrorText((KCompositeJob*)self, qstring(errorText));
}

void k_compositejob_qbase_set_error_text(void* self, const char* errorText) {
    KCompositeJob_QBaseSetErrorText((KCompositeJob*)self, qstring(errorText));
}

void k_compositejob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KCompositeJob_OnSetErrorText((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KCompositeJob_SetProcessedAmount((KCompositeJob*)self, unit, amount);
}

void k_compositejob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KCompositeJob_QBaseSetProcessedAmount((KCompositeJob*)self, unit, amount);
}

void k_compositejob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KCompositeJob_OnSetProcessedAmount((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KCompositeJob_SetTotalAmount((KCompositeJob*)self, unit, amount);
}

void k_compositejob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KCompositeJob_QBaseSetTotalAmount((KCompositeJob*)self, unit, amount);
}

void k_compositejob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KCompositeJob_OnSetTotalAmount((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_set_progress_unit(void* self, int32_t unit) {
    KCompositeJob_SetProgressUnit((KCompositeJob*)self, unit);
}

void k_compositejob_qbase_set_progress_unit(void* self, int32_t unit) {
    KCompositeJob_QBaseSetProgressUnit((KCompositeJob*)self, unit);
}

void k_compositejob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KCompositeJob_OnSetProgressUnit((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_set_percent(void* self, uint64_t percentage) {
    KCompositeJob_SetPercent((KCompositeJob*)self, percentage);
}

void k_compositejob_qbase_set_percent(void* self, uint64_t percentage) {
    KCompositeJob_QBaseSetPercent((KCompositeJob*)self, percentage);
}

void k_compositejob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KCompositeJob_OnSetPercent((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_emit_result(void* self) {
    KCompositeJob_EmitResult((KCompositeJob*)self);
}

void k_compositejob_qbase_emit_result(void* self) {
    KCompositeJob_QBaseEmitResult((KCompositeJob*)self);
}

void k_compositejob_on_emit_result(void* self, void (*callback)()) {
    KCompositeJob_OnEmitResult((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KCompositeJob_EmitPercent((KCompositeJob*)self, processedAmount, totalAmount);
}

void k_compositejob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KCompositeJob_QBaseEmitPercent((KCompositeJob*)self, processedAmount, totalAmount);
}

void k_compositejob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KCompositeJob_OnEmitPercent((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_emit_speed(void* self, uint64_t speed) {
    KCompositeJob_EmitSpeed((KCompositeJob*)self, speed);
}

void k_compositejob_qbase_emit_speed(void* self, uint64_t speed) {
    KCompositeJob_QBaseEmitSpeed((KCompositeJob*)self, speed);
}

void k_compositejob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KCompositeJob_OnEmitSpeed((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_start_elapsed_timer(void* self) {
    KCompositeJob_StartElapsedTimer((KCompositeJob*)self);
}

void k_compositejob_qbase_start_elapsed_timer(void* self) {
    KCompositeJob_QBaseStartElapsedTimer((KCompositeJob*)self);
}

void k_compositejob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KCompositeJob_OnStartElapsedTimer((KCompositeJob*)self, (intptr_t)callback);
}

QObject* k_compositejob_sender(void* self) {
    return KCompositeJob_Sender((KCompositeJob*)self);
}

QObject* k_compositejob_qbase_sender(void* self) {
    return KCompositeJob_QBaseSender((KCompositeJob*)self);
}

void k_compositejob_on_sender(void* self, QObject* (*callback)()) {
    KCompositeJob_OnSender((KCompositeJob*)self, (intptr_t)callback);
}

int32_t k_compositejob_sender_signal_index(void* self) {
    return KCompositeJob_SenderSignalIndex((KCompositeJob*)self);
}

int32_t k_compositejob_qbase_sender_signal_index(void* self) {
    return KCompositeJob_QBaseSenderSignalIndex((KCompositeJob*)self);
}

void k_compositejob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCompositeJob_OnSenderSignalIndex((KCompositeJob*)self, (intptr_t)callback);
}

int32_t k_compositejob_receivers(void* self, const char* signal) {
    return KCompositeJob_Receivers((KCompositeJob*)self, signal);
}

int32_t k_compositejob_qbase_receivers(void* self, const char* signal) {
    return KCompositeJob_QBaseReceivers((KCompositeJob*)self, signal);
}

void k_compositejob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCompositeJob_OnReceivers((KCompositeJob*)self, (intptr_t)callback);
}

bool k_compositejob_is_signal_connected(void* self, void* signal) {
    return KCompositeJob_IsSignalConnected((KCompositeJob*)self, (QMetaMethod*)signal);
}

bool k_compositejob_qbase_is_signal_connected(void* self, void* signal) {
    return KCompositeJob_QBaseIsSignalConnected((KCompositeJob*)self, (QMetaMethod*)signal);
}

void k_compositejob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCompositeJob_OnIsSignalConnected((KCompositeJob*)self, (intptr_t)callback);
}

void k_compositejob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_compositejob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_compositejob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_compositejob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_compositejob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_compositejob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_compositejob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_compositejob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_compositejob_delete(void* self) {
    KCompositeJob_Delete((KCompositeJob*)(self));
}
