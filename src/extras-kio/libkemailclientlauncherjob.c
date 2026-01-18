#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libkemailclientlauncherjob.hpp"
#include "libkemailclientlauncherjob.h"

KEMailClientLauncherJob* k_emailclientlauncherjob_new() {
    return KEMailClientLauncherJob_new();
}

KEMailClientLauncherJob* k_emailclientlauncherjob_new2(void* parent) {
    return KEMailClientLauncherJob_new2((QObject*)parent);
}

const QMetaObject* k_emailclientlauncherjob_meta_object(void* self) {
    return KEMailClientLauncherJob_MetaObject((KEMailClientLauncherJob*)self);
}

void* k_emailclientlauncherjob_metacast(void* self, const char* param1) {
    return KEMailClientLauncherJob_Metacast((KEMailClientLauncherJob*)self, param1);
}

int32_t k_emailclientlauncherjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KEMailClientLauncherJob_Metacall((KEMailClientLauncherJob*)self, param1, param2, param3);
}

void k_emailclientlauncherjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KEMailClientLauncherJob_OnMetacall((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

int32_t k_emailclientlauncherjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KEMailClientLauncherJob_QBaseMetacall((KEMailClientLauncherJob*)self, param1, param2, param3);
}

const char* k_emailclientlauncherjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_emailclientlauncherjob_set_to(void* self, const char* to[static 1]) {
    size_t to_len = libqt_strv_length(to);
    libqt_string* to_qstr = (libqt_string*)malloc(to_len * sizeof(libqt_string));
    if (to_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_emailclientlauncherjob_set_to\n");
        abort();
    }
    for (size_t i = 0; i < to_len; ++i) {
        to_qstr[i] = qstring(to[i]);
    }
    libqt_list to_list = qlist(to_qstr, to_len);
    KEMailClientLauncherJob_SetTo((KEMailClientLauncherJob*)self, to_list);
    free(to_qstr);
}

void k_emailclientlauncherjob_set_cc(void* self, const char* cc[static 1]) {
    size_t cc_len = libqt_strv_length(cc);
    libqt_string* cc_qstr = (libqt_string*)malloc(cc_len * sizeof(libqt_string));
    if (cc_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_emailclientlauncherjob_set_cc\n");
        abort();
    }
    for (size_t i = 0; i < cc_len; ++i) {
        cc_qstr[i] = qstring(cc[i]);
    }
    libqt_list cc_list = qlist(cc_qstr, cc_len);
    KEMailClientLauncherJob_SetCc((KEMailClientLauncherJob*)self, cc_list);
    free(cc_qstr);
}

void k_emailclientlauncherjob_set_bcc(void* self, const char* bcc[static 1]) {
    size_t bcc_len = libqt_strv_length(bcc);
    libqt_string* bcc_qstr = (libqt_string*)malloc(bcc_len * sizeof(libqt_string));
    if (bcc_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_emailclientlauncherjob_set_bcc\n");
        abort();
    }
    for (size_t i = 0; i < bcc_len; ++i) {
        bcc_qstr[i] = qstring(bcc[i]);
    }
    libqt_list bcc_list = qlist(bcc_qstr, bcc_len);
    KEMailClientLauncherJob_SetBcc((KEMailClientLauncherJob*)self, bcc_list);
    free(bcc_qstr);
}

void k_emailclientlauncherjob_set_subject(void* self, const char* subject) {
    KEMailClientLauncherJob_SetSubject((KEMailClientLauncherJob*)self, qstring(subject));
}

void k_emailclientlauncherjob_set_body(void* self, const char* body) {
    KEMailClientLauncherJob_SetBody((KEMailClientLauncherJob*)self, qstring(body));
}

void k_emailclientlauncherjob_set_attachments(void* self, libqt_list /* of QUrl* */ urls) {
    KEMailClientLauncherJob_SetAttachments((KEMailClientLauncherJob*)self, urls);
}

void k_emailclientlauncherjob_set_startup_id(void* self, const char* startupId) {
    KEMailClientLauncherJob_SetStartupId((KEMailClientLauncherJob*)self, qstring(startupId));
}

void k_emailclientlauncherjob_start(void* self) {
    KEMailClientLauncherJob_Start((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_on_start(void* self, void (*callback)()) {
    KEMailClientLauncherJob_OnStart((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_qbase_start(void* self) {
    KEMailClientLauncherJob_QBaseStart((KEMailClientLauncherJob*)self);
}

const char* k_emailclientlauncherjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailclientlauncherjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_emailclientlauncherjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_emailclientlauncherjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_emailclientlauncherjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_emailclientlauncherjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_emailclientlauncherjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_emailclientlauncherjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_emailclientlauncherjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_emailclientlauncherjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_emailclientlauncherjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_emailclientlauncherjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_emailclientlauncherjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_emailclientlauncherjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_emailclientlauncherjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_emailclientlauncherjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_emailclientlauncherjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_emailclientlauncherjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_emailclientlauncherjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_emailclientlauncherjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_emailclientlauncherjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_emailclientlauncherjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_emailclientlauncherjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_emailclientlauncherjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_emailclientlauncherjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_emailclientlauncherjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_emailclientlauncherjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_emailclientlauncherjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_emailclientlauncherjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_emailclientlauncherjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_emailclientlauncherjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_emailclientlauncherjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_emailclientlauncherjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_emailclientlauncherjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_emailclientlauncherjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_emailclientlauncherjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_emailclientlauncherjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_emailclientlauncherjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_emailclientlauncherjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_emailclientlauncherjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_emailclientlauncherjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_emailclientlauncherjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_emailclientlauncherjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_emailclientlauncherjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_emailclientlauncherjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_emailclientlauncherjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_emailclientlauncherjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_emailclientlauncherjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_emailclientlauncherjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_emailclientlauncherjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_emailclientlauncherjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_emailclientlauncherjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_emailclientlauncherjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_emailclientlauncherjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_emailclientlauncherjob_dynamic_property_names\n");
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

QBindingStorage* k_emailclientlauncherjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_emailclientlauncherjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_emailclientlauncherjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_emailclientlauncherjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_emailclientlauncherjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_emailclientlauncherjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_emailclientlauncherjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_emailclientlauncherjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_emailclientlauncherjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_emailclientlauncherjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_emailclientlauncherjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_emailclientlauncherjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_emailclientlauncherjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_emailclientlauncherjob_do_kill(void* self) {
    return KEMailClientLauncherJob_DoKill((KEMailClientLauncherJob*)self);
}

bool k_emailclientlauncherjob_qbase_do_kill(void* self) {
    return KEMailClientLauncherJob_QBaseDoKill((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_on_do_kill(void* self, bool (*callback)()) {
    KEMailClientLauncherJob_OnDoKill((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

bool k_emailclientlauncherjob_do_suspend(void* self) {
    return KEMailClientLauncherJob_DoSuspend((KEMailClientLauncherJob*)self);
}

bool k_emailclientlauncherjob_qbase_do_suspend(void* self) {
    return KEMailClientLauncherJob_QBaseDoSuspend((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_on_do_suspend(void* self, bool (*callback)()) {
    KEMailClientLauncherJob_OnDoSuspend((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

bool k_emailclientlauncherjob_do_resume(void* self) {
    return KEMailClientLauncherJob_DoResume((KEMailClientLauncherJob*)self);
}

bool k_emailclientlauncherjob_qbase_do_resume(void* self) {
    return KEMailClientLauncherJob_QBaseDoResume((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_on_do_resume(void* self, bool (*callback)()) {
    KEMailClientLauncherJob_OnDoResume((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

const char* k_emailclientlauncherjob_error_string(void* self) {
    libqt_string _str = KEMailClientLauncherJob_ErrorString((KEMailClientLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailclientlauncherjob_qbase_error_string(void* self) {
    libqt_string _str = KEMailClientLauncherJob_QBaseErrorString((KEMailClientLauncherJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_emailclientlauncherjob_on_error_string(void* self, const char* (*callback)()) {
    KEMailClientLauncherJob_OnErrorString((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

bool k_emailclientlauncherjob_event(void* self, void* event) {
    return KEMailClientLauncherJob_Event((KEMailClientLauncherJob*)self, (QEvent*)event);
}

bool k_emailclientlauncherjob_qbase_event(void* self, void* event) {
    return KEMailClientLauncherJob_QBaseEvent((KEMailClientLauncherJob*)self, (QEvent*)event);
}

void k_emailclientlauncherjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KEMailClientLauncherJob_OnEvent((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

bool k_emailclientlauncherjob_event_filter(void* self, void* watched, void* event) {
    return KEMailClientLauncherJob_EventFilter((KEMailClientLauncherJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_emailclientlauncherjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KEMailClientLauncherJob_QBaseEventFilter((KEMailClientLauncherJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_emailclientlauncherjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KEMailClientLauncherJob_OnEventFilter((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_timer_event(void* self, void* event) {
    KEMailClientLauncherJob_TimerEvent((KEMailClientLauncherJob*)self, (QTimerEvent*)event);
}

void k_emailclientlauncherjob_qbase_timer_event(void* self, void* event) {
    KEMailClientLauncherJob_QBaseTimerEvent((KEMailClientLauncherJob*)self, (QTimerEvent*)event);
}

void k_emailclientlauncherjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KEMailClientLauncherJob_OnTimerEvent((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_child_event(void* self, void* event) {
    KEMailClientLauncherJob_ChildEvent((KEMailClientLauncherJob*)self, (QChildEvent*)event);
}

void k_emailclientlauncherjob_qbase_child_event(void* self, void* event) {
    KEMailClientLauncherJob_QBaseChildEvent((KEMailClientLauncherJob*)self, (QChildEvent*)event);
}

void k_emailclientlauncherjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KEMailClientLauncherJob_OnChildEvent((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_custom_event(void* self, void* event) {
    KEMailClientLauncherJob_CustomEvent((KEMailClientLauncherJob*)self, (QEvent*)event);
}

void k_emailclientlauncherjob_qbase_custom_event(void* self, void* event) {
    KEMailClientLauncherJob_QBaseCustomEvent((KEMailClientLauncherJob*)self, (QEvent*)event);
}

void k_emailclientlauncherjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KEMailClientLauncherJob_OnCustomEvent((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_connect_notify(void* self, void* signal) {
    KEMailClientLauncherJob_ConnectNotify((KEMailClientLauncherJob*)self, (QMetaMethod*)signal);
}

void k_emailclientlauncherjob_qbase_connect_notify(void* self, void* signal) {
    KEMailClientLauncherJob_QBaseConnectNotify((KEMailClientLauncherJob*)self, (QMetaMethod*)signal);
}

void k_emailclientlauncherjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KEMailClientLauncherJob_OnConnectNotify((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_disconnect_notify(void* self, void* signal) {
    KEMailClientLauncherJob_DisconnectNotify((KEMailClientLauncherJob*)self, (QMetaMethod*)signal);
}

void k_emailclientlauncherjob_qbase_disconnect_notify(void* self, void* signal) {
    KEMailClientLauncherJob_QBaseDisconnectNotify((KEMailClientLauncherJob*)self, (QMetaMethod*)signal);
}

void k_emailclientlauncherjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KEMailClientLauncherJob_OnDisconnectNotify((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_set_capabilities(void* self, int32_t capabilities) {
    KEMailClientLauncherJob_SetCapabilities((KEMailClientLauncherJob*)self, capabilities);
}

void k_emailclientlauncherjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KEMailClientLauncherJob_QBaseSetCapabilities((KEMailClientLauncherJob*)self, capabilities);
}

void k_emailclientlauncherjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KEMailClientLauncherJob_OnSetCapabilities((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

bool k_emailclientlauncherjob_is_finished(void* self) {
    return KEMailClientLauncherJob_IsFinished((KEMailClientLauncherJob*)self);
}

bool k_emailclientlauncherjob_qbase_is_finished(void* self) {
    return KEMailClientLauncherJob_QBaseIsFinished((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_on_is_finished(void* self, bool (*callback)()) {
    KEMailClientLauncherJob_OnIsFinished((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_set_error(void* self, int errorCode) {
    KEMailClientLauncherJob_SetError((KEMailClientLauncherJob*)self, errorCode);
}

void k_emailclientlauncherjob_qbase_set_error(void* self, int errorCode) {
    KEMailClientLauncherJob_QBaseSetError((KEMailClientLauncherJob*)self, errorCode);
}

void k_emailclientlauncherjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KEMailClientLauncherJob_OnSetError((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_set_error_text(void* self, const char* errorText) {
    KEMailClientLauncherJob_SetErrorText((KEMailClientLauncherJob*)self, qstring(errorText));
}

void k_emailclientlauncherjob_qbase_set_error_text(void* self, const char* errorText) {
    KEMailClientLauncherJob_QBaseSetErrorText((KEMailClientLauncherJob*)self, qstring(errorText));
}

void k_emailclientlauncherjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KEMailClientLauncherJob_OnSetErrorText((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KEMailClientLauncherJob_SetProcessedAmount((KEMailClientLauncherJob*)self, unit, amount);
}

void k_emailclientlauncherjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KEMailClientLauncherJob_QBaseSetProcessedAmount((KEMailClientLauncherJob*)self, unit, amount);
}

void k_emailclientlauncherjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KEMailClientLauncherJob_OnSetProcessedAmount((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KEMailClientLauncherJob_SetTotalAmount((KEMailClientLauncherJob*)self, unit, amount);
}

void k_emailclientlauncherjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KEMailClientLauncherJob_QBaseSetTotalAmount((KEMailClientLauncherJob*)self, unit, amount);
}

void k_emailclientlauncherjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KEMailClientLauncherJob_OnSetTotalAmount((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_set_progress_unit(void* self, int32_t unit) {
    KEMailClientLauncherJob_SetProgressUnit((KEMailClientLauncherJob*)self, unit);
}

void k_emailclientlauncherjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KEMailClientLauncherJob_QBaseSetProgressUnit((KEMailClientLauncherJob*)self, unit);
}

void k_emailclientlauncherjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KEMailClientLauncherJob_OnSetProgressUnit((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_set_percent(void* self, uint64_t percentage) {
    KEMailClientLauncherJob_SetPercent((KEMailClientLauncherJob*)self, percentage);
}

void k_emailclientlauncherjob_qbase_set_percent(void* self, uint64_t percentage) {
    KEMailClientLauncherJob_QBaseSetPercent((KEMailClientLauncherJob*)self, percentage);
}

void k_emailclientlauncherjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KEMailClientLauncherJob_OnSetPercent((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_emit_result(void* self) {
    KEMailClientLauncherJob_EmitResult((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_qbase_emit_result(void* self) {
    KEMailClientLauncherJob_QBaseEmitResult((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_on_emit_result(void* self, void (*callback)()) {
    KEMailClientLauncherJob_OnEmitResult((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KEMailClientLauncherJob_EmitPercent((KEMailClientLauncherJob*)self, processedAmount, totalAmount);
}

void k_emailclientlauncherjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KEMailClientLauncherJob_QBaseEmitPercent((KEMailClientLauncherJob*)self, processedAmount, totalAmount);
}

void k_emailclientlauncherjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KEMailClientLauncherJob_OnEmitPercent((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_emit_speed(void* self, uint64_t speed) {
    KEMailClientLauncherJob_EmitSpeed((KEMailClientLauncherJob*)self, speed);
}

void k_emailclientlauncherjob_qbase_emit_speed(void* self, uint64_t speed) {
    KEMailClientLauncherJob_QBaseEmitSpeed((KEMailClientLauncherJob*)self, speed);
}

void k_emailclientlauncherjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KEMailClientLauncherJob_OnEmitSpeed((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_start_elapsed_timer(void* self) {
    KEMailClientLauncherJob_StartElapsedTimer((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_qbase_start_elapsed_timer(void* self) {
    KEMailClientLauncherJob_QBaseStartElapsedTimer((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KEMailClientLauncherJob_OnStartElapsedTimer((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

QObject* k_emailclientlauncherjob_sender(void* self) {
    return KEMailClientLauncherJob_Sender((KEMailClientLauncherJob*)self);
}

QObject* k_emailclientlauncherjob_qbase_sender(void* self) {
    return KEMailClientLauncherJob_QBaseSender((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_on_sender(void* self, QObject* (*callback)()) {
    KEMailClientLauncherJob_OnSender((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

int32_t k_emailclientlauncherjob_sender_signal_index(void* self) {
    return KEMailClientLauncherJob_SenderSignalIndex((KEMailClientLauncherJob*)self);
}

int32_t k_emailclientlauncherjob_qbase_sender_signal_index(void* self) {
    return KEMailClientLauncherJob_QBaseSenderSignalIndex((KEMailClientLauncherJob*)self);
}

void k_emailclientlauncherjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KEMailClientLauncherJob_OnSenderSignalIndex((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

int32_t k_emailclientlauncherjob_receivers(void* self, const char* signal) {
    return KEMailClientLauncherJob_Receivers((KEMailClientLauncherJob*)self, signal);
}

int32_t k_emailclientlauncherjob_qbase_receivers(void* self, const char* signal) {
    return KEMailClientLauncherJob_QBaseReceivers((KEMailClientLauncherJob*)self, signal);
}

void k_emailclientlauncherjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KEMailClientLauncherJob_OnReceivers((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

bool k_emailclientlauncherjob_is_signal_connected(void* self, void* signal) {
    return KEMailClientLauncherJob_IsSignalConnected((KEMailClientLauncherJob*)self, (QMetaMethod*)signal);
}

bool k_emailclientlauncherjob_qbase_is_signal_connected(void* self, void* signal) {
    return KEMailClientLauncherJob_QBaseIsSignalConnected((KEMailClientLauncherJob*)self, (QMetaMethod*)signal);
}

void k_emailclientlauncherjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KEMailClientLauncherJob_OnIsSignalConnected((KEMailClientLauncherJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_emailclientlauncherjob_delete(void* self) {
    KEMailClientLauncherJob_Delete((KEMailClientLauncherJob*)(self));
}
