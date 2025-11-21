#include "../extras-kcoreaddons/libkcompositejob.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libfaviconrequestjob.hpp"
#include "libfaviconrequestjob.h"

KIO__FavIconRequestJob* k_io__faviconrequestjob_new(void* hostUrl) {
    return KIO__FavIconRequestJob_new((QUrl*)hostUrl);
}

KIO__FavIconRequestJob* k_io__faviconrequestjob_new2(void* hostUrl, int32_t reload) {
    return KIO__FavIconRequestJob_new2((QUrl*)hostUrl, reload);
}

KIO__FavIconRequestJob* k_io__faviconrequestjob_new3(void* hostUrl, int32_t reload, void* parent) {
    return KIO__FavIconRequestJob_new3((QUrl*)hostUrl, reload, (QObject*)parent);
}

const QMetaObject* k_io__faviconrequestjob_meta_object(void* self) {
    return KIO__FavIconRequestJob_MetaObject((KIO__FavIconRequestJob*)self);
}

void* k_io__faviconrequestjob_metacast(void* self, const char* param1) {
    return KIO__FavIconRequestJob_Metacast((KIO__FavIconRequestJob*)self, param1);
}

int32_t k_io__faviconrequestjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__FavIconRequestJob_Metacall((KIO__FavIconRequestJob*)self, param1, param2, param3);
}

