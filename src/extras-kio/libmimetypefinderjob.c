#include "../extras-kcoreaddons/libkcompositejob.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libmimetypefinderjob.hpp"
#include "libmimetypefinderjob.h"

KIO__MimeTypeFinderJob* k_io__mimetypefinderjob_new(void* url) {
    return KIO__MimeTypeFinderJob_new((QUrl*)url);
}

KIO__MimeTypeFinderJob* k_io__mimetypefinderjob_new2(void* url, void* parent) {
    return KIO__MimeTypeFinderJob_new2((QUrl*)url, (QObject*)parent);
}

const QMetaObject* k_io__mimetypefinderjob_meta_object(void* self) {
    return KIO__MimeTypeFinderJob_MetaObject((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KIO__MimeTypeFinderJob_OnMetaObject((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

const QMetaObject* k_io__mimetypefinderjob_qbase_meta_object(void* self) {
    return KIO__MimeTypeFinderJob_QBaseMetaObject((KIO__MimeTypeFinderJob*)self);
}

void* k_io__mimetypefinderjob_metacast(void* self, const char* param1) {
    return KIO__MimeTypeFinderJob_Metacast((KIO__MimeTypeFinderJob*)self, param1);
}

void k_io__mimetypefinderjob_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KIO__MimeTypeFinderJob_OnMetacast((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void* k_io__mimetypefinderjob_qbase_metacast(void* self, const char* param1) {
    return KIO__MimeTypeFinderJob_QBaseMetacast((KIO__MimeTypeFinderJob*)self, param1);
}

int32_t k_io__mimetypefinderjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__MimeTypeFinderJob_Metacall((KIO__MimeTypeFinderJob*)self, param1, param2, param3);
}

void k_io__mimetypefinderjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__MimeTypeFinderJob_OnMetacall((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

int32_t k_io__mimetypefinderjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__MimeTypeFinderJob_QBaseMetacall((KIO__MimeTypeFinderJob*)self, param1, param2, param3);
}

const char* k_io__mimetypefinderjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__mimetypefinderjob_set_follow_redirections(void* self, bool b) {
    KIO__MimeTypeFinderJob_SetFollowRedirections((KIO__MimeTypeFinderJob*)self, b);
}

void k_io__mimetypefinderjob_set_suggested_file_name(void* self, const char* suggestedFileName) {
    KIO__MimeTypeFinderJob_SetSuggestedFileName((KIO__MimeTypeFinderJob*)self, qstring(suggestedFileName));
}

const char* k_io__mimetypefinderjob_suggested_file_name(void* self) {
    libqt_string _str = KIO__MimeTypeFinderJob_SuggestedFileName((KIO__MimeTypeFinderJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__mimetypefinderjob_set_authentication_prompt_enabled(void* self, bool enable) {
    KIO__MimeTypeFinderJob_SetAuthenticationPromptEnabled((KIO__MimeTypeFinderJob*)self, enable);
}

bool k_io__mimetypefinderjob_is_authentication_prompt_enabled(void* self) {
    return KIO__MimeTypeFinderJob_IsAuthenticationPromptEnabled((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_start(void* self) {
    KIO__MimeTypeFinderJob_Start((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_start(void* self, void (*callback)()) {
    KIO__MimeTypeFinderJob_OnStart((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_qbase_start(void* self) {
    KIO__MimeTypeFinderJob_QBaseStart((KIO__MimeTypeFinderJob*)self);
}

const char* k_io__mimetypefinderjob_mime_type(void* self) {
    libqt_string _str = KIO__MimeTypeFinderJob_MimeType((KIO__MimeTypeFinderJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_io__mimetypefinderjob_do_kill(void* self) {
    return KIO__MimeTypeFinderJob_DoKill((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_do_kill(void* self, bool (*callback)()) {
    KIO__MimeTypeFinderJob_OnDoKill((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_qbase_do_kill(void* self) {
    return KIO__MimeTypeFinderJob_QBaseDoKill((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_slot_result(void* self, void* job) {
    KIO__MimeTypeFinderJob_SlotResult((KIO__MimeTypeFinderJob*)self, (KJob*)job);
}

void k_io__mimetypefinderjob_on_slot_result(void* self, void (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnSlotResult((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_qbase_slot_result(void* self, void* job) {
    KIO__MimeTypeFinderJob_QBaseSlotResult((KIO__MimeTypeFinderJob*)self, (KJob*)job);
}

const char* k_io__mimetypefinderjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__mimetypefinderjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__mimetypefinderjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__mimetypefinderjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__mimetypefinderjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__mimetypefinderjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__mimetypefinderjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__mimetypefinderjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__mimetypefinderjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__mimetypefinderjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__mimetypefinderjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__mimetypefinderjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__mimetypefinderjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__mimetypefinderjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__mimetypefinderjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__mimetypefinderjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__mimetypefinderjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__mimetypefinderjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__mimetypefinderjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__mimetypefinderjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__mimetypefinderjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__mimetypefinderjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__mimetypefinderjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__mimetypefinderjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__mimetypefinderjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__mimetypefinderjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__mimetypefinderjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__mimetypefinderjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_io__mimetypefinderjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__mimetypefinderjob_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__mimetypefinderjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__mimetypefinderjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__mimetypefinderjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__mimetypefinderjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__mimetypefinderjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__mimetypefinderjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__mimetypefinderjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__mimetypefinderjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__mimetypefinderjob_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__mimetypefinderjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__mimetypefinderjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__mimetypefinderjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__mimetypefinderjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__mimetypefinderjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__mimetypefinderjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__mimetypefinderjob_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_io__mimetypefinderjob_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__mimetypefinderjob_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__mimetypefinderjob_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_io__mimetypefinderjob_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__mimetypefinderjob_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_io__mimetypefinderjob_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_io__mimetypefinderjob_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_io__mimetypefinderjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__mimetypefinderjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__mimetypefinderjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__mimetypefinderjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__mimetypefinderjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__mimetypefinderjob_dynamic_property_names\n");
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

QBindingStorage* k_io__mimetypefinderjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__mimetypefinderjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__mimetypefinderjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__mimetypefinderjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__mimetypefinderjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__mimetypefinderjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__mimetypefinderjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_io__mimetypefinderjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__mimetypefinderjob_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__mimetypefinderjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_io__mimetypefinderjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__mimetypefinderjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_io__mimetypefinderjob_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_io__mimetypefinderjob_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_io__mimetypefinderjob_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_io__mimetypefinderjob_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_io__mimetypefinderjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__mimetypefinderjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_add_subjob(void* self, void* job) {
    return KIO__MimeTypeFinderJob_AddSubjob((KIO__MimeTypeFinderJob*)self, (KJob*)job);
}

bool k_io__mimetypefinderjob_qbase_add_subjob(void* self, void* job) {
    return KIO__MimeTypeFinderJob_QBaseAddSubjob((KIO__MimeTypeFinderJob*)self, (KJob*)job);
}

void k_io__mimetypefinderjob_on_add_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnAddSubjob((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_remove_subjob(void* self, void* job) {
    return KIO__MimeTypeFinderJob_RemoveSubjob((KIO__MimeTypeFinderJob*)self, (KJob*)job);
}

bool k_io__mimetypefinderjob_qbase_remove_subjob(void* self, void* job) {
    return KIO__MimeTypeFinderJob_QBaseRemoveSubjob((KIO__MimeTypeFinderJob*)self, (KJob*)job);
}

void k_io__mimetypefinderjob_on_remove_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnRemoveSubjob((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_slot_info_message(void* self, void* job, const char* message) {
    KIO__MimeTypeFinderJob_SlotInfoMessage((KIO__MimeTypeFinderJob*)self, (KJob*)job, qstring(message));
}

void k_io__mimetypefinderjob_qbase_slot_info_message(void* self, void* job, const char* message) {
    KIO__MimeTypeFinderJob_QBaseSlotInfoMessage((KIO__MimeTypeFinderJob*)self, (KJob*)job, qstring(message));
}

void k_io__mimetypefinderjob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KIO__MimeTypeFinderJob_OnSlotInfoMessage((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_do_suspend(void* self) {
    return KIO__MimeTypeFinderJob_DoSuspend((KIO__MimeTypeFinderJob*)self);
}

bool k_io__mimetypefinderjob_qbase_do_suspend(void* self) {
    return KIO__MimeTypeFinderJob_QBaseDoSuspend((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__MimeTypeFinderJob_OnDoSuspend((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_do_resume(void* self) {
    return KIO__MimeTypeFinderJob_DoResume((KIO__MimeTypeFinderJob*)self);
}

bool k_io__mimetypefinderjob_qbase_do_resume(void* self) {
    return KIO__MimeTypeFinderJob_QBaseDoResume((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_do_resume(void* self, bool (*callback)()) {
    KIO__MimeTypeFinderJob_OnDoResume((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

const char* k_io__mimetypefinderjob_error_string(void* self) {
    libqt_string _str = KIO__MimeTypeFinderJob_ErrorString((KIO__MimeTypeFinderJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__mimetypefinderjob_qbase_error_string(void* self) {
    libqt_string _str = KIO__MimeTypeFinderJob_QBaseErrorString((KIO__MimeTypeFinderJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__mimetypefinderjob_on_error_string(void* self, const char* (*callback)()) {
    KIO__MimeTypeFinderJob_OnErrorString((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_event(void* self, void* event) {
    return KIO__MimeTypeFinderJob_Event((KIO__MimeTypeFinderJob*)self, (QEvent*)event);
}

bool k_io__mimetypefinderjob_qbase_event(void* self, void* event) {
    return KIO__MimeTypeFinderJob_QBaseEvent((KIO__MimeTypeFinderJob*)self, (QEvent*)event);
}

void k_io__mimetypefinderjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnEvent((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_event_filter(void* self, void* watched, void* event) {
    return KIO__MimeTypeFinderJob_EventFilter((KIO__MimeTypeFinderJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__mimetypefinderjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__MimeTypeFinderJob_QBaseEventFilter((KIO__MimeTypeFinderJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__mimetypefinderjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__MimeTypeFinderJob_OnEventFilter((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_timer_event(void* self, void* event) {
    KIO__MimeTypeFinderJob_TimerEvent((KIO__MimeTypeFinderJob*)self, (QTimerEvent*)event);
}

void k_io__mimetypefinderjob_qbase_timer_event(void* self, void* event) {
    KIO__MimeTypeFinderJob_QBaseTimerEvent((KIO__MimeTypeFinderJob*)self, (QTimerEvent*)event);
}

void k_io__mimetypefinderjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnTimerEvent((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_child_event(void* self, void* event) {
    KIO__MimeTypeFinderJob_ChildEvent((KIO__MimeTypeFinderJob*)self, (QChildEvent*)event);
}

void k_io__mimetypefinderjob_qbase_child_event(void* self, void* event) {
    KIO__MimeTypeFinderJob_QBaseChildEvent((KIO__MimeTypeFinderJob*)self, (QChildEvent*)event);
}

void k_io__mimetypefinderjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnChildEvent((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_custom_event(void* self, void* event) {
    KIO__MimeTypeFinderJob_CustomEvent((KIO__MimeTypeFinderJob*)self, (QEvent*)event);
}

void k_io__mimetypefinderjob_qbase_custom_event(void* self, void* event) {
    KIO__MimeTypeFinderJob_QBaseCustomEvent((KIO__MimeTypeFinderJob*)self, (QEvent*)event);
}

void k_io__mimetypefinderjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnCustomEvent((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_connect_notify(void* self, void* signal) {
    KIO__MimeTypeFinderJob_ConnectNotify((KIO__MimeTypeFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__mimetypefinderjob_qbase_connect_notify(void* self, void* signal) {
    KIO__MimeTypeFinderJob_QBaseConnectNotify((KIO__MimeTypeFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__mimetypefinderjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnConnectNotify((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_disconnect_notify(void* self, void* signal) {
    KIO__MimeTypeFinderJob_DisconnectNotify((KIO__MimeTypeFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__mimetypefinderjob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__MimeTypeFinderJob_QBaseDisconnectNotify((KIO__MimeTypeFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__mimetypefinderjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnDisconnectNotify((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_has_subjobs(void* self) {
    return KIO__MimeTypeFinderJob_HasSubjobs((KIO__MimeTypeFinderJob*)self);
}

bool k_io__mimetypefinderjob_qbase_has_subjobs(void* self) {
    return KIO__MimeTypeFinderJob_QBaseHasSubjobs((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_has_subjobs(void* self, bool (*callback)()) {
    KIO__MimeTypeFinderJob_OnHasSubjobs((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

libqt_list /* of KJob* */ k_io__mimetypefinderjob_subjobs(void* self) {
    libqt_list _arr = KIO__MimeTypeFinderJob_Subjobs((KIO__MimeTypeFinderJob*)self);
    return _arr;
}

libqt_list /* of KJob* */ k_io__mimetypefinderjob_qbase_subjobs(void* self) {
    libqt_list _arr = KIO__MimeTypeFinderJob_QBaseSubjobs((KIO__MimeTypeFinderJob*)self);
    return _arr;
}

void k_io__mimetypefinderjob_on_subjobs(void* self, libqt_list /* of KJob* */ (*callback)()) {
    KIO__MimeTypeFinderJob_OnSubjobs((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_clear_subjobs(void* self) {
    KIO__MimeTypeFinderJob_ClearSubjobs((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_qbase_clear_subjobs(void* self) {
    KIO__MimeTypeFinderJob_QBaseClearSubjobs((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_clear_subjobs(void* self, void (*callback)()) {
    KIO__MimeTypeFinderJob_OnClearSubjobs((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_set_capabilities(void* self, int32_t capabilities) {
    KIO__MimeTypeFinderJob_SetCapabilities((KIO__MimeTypeFinderJob*)self, capabilities);
}

void k_io__mimetypefinderjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__MimeTypeFinderJob_QBaseSetCapabilities((KIO__MimeTypeFinderJob*)self, capabilities);
}

void k_io__mimetypefinderjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__MimeTypeFinderJob_OnSetCapabilities((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_is_finished(void* self) {
    return KIO__MimeTypeFinderJob_IsFinished((KIO__MimeTypeFinderJob*)self);
}

bool k_io__mimetypefinderjob_qbase_is_finished(void* self) {
    return KIO__MimeTypeFinderJob_QBaseIsFinished((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_is_finished(void* self, bool (*callback)()) {
    KIO__MimeTypeFinderJob_OnIsFinished((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_set_error(void* self, int errorCode) {
    KIO__MimeTypeFinderJob_SetError((KIO__MimeTypeFinderJob*)self, errorCode);
}

void k_io__mimetypefinderjob_qbase_set_error(void* self, int errorCode) {
    KIO__MimeTypeFinderJob_QBaseSetError((KIO__MimeTypeFinderJob*)self, errorCode);
}

void k_io__mimetypefinderjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__MimeTypeFinderJob_OnSetError((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_set_error_text(void* self, const char* errorText) {
    KIO__MimeTypeFinderJob_SetErrorText((KIO__MimeTypeFinderJob*)self, qstring(errorText));
}

void k_io__mimetypefinderjob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__MimeTypeFinderJob_QBaseSetErrorText((KIO__MimeTypeFinderJob*)self, qstring(errorText));
}

void k_io__mimetypefinderjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__MimeTypeFinderJob_OnSetErrorText((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__MimeTypeFinderJob_SetProcessedAmount((KIO__MimeTypeFinderJob*)self, unit, amount);
}

void k_io__mimetypefinderjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__MimeTypeFinderJob_QBaseSetProcessedAmount((KIO__MimeTypeFinderJob*)self, unit, amount);
}

void k_io__mimetypefinderjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__MimeTypeFinderJob_OnSetProcessedAmount((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__MimeTypeFinderJob_SetTotalAmount((KIO__MimeTypeFinderJob*)self, unit, amount);
}

void k_io__mimetypefinderjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__MimeTypeFinderJob_QBaseSetTotalAmount((KIO__MimeTypeFinderJob*)self, unit, amount);
}

void k_io__mimetypefinderjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__MimeTypeFinderJob_OnSetTotalAmount((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_set_progress_unit(void* self, int32_t unit) {
    KIO__MimeTypeFinderJob_SetProgressUnit((KIO__MimeTypeFinderJob*)self, unit);
}

void k_io__mimetypefinderjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__MimeTypeFinderJob_QBaseSetProgressUnit((KIO__MimeTypeFinderJob*)self, unit);
}

void k_io__mimetypefinderjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__MimeTypeFinderJob_OnSetProgressUnit((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_set_percent(void* self, uint64_t percentage) {
    KIO__MimeTypeFinderJob_SetPercent((KIO__MimeTypeFinderJob*)self, percentage);
}

void k_io__mimetypefinderjob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__MimeTypeFinderJob_QBaseSetPercent((KIO__MimeTypeFinderJob*)self, percentage);
}

void k_io__mimetypefinderjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__MimeTypeFinderJob_OnSetPercent((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_emit_result(void* self) {
    KIO__MimeTypeFinderJob_EmitResult((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_qbase_emit_result(void* self) {
    KIO__MimeTypeFinderJob_QBaseEmitResult((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_emit_result(void* self, void (*callback)()) {
    KIO__MimeTypeFinderJob_OnEmitResult((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__MimeTypeFinderJob_EmitPercent((KIO__MimeTypeFinderJob*)self, processedAmount, totalAmount);
}

void k_io__mimetypefinderjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__MimeTypeFinderJob_QBaseEmitPercent((KIO__MimeTypeFinderJob*)self, processedAmount, totalAmount);
}

void k_io__mimetypefinderjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__MimeTypeFinderJob_OnEmitPercent((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_emit_speed(void* self, uint64_t speed) {
    KIO__MimeTypeFinderJob_EmitSpeed((KIO__MimeTypeFinderJob*)self, speed);
}

void k_io__mimetypefinderjob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__MimeTypeFinderJob_QBaseEmitSpeed((KIO__MimeTypeFinderJob*)self, speed);
}

void k_io__mimetypefinderjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__MimeTypeFinderJob_OnEmitSpeed((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_start_elapsed_timer(void* self) {
    KIO__MimeTypeFinderJob_StartElapsedTimer((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_qbase_start_elapsed_timer(void* self) {
    KIO__MimeTypeFinderJob_QBaseStartElapsedTimer((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__MimeTypeFinderJob_OnStartElapsedTimer((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

QObject* k_io__mimetypefinderjob_sender(void* self) {
    return KIO__MimeTypeFinderJob_Sender((KIO__MimeTypeFinderJob*)self);
}

QObject* k_io__mimetypefinderjob_qbase_sender(void* self) {
    return KIO__MimeTypeFinderJob_QBaseSender((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_sender(void* self, QObject* (*callback)()) {
    KIO__MimeTypeFinderJob_OnSender((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

int32_t k_io__mimetypefinderjob_sender_signal_index(void* self) {
    return KIO__MimeTypeFinderJob_SenderSignalIndex((KIO__MimeTypeFinderJob*)self);
}

int32_t k_io__mimetypefinderjob_qbase_sender_signal_index(void* self) {
    return KIO__MimeTypeFinderJob_QBaseSenderSignalIndex((KIO__MimeTypeFinderJob*)self);
}

void k_io__mimetypefinderjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__MimeTypeFinderJob_OnSenderSignalIndex((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

int32_t k_io__mimetypefinderjob_receivers(void* self, const char* signal) {
    return KIO__MimeTypeFinderJob_Receivers((KIO__MimeTypeFinderJob*)self, signal);
}

int32_t k_io__mimetypefinderjob_qbase_receivers(void* self, const char* signal) {
    return KIO__MimeTypeFinderJob_QBaseReceivers((KIO__MimeTypeFinderJob*)self, signal);
}

void k_io__mimetypefinderjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__MimeTypeFinderJob_OnReceivers((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

bool k_io__mimetypefinderjob_is_signal_connected(void* self, void* signal) {
    return KIO__MimeTypeFinderJob_IsSignalConnected((KIO__MimeTypeFinderJob*)self, (QMetaMethod*)signal);
}

bool k_io__mimetypefinderjob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__MimeTypeFinderJob_QBaseIsSignalConnected((KIO__MimeTypeFinderJob*)self, (QMetaMethod*)signal);
}

void k_io__mimetypefinderjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__MimeTypeFinderJob_OnIsSignalConnected((KIO__MimeTypeFinderJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__mimetypefinderjob_delete(void* self) {
    KIO__MimeTypeFinderJob_Delete((KIO__MimeTypeFinderJob*)(self));
}
