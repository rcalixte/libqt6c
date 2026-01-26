#include "../extras-kcoreaddons/libkcompositejob.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libnamefinderjob.hpp"
#include "libnamefinderjob.h"

KIO__NameFinderJob* k_io__namefinderjob_new(void* baseUrl, const char* name, void* parent) {
    return KIO__NameFinderJob_new((QUrl*)baseUrl, qstring(name), (QObject*)parent);
}

const QMetaObject* k_io__namefinderjob_meta_object(void* self) {
    return KIO__NameFinderJob_MetaObject((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KIO__NameFinderJob_OnMetaObject((KIO__NameFinderJob*)self, (intptr_t)callback);
}

const QMetaObject* k_io__namefinderjob_qbase_meta_object(void* self) {
    return KIO__NameFinderJob_QBaseMetaObject((KIO__NameFinderJob*)self);
}

void* k_io__namefinderjob_metacast(void* self, const char* param1) {
    return KIO__NameFinderJob_Metacast((KIO__NameFinderJob*)self, param1);
}

void k_io__namefinderjob_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KIO__NameFinderJob_OnMetacast((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void* k_io__namefinderjob_qbase_metacast(void* self, const char* param1) {
    return KIO__NameFinderJob_QBaseMetacast((KIO__NameFinderJob*)self, param1);
}

int32_t k_io__namefinderjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__NameFinderJob_Metacall((KIO__NameFinderJob*)self, param1, param2, param3);
}

void k_io__namefinderjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__NameFinderJob_OnMetacall((KIO__NameFinderJob*)self, (intptr_t)callback);
}

int32_t k_io__namefinderjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__NameFinderJob_QBaseMetacall((KIO__NameFinderJob*)self, param1, param2, param3);
}

const char* k_io__namefinderjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__namefinderjob_start(void* self) {
    KIO__NameFinderJob_Start((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_start(void* self, void (*callback)()) {
    KIO__NameFinderJob_OnStart((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_qbase_start(void* self) {
    KIO__NameFinderJob_QBaseStart((KIO__NameFinderJob*)self);
}

QUrl* k_io__namefinderjob_final_url(void* self) {
    return KIO__NameFinderJob_FinalUrl((KIO__NameFinderJob*)self);
}

QUrl* k_io__namefinderjob_base_url(void* self) {
    return KIO__NameFinderJob_BaseUrl((KIO__NameFinderJob*)self);
}

const char* k_io__namefinderjob_final_name(void* self) {
    libqt_string _str = KIO__NameFinderJob_FinalName((KIO__NameFinderJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__namefinderjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__namefinderjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__namefinderjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__namefinderjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__namefinderjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__namefinderjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__namefinderjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__namefinderjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__namefinderjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__namefinderjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__namefinderjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__namefinderjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__namefinderjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__namefinderjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__namefinderjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__namefinderjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__namefinderjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__namefinderjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__namefinderjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__namefinderjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__namefinderjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__namefinderjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__namefinderjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__namefinderjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__namefinderjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__namefinderjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__namefinderjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__namefinderjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_io__namefinderjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__namefinderjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__namefinderjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__namefinderjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__namefinderjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__namefinderjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__namefinderjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__namefinderjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__namefinderjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__namefinderjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__namefinderjob_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__namefinderjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__namefinderjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__namefinderjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__namefinderjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__namefinderjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__namefinderjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__namefinderjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__namefinderjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__namefinderjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__namefinderjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__namefinderjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__namefinderjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__namefinderjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__namefinderjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__namefinderjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__namefinderjob_dynamic_property_names\n");
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

QBindingStorage* k_io__namefinderjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__namefinderjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__namefinderjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__namefinderjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__namefinderjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__namefinderjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__namefinderjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__namefinderjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__namefinderjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__namefinderjob_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__namefinderjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__namefinderjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__namefinderjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__namefinderjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_add_subjob(void* self, void* job) {
    return KIO__NameFinderJob_AddSubjob((KIO__NameFinderJob*)self, (KJob*)job);
}

bool k_io__namefinderjob_qbase_add_subjob(void* self, void* job) {
    return KIO__NameFinderJob_QBaseAddSubjob((KIO__NameFinderJob*)self, (KJob*)job);
}

void k_io__namefinderjob_on_add_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnAddSubjob((KIO__NameFinderJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_remove_subjob(void* self, void* job) {
    return KIO__NameFinderJob_RemoveSubjob((KIO__NameFinderJob*)self, (KJob*)job);
}

bool k_io__namefinderjob_qbase_remove_subjob(void* self, void* job) {
    return KIO__NameFinderJob_QBaseRemoveSubjob((KIO__NameFinderJob*)self, (KJob*)job);
}

void k_io__namefinderjob_on_remove_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnRemoveSubjob((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_slot_result(void* self, void* job) {
    KIO__NameFinderJob_SlotResult((KIO__NameFinderJob*)self, (KJob*)job);
}

void k_io__namefinderjob_qbase_slot_result(void* self, void* job) {
    KIO__NameFinderJob_QBaseSlotResult((KIO__NameFinderJob*)self, (KJob*)job);
}

void k_io__namefinderjob_on_slot_result(void* self, void (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnSlotResult((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_slot_info_message(void* self, void* job, const char* message) {
    KIO__NameFinderJob_SlotInfoMessage((KIO__NameFinderJob*)self, (KJob*)job, qstring(message));
}

void k_io__namefinderjob_qbase_slot_info_message(void* self, void* job, const char* message) {
    KIO__NameFinderJob_QBaseSlotInfoMessage((KIO__NameFinderJob*)self, (KJob*)job, qstring(message));
}

void k_io__namefinderjob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KIO__NameFinderJob_OnSlotInfoMessage((KIO__NameFinderJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_do_kill(void* self) {
    return KIO__NameFinderJob_DoKill((KIO__NameFinderJob*)self);
}

bool k_io__namefinderjob_qbase_do_kill(void* self) {
    return KIO__NameFinderJob_QBaseDoKill((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_do_kill(void* self, bool (*callback)()) {
    KIO__NameFinderJob_OnDoKill((KIO__NameFinderJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_do_suspend(void* self) {
    return KIO__NameFinderJob_DoSuspend((KIO__NameFinderJob*)self);
}

bool k_io__namefinderjob_qbase_do_suspend(void* self) {
    return KIO__NameFinderJob_QBaseDoSuspend((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__NameFinderJob_OnDoSuspend((KIO__NameFinderJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_do_resume(void* self) {
    return KIO__NameFinderJob_DoResume((KIO__NameFinderJob*)self);
}

bool k_io__namefinderjob_qbase_do_resume(void* self) {
    return KIO__NameFinderJob_QBaseDoResume((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_do_resume(void* self, bool (*callback)()) {
    KIO__NameFinderJob_OnDoResume((KIO__NameFinderJob*)self, (intptr_t)callback);
}

const char* k_io__namefinderjob_error_string(void* self) {
    libqt_string _str = KIO__NameFinderJob_ErrorString((KIO__NameFinderJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__namefinderjob_qbase_error_string(void* self) {
    libqt_string _str = KIO__NameFinderJob_QBaseErrorString((KIO__NameFinderJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__namefinderjob_on_error_string(void* self, const char* (*callback)()) {
    KIO__NameFinderJob_OnErrorString((KIO__NameFinderJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_event(void* self, void* event) {
    return KIO__NameFinderJob_Event((KIO__NameFinderJob*)self, (QEvent*)event);
}

bool k_io__namefinderjob_qbase_event(void* self, void* event) {
    return KIO__NameFinderJob_QBaseEvent((KIO__NameFinderJob*)self, (QEvent*)event);
}

void k_io__namefinderjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnEvent((KIO__NameFinderJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_event_filter(void* self, void* watched, void* event) {
    return KIO__NameFinderJob_EventFilter((KIO__NameFinderJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__namefinderjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__NameFinderJob_QBaseEventFilter((KIO__NameFinderJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__namefinderjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__NameFinderJob_OnEventFilter((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_timer_event(void* self, void* event) {
    KIO__NameFinderJob_TimerEvent((KIO__NameFinderJob*)self, (QTimerEvent*)event);
}

void k_io__namefinderjob_qbase_timer_event(void* self, void* event) {
    KIO__NameFinderJob_QBaseTimerEvent((KIO__NameFinderJob*)self, (QTimerEvent*)event);
}

void k_io__namefinderjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnTimerEvent((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_child_event(void* self, void* event) {
    KIO__NameFinderJob_ChildEvent((KIO__NameFinderJob*)self, (QChildEvent*)event);
}

void k_io__namefinderjob_qbase_child_event(void* self, void* event) {
    KIO__NameFinderJob_QBaseChildEvent((KIO__NameFinderJob*)self, (QChildEvent*)event);
}

void k_io__namefinderjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnChildEvent((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_custom_event(void* self, void* event) {
    KIO__NameFinderJob_CustomEvent((KIO__NameFinderJob*)self, (QEvent*)event);
}

void k_io__namefinderjob_qbase_custom_event(void* self, void* event) {
    KIO__NameFinderJob_QBaseCustomEvent((KIO__NameFinderJob*)self, (QEvent*)event);
}

void k_io__namefinderjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnCustomEvent((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_connect_notify(void* self, void* signal) {
    KIO__NameFinderJob_ConnectNotify((KIO__NameFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__namefinderjob_qbase_connect_notify(void* self, void* signal) {
    KIO__NameFinderJob_QBaseConnectNotify((KIO__NameFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__namefinderjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnConnectNotify((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_disconnect_notify(void* self, void* signal) {
    KIO__NameFinderJob_DisconnectNotify((KIO__NameFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__namefinderjob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__NameFinderJob_QBaseDisconnectNotify((KIO__NameFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__namefinderjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnDisconnectNotify((KIO__NameFinderJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_has_subjobs(void* self) {
    return KIO__NameFinderJob_HasSubjobs((KIO__NameFinderJob*)self);
}

bool k_io__namefinderjob_qbase_has_subjobs(void* self) {
    return KIO__NameFinderJob_QBaseHasSubjobs((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_has_subjobs(void* self, bool (*callback)()) {
    KIO__NameFinderJob_OnHasSubjobs((KIO__NameFinderJob*)self, (intptr_t)callback);
}

libqt_list /* of KJob* */ k_io__namefinderjob_subjobs(void* self) {
    libqt_list _arr = KIO__NameFinderJob_Subjobs((KIO__NameFinderJob*)self);
    return _arr;
}

libqt_list /* of KJob* */ k_io__namefinderjob_qbase_subjobs(void* self) {
    libqt_list _arr = KIO__NameFinderJob_QBaseSubjobs((KIO__NameFinderJob*)self);
    return _arr;
}

void k_io__namefinderjob_on_subjobs(void* self, KJob** (*callback)()) {
    KIO__NameFinderJob_OnSubjobs((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_clear_subjobs(void* self) {
    KIO__NameFinderJob_ClearSubjobs((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_qbase_clear_subjobs(void* self) {
    KIO__NameFinderJob_QBaseClearSubjobs((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_clear_subjobs(void* self, void (*callback)()) {
    KIO__NameFinderJob_OnClearSubjobs((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_set_capabilities(void* self, int32_t capabilities) {
    KIO__NameFinderJob_SetCapabilities((KIO__NameFinderJob*)self, capabilities);
}

void k_io__namefinderjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__NameFinderJob_QBaseSetCapabilities((KIO__NameFinderJob*)self, capabilities);
}

void k_io__namefinderjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__NameFinderJob_OnSetCapabilities((KIO__NameFinderJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_is_finished(void* self) {
    return KIO__NameFinderJob_IsFinished((KIO__NameFinderJob*)self);
}

bool k_io__namefinderjob_qbase_is_finished(void* self) {
    return KIO__NameFinderJob_QBaseIsFinished((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_is_finished(void* self, bool (*callback)()) {
    KIO__NameFinderJob_OnIsFinished((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_set_error(void* self, int errorCode) {
    KIO__NameFinderJob_SetError((KIO__NameFinderJob*)self, errorCode);
}

void k_io__namefinderjob_qbase_set_error(void* self, int errorCode) {
    KIO__NameFinderJob_QBaseSetError((KIO__NameFinderJob*)self, errorCode);
}

void k_io__namefinderjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__NameFinderJob_OnSetError((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_set_error_text(void* self, const char* errorText) {
    KIO__NameFinderJob_SetErrorText((KIO__NameFinderJob*)self, qstring(errorText));
}

void k_io__namefinderjob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__NameFinderJob_QBaseSetErrorText((KIO__NameFinderJob*)self, qstring(errorText));
}

void k_io__namefinderjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__NameFinderJob_OnSetErrorText((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__NameFinderJob_SetProcessedAmount((KIO__NameFinderJob*)self, unit, amount);
}

void k_io__namefinderjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__NameFinderJob_QBaseSetProcessedAmount((KIO__NameFinderJob*)self, unit, amount);
}

void k_io__namefinderjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__NameFinderJob_OnSetProcessedAmount((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__NameFinderJob_SetTotalAmount((KIO__NameFinderJob*)self, unit, amount);
}

void k_io__namefinderjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__NameFinderJob_QBaseSetTotalAmount((KIO__NameFinderJob*)self, unit, amount);
}

void k_io__namefinderjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__NameFinderJob_OnSetTotalAmount((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_set_progress_unit(void* self, int32_t unit) {
    KIO__NameFinderJob_SetProgressUnit((KIO__NameFinderJob*)self, unit);
}

void k_io__namefinderjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__NameFinderJob_QBaseSetProgressUnit((KIO__NameFinderJob*)self, unit);
}

void k_io__namefinderjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__NameFinderJob_OnSetProgressUnit((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_set_percent(void* self, uint64_t percentage) {
    KIO__NameFinderJob_SetPercent((KIO__NameFinderJob*)self, percentage);
}

void k_io__namefinderjob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__NameFinderJob_QBaseSetPercent((KIO__NameFinderJob*)self, percentage);
}

void k_io__namefinderjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__NameFinderJob_OnSetPercent((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_emit_result(void* self) {
    KIO__NameFinderJob_EmitResult((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_qbase_emit_result(void* self) {
    KIO__NameFinderJob_QBaseEmitResult((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_emit_result(void* self, void (*callback)()) {
    KIO__NameFinderJob_OnEmitResult((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__NameFinderJob_EmitPercent((KIO__NameFinderJob*)self, processedAmount, totalAmount);
}

void k_io__namefinderjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__NameFinderJob_QBaseEmitPercent((KIO__NameFinderJob*)self, processedAmount, totalAmount);
}

void k_io__namefinderjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__NameFinderJob_OnEmitPercent((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_emit_speed(void* self, uint64_t speed) {
    KIO__NameFinderJob_EmitSpeed((KIO__NameFinderJob*)self, speed);
}

void k_io__namefinderjob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__NameFinderJob_QBaseEmitSpeed((KIO__NameFinderJob*)self, speed);
}

void k_io__namefinderjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__NameFinderJob_OnEmitSpeed((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_start_elapsed_timer(void* self) {
    KIO__NameFinderJob_StartElapsedTimer((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_qbase_start_elapsed_timer(void* self) {
    KIO__NameFinderJob_QBaseStartElapsedTimer((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__NameFinderJob_OnStartElapsedTimer((KIO__NameFinderJob*)self, (intptr_t)callback);
}

QObject* k_io__namefinderjob_sender(void* self) {
    return KIO__NameFinderJob_Sender((KIO__NameFinderJob*)self);
}

QObject* k_io__namefinderjob_qbase_sender(void* self) {
    return KIO__NameFinderJob_QBaseSender((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_sender(void* self, QObject* (*callback)()) {
    KIO__NameFinderJob_OnSender((KIO__NameFinderJob*)self, (intptr_t)callback);
}

int32_t k_io__namefinderjob_sender_signal_index(void* self) {
    return KIO__NameFinderJob_SenderSignalIndex((KIO__NameFinderJob*)self);
}

int32_t k_io__namefinderjob_qbase_sender_signal_index(void* self) {
    return KIO__NameFinderJob_QBaseSenderSignalIndex((KIO__NameFinderJob*)self);
}

void k_io__namefinderjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__NameFinderJob_OnSenderSignalIndex((KIO__NameFinderJob*)self, (intptr_t)callback);
}

int32_t k_io__namefinderjob_receivers(void* self, const char* signal) {
    return KIO__NameFinderJob_Receivers((KIO__NameFinderJob*)self, signal);
}

int32_t k_io__namefinderjob_qbase_receivers(void* self, const char* signal) {
    return KIO__NameFinderJob_QBaseReceivers((KIO__NameFinderJob*)self, signal);
}

void k_io__namefinderjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__NameFinderJob_OnReceivers((KIO__NameFinderJob*)self, (intptr_t)callback);
}

bool k_io__namefinderjob_is_signal_connected(void* self, void* signal) {
    return KIO__NameFinderJob_IsSignalConnected((KIO__NameFinderJob*)self, (QMetaMethod*)signal);
}

bool k_io__namefinderjob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__NameFinderJob_QBaseIsSignalConnected((KIO__NameFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__namefinderjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__NameFinderJob_OnIsSignalConnected((KIO__NameFinderJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__namefinderjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__namefinderjob_delete(void* self) {
    KIO__NameFinderJob_Delete((KIO__NameFinderJob*)(self));
}
