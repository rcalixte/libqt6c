#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqprocess.hpp"
#include "libcommandlauncherjob.hpp"
#include "libcommandlauncherjob.h"

KIO__CommandLauncherJob* k_io__commandlauncherjob_new(const char* command) {
    return KIO__CommandLauncherJob_new(qstring(command));
}

KIO__CommandLauncherJob* k_io__commandlauncherjob_new2(const char* executable, const char* args[static 1]) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__commandlauncherjob_new2\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);

    KIO__CommandLauncherJob* _out = KIO__CommandLauncherJob_new2(qstring(executable), args_list);
    free(args_qstr);
    return _out;
}

KIO__CommandLauncherJob* k_io__commandlauncherjob_new3(const char* command, void* parent) {
    return KIO__CommandLauncherJob_new3(qstring(command), (QObject*)parent);
}

KIO__CommandLauncherJob* k_io__commandlauncherjob_new4(const char* executable, const char* args[static 1], void* parent) {
    size_t args_len = libqt_strv_length(args);
    libqt_string* args_qstr = (libqt_string*)malloc(args_len * sizeof(libqt_string));
    if (args_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__commandlauncherjob_new4\n");
        abort();
    }
    for (size_t i = 0; i < args_len; ++i) {
        args_qstr[i] = qstring(args[i]);
    }
    libqt_list args_list = qlist(args_qstr, args_len);

    KIO__CommandLauncherJob* _out = KIO__CommandLauncherJob_new4(qstring(executable), args_list, (QObject*)parent);
    free(args_qstr);
    return _out;
}

void k_io__commandlauncherjob_set_command(void* self, const char* command) {
    KIO__CommandLauncherJob_SetCommand((KIO__CommandLauncherJob*)self, qstring(command));
}

