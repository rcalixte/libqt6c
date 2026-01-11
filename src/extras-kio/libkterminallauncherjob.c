#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqprocess.hpp"
#include "libkterminallauncherjob.hpp"
#include "libkterminallauncherjob.h"

KTerminalLauncherJob* k_terminallauncherjob_new(const char* command) {
    return KTerminalLauncherJob_new(qstring(command));
}

KTerminalLauncherJob* k_terminallauncherjob_new2(const char* command, void* parent) {
    return KTerminalLauncherJob_new2(qstring(command), (QObject*)parent);
}

const QMetaObject* k_terminallauncherjob_meta_object(void* self) {
    return KTerminalLauncherJob_MetaObject((KTerminalLauncherJob*)self);
}

void* k_terminallauncherjob_metacast(void* self, const char* param1) {
    return KTerminalLauncherJob_Metacast((KTerminalLauncherJob*)self, param1);
}

int32_t k_terminallauncherjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTerminalLauncherJob_Metacall((KTerminalLauncherJob*)self, param1, param2, param3);
}

void k_terminallauncherjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTerminalLauncherJob_OnMetacall((KTerminalLauncherJob*)self, (intptr_t)callback);
}

int32_t k_terminallauncherjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTerminalLauncherJob_QBaseMetacall((KTerminalLauncherJob*)self, param1, param2, param3);
}

const char* k_terminallauncherjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_terminallauncherjob_set_working_directory(void* self, const char* workingDirectory) {
    KTerminalLauncherJob_SetWorkingDirectory((KTerminalLauncherJob*)self, qstring(workingDirectory));
}

void k_terminallauncherjob_set_startup_id(void* self, const char* startupId) {
    KTerminalLauncherJob_SetStartupId((KTerminalLauncherJob*)self, qstring(startupId));
}

void k_terminallauncherjob_set_process_environment(void* self, void* environment) {
    KTerminalLauncherJob_SetProcessEnvironment((KTerminalLauncherJob*)self, (QProcessEnvironment*)environment);
}

