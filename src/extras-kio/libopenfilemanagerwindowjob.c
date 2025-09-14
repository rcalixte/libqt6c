#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libopenfilemanagerwindowjob.hpp"
#include "libopenfilemanagerwindowjob.h"

KIO__OpenFileManagerWindowJob* k_io__openfilemanagerwindowjob_new() {
    return KIO__OpenFileManagerWindowJob_new();
}

KIO__OpenFileManagerWindowJob* k_io__openfilemanagerwindowjob_new2(void* parent) {
    return KIO__OpenFileManagerWindowJob_new2((QObject*)parent);
}

const QMetaObject* k_io__openfilemanagerwindowjob_meta_object(void* self) {
    return KIO__OpenFileManagerWindowJob_MetaObject((KIO__OpenFileManagerWindowJob*)self);
}

void* k_io__openfilemanagerwindowjob_metacast(void* self, const char* param1) {
    return KIO__OpenFileManagerWindowJob_Metacast((KIO__OpenFileManagerWindowJob*)self, param1);
}

int32_t k_io__openfilemanagerwindowjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__OpenFileManagerWindowJob_Metacall((KIO__OpenFileManagerWindowJob*)self, param1, param2, param3);
}

void k_io__openfilemanagerwindowjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__OpenFileManagerWindowJob_OnMetacall((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

int32_t k_io__openfilemanagerwindowjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__OpenFileManagerWindowJob_QBaseMetacall((KIO__OpenFileManagerWindowJob*)self, param1, param2, param3);
}

const char* k_io__openfilemanagerwindowjob_tr(const char* s) {
    libqt_string _str = KIO__OpenFileManagerWindowJob_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QUrl* */ k_io__openfilemanagerwindowjob_highlight_urls(void* self) {
    libqt_list _arr = KIO__OpenFileManagerWindowJob_HighlightUrls((KIO__OpenFileManagerWindowJob*)self);
    return _arr;
}

void k_io__openfilemanagerwindowjob_set_highlight_urls(void* self, libqt_list highlightUrls) {
    KIO__OpenFileManagerWindowJob_SetHighlightUrls((KIO__OpenFileManagerWindowJob*)self, highlightUrls);
}

char* k_io__openfilemanagerwindowjob_startup_id(void* self) {
    libqt_string _str = KIO__OpenFileManagerWindowJob_StartupId((KIO__OpenFileManagerWindowJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__openfilemanagerwindowjob_set_startup_id(void* self, const char* startupId) {
    KIO__OpenFileManagerWindowJob_SetStartupId((KIO__OpenFileManagerWindowJob*)self, qstring(startupId));
}

void k_io__openfilemanagerwindowjob_start(void* self) {
    KIO__OpenFileManagerWindowJob_Start((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_on_start(void* self, void (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnStart((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_qbase_start(void* self) {
    KIO__OpenFileManagerWindowJob_QBaseStart((KIO__OpenFileManagerWindowJob*)self);
}

const char* k_io__openfilemanagerwindowjob_tr2(const char* s, const char* c) {
    libqt_string _str = KIO__OpenFileManagerWindowJob_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__openfilemanagerwindowjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KIO__OpenFileManagerWindowJob_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__openfilemanagerwindowjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__openfilemanagerwindowjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__openfilemanagerwindowjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__openfilemanagerwindowjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__openfilemanagerwindowjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__openfilemanagerwindowjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__openfilemanagerwindowjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__openfilemanagerwindowjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__openfilemanagerwindowjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__openfilemanagerwindowjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__openfilemanagerwindowjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__openfilemanagerwindowjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__openfilemanagerwindowjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__openfilemanagerwindowjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__openfilemanagerwindowjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__openfilemanagerwindowjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__openfilemanagerwindowjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__openfilemanagerwindowjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__openfilemanagerwindowjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__openfilemanagerwindowjob_description(void* self, void* job, const char* title) {
    KJob_Description((KJob*)self, (KJob*)job, qstring(title));
}

void k_io__openfilemanagerwindowjob_on_description(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Description((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__openfilemanagerwindowjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__openfilemanagerwindowjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__openfilemanagerwindowjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__openfilemanagerwindowjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__openfilemanagerwindowjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_io__openfilemanagerwindowjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__openfilemanagerwindowjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

void k_io__openfilemanagerwindowjob_description3(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1) {
    KJob_Description3((KJob*)self, (KJob*)job, qstring(title), field1);
}

void k_io__openfilemanagerwindowjob_on_description3(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */)) {
    KJob_Connect_Description3((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_description4(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KJob_Description4((KJob*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_io__openfilemanagerwindowjob_on_description4(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */)) {
    KJob_Connect_Description4((KJob*)self, (intptr_t)callback);
}

const char* k_io__openfilemanagerwindowjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__openfilemanagerwindowjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__openfilemanagerwindowjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__openfilemanagerwindowjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__openfilemanagerwindowjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__openfilemanagerwindowjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__openfilemanagerwindowjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__openfilemanagerwindowjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__openfilemanagerwindowjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__openfilemanagerwindowjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__openfilemanagerwindowjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__openfilemanagerwindowjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__openfilemanagerwindowjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__openfilemanagerwindowjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__openfilemanagerwindowjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__openfilemanagerwindowjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__openfilemanagerwindowjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__openfilemanagerwindowjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__openfilemanagerwindowjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__openfilemanagerwindowjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__openfilemanagerwindowjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__openfilemanagerwindowjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__openfilemanagerwindowjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__openfilemanagerwindowjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__openfilemanagerwindowjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__openfilemanagerwindowjob_dynamic_property_names");
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

QBindingStorage* k_io__openfilemanagerwindowjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__openfilemanagerwindowjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__openfilemanagerwindowjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__openfilemanagerwindowjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__openfilemanagerwindowjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__openfilemanagerwindowjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__openfilemanagerwindowjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__openfilemanagerwindowjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__openfilemanagerwindowjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__openfilemanagerwindowjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_io__openfilemanagerwindowjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_io__openfilemanagerwindowjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__openfilemanagerwindowjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__openfilemanagerwindowjob_do_kill(void* self) {
    return KIO__OpenFileManagerWindowJob_DoKill((KIO__OpenFileManagerWindowJob*)self);
}

bool k_io__openfilemanagerwindowjob_qbase_do_kill(void* self) {
    return KIO__OpenFileManagerWindowJob_QBaseDoKill((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_on_do_kill(void* self, bool (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnDoKill((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

bool k_io__openfilemanagerwindowjob_do_suspend(void* self) {
    return KIO__OpenFileManagerWindowJob_DoSuspend((KIO__OpenFileManagerWindowJob*)self);
}

bool k_io__openfilemanagerwindowjob_qbase_do_suspend(void* self) {
    return KIO__OpenFileManagerWindowJob_QBaseDoSuspend((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnDoSuspend((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

bool k_io__openfilemanagerwindowjob_do_resume(void* self) {
    return KIO__OpenFileManagerWindowJob_DoResume((KIO__OpenFileManagerWindowJob*)self);
}

bool k_io__openfilemanagerwindowjob_qbase_do_resume(void* self) {
    return KIO__OpenFileManagerWindowJob_QBaseDoResume((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_on_do_resume(void* self, bool (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnDoResume((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

const char* k_io__openfilemanagerwindowjob_error_string(void* self) {
    libqt_string _str = KIO__OpenFileManagerWindowJob_ErrorString((KIO__OpenFileManagerWindowJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__openfilemanagerwindowjob_qbase_error_string(void* self) {
    libqt_string _str = KIO__OpenFileManagerWindowJob_QBaseErrorString((KIO__OpenFileManagerWindowJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__openfilemanagerwindowjob_on_error_string(void* self, const char* (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnErrorString((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

bool k_io__openfilemanagerwindowjob_event(void* self, void* event) {
    return KIO__OpenFileManagerWindowJob_Event((KIO__OpenFileManagerWindowJob*)self, (QEvent*)event);
}

bool k_io__openfilemanagerwindowjob_qbase_event(void* self, void* event) {
    return KIO__OpenFileManagerWindowJob_QBaseEvent((KIO__OpenFileManagerWindowJob*)self, (QEvent*)event);
}

void k_io__openfilemanagerwindowjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__OpenFileManagerWindowJob_OnEvent((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

bool k_io__openfilemanagerwindowjob_event_filter(void* self, void* watched, void* event) {
    return KIO__OpenFileManagerWindowJob_EventFilter((KIO__OpenFileManagerWindowJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__openfilemanagerwindowjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__OpenFileManagerWindowJob_QBaseEventFilter((KIO__OpenFileManagerWindowJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__openfilemanagerwindowjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__OpenFileManagerWindowJob_OnEventFilter((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_timer_event(void* self, void* event) {
    KIO__OpenFileManagerWindowJob_TimerEvent((KIO__OpenFileManagerWindowJob*)self, (QTimerEvent*)event);
}

void k_io__openfilemanagerwindowjob_qbase_timer_event(void* self, void* event) {
    KIO__OpenFileManagerWindowJob_QBaseTimerEvent((KIO__OpenFileManagerWindowJob*)self, (QTimerEvent*)event);
}

void k_io__openfilemanagerwindowjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__OpenFileManagerWindowJob_OnTimerEvent((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_child_event(void* self, void* event) {
    KIO__OpenFileManagerWindowJob_ChildEvent((KIO__OpenFileManagerWindowJob*)self, (QChildEvent*)event);
}

void k_io__openfilemanagerwindowjob_qbase_child_event(void* self, void* event) {
    KIO__OpenFileManagerWindowJob_QBaseChildEvent((KIO__OpenFileManagerWindowJob*)self, (QChildEvent*)event);
}

void k_io__openfilemanagerwindowjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__OpenFileManagerWindowJob_OnChildEvent((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_custom_event(void* self, void* event) {
    KIO__OpenFileManagerWindowJob_CustomEvent((KIO__OpenFileManagerWindowJob*)self, (QEvent*)event);
}

void k_io__openfilemanagerwindowjob_qbase_custom_event(void* self, void* event) {
    KIO__OpenFileManagerWindowJob_QBaseCustomEvent((KIO__OpenFileManagerWindowJob*)self, (QEvent*)event);
}

void k_io__openfilemanagerwindowjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__OpenFileManagerWindowJob_OnCustomEvent((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_connect_notify(void* self, void* signal) {
    KIO__OpenFileManagerWindowJob_ConnectNotify((KIO__OpenFileManagerWindowJob*)self, (QMetaMethod*)signal);
}

void k_io__openfilemanagerwindowjob_qbase_connect_notify(void* self, void* signal) {
    KIO__OpenFileManagerWindowJob_QBaseConnectNotify((KIO__OpenFileManagerWindowJob*)self, (QMetaMethod*)signal);
}

void k_io__openfilemanagerwindowjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__OpenFileManagerWindowJob_OnConnectNotify((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_disconnect_notify(void* self, void* signal) {
    KIO__OpenFileManagerWindowJob_DisconnectNotify((KIO__OpenFileManagerWindowJob*)self, (QMetaMethod*)signal);
}

void k_io__openfilemanagerwindowjob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__OpenFileManagerWindowJob_QBaseDisconnectNotify((KIO__OpenFileManagerWindowJob*)self, (QMetaMethod*)signal);
}

void k_io__openfilemanagerwindowjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__OpenFileManagerWindowJob_OnDisconnectNotify((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_set_capabilities(void* self, int32_t capabilities) {
    KIO__OpenFileManagerWindowJob_SetCapabilities((KIO__OpenFileManagerWindowJob*)self, capabilities);
}

void k_io__openfilemanagerwindowjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__OpenFileManagerWindowJob_QBaseSetCapabilities((KIO__OpenFileManagerWindowJob*)self, capabilities);
}

void k_io__openfilemanagerwindowjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__OpenFileManagerWindowJob_OnSetCapabilities((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

bool k_io__openfilemanagerwindowjob_is_finished(void* self) {
    return KIO__OpenFileManagerWindowJob_IsFinished((KIO__OpenFileManagerWindowJob*)self);
}

bool k_io__openfilemanagerwindowjob_qbase_is_finished(void* self) {
    return KIO__OpenFileManagerWindowJob_QBaseIsFinished((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_on_is_finished(void* self, bool (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnIsFinished((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_set_error(void* self, int errorCode) {
    KIO__OpenFileManagerWindowJob_SetError((KIO__OpenFileManagerWindowJob*)self, errorCode);
}

void k_io__openfilemanagerwindowjob_qbase_set_error(void* self, int errorCode) {
    KIO__OpenFileManagerWindowJob_QBaseSetError((KIO__OpenFileManagerWindowJob*)self, errorCode);
}

void k_io__openfilemanagerwindowjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__OpenFileManagerWindowJob_OnSetError((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_set_error_text(void* self, const char* errorText) {
    KIO__OpenFileManagerWindowJob_SetErrorText((KIO__OpenFileManagerWindowJob*)self, qstring(errorText));
}

void k_io__openfilemanagerwindowjob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__OpenFileManagerWindowJob_QBaseSetErrorText((KIO__OpenFileManagerWindowJob*)self, qstring(errorText));
}

void k_io__openfilemanagerwindowjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__OpenFileManagerWindowJob_OnSetErrorText((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__OpenFileManagerWindowJob_SetProcessedAmount((KIO__OpenFileManagerWindowJob*)self, unit, amount);
}

void k_io__openfilemanagerwindowjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__OpenFileManagerWindowJob_QBaseSetProcessedAmount((KIO__OpenFileManagerWindowJob*)self, unit, amount);
}

void k_io__openfilemanagerwindowjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__OpenFileManagerWindowJob_OnSetProcessedAmount((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__OpenFileManagerWindowJob_SetTotalAmount((KIO__OpenFileManagerWindowJob*)self, unit, amount);
}

void k_io__openfilemanagerwindowjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__OpenFileManagerWindowJob_QBaseSetTotalAmount((KIO__OpenFileManagerWindowJob*)self, unit, amount);
}

void k_io__openfilemanagerwindowjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__OpenFileManagerWindowJob_OnSetTotalAmount((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_set_progress_unit(void* self, int32_t unit) {
    KIO__OpenFileManagerWindowJob_SetProgressUnit((KIO__OpenFileManagerWindowJob*)self, unit);
}

void k_io__openfilemanagerwindowjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__OpenFileManagerWindowJob_QBaseSetProgressUnit((KIO__OpenFileManagerWindowJob*)self, unit);
}

void k_io__openfilemanagerwindowjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__OpenFileManagerWindowJob_OnSetProgressUnit((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_set_percent(void* self, uint64_t percentage) {
    KIO__OpenFileManagerWindowJob_SetPercent((KIO__OpenFileManagerWindowJob*)self, percentage);
}

void k_io__openfilemanagerwindowjob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__OpenFileManagerWindowJob_QBaseSetPercent((KIO__OpenFileManagerWindowJob*)self, percentage);
}

void k_io__openfilemanagerwindowjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__OpenFileManagerWindowJob_OnSetPercent((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_emit_result(void* self) {
    KIO__OpenFileManagerWindowJob_EmitResult((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_qbase_emit_result(void* self) {
    KIO__OpenFileManagerWindowJob_QBaseEmitResult((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_on_emit_result(void* self, void (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnEmitResult((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__OpenFileManagerWindowJob_EmitPercent((KIO__OpenFileManagerWindowJob*)self, processedAmount, totalAmount);
}

void k_io__openfilemanagerwindowjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__OpenFileManagerWindowJob_QBaseEmitPercent((KIO__OpenFileManagerWindowJob*)self, processedAmount, totalAmount);
}

void k_io__openfilemanagerwindowjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__OpenFileManagerWindowJob_OnEmitPercent((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_emit_speed(void* self, uint64_t speed) {
    KIO__OpenFileManagerWindowJob_EmitSpeed((KIO__OpenFileManagerWindowJob*)self, speed);
}

void k_io__openfilemanagerwindowjob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__OpenFileManagerWindowJob_QBaseEmitSpeed((KIO__OpenFileManagerWindowJob*)self, speed);
}

void k_io__openfilemanagerwindowjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__OpenFileManagerWindowJob_OnEmitSpeed((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_start_elapsed_timer(void* self) {
    KIO__OpenFileManagerWindowJob_StartElapsedTimer((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_qbase_start_elapsed_timer(void* self) {
    KIO__OpenFileManagerWindowJob_QBaseStartElapsedTimer((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnStartElapsedTimer((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

QObject* k_io__openfilemanagerwindowjob_sender(void* self) {
    return KIO__OpenFileManagerWindowJob_Sender((KIO__OpenFileManagerWindowJob*)self);
}

QObject* k_io__openfilemanagerwindowjob_qbase_sender(void* self) {
    return KIO__OpenFileManagerWindowJob_QBaseSender((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_on_sender(void* self, QObject* (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnSender((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

int32_t k_io__openfilemanagerwindowjob_sender_signal_index(void* self) {
    return KIO__OpenFileManagerWindowJob_SenderSignalIndex((KIO__OpenFileManagerWindowJob*)self);
}

int32_t k_io__openfilemanagerwindowjob_qbase_sender_signal_index(void* self) {
    return KIO__OpenFileManagerWindowJob_QBaseSenderSignalIndex((KIO__OpenFileManagerWindowJob*)self);
}

void k_io__openfilemanagerwindowjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__OpenFileManagerWindowJob_OnSenderSignalIndex((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

int32_t k_io__openfilemanagerwindowjob_receivers(void* self, const char* signal) {
    return KIO__OpenFileManagerWindowJob_Receivers((KIO__OpenFileManagerWindowJob*)self, signal);
}

int32_t k_io__openfilemanagerwindowjob_qbase_receivers(void* self, const char* signal) {
    return KIO__OpenFileManagerWindowJob_QBaseReceivers((KIO__OpenFileManagerWindowJob*)self, signal);
}

void k_io__openfilemanagerwindowjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__OpenFileManagerWindowJob_OnReceivers((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

bool k_io__openfilemanagerwindowjob_is_signal_connected(void* self, void* signal) {
    return KIO__OpenFileManagerWindowJob_IsSignalConnected((KIO__OpenFileManagerWindowJob*)self, (QMetaMethod*)signal);
}

bool k_io__openfilemanagerwindowjob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__OpenFileManagerWindowJob_QBaseIsSignalConnected((KIO__OpenFileManagerWindowJob*)self, (QMetaMethod*)signal);
}

void k_io__openfilemanagerwindowjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__OpenFileManagerWindowJob_OnIsSignalConnected((KIO__OpenFileManagerWindowJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__openfilemanagerwindowjob_delete(void* self) {
    KIO__OpenFileManagerWindowJob_Delete((KIO__OpenFileManagerWindowJob*)(self));
}

KIO__OpenFileManagerWindowJob* k_io_highlight_in_file_manager(libqt_list param1, const char* param2) {
    return KIO_HighlightInFileManager(param1, qstring(param2));
}