const char* k_io__commandlauncherjob_command(void* self) {
    libqt_string _str = KIO__CommandLauncherJob_Command((KIO__CommandLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__commandlauncherjob_set_executable(void* self, const char* executable) {
    KIO__CommandLauncherJob_SetExecutable((KIO__CommandLauncherJob*)self, qstring(executable));
}

void k_io__commandlauncherjob_set_desktop_name(void* self, const char* desktopName) {
    KIO__CommandLauncherJob_SetDesktopName((KIO__CommandLauncherJob*)self, qstring(desktopName));
}

void k_io__commandlauncherjob_set_startup_id(void* self, const char* startupId) {
    KIO__CommandLauncherJob_SetStartupId((KIO__CommandLauncherJob*)self, qstring(startupId));
}

void k_io__commandlauncherjob_set_working_directory(void* self, const char* workingDirectory) {
    KIO__CommandLauncherJob_SetWorkingDirectory((KIO__CommandLauncherJob*)self, qstring(workingDirectory));
}

const char* k_io__commandlauncherjob_working_directory(void* self) {
    libqt_string _str = KIO__CommandLauncherJob_WorkingDirectory((KIO__CommandLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__commandlauncherjob_set_process_environment(void* self, void* environment) {
    KIO__CommandLauncherJob_SetProcessEnvironment((KIO__CommandLauncherJob*)self, (QProcessEnvironment*)environment);
}

void k_io__commandlauncherjob_start(void* self) {
    KIO__CommandLauncherJob_Start((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_on_start(void* self, void (*callback)()) {
    KIO__CommandLauncherJob_OnStart((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_qbase_start(void* self) {
    KIO__CommandLauncherJob_QBaseStart((KIO__CommandLauncherJob*)self);
}

long long k_io__commandlauncherjob_pid(void* self) {
    return KIO__CommandLauncherJob_Pid((KIO__CommandLauncherJob*)self);
}

const QMetaObject* k_io__commandlauncherjob_meta_object(void* self) {
    return KJob_MetaObject((KJob*)self);
}

void* k_io__commandlauncherjob_metacast(void* self, const char* param1) {
    return KJob_Metacast((KJob*)self, param1);
}

const char* k_io__commandlauncherjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__commandlauncherjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__commandlauncherjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__commandlauncherjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__commandlauncherjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__commandlauncherjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__commandlauncherjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__commandlauncherjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__commandlauncherjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__commandlauncherjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__commandlauncherjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__commandlauncherjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__commandlauncherjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__commandlauncherjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__commandlauncherjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__commandlauncherjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__commandlauncherjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__commandlauncherjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__commandlauncherjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__commandlauncherjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__commandlauncherjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__commandlauncherjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__commandlauncherjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__commandlauncherjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__commandlauncherjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__commandlauncherjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

const char* k_io__commandlauncherjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__commandlauncherjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_io__commandlauncherjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__commandlauncherjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_io__commandlauncherjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__commandlauncherjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__commandlauncherjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__commandlauncherjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__commandlauncherjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__commandlauncherjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__commandlauncherjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__commandlauncherjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__commandlauncherjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__commandlauncherjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__commandlauncherjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__commandlauncherjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__commandlauncherjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__commandlauncherjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__commandlauncherjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__commandlauncherjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__commandlauncherjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__commandlauncherjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__commandlauncherjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__commandlauncherjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__commandlauncherjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__commandlauncherjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__commandlauncherjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__commandlauncherjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__commandlauncherjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__commandlauncherjob_dynamic_property_names\n");
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

QBindingStorage* k_io__commandlauncherjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__commandlauncherjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__commandlauncherjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__commandlauncherjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__commandlauncherjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__commandlauncherjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__commandlauncherjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__commandlauncherjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__commandlauncherjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__commandlauncherjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__commandlauncherjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__commandlauncherjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__commandlauncherjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t k_io__commandlauncherjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__CommandLauncherJob_Metacall((KIO__CommandLauncherJob*)self, param1, param2, param3);
}

int32_t k_io__commandlauncherjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__CommandLauncherJob_QBaseMetacall((KIO__CommandLauncherJob*)self, param1, param2, param3);
}

void k_io__commandlauncherjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__CommandLauncherJob_OnMetacall((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

bool k_io__commandlauncherjob_do_kill(void* self) {
    return KIO__CommandLauncherJob_DoKill((KIO__CommandLauncherJob*)self);
}

bool k_io__commandlauncherjob_qbase_do_kill(void* self) {
    return KIO__CommandLauncherJob_QBaseDoKill((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_on_do_kill(void* self, bool (*callback)()) {
    KIO__CommandLauncherJob_OnDoKill((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

bool k_io__commandlauncherjob_do_suspend(void* self) {
    return KIO__CommandLauncherJob_DoSuspend((KIO__CommandLauncherJob*)self);
}

bool k_io__commandlauncherjob_qbase_do_suspend(void* self) {
    return KIO__CommandLauncherJob_QBaseDoSuspend((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__CommandLauncherJob_OnDoSuspend((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

bool k_io__commandlauncherjob_do_resume(void* self) {
    return KIO__CommandLauncherJob_DoResume((KIO__CommandLauncherJob*)self);
}

bool k_io__commandlauncherjob_qbase_do_resume(void* self) {
    return KIO__CommandLauncherJob_QBaseDoResume((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_on_do_resume(void* self, bool (*callback)()) {
    KIO__CommandLauncherJob_OnDoResume((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

const char* k_io__commandlauncherjob_error_string(void* self) {
    libqt_string _str = KIO__CommandLauncherJob_ErrorString((KIO__CommandLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__commandlauncherjob_qbase_error_string(void* self) {
    libqt_string _str = KIO__CommandLauncherJob_QBaseErrorString((KIO__CommandLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__commandlauncherjob_on_error_string(void* self, const char* (*callback)()) {
    KIO__CommandLauncherJob_OnErrorString((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

bool k_io__commandlauncherjob_event(void* self, void* event) {
    return KIO__CommandLauncherJob_Event((KIO__CommandLauncherJob*)self, (QEvent*)event);
}

bool k_io__commandlauncherjob_qbase_event(void* self, void* event) {
    return KIO__CommandLauncherJob_QBaseEvent((KIO__CommandLauncherJob*)self, (QEvent*)event);
}

void k_io__commandlauncherjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__CommandLauncherJob_OnEvent((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

bool k_io__commandlauncherjob_event_filter(void* self, void* watched, void* event) {
    return KIO__CommandLauncherJob_EventFilter((KIO__CommandLauncherJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__commandlauncherjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__CommandLauncherJob_QBaseEventFilter((KIO__CommandLauncherJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__commandlauncherjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__CommandLauncherJob_OnEventFilter((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_timer_event(void* self, void* event) {
    KIO__CommandLauncherJob_TimerEvent((KIO__CommandLauncherJob*)self, (QTimerEvent*)event);
}

void k_io__commandlauncherjob_qbase_timer_event(void* self, void* event) {
    KIO__CommandLauncherJob_QBaseTimerEvent((KIO__CommandLauncherJob*)self, (QTimerEvent*)event);
}

void k_io__commandlauncherjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__CommandLauncherJob_OnTimerEvent((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_child_event(void* self, void* event) {
    KIO__CommandLauncherJob_ChildEvent((KIO__CommandLauncherJob*)self, (QChildEvent*)event);
}

void k_io__commandlauncherjob_qbase_child_event(void* self, void* event) {
    KIO__CommandLauncherJob_QBaseChildEvent((KIO__CommandLauncherJob*)self, (QChildEvent*)event);
}

void k_io__commandlauncherjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__CommandLauncherJob_OnChildEvent((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_custom_event(void* self, void* event) {
    KIO__CommandLauncherJob_CustomEvent((KIO__CommandLauncherJob*)self, (QEvent*)event);
}

void k_io__commandlauncherjob_qbase_custom_event(void* self, void* event) {
    KIO__CommandLauncherJob_QBaseCustomEvent((KIO__CommandLauncherJob*)self, (QEvent*)event);
}

void k_io__commandlauncherjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__CommandLauncherJob_OnCustomEvent((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_connect_notify(void* self, void* signal) {
    KIO__CommandLauncherJob_ConnectNotify((KIO__CommandLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__commandlauncherjob_qbase_connect_notify(void* self, void* signal) {
    KIO__CommandLauncherJob_QBaseConnectNotify((KIO__CommandLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__commandlauncherjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__CommandLauncherJob_OnConnectNotify((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_disconnect_notify(void* self, void* signal) {
    KIO__CommandLauncherJob_DisconnectNotify((KIO__CommandLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__commandlauncherjob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__CommandLauncherJob_QBaseDisconnectNotify((KIO__CommandLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__commandlauncherjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__CommandLauncherJob_OnDisconnectNotify((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_set_capabilities(void* self, int32_t capabilities) {
    KIO__CommandLauncherJob_SetCapabilities((KIO__CommandLauncherJob*)self, capabilities);
}

void k_io__commandlauncherjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__CommandLauncherJob_QBaseSetCapabilities((KIO__CommandLauncherJob*)self, capabilities);
}

void k_io__commandlauncherjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__CommandLauncherJob_OnSetCapabilities((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

bool k_io__commandlauncherjob_is_finished(void* self) {
    return KIO__CommandLauncherJob_IsFinished((KIO__CommandLauncherJob*)self);
}

bool k_io__commandlauncherjob_qbase_is_finished(void* self) {
    return KIO__CommandLauncherJob_QBaseIsFinished((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_on_is_finished(void* self, bool (*callback)()) {
    KIO__CommandLauncherJob_OnIsFinished((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_set_error(void* self, int errorCode) {
    KIO__CommandLauncherJob_SetError((KIO__CommandLauncherJob*)self, errorCode);
}

void k_io__commandlauncherjob_qbase_set_error(void* self, int errorCode) {
    KIO__CommandLauncherJob_QBaseSetError((KIO__CommandLauncherJob*)self, errorCode);
}

void k_io__commandlauncherjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__CommandLauncherJob_OnSetError((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_set_error_text(void* self, const char* errorText) {
    KIO__CommandLauncherJob_SetErrorText((KIO__CommandLauncherJob*)self, qstring(errorText));
}

void k_io__commandlauncherjob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__CommandLauncherJob_QBaseSetErrorText((KIO__CommandLauncherJob*)self, qstring(errorText));
}

void k_io__commandlauncherjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__CommandLauncherJob_OnSetErrorText((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__CommandLauncherJob_SetProcessedAmount((KIO__CommandLauncherJob*)self, unit, amount);
}

void k_io__commandlauncherjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__CommandLauncherJob_QBaseSetProcessedAmount((KIO__CommandLauncherJob*)self, unit, amount);
}

void k_io__commandlauncherjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__CommandLauncherJob_OnSetProcessedAmount((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__CommandLauncherJob_SetTotalAmount((KIO__CommandLauncherJob*)self, unit, amount);
}

void k_io__commandlauncherjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__CommandLauncherJob_QBaseSetTotalAmount((KIO__CommandLauncherJob*)self, unit, amount);
}

void k_io__commandlauncherjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__CommandLauncherJob_OnSetTotalAmount((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_set_progress_unit(void* self, int32_t unit) {
    KIO__CommandLauncherJob_SetProgressUnit((KIO__CommandLauncherJob*)self, unit);
}

void k_io__commandlauncherjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__CommandLauncherJob_QBaseSetProgressUnit((KIO__CommandLauncherJob*)self, unit);
}

void k_io__commandlauncherjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__CommandLauncherJob_OnSetProgressUnit((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_set_percent(void* self, uint64_t percentage) {
    KIO__CommandLauncherJob_SetPercent((KIO__CommandLauncherJob*)self, percentage);
}

void k_io__commandlauncherjob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__CommandLauncherJob_QBaseSetPercent((KIO__CommandLauncherJob*)self, percentage);
}

void k_io__commandlauncherjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__CommandLauncherJob_OnSetPercent((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_emit_result(void* self) {
    KIO__CommandLauncherJob_EmitResult((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_qbase_emit_result(void* self) {
    KIO__CommandLauncherJob_QBaseEmitResult((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_on_emit_result(void* self, void (*callback)()) {
    KIO__CommandLauncherJob_OnEmitResult((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__CommandLauncherJob_EmitPercent((KIO__CommandLauncherJob*)self, processedAmount, totalAmount);
}

void k_io__commandlauncherjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__CommandLauncherJob_QBaseEmitPercent((KIO__CommandLauncherJob*)self, processedAmount, totalAmount);
}

void k_io__commandlauncherjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__CommandLauncherJob_OnEmitPercent((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_emit_speed(void* self, uint64_t speed) {
    KIO__CommandLauncherJob_EmitSpeed((KIO__CommandLauncherJob*)self, speed);
}

void k_io__commandlauncherjob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__CommandLauncherJob_QBaseEmitSpeed((KIO__CommandLauncherJob*)self, speed);
}

void k_io__commandlauncherjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__CommandLauncherJob_OnEmitSpeed((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_start_elapsed_timer(void* self) {
    KIO__CommandLauncherJob_StartElapsedTimer((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_qbase_start_elapsed_timer(void* self) {
    KIO__CommandLauncherJob_QBaseStartElapsedTimer((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__CommandLauncherJob_OnStartElapsedTimer((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

QObject* k_io__commandlauncherjob_sender(void* self) {
    return KIO__CommandLauncherJob_Sender((KIO__CommandLauncherJob*)self);
}

QObject* k_io__commandlauncherjob_qbase_sender(void* self) {
    return KIO__CommandLauncherJob_QBaseSender((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_on_sender(void* self, QObject* (*callback)()) {
    KIO__CommandLauncherJob_OnSender((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

int32_t k_io__commandlauncherjob_sender_signal_index(void* self) {
    return KIO__CommandLauncherJob_SenderSignalIndex((KIO__CommandLauncherJob*)self);
}

int32_t k_io__commandlauncherjob_qbase_sender_signal_index(void* self) {
    return KIO__CommandLauncherJob_QBaseSenderSignalIndex((KIO__CommandLauncherJob*)self);
}

void k_io__commandlauncherjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__CommandLauncherJob_OnSenderSignalIndex((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

int32_t k_io__commandlauncherjob_receivers(void* self, const char* signal) {
    return KIO__CommandLauncherJob_Receivers((KIO__CommandLauncherJob*)self, signal);
}

int32_t k_io__commandlauncherjob_qbase_receivers(void* self, const char* signal) {
    return KIO__CommandLauncherJob_QBaseReceivers((KIO__CommandLauncherJob*)self, signal);
}

void k_io__commandlauncherjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__CommandLauncherJob_OnReceivers((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

bool k_io__commandlauncherjob_is_signal_connected(void* self, void* signal) {
    return KIO__CommandLauncherJob_IsSignalConnected((KIO__CommandLauncherJob*)self, (QMetaMethod*)signal);
}

bool k_io__commandlauncherjob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__CommandLauncherJob_QBaseIsSignalConnected((KIO__CommandLauncherJob*)self, (QMetaMethod*)signal);
}

void k_io__commandlauncherjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__CommandLauncherJob_OnIsSignalConnected((KIO__CommandLauncherJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__commandlauncherjob_delete(void* self) {
    KIO__CommandLauncherJob_Delete((KIO__CommandLauncherJob*)(self));
}
