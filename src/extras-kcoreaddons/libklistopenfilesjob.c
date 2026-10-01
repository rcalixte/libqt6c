#include "libkjob.hpp"
#include "libkprocesslist.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libklistopenfilesjob.hpp"
#include "libklistopenfilesjob.h"

KListOpenFilesJob* k_listopenfilesjob_new(const char* path) {
    return KListOpenFilesJob_New(qstring(path));
}

const QMetaObject* k_listopenfilesjob_meta_object(const void* self) {
    return KListOpenFilesJob_MetaObject((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    KListOpenFilesJob_OnMetaObject((KListOpenFilesJob*)self, (intptr_t)callback);
}

const QMetaObject* k_listopenfilesjob_super_meta_object(const void* self) {
    return KListOpenFilesJob_SuperMetaObject((KListOpenFilesJob*)self);
}

void* k_listopenfilesjob_metacast(void* self, const char* param1) {
    return KListOpenFilesJob_Metacast((KListOpenFilesJob*)self, param1);
}

void k_listopenfilesjob_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KListOpenFilesJob_OnMetacast((KListOpenFilesJob*)self, (intptr_t)callback);
}

void* k_listopenfilesjob_super_metacast(void* self, const char* param1) {
    return KListOpenFilesJob_SuperMetacast((KListOpenFilesJob*)self, param1);
}

int32_t k_listopenfilesjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KListOpenFilesJob_Metacall((KListOpenFilesJob*)self, param1, param2, param3);
}

void k_listopenfilesjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KListOpenFilesJob_OnMetacall((KListOpenFilesJob*)self, (intptr_t)callback);
}

int32_t k_listopenfilesjob_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KListOpenFilesJob_SuperMetacall((KListOpenFilesJob*)self, param1, param2, param3);
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

