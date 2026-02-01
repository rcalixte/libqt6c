#include "../extras-kconfig/libkdesktopfileaction.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../extras-kservice/libkserviceaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libapplicationlauncherjob.hpp"
#include "libapplicationlauncherjob.h"

KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new(void* serviceAction) {
    return KIO__ApplicationLauncherJob_new((KServiceAction*)serviceAction);
}

KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new2(void* desktopFileAction) {
    return KIO__ApplicationLauncherJob_new2((KDesktopFileAction*)desktopFileAction);
}

KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new3() {
    return KIO__ApplicationLauncherJob_new3();
}

KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new4(void* serviceAction, void* parent) {
    return KIO__ApplicationLauncherJob_new4((KServiceAction*)serviceAction, (QObject*)parent);
}

KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new5(void* desktopFileAction, void* parent) {
    return KIO__ApplicationLauncherJob_new5((KDesktopFileAction*)desktopFileAction, (QObject*)parent);
}

KIO__ApplicationLauncherJob* k_io__applicationlauncherjob_new6(void* parent) {
    return KIO__ApplicationLauncherJob_new6((QObject*)parent);
}

void k_io__applicationlauncherjob_set_urls(void* self, libqt_list /* of QUrl* */ urls) {
    KIO__ApplicationLauncherJob_SetUrls((KIO__ApplicationLauncherJob*)self, urls);
}

void k_io__applicationlauncherjob_set_run_flags(void* self, int32_t runFlags) {
    KIO__ApplicationLauncherJob_SetRunFlags((KIO__ApplicationLauncherJob*)self, runFlags);
}

void k_io__applicationlauncherjob_set_suggested_file_name(void* self, const char* suggestedFileName) {
    KIO__ApplicationLauncherJob_SetSuggestedFileName((KIO__ApplicationLauncherJob*)self, qstring(suggestedFileName));
}

void k_io__applicationlauncherjob_set_startup_id(void* self, const char* startupId) {
    KIO__ApplicationLauncherJob_SetStartupId((KIO__ApplicationLauncherJob*)self, qstring(startupId));
}

