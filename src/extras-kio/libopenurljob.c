#include "../extras-kcoreaddons/libkcompositejob.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libopenurljob.hpp"
#include "libopenurljob.h"

KIO__OpenUrlJob* k_io__openurljob_new(void* url) {
    return KIO__OpenUrlJob_new((QUrl*)url);
}

KIO__OpenUrlJob* k_io__openurljob_new2(void* url, const char* mimeType) {
    return KIO__OpenUrlJob_new2((QUrl*)url, qstring(mimeType));
}

KIO__OpenUrlJob* k_io__openurljob_new3(void* url, void* parent) {
    return KIO__OpenUrlJob_new3((QUrl*)url, (QObject*)parent);
}

KIO__OpenUrlJob* k_io__openurljob_new4(void* url, const char* mimeType, void* parent) {
    return KIO__OpenUrlJob_new4((QUrl*)url, qstring(mimeType), (QObject*)parent);
}

const QMetaObject* k_io__openurljob_meta_object(void* self) {
    return KIO__OpenUrlJob_MetaObject((KIO__OpenUrlJob*)self);
}

void* k_io__openurljob_metacast(void* self, const char* param1) {
    return KIO__OpenUrlJob_Metacast((KIO__OpenUrlJob*)self, param1);
}

int32_t k_io__openurljob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__OpenUrlJob_Metacall((KIO__OpenUrlJob*)self, param1, param2, param3);
}

