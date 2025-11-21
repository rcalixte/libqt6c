#include "libkjob.hpp"
#include "libkprocesslist.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libklistopenfilesjob.hpp"
#include "libklistopenfilesjob.h"

KListOpenFilesJob* k_listopenfilesjob_new(const char* path) {
    return KListOpenFilesJob_new(qstring(path));
}

const QMetaObject* k_listopenfilesjob_meta_object(void* self) {
    return KListOpenFilesJob_MetaObject((KListOpenFilesJob*)self);
}

void* k_listopenfilesjob_metacast(void* self, const char* param1) {
    return KListOpenFilesJob_Metacast((KListOpenFilesJob*)self, param1);
}

int32_t k_listopenfilesjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KListOpenFilesJob_Metacall((KListOpenFilesJob*)self, param1, param2, param3);
}

void k_listopenfilesjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KListOpenFilesJob_OnMetacall((KListOpenFilesJob*)self, (intptr_t)callback);
}

int32_t k_listopenfilesjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KListOpenFilesJob_QBaseMetacall((KListOpenFilesJob*)self, param1, param2, param3);
}

const char* k_listopenfilesjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listopenfilesjob_start(void* self) {
    KListOpenFilesJob_Start((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_start(void* self, void (*callback)()) {
    KListOpenFilesJob_OnStart((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_qbase_start(void* self) {
    KListOpenFilesJob_QBaseStart((KListOpenFilesJob*)self);
}

libqt_list /* of KProcessList__KProcessInfo* */ k_listopenfilesjob_process_info_list(void* self) {
    libqt_list _arr = KListOpenFilesJob_ProcessInfoList((KListOpenFilesJob*)self);
    return _arr;
}

const char* k_listopenfilesjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_listopenfilesjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listopenfilesjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_listopenfilesjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_listopenfilesjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_listopenfilesjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_listopenfilesjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_listopenfilesjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_listopenfilesjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_listopenfilesjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_listopenfilesjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_listopenfilesjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_listopenfilesjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_listopenfilesjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_listopenfilesjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_listopenfilesjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_listopenfilesjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_listopenfilesjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_listopenfilesjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_listopenfilesjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_listopenfilesjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_listopenfilesjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_listopenfilesjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_listopenfilesjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_listopenfilesjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_listopenfilesjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_listopenfilesjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_listopenfilesjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_listopenfilesjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listopenfilesjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_listopenfilesjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_listopenfilesjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_listopenfilesjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_listopenfilesjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_listopenfilesjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_listopenfilesjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_listopenfilesjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_listopenfilesjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_listopenfilesjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_listopenfilesjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_listopenfilesjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_listopenfilesjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_listopenfilesjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_listopenfilesjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_listopenfilesjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_listopenfilesjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_listopenfilesjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_listopenfilesjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_listopenfilesjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_listopenfilesjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_listopenfilesjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_listopenfilesjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_listopenfilesjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_listopenfilesjob_dynamic_property_names");
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

QBindingStorage* k_listopenfilesjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_listopenfilesjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_listopenfilesjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_listopenfilesjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_listopenfilesjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_listopenfilesjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_listopenfilesjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_listopenfilesjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_listopenfilesjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_listopenfilesjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_listopenfilesjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_listopenfilesjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_listopenfilesjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_do_kill(void* self) {
    return KListOpenFilesJob_DoKill((KListOpenFilesJob*)self);
}

bool k_listopenfilesjob_qbase_do_kill(void* self) {
    return KListOpenFilesJob_QBaseDoKill((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_do_kill(void* self, bool (*callback)()) {
    KListOpenFilesJob_OnDoKill((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_do_suspend(void* self) {
    return KListOpenFilesJob_DoSuspend((KListOpenFilesJob*)self);
}

bool k_listopenfilesjob_qbase_do_suspend(void* self) {
    return KListOpenFilesJob_QBaseDoSuspend((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_do_suspend(void* self, bool (*callback)()) {
    KListOpenFilesJob_OnDoSuspend((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_do_resume(void* self) {
    return KListOpenFilesJob_DoResume((KListOpenFilesJob*)self);
}

bool k_listopenfilesjob_qbase_do_resume(void* self) {
    return KListOpenFilesJob_QBaseDoResume((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_do_resume(void* self, bool (*callback)()) {
    KListOpenFilesJob_OnDoResume((KListOpenFilesJob*)self, (intptr_t)callback);
}

const char* k_listopenfilesjob_error_string(void* self) {
    libqt_string _str = KListOpenFilesJob_ErrorString((KListOpenFilesJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_listopenfilesjob_qbase_error_string(void* self) {
    libqt_string _str = KListOpenFilesJob_QBaseErrorString((KListOpenFilesJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listopenfilesjob_on_error_string(void* self, const char* (*callback)()) {
    KListOpenFilesJob_OnErrorString((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_event(void* self, void* event) {
    return KListOpenFilesJob_Event((KListOpenFilesJob*)self, (QEvent*)event);
}

bool k_listopenfilesjob_qbase_event(void* self, void* event) {
    return KListOpenFilesJob_QBaseEvent((KListOpenFilesJob*)self, (QEvent*)event);
}

void k_listopenfilesjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KListOpenFilesJob_OnEvent((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_event_filter(void* self, void* watched, void* event) {
    return KListOpenFilesJob_EventFilter((KListOpenFilesJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_listopenfilesjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KListOpenFilesJob_QBaseEventFilter((KListOpenFilesJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_listopenfilesjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KListOpenFilesJob_OnEventFilter((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_timer_event(void* self, void* event) {
    KListOpenFilesJob_TimerEvent((KListOpenFilesJob*)self, (QTimerEvent*)event);
}

void k_listopenfilesjob_qbase_timer_event(void* self, void* event) {
    KListOpenFilesJob_QBaseTimerEvent((KListOpenFilesJob*)self, (QTimerEvent*)event);
}

void k_listopenfilesjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KListOpenFilesJob_OnTimerEvent((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_child_event(void* self, void* event) {
    KListOpenFilesJob_ChildEvent((KListOpenFilesJob*)self, (QChildEvent*)event);
}

void k_listopenfilesjob_qbase_child_event(void* self, void* event) {
    KListOpenFilesJob_QBaseChildEvent((KListOpenFilesJob*)self, (QChildEvent*)event);
}

void k_listopenfilesjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KListOpenFilesJob_OnChildEvent((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_custom_event(void* self, void* event) {
    KListOpenFilesJob_CustomEvent((KListOpenFilesJob*)self, (QEvent*)event);
}

void k_listopenfilesjob_qbase_custom_event(void* self, void* event) {
    KListOpenFilesJob_QBaseCustomEvent((KListOpenFilesJob*)self, (QEvent*)event);
}

void k_listopenfilesjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KListOpenFilesJob_OnCustomEvent((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_connect_notify(void* self, void* signal) {
    KListOpenFilesJob_ConnectNotify((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

void k_listopenfilesjob_qbase_connect_notify(void* self, void* signal) {
    KListOpenFilesJob_QBaseConnectNotify((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

void k_listopenfilesjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KListOpenFilesJob_OnConnectNotify((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_disconnect_notify(void* self, void* signal) {
    KListOpenFilesJob_DisconnectNotify((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

void k_listopenfilesjob_qbase_disconnect_notify(void* self, void* signal) {
    KListOpenFilesJob_QBaseDisconnectNotify((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

void k_listopenfilesjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KListOpenFilesJob_OnDisconnectNotify((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_set_capabilities(void* self, int32_t capabilities) {
    KListOpenFilesJob_SetCapabilities((KListOpenFilesJob*)self, capabilities);
}

void k_listopenfilesjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KListOpenFilesJob_QBaseSetCapabilities((KListOpenFilesJob*)self, capabilities);
}

void k_listopenfilesjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KListOpenFilesJob_OnSetCapabilities((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_is_finished(void* self) {
    return KListOpenFilesJob_IsFinished((KListOpenFilesJob*)self);
}

bool k_listopenfilesjob_qbase_is_finished(void* self) {
    return KListOpenFilesJob_QBaseIsFinished((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_is_finished(void* self, bool (*callback)()) {
    KListOpenFilesJob_OnIsFinished((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_set_error(void* self, int errorCode) {
    KListOpenFilesJob_SetError((KListOpenFilesJob*)self, errorCode);
}

void k_listopenfilesjob_qbase_set_error(void* self, int errorCode) {
    KListOpenFilesJob_QBaseSetError((KListOpenFilesJob*)self, errorCode);
}

void k_listopenfilesjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KListOpenFilesJob_OnSetError((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_set_error_text(void* self, const char* errorText) {
    KListOpenFilesJob_SetErrorText((KListOpenFilesJob*)self, qstring(errorText));
}

void k_listopenfilesjob_qbase_set_error_text(void* self, const char* errorText) {
    KListOpenFilesJob_QBaseSetErrorText((KListOpenFilesJob*)self, qstring(errorText));
}

void k_listopenfilesjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KListOpenFilesJob_OnSetErrorText((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KListOpenFilesJob_SetProcessedAmount((KListOpenFilesJob*)self, unit, amount);
}

void k_listopenfilesjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KListOpenFilesJob_QBaseSetProcessedAmount((KListOpenFilesJob*)self, unit, amount);
}

void k_listopenfilesjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KListOpenFilesJob_OnSetProcessedAmount((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KListOpenFilesJob_SetTotalAmount((KListOpenFilesJob*)self, unit, amount);
}

void k_listopenfilesjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KListOpenFilesJob_QBaseSetTotalAmount((KListOpenFilesJob*)self, unit, amount);
}

void k_listopenfilesjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KListOpenFilesJob_OnSetTotalAmount((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_set_progress_unit(void* self, int32_t unit) {
    KListOpenFilesJob_SetProgressUnit((KListOpenFilesJob*)self, unit);
}

void k_listopenfilesjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KListOpenFilesJob_QBaseSetProgressUnit((KListOpenFilesJob*)self, unit);
}

void k_listopenfilesjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KListOpenFilesJob_OnSetProgressUnit((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_set_percent(void* self, uint64_t percentage) {
    KListOpenFilesJob_SetPercent((KListOpenFilesJob*)self, percentage);
}

void k_listopenfilesjob_qbase_set_percent(void* self, uint64_t percentage) {
    KListOpenFilesJob_QBaseSetPercent((KListOpenFilesJob*)self, percentage);
}

void k_listopenfilesjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KListOpenFilesJob_OnSetPercent((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_emit_result(void* self) {
    KListOpenFilesJob_EmitResult((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_qbase_emit_result(void* self) {
    KListOpenFilesJob_QBaseEmitResult((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_emit_result(void* self, void (*callback)()) {
    KListOpenFilesJob_OnEmitResult((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KListOpenFilesJob_EmitPercent((KListOpenFilesJob*)self, processedAmount, totalAmount);
}

void k_listopenfilesjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KListOpenFilesJob_QBaseEmitPercent((KListOpenFilesJob*)self, processedAmount, totalAmount);
}

void k_listopenfilesjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KListOpenFilesJob_OnEmitPercent((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_emit_speed(void* self, uint64_t speed) {
    KListOpenFilesJob_EmitSpeed((KListOpenFilesJob*)self, speed);
}

void k_listopenfilesjob_qbase_emit_speed(void* self, uint64_t speed) {
    KListOpenFilesJob_QBaseEmitSpeed((KListOpenFilesJob*)self, speed);
}

void k_listopenfilesjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KListOpenFilesJob_OnEmitSpeed((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_start_elapsed_timer(void* self) {
    KListOpenFilesJob_StartElapsedTimer((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_qbase_start_elapsed_timer(void* self) {
    KListOpenFilesJob_QBaseStartElapsedTimer((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KListOpenFilesJob_OnStartElapsedTimer((KListOpenFilesJob*)self, (intptr_t)callback);
}

QObject* k_listopenfilesjob_sender(void* self) {
    return KListOpenFilesJob_Sender((KListOpenFilesJob*)self);
}

QObject* k_listopenfilesjob_qbase_sender(void* self) {
    return KListOpenFilesJob_QBaseSender((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_sender(void* self, QObject* (*callback)()) {
    KListOpenFilesJob_OnSender((KListOpenFilesJob*)self, (intptr_t)callback);
}

int32_t k_listopenfilesjob_sender_signal_index(void* self) {
    return KListOpenFilesJob_SenderSignalIndex((KListOpenFilesJob*)self);
}

int32_t k_listopenfilesjob_qbase_sender_signal_index(void* self) {
    return KListOpenFilesJob_QBaseSenderSignalIndex((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KListOpenFilesJob_OnSenderSignalIndex((KListOpenFilesJob*)self, (intptr_t)callback);
}

int32_t k_listopenfilesjob_receivers(void* self, const char* signal) {
    return KListOpenFilesJob_Receivers((KListOpenFilesJob*)self, signal);
}

int32_t k_listopenfilesjob_qbase_receivers(void* self, const char* signal) {
    return KListOpenFilesJob_QBaseReceivers((KListOpenFilesJob*)self, signal);
}

void k_listopenfilesjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KListOpenFilesJob_OnReceivers((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_is_signal_connected(void* self, void* signal) {
    return KListOpenFilesJob_IsSignalConnected((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

bool k_listopenfilesjob_qbase_is_signal_connected(void* self, void* signal) {
    return KListOpenFilesJob_QBaseIsSignalConnected((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

void k_listopenfilesjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KListOpenFilesJob_OnIsSignalConnected((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_listopenfilesjob_delete(void* self) {
    KListOpenFilesJob_Delete((KListOpenFilesJob*)(self));
}