void k_listopenfilesjob_on_start(void* self, void (*callback)(void*)) {
    KListOpenFilesJob_OnStart((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_super_start(void* self) {
    KListOpenFilesJob_SuperStart((KListOpenFilesJob*)self);
}

libqt_list /* of KProcessList__KProcessInfo* */ k_listopenfilesjob_process_info_list(const void* self) {
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

KJobUiDelegate* k_listopenfilesjob_ui_delegate(const void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_listopenfilesjob_capabilities(const void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_listopenfilesjob_is_suspended(const void* self) {
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

int32_t k_listopenfilesjob_error(const void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_listopenfilesjob_error_text(const void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_listopenfilesjob_processed_amount(const void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uintptr_t k_listopenfilesjob_total_amount(const void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uintptr_t k_listopenfilesjob_percent(const void* self) {
    return KJob_Percent((KJob*)self);
}

void k_listopenfilesjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_listopenfilesjob_is_auto_delete(const void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_listopenfilesjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_listopenfilesjob_is_finished_notification_hidden(const void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_listopenfilesjob_is_started_with_exec(const void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

int64_t k_listopenfilesjob_elapsed_time(const void* self) {
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

void k_listopenfilesjob_total_size(void* self, void* job, uintptr_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_listopenfilesjob_on_total_size(void* self, void (*callback)(void*, void*, uintptr_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_processed_size(void* self, void* job, uintptr_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_listopenfilesjob_on_processed_size(void* self, void (*callback)(void*, void*, uintptr_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_speed(void* self, void* job, uintptr_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_listopenfilesjob_on_speed(void* self, void (*callback)(void*, void*, uintptr_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_listopenfilesjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_listopenfilesjob_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listopenfilesjob_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_listopenfilesjob_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_listopenfilesjob_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_listopenfilesjob_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_listopenfilesjob_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_listopenfilesjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_listopenfilesjob_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_listopenfilesjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_listopenfilesjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_listopenfilesjob_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_listopenfilesjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_listopenfilesjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_listopenfilesjob_children(const void* self) {
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

QMetaObject__Connection* k_listopenfilesjob_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_listopenfilesjob_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_listopenfilesjob_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_listopenfilesjob_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_listopenfilesjob_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_listopenfilesjob_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_listopenfilesjob_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_listopenfilesjob_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_listopenfilesjob_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_listopenfilesjob_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_listopenfilesjob_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_listopenfilesjob_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_listopenfilesjob_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_listopenfilesjob_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_listopenfilesjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_listopenfilesjob_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_listopenfilesjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_listopenfilesjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_listopenfilesjob_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_listopenfilesjob_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_listopenfilesjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_listopenfilesjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_listopenfilesjob_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_listopenfilesjob_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_listopenfilesjob_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_listopenfilesjob_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_listopenfilesjob_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_listopenfilesjob_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_listopenfilesjob_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_listopenfilesjob_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
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

bool k_listopenfilesjob_super_do_kill(void* self) {
    return KListOpenFilesJob_SuperDoKill((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_do_kill(void* self, bool (*callback)(void*)) {
    KListOpenFilesJob_OnDoKill((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_do_suspend(void* self) {
    return KListOpenFilesJob_DoSuspend((KListOpenFilesJob*)self);
}

bool k_listopenfilesjob_super_do_suspend(void* self) {
    return KListOpenFilesJob_SuperDoSuspend((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_do_suspend(void* self, bool (*callback)(void*)) {
    KListOpenFilesJob_OnDoSuspend((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_do_resume(void* self) {
    return KListOpenFilesJob_DoResume((KListOpenFilesJob*)self);
}

bool k_listopenfilesjob_super_do_resume(void* self) {
    return KListOpenFilesJob_SuperDoResume((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_on_do_resume(void* self, bool (*callback)(void*)) {
    KListOpenFilesJob_OnDoResume((KListOpenFilesJob*)self, (intptr_t)callback);
}

const char* k_listopenfilesjob_error_string(const void* self) {
    libqt_string _str = KListOpenFilesJob_ErrorString((KListOpenFilesJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_listopenfilesjob_super_error_string(const void* self) {
    libqt_string _str = KListOpenFilesJob_SuperErrorString((KListOpenFilesJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_listopenfilesjob_on_error_string(void* self, const char* (*callback)(const void*)) {
    KListOpenFilesJob_OnErrorString((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_event(void* self, void* event) {
    return KListOpenFilesJob_Event((KListOpenFilesJob*)self, (QEvent*)event);
}

bool k_listopenfilesjob_super_event(void* self, void* event) {
    return KListOpenFilesJob_SuperEvent((KListOpenFilesJob*)self, (QEvent*)event);
}

void k_listopenfilesjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KListOpenFilesJob_OnEvent((KListOpenFilesJob*)self, (intptr_t)callback);
}

bool k_listopenfilesjob_event_filter(void* self, void* watched, void* event) {
    return KListOpenFilesJob_EventFilter((KListOpenFilesJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_listopenfilesjob_super_event_filter(void* self, void* watched, void* event) {
    return KListOpenFilesJob_SuperEventFilter((KListOpenFilesJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_listopenfilesjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KListOpenFilesJob_OnEventFilter((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_timer_event(void* self, void* event) {
    KListOpenFilesJob_TimerEvent((KListOpenFilesJob*)self, (QTimerEvent*)event);
}

void k_listopenfilesjob_super_timer_event(void* self, void* event) {
    KListOpenFilesJob_SuperTimerEvent((KListOpenFilesJob*)self, (QTimerEvent*)event);
}

void k_listopenfilesjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KListOpenFilesJob_OnTimerEvent((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_child_event(void* self, void* event) {
    KListOpenFilesJob_ChildEvent((KListOpenFilesJob*)self, (QChildEvent*)event);
}

void k_listopenfilesjob_super_child_event(void* self, void* event) {
    KListOpenFilesJob_SuperChildEvent((KListOpenFilesJob*)self, (QChildEvent*)event);
}

void k_listopenfilesjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KListOpenFilesJob_OnChildEvent((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_custom_event(void* self, void* event) {
    KListOpenFilesJob_CustomEvent((KListOpenFilesJob*)self, (QEvent*)event);
}

void k_listopenfilesjob_super_custom_event(void* self, void* event) {
    KListOpenFilesJob_SuperCustomEvent((KListOpenFilesJob*)self, (QEvent*)event);
}

void k_listopenfilesjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KListOpenFilesJob_OnCustomEvent((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_connect_notify(void* self, const void* signal) {
    KListOpenFilesJob_ConnectNotify((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

void k_listopenfilesjob_super_connect_notify(void* self, const void* signal) {
    KListOpenFilesJob_SuperConnectNotify((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

void k_listopenfilesjob_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KListOpenFilesJob_OnConnectNotify((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_disconnect_notify(void* self, const void* signal) {
    KListOpenFilesJob_DisconnectNotify((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

void k_listopenfilesjob_super_disconnect_notify(void* self, const void* signal) {
    KListOpenFilesJob_SuperDisconnectNotify((KListOpenFilesJob*)self, (QMetaMethod*)signal);
}

void k_listopenfilesjob_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KListOpenFilesJob_OnDisconnectNotify((KListOpenFilesJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_set_capabilities(void* self, int32_t capabilities) {
    KListOpenFilesJob_SetCapabilities((KListOpenFilesJob*)self, capabilities);
}

bool k_listopenfilesjob_is_finished(const void* self) {
    return KListOpenFilesJob_IsFinished((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_set_error(void* self, int errorCode) {
    KListOpenFilesJob_SetError((KListOpenFilesJob*)self, errorCode);
}

void k_listopenfilesjob_set_error_text(void* self, const char* errorText) {
    KListOpenFilesJob_SetErrorText((KListOpenFilesJob*)self, qstring(errorText));
}

void k_listopenfilesjob_set_processed_amount(void* self, int32_t unit, uintptr_t amount) {
    KListOpenFilesJob_SetProcessedAmount((KListOpenFilesJob*)self, unit, amount);
}

void k_listopenfilesjob_set_total_amount(void* self, int32_t unit, uintptr_t amount) {
    KListOpenFilesJob_SetTotalAmount((KListOpenFilesJob*)self, unit, amount);
}

void k_listopenfilesjob_set_progress_unit(void* self, int32_t unit) {
    KListOpenFilesJob_SetProgressUnit((KListOpenFilesJob*)self, unit);
}

void k_listopenfilesjob_set_percent(void* self, uintptr_t percentage) {
    KListOpenFilesJob_SetPercent((KListOpenFilesJob*)self, percentage);
}

void k_listopenfilesjob_emit_result(void* self) {
    KListOpenFilesJob_EmitResult((KListOpenFilesJob*)self);
}

void k_listopenfilesjob_emit_percent(void* self, uintptr_t processedAmount, uintptr_t totalAmount) {
    KListOpenFilesJob_EmitPercent((KListOpenFilesJob*)self, processedAmount, totalAmount);
}

void k_listopenfilesjob_emit_speed(void* self, uintptr_t speed) {
    KListOpenFilesJob_EmitSpeed((KListOpenFilesJob*)self, speed);
}

void k_listopenfilesjob_start_elapsed_timer(void* self) {
    KListOpenFilesJob_StartElapsedTimer((KListOpenFilesJob*)self);
}

QObject* k_listopenfilesjob_sender(const void* self) {
    return KListOpenFilesJob_Sender((KListOpenFilesJob*)self);
}

int32_t k_listopenfilesjob_sender_signal_index(const void* self) {
    return KListOpenFilesJob_SenderSignalIndex((KListOpenFilesJob*)self);
}

int32_t k_listopenfilesjob_receivers(const void* self, const char* signal) {
    return KListOpenFilesJob_Receivers((KListOpenFilesJob*)self, signal);
}

bool k_listopenfilesjob_is_signal_connected(const void* self, const void* signal) {
    return KListOpenFilesJob_IsSignalConnected((KListOpenFilesJob*)self, (QMetaMethod*)signal);
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

void k_listopenfilesjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uintptr_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uintptr_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_percent_changed(void* self, void (*callback)(void*, void*, uintptr_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_listopenfilesjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_listopenfilesjob_delete(void* self) {
    KListOpenFilesJob_Delete((KListOpenFilesJob*)(self));
}