void k_io__applicationlauncherjob_start(void* self) {
    KIO__ApplicationLauncherJob_Start((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_start(void* self, void (*callback)()) {
    KIO__ApplicationLauncherJob_OnStart((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_qbase_start(void* self) {
    KIO__ApplicationLauncherJob_QBaseStart((KIO__ApplicationLauncherJob*)self);
}

long long k_io__applicationlauncherjob_pid(void* self) {
    return KIO__ApplicationLauncherJob_Pid((KIO__ApplicationLauncherJob*)self);
}

libqt_list /* of long long */ k_io__applicationlauncherjob_pids(void* self) {
    libqt_list _arr = KIO__ApplicationLauncherJob_Pids((KIO__ApplicationLauncherJob*)self);
    return _arr;
}

const char* k_io__applicationlauncherjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__applicationlauncherjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__applicationlauncherjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__applicationlauncherjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__applicationlauncherjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__applicationlauncherjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__applicationlauncherjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__applicationlauncherjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__applicationlauncherjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__applicationlauncherjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__applicationlauncherjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__applicationlauncherjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__applicationlauncherjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__applicationlauncherjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__applicationlauncherjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__applicationlauncherjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__applicationlauncherjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__applicationlauncherjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__applicationlauncherjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__applicationlauncherjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__applicationlauncherjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__applicationlauncherjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__applicationlauncherjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__applicationlauncherjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__applicationlauncherjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__applicationlauncherjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

const char* k_io__applicationlauncherjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__applicationlauncherjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_io__applicationlauncherjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__applicationlauncherjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_io__applicationlauncherjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__applicationlauncherjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__applicationlauncherjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__applicationlauncherjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__applicationlauncherjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__applicationlauncherjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__applicationlauncherjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__applicationlauncherjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__applicationlauncherjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__applicationlauncherjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__applicationlauncherjob_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__applicationlauncherjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__applicationlauncherjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__applicationlauncherjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__applicationlauncherjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__applicationlauncherjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__applicationlauncherjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__applicationlauncherjob_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_io__applicationlauncherjob_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__applicationlauncherjob_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__applicationlauncherjob_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_io__applicationlauncherjob_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__applicationlauncherjob_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_io__applicationlauncherjob_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_io__applicationlauncherjob_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_io__applicationlauncherjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__applicationlauncherjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__applicationlauncherjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__applicationlauncherjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__applicationlauncherjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__applicationlauncherjob_dynamic_property_names\n");
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

QBindingStorage* k_io__applicationlauncherjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__applicationlauncherjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__applicationlauncherjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__applicationlauncherjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__applicationlauncherjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__applicationlauncherjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__applicationlauncherjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_io__applicationlauncherjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__applicationlauncherjob_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__applicationlauncherjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_io__applicationlauncherjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__applicationlauncherjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_io__applicationlauncherjob_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_io__applicationlauncherjob_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_io__applicationlauncherjob_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_io__applicationlauncherjob_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_io__applicationlauncherjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__applicationlauncherjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

const QMetaObject* k_io__applicationlauncherjob_meta_object(void* self) {
    return KIO__ApplicationLauncherJob_MetaObject((KIO__ApplicationLauncherJob*)self);
}

const QMetaObject* k_io__applicationlauncherjob_qbase_meta_object(void* self) {
    return KIO__ApplicationLauncherJob_QBaseMetaObject((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KIO__ApplicationLauncherJob_OnMetaObject((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void* k_io__applicationlauncherjob_metacast(void* self, const char* param1) {
    return KIO__ApplicationLauncherJob_Metacast((KIO__ApplicationLauncherJob*)self, param1);
}

void* k_io__applicationlauncherjob_qbase_metacast(void* self, const char* param1) {
    return KIO__ApplicationLauncherJob_QBaseMetacast((KIO__ApplicationLauncherJob*)self, param1);
}

void k_io__applicationlauncherjob_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KIO__ApplicationLauncherJob_OnMetacast((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

int32_t k_io__applicationlauncherjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__ApplicationLauncherJob_Metacall((KIO__ApplicationLauncherJob*)self, param1, param2, param3);
}

int32_t k_io__applicationlauncherjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__ApplicationLauncherJob_QBaseMetacall((KIO__ApplicationLauncherJob*)self, param1, param2, param3);
}

void k_io__applicationlauncherjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__ApplicationLauncherJob_OnMetacall((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

bool k_io__applicationlauncherjob_do_kill(void* self) {
    return KIO__ApplicationLauncherJob_DoKill((KIO__ApplicationLauncherJob*)self);
}

bool k_io__applicationlauncherjob_qbase_do_kill(void* self) {
    return KIO__ApplicationLauncherJob_QBaseDoKill((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_do_kill(void* self, bool (*callback)()) {
    KIO__ApplicationLauncherJob_OnDoKill((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

bool k_io__applicationlauncherjob_do_suspend(void* self) {
    return KIO__ApplicationLauncherJob_DoSuspend((KIO__ApplicationLauncherJob*)self);
}

bool k_io__applicationlauncherjob_qbase_do_suspend(void* self) {
    return KIO__ApplicationLauncherJob_QBaseDoSuspend((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__ApplicationLauncherJob_OnDoSuspend((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

bool k_io__applicationlauncherjob_do_resume(void* self) {
    return KIO__ApplicationLauncherJob_DoResume((KIO__ApplicationLauncherJob*)self);
}

bool k_io__applicationlauncherjob_qbase_do_resume(void* self) {
    return KIO__ApplicationLauncherJob_QBaseDoResume((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_do_resume(void* self, bool (*callback)()) {
    KIO__ApplicationLauncherJob_OnDoResume((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

const char* k_io__applicationlauncherjob_error_string(void* self) {
    libqt_string _str = KIO__ApplicationLauncherJob_ErrorString((KIO__ApplicationLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__applicationlauncherjob_qbase_error_string(void* self) {
    libqt_string _str = KIO__ApplicationLauncherJob_QBaseErrorString((KIO__ApplicationLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__applicationlauncherjob_on_error_string(void* self, const char* (*callback)()) {
    KIO__ApplicationLauncherJob_OnErrorString((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

bool k_io__applicationlauncherjob_event(void* self, void* event) {
    return KIO__ApplicationLauncherJob_Event((KIO__ApplicationLauncherJob*)self, (QEvent*)event);
}

bool k_io__applicationlauncherjob_qbase_event(void* self, void* event) {
    return KIO__ApplicationLauncherJob_QBaseEvent((KIO__ApplicationLauncherJob*)self, (QEvent*)event);
}

void k_io__applicationlauncherjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__ApplicationLauncherJob_OnEvent((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

bool k_io__applicationlauncherjob_event_filter(void* self, void* watched, void* event) {
    return KIO__ApplicationLauncherJob_EventFilter((KIO__ApplicationLauncherJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__applicationlauncherjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__ApplicationLauncherJob_QBaseEventFilter((KIO__ApplicationLauncherJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__applicationlauncherjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__ApplicationLauncherJob_OnEventFilter((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_timer_event(void* self, void* event) {
    KIO__ApplicationLauncherJob_TimerEvent((KIO__ApplicationLauncherJob*)self, (QTimerEvent*)event);
}

void k_io__applicationlauncherjob_qbase_timer_event(void* self, void* event) {
    KIO__ApplicationLauncherJob_QBaseTimerEvent((KIO__ApplicationLauncherJob*)self, (QTimerEvent*)event);
}

void k_io__applicationlauncherjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__ApplicationLauncherJob_OnTimerEvent((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_child_event(void* self, void* event) {
    KIO__ApplicationLauncherJob_ChildEvent((KIO__ApplicationLauncherJob*)self, (QChildEvent*)event);
}

void k_io__applicationlauncherjob_qbase_child_event(void* self, void* event) {
    KIO__ApplicationLauncherJob_QBaseChildEvent((KIO__ApplicationLauncherJob*)self, (QChildEvent*)event);
}

void k_io__applicationlauncherjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__ApplicationLauncherJob_OnChildEvent((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_custom_event(void* self, void* event) {
    KIO__ApplicationLauncherJob_CustomEvent((KIO__ApplicationLauncherJob*)self, (QEvent*)event);
}

void k_io__applicationlauncherjob_qbase_custom_event(void* self, void* event) {
    KIO__ApplicationLauncherJob_QBaseCustomEvent((KIO__ApplicationLauncherJob*)self, (QEvent*)event);
}

void k_io__applicationlauncherjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__ApplicationLauncherJob_OnCustomEvent((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_connect_notify(void* self, void* signal) {
    KIO__ApplicationLauncherJob_ConnectNotify((KIO__ApplicationLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__applicationlauncherjob_qbase_connect_notify(void* self, void* signal) {
    KIO__ApplicationLauncherJob_QBaseConnectNotify((KIO__ApplicationLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__applicationlauncherjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__ApplicationLauncherJob_OnConnectNotify((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_disconnect_notify(void* self, void* signal) {
    KIO__ApplicationLauncherJob_DisconnectNotify((KIO__ApplicationLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__applicationlauncherjob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__ApplicationLauncherJob_QBaseDisconnectNotify((KIO__ApplicationLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__applicationlauncherjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__ApplicationLauncherJob_OnDisconnectNotify((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_set_capabilities(void* self, int32_t capabilities) {
    KIO__ApplicationLauncherJob_SetCapabilities((KIO__ApplicationLauncherJob*)self, capabilities);
}

void k_io__applicationlauncherjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__ApplicationLauncherJob_QBaseSetCapabilities((KIO__ApplicationLauncherJob*)self, capabilities);
}

void k_io__applicationlauncherjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__ApplicationLauncherJob_OnSetCapabilities((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

bool k_io__applicationlauncherjob_is_finished(void* self) {
    return KIO__ApplicationLauncherJob_IsFinished((KIO__ApplicationLauncherJob*)self);
}

bool k_io__applicationlauncherjob_qbase_is_finished(void* self) {
    return KIO__ApplicationLauncherJob_QBaseIsFinished((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_is_finished(void* self, bool (*callback)()) {
    KIO__ApplicationLauncherJob_OnIsFinished((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_set_error(void* self, int errorCode) {
    KIO__ApplicationLauncherJob_SetError((KIO__ApplicationLauncherJob*)self, errorCode);
}

void k_io__applicationlauncherjob_qbase_set_error(void* self, int errorCode) {
    KIO__ApplicationLauncherJob_QBaseSetError((KIO__ApplicationLauncherJob*)self, errorCode);
}

void k_io__applicationlauncherjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__ApplicationLauncherJob_OnSetError((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_set_error_text(void* self, const char* errorText) {
    KIO__ApplicationLauncherJob_SetErrorText((KIO__ApplicationLauncherJob*)self, qstring(errorText));
}

void k_io__applicationlauncherjob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__ApplicationLauncherJob_QBaseSetErrorText((KIO__ApplicationLauncherJob*)self, qstring(errorText));
}

void k_io__applicationlauncherjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__ApplicationLauncherJob_OnSetErrorText((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__ApplicationLauncherJob_SetProcessedAmount((KIO__ApplicationLauncherJob*)self, unit, amount);
}

void k_io__applicationlauncherjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__ApplicationLauncherJob_QBaseSetProcessedAmount((KIO__ApplicationLauncherJob*)self, unit, amount);
}

void k_io__applicationlauncherjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__ApplicationLauncherJob_OnSetProcessedAmount((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__ApplicationLauncherJob_SetTotalAmount((KIO__ApplicationLauncherJob*)self, unit, amount);
}

void k_io__applicationlauncherjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__ApplicationLauncherJob_QBaseSetTotalAmount((KIO__ApplicationLauncherJob*)self, unit, amount);
}

void k_io__applicationlauncherjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__ApplicationLauncherJob_OnSetTotalAmount((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_set_progress_unit(void* self, int32_t unit) {
    KIO__ApplicationLauncherJob_SetProgressUnit((KIO__ApplicationLauncherJob*)self, unit);
}

void k_io__applicationlauncherjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__ApplicationLauncherJob_QBaseSetProgressUnit((KIO__ApplicationLauncherJob*)self, unit);
}

void k_io__applicationlauncherjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__ApplicationLauncherJob_OnSetProgressUnit((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_set_percent(void* self, uint64_t percentage) {
    KIO__ApplicationLauncherJob_SetPercent((KIO__ApplicationLauncherJob*)self, percentage);
}

void k_io__applicationlauncherjob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__ApplicationLauncherJob_QBaseSetPercent((KIO__ApplicationLauncherJob*)self, percentage);
}

void k_io__applicationlauncherjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__ApplicationLauncherJob_OnSetPercent((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_emit_result(void* self) {
    KIO__ApplicationLauncherJob_EmitResult((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_qbase_emit_result(void* self) {
    KIO__ApplicationLauncherJob_QBaseEmitResult((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_emit_result(void* self, void (*callback)()) {
    KIO__ApplicationLauncherJob_OnEmitResult((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__ApplicationLauncherJob_EmitPercent((KIO__ApplicationLauncherJob*)self, processedAmount, totalAmount);
}

void k_io__applicationlauncherjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__ApplicationLauncherJob_QBaseEmitPercent((KIO__ApplicationLauncherJob*)self, processedAmount, totalAmount);
}

void k_io__applicationlauncherjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__ApplicationLauncherJob_OnEmitPercent((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_emit_speed(void* self, uint64_t speed) {
    KIO__ApplicationLauncherJob_EmitSpeed((KIO__ApplicationLauncherJob*)self, speed);
}

void k_io__applicationlauncherjob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__ApplicationLauncherJob_QBaseEmitSpeed((KIO__ApplicationLauncherJob*)self, speed);
}

void k_io__applicationlauncherjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__ApplicationLauncherJob_OnEmitSpeed((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_start_elapsed_timer(void* self) {
    KIO__ApplicationLauncherJob_StartElapsedTimer((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_qbase_start_elapsed_timer(void* self) {
    KIO__ApplicationLauncherJob_QBaseStartElapsedTimer((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__ApplicationLauncherJob_OnStartElapsedTimer((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

QObject* k_io__applicationlauncherjob_sender(void* self) {
    return KIO__ApplicationLauncherJob_Sender((KIO__ApplicationLauncherJob*)self);
}

QObject* k_io__applicationlauncherjob_qbase_sender(void* self) {
    return KIO__ApplicationLauncherJob_QBaseSender((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_sender(void* self, QObject* (*callback)()) {
    KIO__ApplicationLauncherJob_OnSender((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

int32_t k_io__applicationlauncherjob_sender_signal_index(void* self) {
    return KIO__ApplicationLauncherJob_SenderSignalIndex((KIO__ApplicationLauncherJob*)self);
}

int32_t k_io__applicationlauncherjob_qbase_sender_signal_index(void* self) {
    return KIO__ApplicationLauncherJob_QBaseSenderSignalIndex((KIO__ApplicationLauncherJob*)self);
}

void k_io__applicationlauncherjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__ApplicationLauncherJob_OnSenderSignalIndex((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

int32_t k_io__applicationlauncherjob_receivers(void* self, const char* signal) {
    return KIO__ApplicationLauncherJob_Receivers((KIO__ApplicationLauncherJob*)self, signal);
}

int32_t k_io__applicationlauncherjob_qbase_receivers(void* self, const char* signal) {
    return KIO__ApplicationLauncherJob_QBaseReceivers((KIO__ApplicationLauncherJob*)self, signal);
}

void k_io__applicationlauncherjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__ApplicationLauncherJob_OnReceivers((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

bool k_io__applicationlauncherjob_is_signal_connected(void* self, void* signal) {
    return KIO__ApplicationLauncherJob_IsSignalConnected((KIO__ApplicationLauncherJob*)self, (QMetaMethod*)signal);
}

bool k_io__applicationlauncherjob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__ApplicationLauncherJob_QBaseIsSignalConnected((KIO__ApplicationLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__applicationlauncherjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__ApplicationLauncherJob_OnIsSignalConnected((KIO__ApplicationLauncherJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__applicationlauncherjob_delete(void* self) {
    KIO__ApplicationLauncherJob_Delete((KIO__ApplicationLauncherJob*)(self));
}
