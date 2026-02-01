#include "../extras-kcoreaddons/libkcompositejob.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libdeleteortrashjob.hpp"
#include "libdeleteortrashjob.h"

KIO__DeleteOrTrashJob* k_io__deleteortrashjob_new(libqt_list /* of QUrl* */ urls, int32_t deletionType, int32_t confirm, void* parent) {
    return KIO__DeleteOrTrashJob_new(urls, deletionType, confirm, (QObject*)parent);
}

const QMetaObject* k_io__deleteortrashjob_meta_object(void* self) {
    return KIO__DeleteOrTrashJob_MetaObject((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KIO__DeleteOrTrashJob_OnMetaObject((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

const QMetaObject* k_io__deleteortrashjob_qbase_meta_object(void* self) {
    return KIO__DeleteOrTrashJob_QBaseMetaObject((KIO__DeleteOrTrashJob*)self);
}

void* k_io__deleteortrashjob_metacast(void* self, const char* param1) {
    return KIO__DeleteOrTrashJob_Metacast((KIO__DeleteOrTrashJob*)self, param1);
}

void k_io__deleteortrashjob_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KIO__DeleteOrTrashJob_OnMetacast((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void* k_io__deleteortrashjob_qbase_metacast(void* self, const char* param1) {
    return KIO__DeleteOrTrashJob_QBaseMetacast((KIO__DeleteOrTrashJob*)self, param1);
}

int32_t k_io__deleteortrashjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__DeleteOrTrashJob_Metacall((KIO__DeleteOrTrashJob*)self, param1, param2, param3);
}

void k_io__deleteortrashjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__DeleteOrTrashJob_OnMetacall((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

int32_t k_io__deleteortrashjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__DeleteOrTrashJob_QBaseMetacall((KIO__DeleteOrTrashJob*)self, param1, param2, param3);
}

const char* k_io__deleteortrashjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__deleteortrashjob_start(void* self) {
    KIO__DeleteOrTrashJob_Start((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_start(void* self, void (*callback)()) {
    KIO__DeleteOrTrashJob_OnStart((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_qbase_start(void* self) {
    KIO__DeleteOrTrashJob_QBaseStart((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_started(void* self) {
    KIO__DeleteOrTrashJob_Started((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_started(void* self, void (*callback)(void*)) {
    KIO__DeleteOrTrashJob_Connect_Started((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

const char* k_io__deleteortrashjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__deleteortrashjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__deleteortrashjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__deleteortrashjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__deleteortrashjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__deleteortrashjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__deleteortrashjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__deleteortrashjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__deleteortrashjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__deleteortrashjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__deleteortrashjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__deleteortrashjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__deleteortrashjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__deleteortrashjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__deleteortrashjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__deleteortrashjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__deleteortrashjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__deleteortrashjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__deleteortrashjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__deleteortrashjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__deleteortrashjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__deleteortrashjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__deleteortrashjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__deleteortrashjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__deleteortrashjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__deleteortrashjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__deleteortrashjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__deleteortrashjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_io__deleteortrashjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__deleteortrashjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__deleteortrashjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__deleteortrashjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__deleteortrashjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__deleteortrashjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__deleteortrashjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__deleteortrashjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__deleteortrashjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__deleteortrashjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__deleteortrashjob_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__deleteortrashjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__deleteortrashjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__deleteortrashjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__deleteortrashjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__deleteortrashjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__deleteortrashjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__deleteortrashjob_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_io__deleteortrashjob_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__deleteortrashjob_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__deleteortrashjob_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_io__deleteortrashjob_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__deleteortrashjob_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_io__deleteortrashjob_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_io__deleteortrashjob_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_io__deleteortrashjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__deleteortrashjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__deleteortrashjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__deleteortrashjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__deleteortrashjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__deleteortrashjob_dynamic_property_names\n");
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

QBindingStorage* k_io__deleteortrashjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__deleteortrashjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__deleteortrashjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__deleteortrashjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__deleteortrashjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__deleteortrashjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__deleteortrashjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_io__deleteortrashjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__deleteortrashjob_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__deleteortrashjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_io__deleteortrashjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__deleteortrashjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_io__deleteortrashjob_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_io__deleteortrashjob_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_io__deleteortrashjob_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_io__deleteortrashjob_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_io__deleteortrashjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__deleteortrashjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_add_subjob(void* self, void* job) {
    return KIO__DeleteOrTrashJob_AddSubjob((KIO__DeleteOrTrashJob*)self, (KJob*)job);
}

bool k_io__deleteortrashjob_qbase_add_subjob(void* self, void* job) {
    return KIO__DeleteOrTrashJob_QBaseAddSubjob((KIO__DeleteOrTrashJob*)self, (KJob*)job);
}

void k_io__deleteortrashjob_on_add_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__DeleteOrTrashJob_OnAddSubjob((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_remove_subjob(void* self, void* job) {
    return KIO__DeleteOrTrashJob_RemoveSubjob((KIO__DeleteOrTrashJob*)self, (KJob*)job);
}

bool k_io__deleteortrashjob_qbase_remove_subjob(void* self, void* job) {
    return KIO__DeleteOrTrashJob_QBaseRemoveSubjob((KIO__DeleteOrTrashJob*)self, (KJob*)job);
}

void k_io__deleteortrashjob_on_remove_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__DeleteOrTrashJob_OnRemoveSubjob((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_slot_info_message(void* self, void* job, const char* message) {
    KIO__DeleteOrTrashJob_SlotInfoMessage((KIO__DeleteOrTrashJob*)self, (KJob*)job, qstring(message));
}

void k_io__deleteortrashjob_qbase_slot_info_message(void* self, void* job, const char* message) {
    KIO__DeleteOrTrashJob_QBaseSlotInfoMessage((KIO__DeleteOrTrashJob*)self, (KJob*)job, qstring(message));
}

void k_io__deleteortrashjob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KIO__DeleteOrTrashJob_OnSlotInfoMessage((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_do_kill(void* self) {
    return KIO__DeleteOrTrashJob_DoKill((KIO__DeleteOrTrashJob*)self);
}

bool k_io__deleteortrashjob_qbase_do_kill(void* self) {
    return KIO__DeleteOrTrashJob_QBaseDoKill((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_do_kill(void* self, bool (*callback)()) {
    KIO__DeleteOrTrashJob_OnDoKill((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_do_suspend(void* self) {
    return KIO__DeleteOrTrashJob_DoSuspend((KIO__DeleteOrTrashJob*)self);
}

bool k_io__deleteortrashjob_qbase_do_suspend(void* self) {
    return KIO__DeleteOrTrashJob_QBaseDoSuspend((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__DeleteOrTrashJob_OnDoSuspend((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_do_resume(void* self) {
    return KIO__DeleteOrTrashJob_DoResume((KIO__DeleteOrTrashJob*)self);
}

bool k_io__deleteortrashjob_qbase_do_resume(void* self) {
    return KIO__DeleteOrTrashJob_QBaseDoResume((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_do_resume(void* self, bool (*callback)()) {
    KIO__DeleteOrTrashJob_OnDoResume((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

const char* k_io__deleteortrashjob_error_string(void* self) {
    libqt_string _str = KIO__DeleteOrTrashJob_ErrorString((KIO__DeleteOrTrashJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__deleteortrashjob_qbase_error_string(void* self) {
    libqt_string _str = KIO__DeleteOrTrashJob_QBaseErrorString((KIO__DeleteOrTrashJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__deleteortrashjob_on_error_string(void* self, const char* (*callback)()) {
    KIO__DeleteOrTrashJob_OnErrorString((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_event(void* self, void* event) {
    return KIO__DeleteOrTrashJob_Event((KIO__DeleteOrTrashJob*)self, (QEvent*)event);
}

bool k_io__deleteortrashjob_qbase_event(void* self, void* event) {
    return KIO__DeleteOrTrashJob_QBaseEvent((KIO__DeleteOrTrashJob*)self, (QEvent*)event);
}

void k_io__deleteortrashjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__DeleteOrTrashJob_OnEvent((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_event_filter(void* self, void* watched, void* event) {
    return KIO__DeleteOrTrashJob_EventFilter((KIO__DeleteOrTrashJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__deleteortrashjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__DeleteOrTrashJob_QBaseEventFilter((KIO__DeleteOrTrashJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__deleteortrashjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__DeleteOrTrashJob_OnEventFilter((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_timer_event(void* self, void* event) {
    KIO__DeleteOrTrashJob_TimerEvent((KIO__DeleteOrTrashJob*)self, (QTimerEvent*)event);
}

void k_io__deleteortrashjob_qbase_timer_event(void* self, void* event) {
    KIO__DeleteOrTrashJob_QBaseTimerEvent((KIO__DeleteOrTrashJob*)self, (QTimerEvent*)event);
}

void k_io__deleteortrashjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__DeleteOrTrashJob_OnTimerEvent((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_child_event(void* self, void* event) {
    KIO__DeleteOrTrashJob_ChildEvent((KIO__DeleteOrTrashJob*)self, (QChildEvent*)event);
}

void k_io__deleteortrashjob_qbase_child_event(void* self, void* event) {
    KIO__DeleteOrTrashJob_QBaseChildEvent((KIO__DeleteOrTrashJob*)self, (QChildEvent*)event);
}

void k_io__deleteortrashjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__DeleteOrTrashJob_OnChildEvent((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_custom_event(void* self, void* event) {
    KIO__DeleteOrTrashJob_CustomEvent((KIO__DeleteOrTrashJob*)self, (QEvent*)event);
}

void k_io__deleteortrashjob_qbase_custom_event(void* self, void* event) {
    KIO__DeleteOrTrashJob_QBaseCustomEvent((KIO__DeleteOrTrashJob*)self, (QEvent*)event);
}

void k_io__deleteortrashjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__DeleteOrTrashJob_OnCustomEvent((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_connect_notify(void* self, void* signal) {
    KIO__DeleteOrTrashJob_ConnectNotify((KIO__DeleteOrTrashJob*)self, (QMetaMethod*)signal);
}

void k_io__deleteortrashjob_qbase_connect_notify(void* self, void* signal) {
    KIO__DeleteOrTrashJob_QBaseConnectNotify((KIO__DeleteOrTrashJob*)self, (QMetaMethod*)signal);
}

void k_io__deleteortrashjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__DeleteOrTrashJob_OnConnectNotify((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_disconnect_notify(void* self, void* signal) {
    KIO__DeleteOrTrashJob_DisconnectNotify((KIO__DeleteOrTrashJob*)self, (QMetaMethod*)signal);
}

void k_io__deleteortrashjob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__DeleteOrTrashJob_QBaseDisconnectNotify((KIO__DeleteOrTrashJob*)self, (QMetaMethod*)signal);
}

void k_io__deleteortrashjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__DeleteOrTrashJob_OnDisconnectNotify((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_has_subjobs(void* self) {
    return KIO__DeleteOrTrashJob_HasSubjobs((KIO__DeleteOrTrashJob*)self);
}

bool k_io__deleteortrashjob_qbase_has_subjobs(void* self) {
    return KIO__DeleteOrTrashJob_QBaseHasSubjobs((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_has_subjobs(void* self, bool (*callback)()) {
    KIO__DeleteOrTrashJob_OnHasSubjobs((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

libqt_list /* of KJob* */ k_io__deleteortrashjob_subjobs(void* self) {
    libqt_list _arr = KIO__DeleteOrTrashJob_Subjobs((KIO__DeleteOrTrashJob*)self);
    return _arr;
}

libqt_list /* of KJob* */ k_io__deleteortrashjob_qbase_subjobs(void* self) {
    libqt_list _arr = KIO__DeleteOrTrashJob_QBaseSubjobs((KIO__DeleteOrTrashJob*)self);
    return _arr;
}

void k_io__deleteortrashjob_on_subjobs(void* self, KJob** (*callback)()) {
    KIO__DeleteOrTrashJob_OnSubjobs((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_clear_subjobs(void* self) {
    KIO__DeleteOrTrashJob_ClearSubjobs((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_qbase_clear_subjobs(void* self) {
    KIO__DeleteOrTrashJob_QBaseClearSubjobs((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_clear_subjobs(void* self, void (*callback)()) {
    KIO__DeleteOrTrashJob_OnClearSubjobs((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_set_capabilities(void* self, int32_t capabilities) {
    KIO__DeleteOrTrashJob_SetCapabilities((KIO__DeleteOrTrashJob*)self, capabilities);
}

void k_io__deleteortrashjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__DeleteOrTrashJob_QBaseSetCapabilities((KIO__DeleteOrTrashJob*)self, capabilities);
}

void k_io__deleteortrashjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__DeleteOrTrashJob_OnSetCapabilities((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_is_finished(void* self) {
    return KIO__DeleteOrTrashJob_IsFinished((KIO__DeleteOrTrashJob*)self);
}

bool k_io__deleteortrashjob_qbase_is_finished(void* self) {
    return KIO__DeleteOrTrashJob_QBaseIsFinished((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_is_finished(void* self, bool (*callback)()) {
    KIO__DeleteOrTrashJob_OnIsFinished((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_set_error(void* self, int errorCode) {
    KIO__DeleteOrTrashJob_SetError((KIO__DeleteOrTrashJob*)self, errorCode);
}

void k_io__deleteortrashjob_qbase_set_error(void* self, int errorCode) {
    KIO__DeleteOrTrashJob_QBaseSetError((KIO__DeleteOrTrashJob*)self, errorCode);
}

void k_io__deleteortrashjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__DeleteOrTrashJob_OnSetError((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_set_error_text(void* self, const char* errorText) {
    KIO__DeleteOrTrashJob_SetErrorText((KIO__DeleteOrTrashJob*)self, qstring(errorText));
}

void k_io__deleteortrashjob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__DeleteOrTrashJob_QBaseSetErrorText((KIO__DeleteOrTrashJob*)self, qstring(errorText));
}

void k_io__deleteortrashjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__DeleteOrTrashJob_OnSetErrorText((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__DeleteOrTrashJob_SetProcessedAmount((KIO__DeleteOrTrashJob*)self, unit, amount);
}

void k_io__deleteortrashjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__DeleteOrTrashJob_QBaseSetProcessedAmount((KIO__DeleteOrTrashJob*)self, unit, amount);
}

void k_io__deleteortrashjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__DeleteOrTrashJob_OnSetProcessedAmount((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__DeleteOrTrashJob_SetTotalAmount((KIO__DeleteOrTrashJob*)self, unit, amount);
}

void k_io__deleteortrashjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__DeleteOrTrashJob_QBaseSetTotalAmount((KIO__DeleteOrTrashJob*)self, unit, amount);
}

void k_io__deleteortrashjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__DeleteOrTrashJob_OnSetTotalAmount((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_set_progress_unit(void* self, int32_t unit) {
    KIO__DeleteOrTrashJob_SetProgressUnit((KIO__DeleteOrTrashJob*)self, unit);
}

void k_io__deleteortrashjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__DeleteOrTrashJob_QBaseSetProgressUnit((KIO__DeleteOrTrashJob*)self, unit);
}

void k_io__deleteortrashjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__DeleteOrTrashJob_OnSetProgressUnit((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_set_percent(void* self, uint64_t percentage) {
    KIO__DeleteOrTrashJob_SetPercent((KIO__DeleteOrTrashJob*)self, percentage);
}

void k_io__deleteortrashjob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__DeleteOrTrashJob_QBaseSetPercent((KIO__DeleteOrTrashJob*)self, percentage);
}

void k_io__deleteortrashjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__DeleteOrTrashJob_OnSetPercent((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_emit_result(void* self) {
    KIO__DeleteOrTrashJob_EmitResult((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_qbase_emit_result(void* self) {
    KIO__DeleteOrTrashJob_QBaseEmitResult((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_emit_result(void* self, void (*callback)()) {
    KIO__DeleteOrTrashJob_OnEmitResult((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__DeleteOrTrashJob_EmitPercent((KIO__DeleteOrTrashJob*)self, processedAmount, totalAmount);
}

void k_io__deleteortrashjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__DeleteOrTrashJob_QBaseEmitPercent((KIO__DeleteOrTrashJob*)self, processedAmount, totalAmount);
}

void k_io__deleteortrashjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__DeleteOrTrashJob_OnEmitPercent((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_emit_speed(void* self, uint64_t speed) {
    KIO__DeleteOrTrashJob_EmitSpeed((KIO__DeleteOrTrashJob*)self, speed);
}

void k_io__deleteortrashjob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__DeleteOrTrashJob_QBaseEmitSpeed((KIO__DeleteOrTrashJob*)self, speed);
}

void k_io__deleteortrashjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__DeleteOrTrashJob_OnEmitSpeed((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_start_elapsed_timer(void* self) {
    KIO__DeleteOrTrashJob_StartElapsedTimer((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_qbase_start_elapsed_timer(void* self) {
    KIO__DeleteOrTrashJob_QBaseStartElapsedTimer((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__DeleteOrTrashJob_OnStartElapsedTimer((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

QObject* k_io__deleteortrashjob_sender(void* self) {
    return KIO__DeleteOrTrashJob_Sender((KIO__DeleteOrTrashJob*)self);
}

QObject* k_io__deleteortrashjob_qbase_sender(void* self) {
    return KIO__DeleteOrTrashJob_QBaseSender((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_sender(void* self, QObject* (*callback)()) {
    KIO__DeleteOrTrashJob_OnSender((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

int32_t k_io__deleteortrashjob_sender_signal_index(void* self) {
    return KIO__DeleteOrTrashJob_SenderSignalIndex((KIO__DeleteOrTrashJob*)self);
}

int32_t k_io__deleteortrashjob_qbase_sender_signal_index(void* self) {
    return KIO__DeleteOrTrashJob_QBaseSenderSignalIndex((KIO__DeleteOrTrashJob*)self);
}

void k_io__deleteortrashjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__DeleteOrTrashJob_OnSenderSignalIndex((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

int32_t k_io__deleteortrashjob_receivers(void* self, const char* signal) {
    return KIO__DeleteOrTrashJob_Receivers((KIO__DeleteOrTrashJob*)self, signal);
}

int32_t k_io__deleteortrashjob_qbase_receivers(void* self, const char* signal) {
    return KIO__DeleteOrTrashJob_QBaseReceivers((KIO__DeleteOrTrashJob*)self, signal);
}

void k_io__deleteortrashjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__DeleteOrTrashJob_OnReceivers((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

bool k_io__deleteortrashjob_is_signal_connected(void* self, void* signal) {
    return KIO__DeleteOrTrashJob_IsSignalConnected((KIO__DeleteOrTrashJob*)self, (QMetaMethod*)signal);
}

bool k_io__deleteortrashjob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__DeleteOrTrashJob_QBaseIsSignalConnected((KIO__DeleteOrTrashJob*)self, (QMetaMethod*)signal);
}

void k_io__deleteortrashjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__DeleteOrTrashJob_OnIsSignalConnected((KIO__DeleteOrTrashJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__deleteortrashjob_delete(void* self) {
    KIO__DeleteOrTrashJob_Delete((KIO__DeleteOrTrashJob*)(self));
}
