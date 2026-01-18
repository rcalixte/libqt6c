#include "libkjobuidelegate.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkjob.hpp"
#include "libkjob.h"

KJob* k_job_new() {
    return KJob_new();
}

KJob* k_job_new2(void* parent) {
    return KJob_new2((QObject*)parent);
}

const QMetaObject* k_job_meta_object(void* self) {
    return KJob_MetaObject((KJob*)self);
}

void* k_job_metacast(void* self, const char* param1) {
    return KJob_Metacast((KJob*)self, param1);
}

int32_t k_job_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KJob_Metacall((KJob*)self, param1, param2, param3);
}

void k_job_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KJob_OnMetacall((KJob*)self, (intptr_t)callback);
}

int32_t k_job_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KJob_QBaseMetacall((KJob*)self, param1, param2, param3);
}

const char* k_job_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_job_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_job_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_job_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_job_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

void k_job_start(void* self) {
    KJob_Start((KJob*)self);
}

void k_job_on_start(void* self, void (*callback)()) {
    KJob_OnStart((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_start(void* self) {
    KJob_QBaseStart((KJob*)self);
}

bool k_job_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_job_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_job_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_job_do_kill(void* self) {
    return KJob_DoKill((KJob*)self);
}

void k_job_on_do_kill(void* self, bool (*callback)()) {
    KJob_OnDoKill((KJob*)self, (intptr_t)callback);
}

bool k_job_qbase_do_kill(void* self) {
    return KJob_QBaseDoKill((KJob*)self);
}

bool k_job_do_suspend(void* self) {
    return KJob_DoSuspend((KJob*)self);
}

void k_job_on_do_suspend(void* self, bool (*callback)()) {
    KJob_OnDoSuspend((KJob*)self, (intptr_t)callback);
}

bool k_job_qbase_do_suspend(void* self) {
    return KJob_QBaseDoSuspend((KJob*)self);
}

bool k_job_do_resume(void* self) {
    return KJob_DoResume((KJob*)self);
}

void k_job_on_do_resume(void* self, bool (*callback)()) {
    KJob_OnDoResume((KJob*)self, (intptr_t)callback);
}

bool k_job_qbase_do_resume(void* self) {
    return KJob_QBaseDoResume((KJob*)self);
}

void k_job_set_capabilities(void* self, int32_t capabilities) {
    KJob_SetCapabilities((KJob*)self, capabilities);
}

void k_job_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KJob_OnSetCapabilities((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_set_capabilities(void* self, int32_t capabilities) {
    KJob_QBaseSetCapabilities((KJob*)self, capabilities);
}

bool k_job_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_job_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_job_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_job_error_string(void* self) {
    libqt_string _str = KJob_ErrorString((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_job_on_error_string(void* self, const char* (*callback)()) {
    KJob_OnErrorString((KJob*)self, (intptr_t)callback);
}

const char* k_job_qbase_error_string(void* self) {
    libqt_string _str = KJob_QBaseErrorString((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_job_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_job_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_job_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_job_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_job_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_job_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_job_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_job_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_job_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_job_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_job_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_job_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_job_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_job_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_job_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_job_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_job_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_job_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_job_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_job_is_finished(void* self) {
    return KJob_IsFinished((KJob*)self);
}

void k_job_on_is_finished(void* self, bool (*callback)()) {
    KJob_OnIsFinished((KJob*)self, (intptr_t)callback);
}

bool k_job_qbase_is_finished(void* self) {
    return KJob_QBaseIsFinished((KJob*)self);
}

void k_job_set_error(void* self, int errorCode) {
    KJob_SetError((KJob*)self, errorCode);
}

void k_job_on_set_error(void* self, void (*callback)(void*, int)) {
    KJob_OnSetError((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_set_error(void* self, int errorCode) {
    KJob_QBaseSetError((KJob*)self, errorCode);
}

void k_job_set_error_text(void* self, const char* errorText) {
    KJob_SetErrorText((KJob*)self, qstring(errorText));
}

void k_job_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KJob_OnSetErrorText((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_set_error_text(void* self, const char* errorText) {
    KJob_QBaseSetErrorText((KJob*)self, qstring(errorText));
}

void k_job_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KJob_SetProcessedAmount((KJob*)self, unit, amount);
}

void k_job_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KJob_OnSetProcessedAmount((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KJob_QBaseSetProcessedAmount((KJob*)self, unit, amount);
}

void k_job_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KJob_SetTotalAmount((KJob*)self, unit, amount);
}

void k_job_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KJob_OnSetTotalAmount((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KJob_QBaseSetTotalAmount((KJob*)self, unit, amount);
}

void k_job_set_progress_unit(void* self, int32_t unit) {
    KJob_SetProgressUnit((KJob*)self, unit);
}

void k_job_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KJob_OnSetProgressUnit((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_set_progress_unit(void* self, int32_t unit) {
    KJob_QBaseSetProgressUnit((KJob*)self, unit);
}

void k_job_set_percent(void* self, uint64_t percentage) {
    KJob_SetPercent((KJob*)self, percentage);
}

void k_job_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KJob_OnSetPercent((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_set_percent(void* self, uint64_t percentage) {
    KJob_QBaseSetPercent((KJob*)self, percentage);
}

void k_job_emit_result(void* self) {
    KJob_EmitResult((KJob*)self);
}

void k_job_on_emit_result(void* self, void (*callback)()) {
    KJob_OnEmitResult((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_emit_result(void* self) {
    KJob_QBaseEmitResult((KJob*)self);
}

void k_job_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KJob_EmitPercent((KJob*)self, processedAmount, totalAmount);
}

void k_job_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KJob_OnEmitPercent((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KJob_QBaseEmitPercent((KJob*)self, processedAmount, totalAmount);
}

void k_job_emit_speed(void* self, uint64_t speed) {
    KJob_EmitSpeed((KJob*)self, speed);
}

void k_job_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KJob_OnEmitSpeed((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_emit_speed(void* self, uint64_t speed) {
    KJob_QBaseEmitSpeed((KJob*)self, speed);
}

void k_job_start_elapsed_timer(void* self) {
    KJob_StartElapsedTimer((KJob*)self);
}

void k_job_on_start_elapsed_timer(void* self, void (*callback)()) {
    KJob_OnStartElapsedTimer((KJob*)self, (intptr_t)callback);
}

void k_job_qbase_start_elapsed_timer(void* self) {
    KJob_QBaseStartElapsedTimer((KJob*)self);
}

const char* k_job_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_job_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_job_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_job_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_job_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_job_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_job_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_job_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_job_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_job_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_job_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_job_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_job_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_job_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_job_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_job_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_job_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_job_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_job_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_job_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_job_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_job_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_job_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_job_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_job_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_job_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_job_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_job_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_job_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_job_dynamic_property_names\n");
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

QBindingStorage* k_job_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_job_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_job_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_job_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_job_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_job_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_job_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_job_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_job_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_job_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_job_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_job_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_job_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_job_event(void* self, void* event) {
    return KJob_Event((KJob*)self, (QEvent*)event);
}

bool k_job_qbase_event(void* self, void* event) {
    return KJob_QBaseEvent((KJob*)self, (QEvent*)event);
}

void k_job_on_event(void* self, bool (*callback)(void*, void*)) {
    KJob_OnEvent((KJob*)self, (intptr_t)callback);
}

bool k_job_event_filter(void* self, void* watched, void* event) {
    return KJob_EventFilter((KJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_job_qbase_event_filter(void* self, void* watched, void* event) {
    return KJob_QBaseEventFilter((KJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_job_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KJob_OnEventFilter((KJob*)self, (intptr_t)callback);
}

void k_job_timer_event(void* self, void* event) {
    KJob_TimerEvent((KJob*)self, (QTimerEvent*)event);
}

void k_job_qbase_timer_event(void* self, void* event) {
    KJob_QBaseTimerEvent((KJob*)self, (QTimerEvent*)event);
}

void k_job_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KJob_OnTimerEvent((KJob*)self, (intptr_t)callback);
}

void k_job_child_event(void* self, void* event) {
    KJob_ChildEvent((KJob*)self, (QChildEvent*)event);
}

void k_job_qbase_child_event(void* self, void* event) {
    KJob_QBaseChildEvent((KJob*)self, (QChildEvent*)event);
}

void k_job_on_child_event(void* self, void (*callback)(void*, void*)) {
    KJob_OnChildEvent((KJob*)self, (intptr_t)callback);
}

void k_job_custom_event(void* self, void* event) {
    KJob_CustomEvent((KJob*)self, (QEvent*)event);
}

void k_job_qbase_custom_event(void* self, void* event) {
    KJob_QBaseCustomEvent((KJob*)self, (QEvent*)event);
}

void k_job_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KJob_OnCustomEvent((KJob*)self, (intptr_t)callback);
}

void k_job_connect_notify(void* self, void* signal) {
    KJob_ConnectNotify((KJob*)self, (QMetaMethod*)signal);
}

void k_job_qbase_connect_notify(void* self, void* signal) {
    KJob_QBaseConnectNotify((KJob*)self, (QMetaMethod*)signal);
}

void k_job_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KJob_OnConnectNotify((KJob*)self, (intptr_t)callback);
}

void k_job_disconnect_notify(void* self, void* signal) {
    KJob_DisconnectNotify((KJob*)self, (QMetaMethod*)signal);
}

void k_job_qbase_disconnect_notify(void* self, void* signal) {
    KJob_QBaseDisconnectNotify((KJob*)self, (QMetaMethod*)signal);
}

void k_job_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KJob_OnDisconnectNotify((KJob*)self, (intptr_t)callback);
}

QObject* k_job_sender(void* self) {
    return KJob_Sender((KJob*)self);
}

QObject* k_job_qbase_sender(void* self) {
    return KJob_QBaseSender((KJob*)self);
}

void k_job_on_sender(void* self, QObject* (*callback)()) {
    KJob_OnSender((KJob*)self, (intptr_t)callback);
}

int32_t k_job_sender_signal_index(void* self) {
    return KJob_SenderSignalIndex((KJob*)self);
}

int32_t k_job_qbase_sender_signal_index(void* self) {
    return KJob_QBaseSenderSignalIndex((KJob*)self);
}

void k_job_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KJob_OnSenderSignalIndex((KJob*)self, (intptr_t)callback);
}

int32_t k_job_receivers(void* self, const char* signal) {
    return KJob_Receivers((KJob*)self, signal);
}

int32_t k_job_qbase_receivers(void* self, const char* signal) {
    return KJob_QBaseReceivers((KJob*)self, signal);
}

void k_job_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KJob_OnReceivers((KJob*)self, (intptr_t)callback);
}

bool k_job_is_signal_connected(void* self, void* signal) {
    return KJob_IsSignalConnected((KJob*)self, (QMetaMethod*)signal);
}

bool k_job_qbase_is_signal_connected(void* self, void* signal) {
    return KJob_QBaseIsSignalConnected((KJob*)self, (QMetaMethod*)signal);
}

void k_job_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KJob_OnIsSignalConnected((KJob*)self, (intptr_t)callback);
}

void k_job_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_job_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_job_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_job_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_job_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_job_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_job_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_job_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_job_delete(void* self) {
    KJob_Delete((KJob*)(self));
}