void k_io__openurljob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__OpenUrlJob_OnMetacall((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

int32_t k_io__openurljob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__OpenUrlJob_QBaseMetacall((KIO__OpenUrlJob*)self, param1, param2, param3);
}

const char* k_io__openurljob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__openurljob_set_delete_temporary_file(void* self, bool b) {
    KIO__OpenUrlJob_SetDeleteTemporaryFile((KIO__OpenUrlJob*)self, b);
}

void k_io__openurljob_set_suggested_file_name(void* self, const char* suggestedFileName) {
    KIO__OpenUrlJob_SetSuggestedFileName((KIO__OpenUrlJob*)self, qstring(suggestedFileName));
}

void k_io__openurljob_set_startup_id(void* self, const char* startupId) {
    KIO__OpenUrlJob_SetStartupId((KIO__OpenUrlJob*)self, qstring(startupId));
}

void k_io__openurljob_set_run_executables(void* self, bool allow) {
    KIO__OpenUrlJob_SetRunExecutables((KIO__OpenUrlJob*)self, allow);
}

void k_io__openurljob_set_show_open_or_execute_dialog(void* self, bool b) {
    KIO__OpenUrlJob_SetShowOpenOrExecuteDialog((KIO__OpenUrlJob*)self, b);
}

void k_io__openurljob_set_enable_external_browser(void* self, bool b) {
    KIO__OpenUrlJob_SetEnableExternalBrowser((KIO__OpenUrlJob*)self, b);
}

void k_io__openurljob_set_follow_redirections(void* self, bool b) {
    KIO__OpenUrlJob_SetFollowRedirections((KIO__OpenUrlJob*)self, b);
}

void k_io__openurljob_start(void* self) {
    KIO__OpenUrlJob_Start((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_start(void* self, void (*callback)()) {
    KIO__OpenUrlJob_OnStart((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_qbase_start(void* self) {
    KIO__OpenUrlJob_QBaseStart((KIO__OpenUrlJob*)self);
}

bool k_io__openurljob_is_executable_file(void* url, const char* mimetypeName) {
    return KIO__OpenUrlJob_IsExecutableFile((QUrl*)url, qstring(mimetypeName));
}

void k_io__openurljob_mime_type_found(void* self, const char* mimeType) {
    KIO__OpenUrlJob_MimeTypeFound((KIO__OpenUrlJob*)self, qstring(mimeType));
}

void k_io__openurljob_on_mime_type_found(void* self, void (*callback)(void*, const char*)) {
    KIO__OpenUrlJob_Connect_MimeTypeFound((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_do_kill(void* self) {
    return KIO__OpenUrlJob_DoKill((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_do_kill(void* self, bool (*callback)()) {
    KIO__OpenUrlJob_OnDoKill((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_qbase_do_kill(void* self) {
    return KIO__OpenUrlJob_QBaseDoKill((KIO__OpenUrlJob*)self);
}

const char* k_io__openurljob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__openurljob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__openurljob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__openurljob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__openurljob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__openurljob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__openurljob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__openurljob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__openurljob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__openurljob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__openurljob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__openurljob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__openurljob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__openurljob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__openurljob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__openurljob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__openurljob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__openurljob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__openurljob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__openurljob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__openurljob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__openurljob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__openurljob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__openurljob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__openurljob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__openurljob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__openurljob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__openurljob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_io__openurljob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__openurljob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__openurljob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__openurljob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__openurljob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__openurljob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__openurljob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__openurljob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__openurljob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__openurljob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__openurljob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__openurljob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__openurljob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__openurljob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__openurljob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__openurljob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__openurljob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__openurljob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__openurljob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__openurljob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__openurljob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__openurljob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__openurljob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__openurljob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__openurljob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__openurljob_dynamic_property_names");
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

QBindingStorage* k_io__openurljob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__openurljob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__openurljob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__openurljob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__openurljob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__openurljob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__openurljob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__openurljob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__openurljob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__openurljob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__openurljob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__openurljob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__openurljob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__openurljob_add_subjob(void* self, void* job) {
    return KIO__OpenUrlJob_AddSubjob((KIO__OpenUrlJob*)self, (KJob*)job);
}

bool k_io__openurljob_qbase_add_subjob(void* self, void* job) {
    return KIO__OpenUrlJob_QBaseAddSubjob((KIO__OpenUrlJob*)self, (KJob*)job);
}

void k_io__openurljob_on_add_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__OpenUrlJob_OnAddSubjob((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_remove_subjob(void* self, void* job) {
    return KIO__OpenUrlJob_RemoveSubjob((KIO__OpenUrlJob*)self, (KJob*)job);
}

bool k_io__openurljob_qbase_remove_subjob(void* self, void* job) {
    return KIO__OpenUrlJob_QBaseRemoveSubjob((KIO__OpenUrlJob*)self, (KJob*)job);
}

void k_io__openurljob_on_remove_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__OpenUrlJob_OnRemoveSubjob((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_slot_info_message(void* self, void* job, const char* message) {
    KIO__OpenUrlJob_SlotInfoMessage((KIO__OpenUrlJob*)self, (KJob*)job, qstring(message));
}

void k_io__openurljob_qbase_slot_info_message(void* self, void* job, const char* message) {
    KIO__OpenUrlJob_QBaseSlotInfoMessage((KIO__OpenUrlJob*)self, (KJob*)job, qstring(message));
}

void k_io__openurljob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KIO__OpenUrlJob_OnSlotInfoMessage((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_do_suspend(void* self) {
    return KIO__OpenUrlJob_DoSuspend((KIO__OpenUrlJob*)self);
}

bool k_io__openurljob_qbase_do_suspend(void* self) {
    return KIO__OpenUrlJob_QBaseDoSuspend((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__OpenUrlJob_OnDoSuspend((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_do_resume(void* self) {
    return KIO__OpenUrlJob_DoResume((KIO__OpenUrlJob*)self);
}

bool k_io__openurljob_qbase_do_resume(void* self) {
    return KIO__OpenUrlJob_QBaseDoResume((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_do_resume(void* self, bool (*callback)()) {
    KIO__OpenUrlJob_OnDoResume((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

const char* k_io__openurljob_error_string(void* self) {
    libqt_string _str = KIO__OpenUrlJob_ErrorString((KIO__OpenUrlJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__openurljob_qbase_error_string(void* self) {
    libqt_string _str = KIO__OpenUrlJob_QBaseErrorString((KIO__OpenUrlJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__openurljob_on_error_string(void* self, const char* (*callback)()) {
    KIO__OpenUrlJob_OnErrorString((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_event(void* self, void* event) {
    return KIO__OpenUrlJob_Event((KIO__OpenUrlJob*)self, (QEvent*)event);
}

bool k_io__openurljob_qbase_event(void* self, void* event) {
    return KIO__OpenUrlJob_QBaseEvent((KIO__OpenUrlJob*)self, (QEvent*)event);
}

void k_io__openurljob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__OpenUrlJob_OnEvent((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_event_filter(void* self, void* watched, void* event) {
    return KIO__OpenUrlJob_EventFilter((KIO__OpenUrlJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__openurljob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__OpenUrlJob_QBaseEventFilter((KIO__OpenUrlJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__openurljob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__OpenUrlJob_OnEventFilter((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_timer_event(void* self, void* event) {
    KIO__OpenUrlJob_TimerEvent((KIO__OpenUrlJob*)self, (QTimerEvent*)event);
}

void k_io__openurljob_qbase_timer_event(void* self, void* event) {
    KIO__OpenUrlJob_QBaseTimerEvent((KIO__OpenUrlJob*)self, (QTimerEvent*)event);
}

void k_io__openurljob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__OpenUrlJob_OnTimerEvent((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_child_event(void* self, void* event) {
    KIO__OpenUrlJob_ChildEvent((KIO__OpenUrlJob*)self, (QChildEvent*)event);
}

void k_io__openurljob_qbase_child_event(void* self, void* event) {
    KIO__OpenUrlJob_QBaseChildEvent((KIO__OpenUrlJob*)self, (QChildEvent*)event);
}

void k_io__openurljob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__OpenUrlJob_OnChildEvent((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_custom_event(void* self, void* event) {
    KIO__OpenUrlJob_CustomEvent((KIO__OpenUrlJob*)self, (QEvent*)event);
}

void k_io__openurljob_qbase_custom_event(void* self, void* event) {
    KIO__OpenUrlJob_QBaseCustomEvent((KIO__OpenUrlJob*)self, (QEvent*)event);
}

void k_io__openurljob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__OpenUrlJob_OnCustomEvent((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_connect_notify(void* self, void* signal) {
    KIO__OpenUrlJob_ConnectNotify((KIO__OpenUrlJob*)self, (QMetaMethod*)signal);
}

void k_io__openurljob_qbase_connect_notify(void* self, void* signal) {
    KIO__OpenUrlJob_QBaseConnectNotify((KIO__OpenUrlJob*)self, (QMetaMethod*)signal);
}

void k_io__openurljob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__OpenUrlJob_OnConnectNotify((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_disconnect_notify(void* self, void* signal) {
    KIO__OpenUrlJob_DisconnectNotify((KIO__OpenUrlJob*)self, (QMetaMethod*)signal);
}

void k_io__openurljob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__OpenUrlJob_QBaseDisconnectNotify((KIO__OpenUrlJob*)self, (QMetaMethod*)signal);
}

void k_io__openurljob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__OpenUrlJob_OnDisconnectNotify((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_has_subjobs(void* self) {
    return KIO__OpenUrlJob_HasSubjobs((KIO__OpenUrlJob*)self);
}

bool k_io__openurljob_qbase_has_subjobs(void* self) {
    return KIO__OpenUrlJob_QBaseHasSubjobs((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_has_subjobs(void* self, bool (*callback)()) {
    KIO__OpenUrlJob_OnHasSubjobs((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

libqt_list /* of KJob* */ k_io__openurljob_subjobs(void* self) {
    libqt_list _arr = KIO__OpenUrlJob_Subjobs((KIO__OpenUrlJob*)self);
    return _arr;
}

libqt_list /* of KJob* */ k_io__openurljob_qbase_subjobs(void* self) {
    libqt_list _arr = KIO__OpenUrlJob_QBaseSubjobs((KIO__OpenUrlJob*)self);
    return _arr;
}

void k_io__openurljob_on_subjobs(void* self, KJob** (*callback)()) {
    KIO__OpenUrlJob_OnSubjobs((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_clear_subjobs(void* self) {
    KIO__OpenUrlJob_ClearSubjobs((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_qbase_clear_subjobs(void* self) {
    KIO__OpenUrlJob_QBaseClearSubjobs((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_clear_subjobs(void* self, void (*callback)()) {
    KIO__OpenUrlJob_OnClearSubjobs((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_set_capabilities(void* self, int32_t capabilities) {
    KIO__OpenUrlJob_SetCapabilities((KIO__OpenUrlJob*)self, capabilities);
}

void k_io__openurljob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__OpenUrlJob_QBaseSetCapabilities((KIO__OpenUrlJob*)self, capabilities);
}

void k_io__openurljob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__OpenUrlJob_OnSetCapabilities((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_is_finished(void* self) {
    return KIO__OpenUrlJob_IsFinished((KIO__OpenUrlJob*)self);
}

bool k_io__openurljob_qbase_is_finished(void* self) {
    return KIO__OpenUrlJob_QBaseIsFinished((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_is_finished(void* self, bool (*callback)()) {
    KIO__OpenUrlJob_OnIsFinished((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_set_error(void* self, int errorCode) {
    KIO__OpenUrlJob_SetError((KIO__OpenUrlJob*)self, errorCode);
}

void k_io__openurljob_qbase_set_error(void* self, int errorCode) {
    KIO__OpenUrlJob_QBaseSetError((KIO__OpenUrlJob*)self, errorCode);
}

void k_io__openurljob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__OpenUrlJob_OnSetError((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_set_error_text(void* self, const char* errorText) {
    KIO__OpenUrlJob_SetErrorText((KIO__OpenUrlJob*)self, qstring(errorText));
}

void k_io__openurljob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__OpenUrlJob_QBaseSetErrorText((KIO__OpenUrlJob*)self, qstring(errorText));
}

void k_io__openurljob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__OpenUrlJob_OnSetErrorText((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__OpenUrlJob_SetProcessedAmount((KIO__OpenUrlJob*)self, unit, amount);
}

void k_io__openurljob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__OpenUrlJob_QBaseSetProcessedAmount((KIO__OpenUrlJob*)self, unit, amount);
}

void k_io__openurljob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__OpenUrlJob_OnSetProcessedAmount((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__OpenUrlJob_SetTotalAmount((KIO__OpenUrlJob*)self, unit, amount);
}

void k_io__openurljob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__OpenUrlJob_QBaseSetTotalAmount((KIO__OpenUrlJob*)self, unit, amount);
}

void k_io__openurljob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__OpenUrlJob_OnSetTotalAmount((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_set_progress_unit(void* self, int32_t unit) {
    KIO__OpenUrlJob_SetProgressUnit((KIO__OpenUrlJob*)self, unit);
}

void k_io__openurljob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__OpenUrlJob_QBaseSetProgressUnit((KIO__OpenUrlJob*)self, unit);
}

void k_io__openurljob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__OpenUrlJob_OnSetProgressUnit((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_set_percent(void* self, uint64_t percentage) {
    KIO__OpenUrlJob_SetPercent((KIO__OpenUrlJob*)self, percentage);
}

void k_io__openurljob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__OpenUrlJob_QBaseSetPercent((KIO__OpenUrlJob*)self, percentage);
}

void k_io__openurljob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__OpenUrlJob_OnSetPercent((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_emit_result(void* self) {
    KIO__OpenUrlJob_EmitResult((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_qbase_emit_result(void* self) {
    KIO__OpenUrlJob_QBaseEmitResult((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_emit_result(void* self, void (*callback)()) {
    KIO__OpenUrlJob_OnEmitResult((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__OpenUrlJob_EmitPercent((KIO__OpenUrlJob*)self, processedAmount, totalAmount);
}

void k_io__openurljob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__OpenUrlJob_QBaseEmitPercent((KIO__OpenUrlJob*)self, processedAmount, totalAmount);
}

void k_io__openurljob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__OpenUrlJob_OnEmitPercent((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_emit_speed(void* self, uint64_t speed) {
    KIO__OpenUrlJob_EmitSpeed((KIO__OpenUrlJob*)self, speed);
}

void k_io__openurljob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__OpenUrlJob_QBaseEmitSpeed((KIO__OpenUrlJob*)self, speed);
}

void k_io__openurljob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__OpenUrlJob_OnEmitSpeed((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_start_elapsed_timer(void* self) {
    KIO__OpenUrlJob_StartElapsedTimer((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_qbase_start_elapsed_timer(void* self) {
    KIO__OpenUrlJob_QBaseStartElapsedTimer((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__OpenUrlJob_OnStartElapsedTimer((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

QObject* k_io__openurljob_sender(void* self) {
    return KIO__OpenUrlJob_Sender((KIO__OpenUrlJob*)self);
}

QObject* k_io__openurljob_qbase_sender(void* self) {
    return KIO__OpenUrlJob_QBaseSender((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_sender(void* self, QObject* (*callback)()) {
    KIO__OpenUrlJob_OnSender((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

int32_t k_io__openurljob_sender_signal_index(void* self) {
    return KIO__OpenUrlJob_SenderSignalIndex((KIO__OpenUrlJob*)self);
}

int32_t k_io__openurljob_qbase_sender_signal_index(void* self) {
    return KIO__OpenUrlJob_QBaseSenderSignalIndex((KIO__OpenUrlJob*)self);
}

void k_io__openurljob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__OpenUrlJob_OnSenderSignalIndex((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

int32_t k_io__openurljob_receivers(void* self, const char* signal) {
    return KIO__OpenUrlJob_Receivers((KIO__OpenUrlJob*)self, signal);
}

int32_t k_io__openurljob_qbase_receivers(void* self, const char* signal) {
    return KIO__OpenUrlJob_QBaseReceivers((KIO__OpenUrlJob*)self, signal);
}

void k_io__openurljob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__OpenUrlJob_OnReceivers((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

bool k_io__openurljob_is_signal_connected(void* self, void* signal) {
    return KIO__OpenUrlJob_IsSignalConnected((KIO__OpenUrlJob*)self, (QMetaMethod*)signal);
}

bool k_io__openurljob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__OpenUrlJob_QBaseIsSignalConnected((KIO__OpenUrlJob*)self, (QMetaMethod*)signal);
}

void k_io__openurljob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__OpenUrlJob_OnIsSignalConnected((KIO__OpenUrlJob*)self, (intptr_t)callback);
}

void k_io__openurljob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__openurljob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__openurljob_delete(void* self) {
    KIO__OpenUrlJob_Delete((KIO__OpenUrlJob*)(self));
}
