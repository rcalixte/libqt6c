#include "../extras-kcoreaddons/libkcompositejob.hpp"
#include "libjob_base.hpp"
#include "libsimplejob.hpp"
#include "libudsentry.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "liblistjob.hpp"
#include "liblistjob.h"

const QMetaObject* k_io__listjob_meta_object(void* self) {
    return KIO__ListJob_MetaObject((KIO__ListJob*)self);
}

void* k_io__listjob_metacast(void* self, const char* param1) {
    return KIO__ListJob_Metacast((KIO__ListJob*)self, param1);
}

int32_t k_io__listjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__ListJob_Metacall((KIO__ListJob*)self, param1, param2, param3);
}

const char* k_io__listjob_tr(const char* s) {
    libqt_string _str = KIO__ListJob_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const QUrl* k_io__listjob_redirection_url(void* self) {
    return KIO__ListJob_RedirectionUrl((KIO__ListJob*)self);
}

void k_io__listjob_set_unrestricted(void* self, bool unrestricted) {
    KIO__ListJob_SetUnrestricted((KIO__ListJob*)self, unrestricted);
}

void k_io__listjob_entries(void* self, void* job, libqt_list list) {
    KIO__ListJob_Entries((KIO__ListJob*)self, (KIO__Job*)job, list);
}

void k_io__listjob_on_entries(void* self, void (*callback)(void*, void*, KIO__UDSEntry**)) {
    KIO__ListJob_Connect_Entries((KIO__ListJob*)self, (intptr_t)callback);
}

void k_io__listjob_sub_error(void* self, void* job, void* subJob) {
    KIO__ListJob_SubError((KIO__ListJob*)self, (KIO__ListJob*)job, (KIO__ListJob*)subJob);
}

void k_io__listjob_on_sub_error(void* self, void (*callback)(void*, void*, void*)) {
    KIO__ListJob_Connect_SubError((KIO__ListJob*)self, (intptr_t)callback);
}

void k_io__listjob_redirection(void* self, void* job, void* url) {
    KIO__ListJob_Redirection((KIO__ListJob*)self, (KIO__Job*)job, (QUrl*)url);
}

void k_io__listjob_on_redirection(void* self, void (*callback)(void*, void*, void*)) {
    KIO__ListJob_Connect_Redirection((KIO__ListJob*)self, (intptr_t)callback);
}

void k_io__listjob_permanent_redirection(void* self, void* job, void* fromUrl, void* toUrl) {
    KIO__ListJob_PermanentRedirection((KIO__ListJob*)self, (KIO__Job*)job, (QUrl*)fromUrl, (QUrl*)toUrl);
}

void k_io__listjob_on_permanent_redirection(void* self, void (*callback)(void*, void*, void*, void*)) {
    KIO__ListJob_Connect_PermanentRedirection((KIO__ListJob*)self, (intptr_t)callback);
}

const char* k_io__listjob_tr2(const char* s, const char* c) {
    libqt_string _str = KIO__ListJob_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__listjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KIO__ListJob_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const QUrl* k_io__listjob_url(void* self) {
    return KIO__SimpleJob_Url((KIO__SimpleJob*)self);
}

void k_io__listjob_put_on_hold(void* self) {
    KIO__SimpleJob_PutOnHold((KIO__SimpleJob*)self);
}

void k_io__listjob_remove_on_hold() {
    KIO__SimpleJob_RemoveOnHold();
}

bool k_io__listjob_is_redirection_handling_enabled(void* self) {
    return KIO__SimpleJob_IsRedirectionHandlingEnabled((KIO__SimpleJob*)self);
}

void k_io__listjob_set_redirection_handling_enabled(void* self, bool handle) {
    KIO__SimpleJob_SetRedirectionHandlingEnabled((KIO__SimpleJob*)self, handle);
}

void k_io__listjob_slot_error(void* self, int param1, const char* param2) {
    KIO__SimpleJob_SlotError((KIO__SimpleJob*)self, param1, qstring(param2));
}

void k_io__listjob_start(void* self) {
    KIO__Job_Start((KIO__Job*)self);
}

KIO__JobUiDelegateExtension* k_io__listjob_ui_delegate_extension(void* self) {
    return KIO__Job_UiDelegateExtension((KIO__Job*)self);
}

void k_io__listjob_set_ui_delegate_extension(void* self, void* extension) {
    KIO__Job_SetUiDelegateExtension((KIO__Job*)self, (KIO__JobUiDelegateExtension*)extension);
}

const char* k_io__listjob_error_string(void* self) {
    libqt_string _str = KIO__Job_ErrorString((KIO__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_io__listjob_detailed_error_strings(void* self) {
    libqt_list _arr = KIO__Job_DetailedErrorStrings((KIO__Job*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__listjob_detailed_error_strings");
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

void k_io__listjob_set_parent_job(void* self, void* parentJob) {
    KIO__Job_SetParentJob((KIO__Job*)self, (KIO__Job*)parentJob);
}

KIO__Job* k_io__listjob_parent_job(void* self) {
    return KIO__Job_ParentJob((KIO__Job*)self);
}

void k_io__listjob_set_meta_data(void* self, void* metaData) {
    KIO__Job_SetMetaData((KIO__Job*)self, (KIO__MetaData*)metaData);
}

void k_io__listjob_add_meta_data(void* self, const char* key, const char* value) {
    KIO__Job_AddMetaData((KIO__Job*)self, qstring(key), qstring(value));
}

void k_io__listjob_add_meta_data2(void* self, libqt_map /* of const char* to const char* */ values) {
    KIO__Job_AddMetaData2((KIO__Job*)self, values);
}

void k_io__listjob_merge_meta_data(void* self, libqt_map /* of const char* to const char* */ values) {
    KIO__Job_MergeMetaData((KIO__Job*)self, values);
}

KIO__MetaData* k_io__listjob_outgoing_meta_data(void* self) {
    return KIO__Job_OutgoingMetaData((KIO__Job*)self);
}

KIO__MetaData* k_io__listjob_meta_data(void* self) {
    return KIO__Job_MetaData((KIO__Job*)self);
}

const char* k_io__listjob_query_meta_data(void* self, const char* key) {
    libqt_string _str = KIO__Job_QueryMetaData((KIO__Job*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__listjob_connected(void* self, void* job) {
    KIO__Job_Connected((KIO__Job*)self, (KIO__Job*)job);
}

void k_io__listjob_on_connected(void* self, void (*callback)(void*, void*)) {
    KIO__Job_Connect_Connected((KIO__Job*)self, (intptr_t)callback);
}

const char** k_io__listjob_detailed_error_strings1(void* self, void* reqUrl) {
    libqt_list _arr = KIO__Job_DetailedErrorStrings1((KIO__Job*)self, (QUrl*)reqUrl);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__listjob_detailed_error_strings1");
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

const char** k_io__listjob_detailed_error_strings2(void* self, void* reqUrl, int method) {
    libqt_list _arr = KIO__Job_DetailedErrorStrings2((KIO__Job*)self, (QUrl*)reqUrl, method);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__listjob_detailed_error_strings2");
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

void k_io__listjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__listjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__listjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__listjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__listjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__listjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__listjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__listjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__listjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__listjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__listjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__listjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__listjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__listjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__listjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__listjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__listjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__listjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__listjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__listjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__listjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__listjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__listjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__listjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__listjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_io__listjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__listjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

bool k_io__listjob_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_io__listjob_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_io__listjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__listjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__listjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__listjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__listjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__listjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__listjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__listjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__listjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__listjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__listjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__listjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__listjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__listjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__listjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__listjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__listjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__listjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__listjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__listjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__listjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__listjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__listjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__listjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__listjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__listjob_dynamic_property_names");
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

QBindingStorage* k_io__listjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__listjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__listjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__listjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__listjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__listjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__listjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__listjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__listjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__listjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__listjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__listjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__listjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_io__listjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__listjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__listjob_delete(void* self) {
    KIO__ListJob_Delete((KIO__ListJob*)(self));
}

KIO__ListJob* k_io_list_dir(void* param1, int32_t param2, int32_t param3) {
    return KIO_ListDir((QUrl*)param1, param2, param3);
}

KIO__ListJob* k_io_list_recursive(void* param1, int32_t param2, int32_t param3) {
    return KIO_ListRecursive((QUrl*)param1, param2, param3);
}