void k_terminallauncherjob_start(void* self) {
    KTerminalLauncherJob_Start((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_on_start(void* self, void (*callback)()) {
    KTerminalLauncherJob_OnStart((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_qbase_start(void* self) {
    KTerminalLauncherJob_QBaseStart((KTerminalLauncherJob*)self);
}

const char* k_terminallauncherjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_terminallauncherjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_terminallauncherjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_terminallauncherjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_terminallauncherjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_terminallauncherjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_terminallauncherjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_terminallauncherjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_terminallauncherjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_terminallauncherjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_terminallauncherjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_terminallauncherjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_terminallauncherjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_terminallauncherjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_terminallauncherjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_terminallauncherjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_terminallauncherjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_terminallauncherjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_terminallauncherjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_terminallauncherjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_terminallauncherjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_terminallauncherjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_terminallauncherjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_terminallauncherjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_terminallauncherjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_terminallauncherjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_terminallauncherjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_terminallauncherjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_terminallauncherjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_terminallauncherjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_terminallauncherjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_terminallauncherjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_terminallauncherjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_terminallauncherjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_terminallauncherjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_terminallauncherjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_terminallauncherjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_terminallauncherjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_terminallauncherjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_terminallauncherjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_terminallauncherjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_terminallauncherjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_terminallauncherjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_terminallauncherjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_terminallauncherjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_terminallauncherjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_terminallauncherjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_terminallauncherjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_terminallauncherjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_terminallauncherjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_terminallauncherjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_terminallauncherjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_terminallauncherjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_terminallauncherjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_terminallauncherjob_dynamic_property_names");
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

QBindingStorage* k_terminallauncherjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_terminallauncherjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_terminallauncherjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_terminallauncherjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_terminallauncherjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_terminallauncherjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_terminallauncherjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_terminallauncherjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_terminallauncherjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_terminallauncherjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_terminallauncherjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_terminallauncherjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_terminallauncherjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_terminallauncherjob_do_kill(void* self) {
    return KTerminalLauncherJob_DoKill((KTerminalLauncherJob*)self);
}

bool k_terminallauncherjob_qbase_do_kill(void* self) {
    return KTerminalLauncherJob_QBaseDoKill((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_on_do_kill(void* self, bool (*callback)()) {
    KTerminalLauncherJob_OnDoKill((KTerminalLauncherJob*)self, (intptr_t)callback);
}

bool k_terminallauncherjob_do_suspend(void* self) {
    return KTerminalLauncherJob_DoSuspend((KTerminalLauncherJob*)self);
}

bool k_terminallauncherjob_qbase_do_suspend(void* self) {
    return KTerminalLauncherJob_QBaseDoSuspend((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_on_do_suspend(void* self, bool (*callback)()) {
    KTerminalLauncherJob_OnDoSuspend((KTerminalLauncherJob*)self, (intptr_t)callback);
}

bool k_terminallauncherjob_do_resume(void* self) {
    return KTerminalLauncherJob_DoResume((KTerminalLauncherJob*)self);
}

bool k_terminallauncherjob_qbase_do_resume(void* self) {
    return KTerminalLauncherJob_QBaseDoResume((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_on_do_resume(void* self, bool (*callback)()) {
    KTerminalLauncherJob_OnDoResume((KTerminalLauncherJob*)self, (intptr_t)callback);
}

const char* k_terminallauncherjob_error_string(void* self) {
    libqt_string _str = KTerminalLauncherJob_ErrorString((KTerminalLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_terminallauncherjob_qbase_error_string(void* self) {
    libqt_string _str = KTerminalLauncherJob_QBaseErrorString((KTerminalLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_terminallauncherjob_on_error_string(void* self, const char* (*callback)()) {
    KTerminalLauncherJob_OnErrorString((KTerminalLauncherJob*)self, (intptr_t)callback);
}

bool k_terminallauncherjob_event(void* self, void* event) {
    return KTerminalLauncherJob_Event((KTerminalLauncherJob*)self, (QEvent*)event);
}

bool k_terminallauncherjob_qbase_event(void* self, void* event) {
    return KTerminalLauncherJob_QBaseEvent((KTerminalLauncherJob*)self, (QEvent*)event);
}

void k_terminallauncherjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KTerminalLauncherJob_OnEvent((KTerminalLauncherJob*)self, (intptr_t)callback);
}

bool k_terminallauncherjob_event_filter(void* self, void* watched, void* event) {
    return KTerminalLauncherJob_EventFilter((KTerminalLauncherJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_terminallauncherjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KTerminalLauncherJob_QBaseEventFilter((KTerminalLauncherJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_terminallauncherjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTerminalLauncherJob_OnEventFilter((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_timer_event(void* self, void* event) {
    KTerminalLauncherJob_TimerEvent((KTerminalLauncherJob*)self, (QTimerEvent*)event);
}

void k_terminallauncherjob_qbase_timer_event(void* self, void* event) {
    KTerminalLauncherJob_QBaseTimerEvent((KTerminalLauncherJob*)self, (QTimerEvent*)event);
}

void k_terminallauncherjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTerminalLauncherJob_OnTimerEvent((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_child_event(void* self, void* event) {
    KTerminalLauncherJob_ChildEvent((KTerminalLauncherJob*)self, (QChildEvent*)event);
}

void k_terminallauncherjob_qbase_child_event(void* self, void* event) {
    KTerminalLauncherJob_QBaseChildEvent((KTerminalLauncherJob*)self, (QChildEvent*)event);
}

void k_terminallauncherjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTerminalLauncherJob_OnChildEvent((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_custom_event(void* self, void* event) {
    KTerminalLauncherJob_CustomEvent((KTerminalLauncherJob*)self, (QEvent*)event);
}

void k_terminallauncherjob_qbase_custom_event(void* self, void* event) {
    KTerminalLauncherJob_QBaseCustomEvent((KTerminalLauncherJob*)self, (QEvent*)event);
}

void k_terminallauncherjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTerminalLauncherJob_OnCustomEvent((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_connect_notify(void* self, void* signal) {
    KTerminalLauncherJob_ConnectNotify((KTerminalLauncherJob*)self, (QMetaMethod*)signal);
}

void k_terminallauncherjob_qbase_connect_notify(void* self, void* signal) {
    KTerminalLauncherJob_QBaseConnectNotify((KTerminalLauncherJob*)self, (QMetaMethod*)signal);
}

void k_terminallauncherjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTerminalLauncherJob_OnConnectNotify((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_disconnect_notify(void* self, void* signal) {
    KTerminalLauncherJob_DisconnectNotify((KTerminalLauncherJob*)self, (QMetaMethod*)signal);
}

void k_terminallauncherjob_qbase_disconnect_notify(void* self, void* signal) {
    KTerminalLauncherJob_QBaseDisconnectNotify((KTerminalLauncherJob*)self, (QMetaMethod*)signal);
}

void k_terminallauncherjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTerminalLauncherJob_OnDisconnectNotify((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_set_capabilities(void* self, int32_t capabilities) {
    KTerminalLauncherJob_SetCapabilities((KTerminalLauncherJob*)self, capabilities);
}

void k_terminallauncherjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KTerminalLauncherJob_QBaseSetCapabilities((KTerminalLauncherJob*)self, capabilities);
}

void k_terminallauncherjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KTerminalLauncherJob_OnSetCapabilities((KTerminalLauncherJob*)self, (intptr_t)callback);
}

bool k_terminallauncherjob_is_finished(void* self) {
    return KTerminalLauncherJob_IsFinished((KTerminalLauncherJob*)self);
}

bool k_terminallauncherjob_qbase_is_finished(void* self) {
    return KTerminalLauncherJob_QBaseIsFinished((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_on_is_finished(void* self, bool (*callback)()) {
    KTerminalLauncherJob_OnIsFinished((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_set_error(void* self, int errorCode) {
    KTerminalLauncherJob_SetError((KTerminalLauncherJob*)self, errorCode);
}

void k_terminallauncherjob_qbase_set_error(void* self, int errorCode) {
    KTerminalLauncherJob_QBaseSetError((KTerminalLauncherJob*)self, errorCode);
}

void k_terminallauncherjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KTerminalLauncherJob_OnSetError((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_set_error_text(void* self, const char* errorText) {
    KTerminalLauncherJob_SetErrorText((KTerminalLauncherJob*)self, qstring(errorText));
}

void k_terminallauncherjob_qbase_set_error_text(void* self, const char* errorText) {
    KTerminalLauncherJob_QBaseSetErrorText((KTerminalLauncherJob*)self, qstring(errorText));
}

void k_terminallauncherjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KTerminalLauncherJob_OnSetErrorText((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KTerminalLauncherJob_SetProcessedAmount((KTerminalLauncherJob*)self, unit, amount);
}

void k_terminallauncherjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KTerminalLauncherJob_QBaseSetProcessedAmount((KTerminalLauncherJob*)self, unit, amount);
}

void k_terminallauncherjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KTerminalLauncherJob_OnSetProcessedAmount((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KTerminalLauncherJob_SetTotalAmount((KTerminalLauncherJob*)self, unit, amount);
}

void k_terminallauncherjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KTerminalLauncherJob_QBaseSetTotalAmount((KTerminalLauncherJob*)self, unit, amount);
}

void k_terminallauncherjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KTerminalLauncherJob_OnSetTotalAmount((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_set_progress_unit(void* self, int32_t unit) {
    KTerminalLauncherJob_SetProgressUnit((KTerminalLauncherJob*)self, unit);
}

void k_terminallauncherjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KTerminalLauncherJob_QBaseSetProgressUnit((KTerminalLauncherJob*)self, unit);
}

void k_terminallauncherjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KTerminalLauncherJob_OnSetProgressUnit((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_set_percent(void* self, uint64_t percentage) {
    KTerminalLauncherJob_SetPercent((KTerminalLauncherJob*)self, percentage);
}

void k_terminallauncherjob_qbase_set_percent(void* self, uint64_t percentage) {
    KTerminalLauncherJob_QBaseSetPercent((KTerminalLauncherJob*)self, percentage);
}

void k_terminallauncherjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KTerminalLauncherJob_OnSetPercent((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_emit_result(void* self) {
    KTerminalLauncherJob_EmitResult((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_qbase_emit_result(void* self) {
    KTerminalLauncherJob_QBaseEmitResult((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_on_emit_result(void* self, void (*callback)()) {
    KTerminalLauncherJob_OnEmitResult((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KTerminalLauncherJob_EmitPercent((KTerminalLauncherJob*)self, processedAmount, totalAmount);
}

void k_terminallauncherjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KTerminalLauncherJob_QBaseEmitPercent((KTerminalLauncherJob*)self, processedAmount, totalAmount);
}

void k_terminallauncherjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KTerminalLauncherJob_OnEmitPercent((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_emit_speed(void* self, uint64_t speed) {
    KTerminalLauncherJob_EmitSpeed((KTerminalLauncherJob*)self, speed);
}

void k_terminallauncherjob_qbase_emit_speed(void* self, uint64_t speed) {
    KTerminalLauncherJob_QBaseEmitSpeed((KTerminalLauncherJob*)self, speed);
}

void k_terminallauncherjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KTerminalLauncherJob_OnEmitSpeed((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_start_elapsed_timer(void* self) {
    KTerminalLauncherJob_StartElapsedTimer((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_qbase_start_elapsed_timer(void* self) {
    KTerminalLauncherJob_QBaseStartElapsedTimer((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KTerminalLauncherJob_OnStartElapsedTimer((KTerminalLauncherJob*)self, (intptr_t)callback);
}

QObject* k_terminallauncherjob_sender(void* self) {
    return KTerminalLauncherJob_Sender((KTerminalLauncherJob*)self);
}

QObject* k_terminallauncherjob_qbase_sender(void* self) {
    return KTerminalLauncherJob_QBaseSender((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_on_sender(void* self, QObject* (*callback)()) {
    KTerminalLauncherJob_OnSender((KTerminalLauncherJob*)self, (intptr_t)callback);
}

int32_t k_terminallauncherjob_sender_signal_index(void* self) {
    return KTerminalLauncherJob_SenderSignalIndex((KTerminalLauncherJob*)self);
}

int32_t k_terminallauncherjob_qbase_sender_signal_index(void* self) {
    return KTerminalLauncherJob_QBaseSenderSignalIndex((KTerminalLauncherJob*)self);
}

void k_terminallauncherjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTerminalLauncherJob_OnSenderSignalIndex((KTerminalLauncherJob*)self, (intptr_t)callback);
}

int32_t k_terminallauncherjob_receivers(void* self, const char* signal) {
    return KTerminalLauncherJob_Receivers((KTerminalLauncherJob*)self, signal);
}

int32_t k_terminallauncherjob_qbase_receivers(void* self, const char* signal) {
    return KTerminalLauncherJob_QBaseReceivers((KTerminalLauncherJob*)self, signal);
}

void k_terminallauncherjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTerminalLauncherJob_OnReceivers((KTerminalLauncherJob*)self, (intptr_t)callback);
}

bool k_terminallauncherjob_is_signal_connected(void* self, void* signal) {
    return KTerminalLauncherJob_IsSignalConnected((KTerminalLauncherJob*)self, (QMetaMethod*)signal);
}

bool k_terminallauncherjob_qbase_is_signal_connected(void* self, void* signal) {
    return KTerminalLauncherJob_QBaseIsSignalConnected((KTerminalLauncherJob*)self, (QMetaMethod*)signal);
}

void k_terminallauncherjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTerminalLauncherJob_OnIsSignalConnected((KTerminalLauncherJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_terminallauncherjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_terminallauncherjob_delete(void* self) {
    KTerminalLauncherJob_Delete((KTerminalLauncherJob*)(self));
}