void k_io__faviconrequestjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__FavIconRequestJob_OnMetacall((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

int32_t k_io__faviconrequestjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__FavIconRequestJob_QBaseMetacall((KIO__FavIconRequestJob*)self, param1, param2, param3);
}

const char* k_io__faviconrequestjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__faviconrequestjob_set_icon_url(void* self, void* iconUrl) {
    KIO__FavIconRequestJob_SetIconUrl((KIO__FavIconRequestJob*)self, (QUrl*)iconUrl);
}

const char* k_io__faviconrequestjob_icon_file(void* self) {
    libqt_string _str = KIO__FavIconRequestJob_IconFile((KIO__FavIconRequestJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_io__faviconrequestjob_host_url(void* self) {
    return KIO__FavIconRequestJob_HostUrl((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_start(void* self) {
    KIO__FavIconRequestJob_Start((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_start(void* self, void (*callback)()) {
    KIO__FavIconRequestJob_OnStart((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_qbase_start(void* self) {
    KIO__FavIconRequestJob_QBaseStart((KIO__FavIconRequestJob*)self);
}

const char* k_io__faviconrequestjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__faviconrequestjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__faviconrequestjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__faviconrequestjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__faviconrequestjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__faviconrequestjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__faviconrequestjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__faviconrequestjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__faviconrequestjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__faviconrequestjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__faviconrequestjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__faviconrequestjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__faviconrequestjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__faviconrequestjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__faviconrequestjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__faviconrequestjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__faviconrequestjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__faviconrequestjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__faviconrequestjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__faviconrequestjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__faviconrequestjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__faviconrequestjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__faviconrequestjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__faviconrequestjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__faviconrequestjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__faviconrequestjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__faviconrequestjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__faviconrequestjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_io__faviconrequestjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__faviconrequestjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__faviconrequestjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__faviconrequestjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__faviconrequestjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__faviconrequestjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__faviconrequestjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__faviconrequestjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__faviconrequestjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__faviconrequestjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__faviconrequestjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__faviconrequestjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__faviconrequestjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__faviconrequestjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__faviconrequestjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__faviconrequestjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__faviconrequestjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__faviconrequestjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__faviconrequestjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__faviconrequestjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__faviconrequestjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__faviconrequestjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__faviconrequestjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__faviconrequestjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__faviconrequestjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__faviconrequestjob_dynamic_property_names");
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

QBindingStorage* k_io__faviconrequestjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__faviconrequestjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__faviconrequestjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__faviconrequestjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__faviconrequestjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__faviconrequestjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__faviconrequestjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__faviconrequestjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__faviconrequestjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__faviconrequestjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__faviconrequestjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__faviconrequestjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__faviconrequestjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_add_subjob(void* self, void* job) {
    return KIO__FavIconRequestJob_AddSubjob((KIO__FavIconRequestJob*)self, (KJob*)job);
}

bool k_io__faviconrequestjob_qbase_add_subjob(void* self, void* job) {
    return KIO__FavIconRequestJob_QBaseAddSubjob((KIO__FavIconRequestJob*)self, (KJob*)job);
}

void k_io__faviconrequestjob_on_add_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__FavIconRequestJob_OnAddSubjob((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_remove_subjob(void* self, void* job) {
    return KIO__FavIconRequestJob_RemoveSubjob((KIO__FavIconRequestJob*)self, (KJob*)job);
}

bool k_io__faviconrequestjob_qbase_remove_subjob(void* self, void* job) {
    return KIO__FavIconRequestJob_QBaseRemoveSubjob((KIO__FavIconRequestJob*)self, (KJob*)job);
}

void k_io__faviconrequestjob_on_remove_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__FavIconRequestJob_OnRemoveSubjob((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_slot_info_message(void* self, void* job, const char* message) {
    KIO__FavIconRequestJob_SlotInfoMessage((KIO__FavIconRequestJob*)self, (KJob*)job, qstring(message));
}

void k_io__faviconrequestjob_qbase_slot_info_message(void* self, void* job, const char* message) {
    KIO__FavIconRequestJob_QBaseSlotInfoMessage((KIO__FavIconRequestJob*)self, (KJob*)job, qstring(message));
}

void k_io__faviconrequestjob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KIO__FavIconRequestJob_OnSlotInfoMessage((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_do_kill(void* self) {
    return KIO__FavIconRequestJob_DoKill((KIO__FavIconRequestJob*)self);
}

bool k_io__faviconrequestjob_qbase_do_kill(void* self) {
    return KIO__FavIconRequestJob_QBaseDoKill((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_do_kill(void* self, bool (*callback)()) {
    KIO__FavIconRequestJob_OnDoKill((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_do_suspend(void* self) {
    return KIO__FavIconRequestJob_DoSuspend((KIO__FavIconRequestJob*)self);
}

bool k_io__faviconrequestjob_qbase_do_suspend(void* self) {
    return KIO__FavIconRequestJob_QBaseDoSuspend((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__FavIconRequestJob_OnDoSuspend((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_do_resume(void* self) {
    return KIO__FavIconRequestJob_DoResume((KIO__FavIconRequestJob*)self);
}

bool k_io__faviconrequestjob_qbase_do_resume(void* self) {
    return KIO__FavIconRequestJob_QBaseDoResume((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_do_resume(void* self, bool (*callback)()) {
    KIO__FavIconRequestJob_OnDoResume((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

const char* k_io__faviconrequestjob_error_string(void* self) {
    libqt_string _str = KIO__FavIconRequestJob_ErrorString((KIO__FavIconRequestJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__faviconrequestjob_qbase_error_string(void* self) {
    libqt_string _str = KIO__FavIconRequestJob_QBaseErrorString((KIO__FavIconRequestJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__faviconrequestjob_on_error_string(void* self, const char* (*callback)()) {
    KIO__FavIconRequestJob_OnErrorString((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_event(void* self, void* event) {
    return KIO__FavIconRequestJob_Event((KIO__FavIconRequestJob*)self, (QEvent*)event);
}

bool k_io__faviconrequestjob_qbase_event(void* self, void* event) {
    return KIO__FavIconRequestJob_QBaseEvent((KIO__FavIconRequestJob*)self, (QEvent*)event);
}

void k_io__faviconrequestjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__FavIconRequestJob_OnEvent((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_event_filter(void* self, void* watched, void* event) {
    return KIO__FavIconRequestJob_EventFilter((KIO__FavIconRequestJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__faviconrequestjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__FavIconRequestJob_QBaseEventFilter((KIO__FavIconRequestJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__faviconrequestjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__FavIconRequestJob_OnEventFilter((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_timer_event(void* self, void* event) {
    KIO__FavIconRequestJob_TimerEvent((KIO__FavIconRequestJob*)self, (QTimerEvent*)event);
}

void k_io__faviconrequestjob_qbase_timer_event(void* self, void* event) {
    KIO__FavIconRequestJob_QBaseTimerEvent((KIO__FavIconRequestJob*)self, (QTimerEvent*)event);
}

void k_io__faviconrequestjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__FavIconRequestJob_OnTimerEvent((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_child_event(void* self, void* event) {
    KIO__FavIconRequestJob_ChildEvent((KIO__FavIconRequestJob*)self, (QChildEvent*)event);
}

void k_io__faviconrequestjob_qbase_child_event(void* self, void* event) {
    KIO__FavIconRequestJob_QBaseChildEvent((KIO__FavIconRequestJob*)self, (QChildEvent*)event);
}

void k_io__faviconrequestjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__FavIconRequestJob_OnChildEvent((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_custom_event(void* self, void* event) {
    KIO__FavIconRequestJob_CustomEvent((KIO__FavIconRequestJob*)self, (QEvent*)event);
}

void k_io__faviconrequestjob_qbase_custom_event(void* self, void* event) {
    KIO__FavIconRequestJob_QBaseCustomEvent((KIO__FavIconRequestJob*)self, (QEvent*)event);
}

void k_io__faviconrequestjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__FavIconRequestJob_OnCustomEvent((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_connect_notify(void* self, void* signal) {
    KIO__FavIconRequestJob_ConnectNotify((KIO__FavIconRequestJob*)self, (QMetaMethod*)signal);
}

void k_io__faviconrequestjob_qbase_connect_notify(void* self, void* signal) {
    KIO__FavIconRequestJob_QBaseConnectNotify((KIO__FavIconRequestJob*)self, (QMetaMethod*)signal);
}

void k_io__faviconrequestjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__FavIconRequestJob_OnConnectNotify((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_disconnect_notify(void* self, void* signal) {
    KIO__FavIconRequestJob_DisconnectNotify((KIO__FavIconRequestJob*)self, (QMetaMethod*)signal);
}

void k_io__faviconrequestjob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__FavIconRequestJob_QBaseDisconnectNotify((KIO__FavIconRequestJob*)self, (QMetaMethod*)signal);
}

void k_io__faviconrequestjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__FavIconRequestJob_OnDisconnectNotify((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_has_subjobs(void* self) {
    return KIO__FavIconRequestJob_HasSubjobs((KIO__FavIconRequestJob*)self);
}

bool k_io__faviconrequestjob_qbase_has_subjobs(void* self) {
    return KIO__FavIconRequestJob_QBaseHasSubjobs((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_has_subjobs(void* self, bool (*callback)()) {
    KIO__FavIconRequestJob_OnHasSubjobs((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

libqt_list /* of KJob* */ k_io__faviconrequestjob_subjobs(void* self) {
    libqt_list _arr = KIO__FavIconRequestJob_Subjobs((KIO__FavIconRequestJob*)self);
    return _arr;
}

libqt_list /* of KJob* */ k_io__faviconrequestjob_qbase_subjobs(void* self) {
    libqt_list _arr = KIO__FavIconRequestJob_QBaseSubjobs((KIO__FavIconRequestJob*)self);
    return _arr;
}

void k_io__faviconrequestjob_on_subjobs(void* self, KJob** (*callback)()) {
    KIO__FavIconRequestJob_OnSubjobs((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_clear_subjobs(void* self) {
    KIO__FavIconRequestJob_ClearSubjobs((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_qbase_clear_subjobs(void* self) {
    KIO__FavIconRequestJob_QBaseClearSubjobs((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_clear_subjobs(void* self, void (*callback)()) {
    KIO__FavIconRequestJob_OnClearSubjobs((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_set_capabilities(void* self, int32_t capabilities) {
    KIO__FavIconRequestJob_SetCapabilities((KIO__FavIconRequestJob*)self, capabilities);
}

void k_io__faviconrequestjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__FavIconRequestJob_QBaseSetCapabilities((KIO__FavIconRequestJob*)self, capabilities);
}

void k_io__faviconrequestjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__FavIconRequestJob_OnSetCapabilities((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_is_finished(void* self) {
    return KIO__FavIconRequestJob_IsFinished((KIO__FavIconRequestJob*)self);
}

bool k_io__faviconrequestjob_qbase_is_finished(void* self) {
    return KIO__FavIconRequestJob_QBaseIsFinished((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_is_finished(void* self, bool (*callback)()) {
    KIO__FavIconRequestJob_OnIsFinished((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_set_error(void* self, int errorCode) {
    KIO__FavIconRequestJob_SetError((KIO__FavIconRequestJob*)self, errorCode);
}

void k_io__faviconrequestjob_qbase_set_error(void* self, int errorCode) {
    KIO__FavIconRequestJob_QBaseSetError((KIO__FavIconRequestJob*)self, errorCode);
}

void k_io__faviconrequestjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__FavIconRequestJob_OnSetError((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_set_error_text(void* self, const char* errorText) {
    KIO__FavIconRequestJob_SetErrorText((KIO__FavIconRequestJob*)self, qstring(errorText));
}

void k_io__faviconrequestjob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__FavIconRequestJob_QBaseSetErrorText((KIO__FavIconRequestJob*)self, qstring(errorText));
}

void k_io__faviconrequestjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__FavIconRequestJob_OnSetErrorText((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__FavIconRequestJob_SetProcessedAmount((KIO__FavIconRequestJob*)self, unit, amount);
}

void k_io__faviconrequestjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__FavIconRequestJob_QBaseSetProcessedAmount((KIO__FavIconRequestJob*)self, unit, amount);
}

void k_io__faviconrequestjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__FavIconRequestJob_OnSetProcessedAmount((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__FavIconRequestJob_SetTotalAmount((KIO__FavIconRequestJob*)self, unit, amount);
}

void k_io__faviconrequestjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__FavIconRequestJob_QBaseSetTotalAmount((KIO__FavIconRequestJob*)self, unit, amount);
}

void k_io__faviconrequestjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__FavIconRequestJob_OnSetTotalAmount((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_set_progress_unit(void* self, int32_t unit) {
    KIO__FavIconRequestJob_SetProgressUnit((KIO__FavIconRequestJob*)self, unit);
}

void k_io__faviconrequestjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__FavIconRequestJob_QBaseSetProgressUnit((KIO__FavIconRequestJob*)self, unit);
}

void k_io__faviconrequestjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__FavIconRequestJob_OnSetProgressUnit((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_set_percent(void* self, uint64_t percentage) {
    KIO__FavIconRequestJob_SetPercent((KIO__FavIconRequestJob*)self, percentage);
}

void k_io__faviconrequestjob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__FavIconRequestJob_QBaseSetPercent((KIO__FavIconRequestJob*)self, percentage);
}

void k_io__faviconrequestjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__FavIconRequestJob_OnSetPercent((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_emit_result(void* self) {
    KIO__FavIconRequestJob_EmitResult((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_qbase_emit_result(void* self) {
    KIO__FavIconRequestJob_QBaseEmitResult((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_emit_result(void* self, void (*callback)()) {
    KIO__FavIconRequestJob_OnEmitResult((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__FavIconRequestJob_EmitPercent((KIO__FavIconRequestJob*)self, processedAmount, totalAmount);
}

void k_io__faviconrequestjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__FavIconRequestJob_QBaseEmitPercent((KIO__FavIconRequestJob*)self, processedAmount, totalAmount);
}

void k_io__faviconrequestjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__FavIconRequestJob_OnEmitPercent((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_emit_speed(void* self, uint64_t speed) {
    KIO__FavIconRequestJob_EmitSpeed((KIO__FavIconRequestJob*)self, speed);
}

void k_io__faviconrequestjob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__FavIconRequestJob_QBaseEmitSpeed((KIO__FavIconRequestJob*)self, speed);
}

void k_io__faviconrequestjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__FavIconRequestJob_OnEmitSpeed((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_start_elapsed_timer(void* self) {
    KIO__FavIconRequestJob_StartElapsedTimer((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_qbase_start_elapsed_timer(void* self) {
    KIO__FavIconRequestJob_QBaseStartElapsedTimer((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__FavIconRequestJob_OnStartElapsedTimer((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

QObject* k_io__faviconrequestjob_sender(void* self) {
    return KIO__FavIconRequestJob_Sender((KIO__FavIconRequestJob*)self);
}

QObject* k_io__faviconrequestjob_qbase_sender(void* self) {
    return KIO__FavIconRequestJob_QBaseSender((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_sender(void* self, QObject* (*callback)()) {
    KIO__FavIconRequestJob_OnSender((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

int32_t k_io__faviconrequestjob_sender_signal_index(void* self) {
    return KIO__FavIconRequestJob_SenderSignalIndex((KIO__FavIconRequestJob*)self);
}

int32_t k_io__faviconrequestjob_qbase_sender_signal_index(void* self) {
    return KIO__FavIconRequestJob_QBaseSenderSignalIndex((KIO__FavIconRequestJob*)self);
}

void k_io__faviconrequestjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__FavIconRequestJob_OnSenderSignalIndex((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

int32_t k_io__faviconrequestjob_receivers(void* self, const char* signal) {
    return KIO__FavIconRequestJob_Receivers((KIO__FavIconRequestJob*)self, signal);
}

int32_t k_io__faviconrequestjob_qbase_receivers(void* self, const char* signal) {
    return KIO__FavIconRequestJob_QBaseReceivers((KIO__FavIconRequestJob*)self, signal);
}

void k_io__faviconrequestjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__FavIconRequestJob_OnReceivers((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

bool k_io__faviconrequestjob_is_signal_connected(void* self, void* signal) {
    return KIO__FavIconRequestJob_IsSignalConnected((KIO__FavIconRequestJob*)self, (QMetaMethod*)signal);
}

bool k_io__faviconrequestjob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__FavIconRequestJob_QBaseIsSignalConnected((KIO__FavIconRequestJob*)self, (QMetaMethod*)signal);
}

void k_io__faviconrequestjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__FavIconRequestJob_OnIsSignalConnected((KIO__FavIconRequestJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__faviconrequestjob_delete(void* self) {
    KIO__FavIconRequestJob_Delete((KIO__FavIconRequestJob*)(self));
}
