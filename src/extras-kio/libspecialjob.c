#include "../extras-kcoreaddons/libkcompositejob.hpp"
#include "libjob_base.hpp"
#include "libmetadata.hpp"
#include "libsimplejob.hpp"
#include "libtransferjob.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libspecialjob.hpp"
#include "libspecialjob.h"

KIO__SpecialJob* k_io__specialjob_new(void* url) {
    return KIO__SpecialJob_new((QUrl*)url);
}

KIO__SpecialJob* k_io__specialjob_new2(void* url, const char* data) {
    return KIO__SpecialJob_new2((QUrl*)url, qstring(data));
}

const QMetaObject* k_io__specialjob_meta_object(void* self) {
    return KIO__SpecialJob_MetaObject((KIO__SpecialJob*)self);
}

void* k_io__specialjob_metacast(void* self, const char* param1) {
    return KIO__SpecialJob_Metacast((KIO__SpecialJob*)self, param1);
}

int32_t k_io__specialjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__SpecialJob_Metacall((KIO__SpecialJob*)self, param1, param2, param3);
}

void k_io__specialjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__SpecialJob_OnMetacall((KIO__SpecialJob*)self, (intptr_t)callback);
}

int32_t k_io__specialjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__SpecialJob_QBaseMetacall((KIO__SpecialJob*)self, param1, param2, param3);
}

const char* k_io__specialjob_tr(const char* s) {
    libqt_string _str = KIO__SpecialJob_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__specialjob_set_arguments(void* self, const char* data) {
    KIO__SpecialJob_SetArguments((KIO__SpecialJob*)self, qstring(data));
}

char* k_io__specialjob_arguments(void* self) {
    libqt_string _str = KIO__SpecialJob_Arguments((KIO__SpecialJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__specialjob_tr2(const char* s, const char* c) {
    libqt_string _str = KIO__SpecialJob_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__specialjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KIO__SpecialJob_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__specialjob_set_modification_time(void* self, void* mtime) {
    KIO__TransferJob_SetModificationTime((KIO__TransferJob*)self, (QDateTime*)mtime);
}

bool k_io__specialjob_is_error_page(void* self) {
    return KIO__TransferJob_IsErrorPage((KIO__TransferJob*)self);
}

void k_io__specialjob_set_async_data_enabled(void* self, bool enabled) {
    KIO__TransferJob_SetAsyncDataEnabled((KIO__TransferJob*)self, enabled);
}

void k_io__specialjob_send_async_data(void* self, const char* data) {
    KIO__TransferJob_SendAsyncData((KIO__TransferJob*)self, qstring(data));
}

const char* k_io__specialjob_mimetype(void* self) {
    libqt_string _str = KIO__TransferJob_Mimetype((KIO__TransferJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_io__specialjob_redirect_url(void* self) {
    return KIO__TransferJob_RedirectUrl((KIO__TransferJob*)self);
}

void k_io__specialjob_set_total_size(void* self, uint64_t bytes) {
    KIO__TransferJob_SetTotalSize((KIO__TransferJob*)self, bytes);
}

void k_io__specialjob_data(void* self, void* job, const char* data) {
    KIO__TransferJob_Data((KIO__TransferJob*)self, (KIO__Job*)job, qstring(data));
}

void k_io__specialjob_on_data(void* self, void (*callback)(void*, void*, const char*)) {
    KIO__TransferJob_Connect_Data((KIO__TransferJob*)self, (intptr_t)callback);
}

void k_io__specialjob_data_req(void* self, void* job, char* data) {
    KIO__TransferJob_DataReq((KIO__TransferJob*)self, (KIO__Job*)job, qstring(data));
}

void k_io__specialjob_on_data_req(void* self, void (*callback)(void*, void*, char*)) {
    KIO__TransferJob_Connect_DataReq((KIO__TransferJob*)self, (intptr_t)callback);
}

void k_io__specialjob_redirection(void* self, void* job, void* url) {
    KIO__TransferJob_Redirection((KIO__TransferJob*)self, (KIO__Job*)job, (QUrl*)url);
}

void k_io__specialjob_on_redirection(void* self, void (*callback)(void*, void*, void*)) {
    KIO__TransferJob_Connect_Redirection((KIO__TransferJob*)self, (intptr_t)callback);
}

void k_io__specialjob_permanent_redirection(void* self, void* job, void* fromUrl, void* toUrl) {
    KIO__TransferJob_PermanentRedirection((KIO__TransferJob*)self, (KIO__Job*)job, (QUrl*)fromUrl, (QUrl*)toUrl);
}

void k_io__specialjob_on_permanent_redirection(void* self, void (*callback)(void*, void*, void*, void*)) {
    KIO__TransferJob_Connect_PermanentRedirection((KIO__TransferJob*)self, (intptr_t)callback);
}

void k_io__specialjob_mime_type_found(void* self, void* job, const char* mimeType) {
    KIO__TransferJob_MimeTypeFound((KIO__TransferJob*)self, (KIO__Job*)job, qstring(mimeType));
}

void k_io__specialjob_on_mime_type_found(void* self, void (*callback)(void*, void*, const char*)) {
    KIO__TransferJob_Connect_MimeTypeFound((KIO__TransferJob*)self, (intptr_t)callback);
}

void k_io__specialjob_can_resume(void* self, void* job, uint64_t offset) {
    KIO__TransferJob_CanResume((KIO__TransferJob*)self, (KIO__Job*)job, offset);
}

void k_io__specialjob_on_can_resume(void* self, void (*callback)(void*, void*, uint64_t)) {
    KIO__TransferJob_Connect_CanResume((KIO__TransferJob*)self, (intptr_t)callback);
}

const QUrl* k_io__specialjob_url(void* self) {
    return KIO__SimpleJob_Url((KIO__SimpleJob*)self);
}

void k_io__specialjob_remove_on_hold() {
    KIO__SimpleJob_RemoveOnHold();
}

bool k_io__specialjob_is_redirection_handling_enabled(void* self) {
    return KIO__SimpleJob_IsRedirectionHandlingEnabled((KIO__SimpleJob*)self);
}

void k_io__specialjob_set_redirection_handling_enabled(void* self, bool handle) {
    KIO__SimpleJob_SetRedirectionHandlingEnabled((KIO__SimpleJob*)self, handle);
}

void k_io__specialjob_slot_error(void* self, int param1, const char* param2) {
    KIO__SimpleJob_SlotError((KIO__SimpleJob*)self, param1, qstring(param2));
}

KIO__JobUiDelegateExtension* k_io__specialjob_ui_delegate_extension(void* self) {
    return KIO__Job_UiDelegateExtension((KIO__Job*)self);
}

void k_io__specialjob_set_ui_delegate_extension(void* self, void* extension) {
    KIO__Job_SetUiDelegateExtension((KIO__Job*)self, (KIO__JobUiDelegateExtension*)extension);
}

const char** k_io__specialjob_detailed_error_strings(void* self) {
    libqt_list _arr = KIO__Job_DetailedErrorStrings((KIO__Job*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__specialjob_detailed_error_strings");
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

void k_io__specialjob_set_parent_job(void* self, void* parentJob) {
    KIO__Job_SetParentJob((KIO__Job*)self, (KIO__Job*)parentJob);
}

KIO__Job* k_io__specialjob_parent_job(void* self) {
    return KIO__Job_ParentJob((KIO__Job*)self);
}

void k_io__specialjob_set_meta_data(void* self, void* metaData) {
    KIO__Job_SetMetaData((KIO__Job*)self, (KIO__MetaData*)metaData);
}

void k_io__specialjob_add_meta_data(void* self, const char* key, const char* value) {
    KIO__Job_AddMetaData((KIO__Job*)self, qstring(key), qstring(value));
}

void k_io__specialjob_add_meta_data2(void* self, libqt_map /* of const char* to const char* */ values) {
    KIO__Job_AddMetaData2((KIO__Job*)self, values);
}

void k_io__specialjob_merge_meta_data(void* self, libqt_map /* of const char* to const char* */ values) {
    KIO__Job_MergeMetaData((KIO__Job*)self, values);
}

KIO__MetaData* k_io__specialjob_outgoing_meta_data(void* self) {
    return KIO__Job_OutgoingMetaData((KIO__Job*)self);
}

KIO__MetaData* k_io__specialjob_meta_data(void* self) {
    return KIO__Job_MetaData((KIO__Job*)self);
}

const char* k_io__specialjob_query_meta_data(void* self, const char* key) {
    libqt_string _str = KIO__Job_QueryMetaData((KIO__Job*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__specialjob_connected(void* self, void* job) {
    KIO__Job_Connected((KIO__Job*)self, (KIO__Job*)job);
}

void k_io__specialjob_on_connected(void* self, void (*callback)(void*, void*)) {
    KIO__Job_Connect_Connected((KIO__Job*)self, (intptr_t)callback);
}

const char** k_io__specialjob_detailed_error_strings1(void* self, void* reqUrl) {
    libqt_list _arr = KIO__Job_DetailedErrorStrings1((KIO__Job*)self, (QUrl*)reqUrl);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__specialjob_detailed_error_strings1");
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

const char** k_io__specialjob_detailed_error_strings2(void* self, void* reqUrl, int method) {
    libqt_list _arr = KIO__Job_DetailedErrorStrings2((KIO__Job*)self, (QUrl*)reqUrl, method);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__specialjob_detailed_error_strings2");
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

void k_io__specialjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__specialjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__specialjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__specialjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__specialjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__specialjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__specialjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__specialjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__specialjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__specialjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__specialjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__specialjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__specialjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__specialjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__specialjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__specialjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__specialjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__specialjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__specialjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__specialjob_description(void* self, void* job, const char* title) {
    KJob_Description((KJob*)self, (KJob*)job, qstring(title));
}

void k_io__specialjob_on_description(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Description((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__specialjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__specialjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__specialjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__specialjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__specialjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__specialjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

void k_io__specialjob_description3(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1) {
    KJob_Description3((KJob*)self, (KJob*)job, qstring(title), field1);
}

void k_io__specialjob_on_description3(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */)) {
    KJob_Connect_Description3((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_description4(void* self, void* job, const char* title, libqt_pair /* tuple of const char* and const char* */ field1, libqt_pair /* tuple of const char* and const char* */ field2) {
    KJob_Description4((KJob*)self, (KJob*)job, qstring(title), field1, field2);
}

void k_io__specialjob_on_description4(void* self, void (*callback)(void*, void*, const char*, libqt_pair /* tuple of const char* and const char* */, libqt_pair /* tuple of const char* and const char* */)) {
    KJob_Connect_Description4((KJob*)self, (intptr_t)callback);
}

const char* k_io__specialjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__specialjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__specialjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__specialjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__specialjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__specialjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__specialjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__specialjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__specialjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__specialjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__specialjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__specialjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__specialjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__specialjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__specialjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__specialjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__specialjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__specialjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__specialjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__specialjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__specialjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__specialjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__specialjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__specialjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__specialjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__specialjob_dynamic_property_names");
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

QBindingStorage* k_io__specialjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__specialjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__specialjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__specialjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__specialjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__specialjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__specialjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__specialjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__specialjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__specialjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_io__specialjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_io__specialjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__specialjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__specialjob_do_resume(void* self) {
    return KIO__SpecialJob_DoResume((KIO__SpecialJob*)self);
}

bool k_io__specialjob_qbase_do_resume(void* self) {
    return KIO__SpecialJob_QBaseDoResume((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_do_resume(void* self, bool (*callback)()) {
    KIO__SpecialJob_OnDoResume((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_slot_redirection(void* self, void* url) {
    KIO__SpecialJob_SlotRedirection((KIO__SpecialJob*)self, (QUrl*)url);
}

void k_io__specialjob_qbase_slot_redirection(void* self, void* url) {
    KIO__SpecialJob_QBaseSlotRedirection((KIO__SpecialJob*)self, (QUrl*)url);
}

void k_io__specialjob_on_slot_redirection(void* self, void (*callback)(void*, void*)) {
    KIO__SpecialJob_OnSlotRedirection((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_slot_finished(void* self) {
    KIO__SpecialJob_SlotFinished((KIO__SpecialJob*)self);
}

void k_io__specialjob_qbase_slot_finished(void* self) {
    KIO__SpecialJob_QBaseSlotFinished((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_slot_finished(void* self, void (*callback)()) {
    KIO__SpecialJob_OnSlotFinished((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_slot_data(void* self, const char* data) {
    KIO__SpecialJob_SlotData((KIO__SpecialJob*)self, qstring(data));
}

void k_io__specialjob_qbase_slot_data(void* self, const char* data) {
    KIO__SpecialJob_QBaseSlotData((KIO__SpecialJob*)self, qstring(data));
}

void k_io__specialjob_on_slot_data(void* self, void (*callback)(void*, const char*)) {
    KIO__SpecialJob_OnSlotData((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_slot_data_req(void* self) {
    KIO__SpecialJob_SlotDataReq((KIO__SpecialJob*)self);
}

void k_io__specialjob_qbase_slot_data_req(void* self) {
    KIO__SpecialJob_QBaseSlotDataReq((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_slot_data_req(void* self, void (*callback)()) {
    KIO__SpecialJob_OnSlotDataReq((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_slot_mimetype(void* self, const char* mimetype) {
    KIO__SpecialJob_SlotMimetype((KIO__SpecialJob*)self, qstring(mimetype));
}

void k_io__specialjob_qbase_slot_mimetype(void* self, const char* mimetype) {
    KIO__SpecialJob_QBaseSlotMimetype((KIO__SpecialJob*)self, qstring(mimetype));
}

void k_io__specialjob_on_slot_mimetype(void* self, void (*callback)(void*, const char*)) {
    KIO__SpecialJob_OnSlotMimetype((KIO__SpecialJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_do_suspend(void* self) {
    return KIO__SpecialJob_DoSuspend((KIO__SpecialJob*)self);
}

bool k_io__specialjob_qbase_do_suspend(void* self) {
    return KIO__SpecialJob_QBaseDoSuspend((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__SpecialJob_OnDoSuspend((KIO__SpecialJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_do_kill(void* self) {
    return KIO__SpecialJob_DoKill((KIO__SpecialJob*)self);
}

bool k_io__specialjob_qbase_do_kill(void* self) {
    return KIO__SpecialJob_QBaseDoKill((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_do_kill(void* self, bool (*callback)()) {
    KIO__SpecialJob_OnDoKill((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_put_on_hold(void* self) {
    KIO__SpecialJob_PutOnHold((KIO__SpecialJob*)self);
}

void k_io__specialjob_qbase_put_on_hold(void* self) {
    KIO__SpecialJob_QBasePutOnHold((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_put_on_hold(void* self, void (*callback)()) {
    KIO__SpecialJob_OnPutOnHold((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_slot_warning(void* self, const char* param1) {
    KIO__SpecialJob_SlotWarning((KIO__SpecialJob*)self, qstring(param1));
}

void k_io__specialjob_qbase_slot_warning(void* self, const char* param1) {
    KIO__SpecialJob_QBaseSlotWarning((KIO__SpecialJob*)self, qstring(param1));
}

void k_io__specialjob_on_slot_warning(void* self, void (*callback)(void*, const char*)) {
    KIO__SpecialJob_OnSlotWarning((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_slot_meta_data(void* self, void* _metaData) {
    KIO__SpecialJob_SlotMetaData((KIO__SpecialJob*)self, (KIO__MetaData*)_metaData);
}

void k_io__specialjob_qbase_slot_meta_data(void* self, void* _metaData) {
    KIO__SpecialJob_QBaseSlotMetaData((KIO__SpecialJob*)self, (KIO__MetaData*)_metaData);
}

void k_io__specialjob_on_slot_meta_data(void* self, void (*callback)(void*, void*)) {
    KIO__SpecialJob_OnSlotMetaData((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_start(void* self) {
    KIO__SpecialJob_Start((KIO__SpecialJob*)self);
}

void k_io__specialjob_qbase_start(void* self) {
    KIO__SpecialJob_QBaseStart((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_start(void* self, void (*callback)()) {
    KIO__SpecialJob_OnStart((KIO__SpecialJob*)self, (intptr_t)callback);
}

const char* k_io__specialjob_error_string(void* self) {
    libqt_string _str = KIO__SpecialJob_ErrorString((KIO__SpecialJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__specialjob_qbase_error_string(void* self) {
    libqt_string _str = KIO__SpecialJob_QBaseErrorString((KIO__SpecialJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__specialjob_on_error_string(void* self, const char* (*callback)()) {
    KIO__SpecialJob_OnErrorString((KIO__SpecialJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_add_subjob(void* self, void* job) {
    return KIO__SpecialJob_AddSubjob((KIO__SpecialJob*)self, (KJob*)job);
}

bool k_io__specialjob_qbase_add_subjob(void* self, void* job) {
    return KIO__SpecialJob_QBaseAddSubjob((KIO__SpecialJob*)self, (KJob*)job);
}

void k_io__specialjob_on_add_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__SpecialJob_OnAddSubjob((KIO__SpecialJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_remove_subjob(void* self, void* job) {
    return KIO__SpecialJob_RemoveSubjob((KIO__SpecialJob*)self, (KJob*)job);
}

bool k_io__specialjob_qbase_remove_subjob(void* self, void* job) {
    return KIO__SpecialJob_QBaseRemoveSubjob((KIO__SpecialJob*)self, (KJob*)job);
}

void k_io__specialjob_on_remove_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__SpecialJob_OnRemoveSubjob((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_slot_result(void* self, void* job) {
    KIO__SpecialJob_SlotResult((KIO__SpecialJob*)self, (KJob*)job);
}

void k_io__specialjob_qbase_slot_result(void* self, void* job) {
    KIO__SpecialJob_QBaseSlotResult((KIO__SpecialJob*)self, (KJob*)job);
}

void k_io__specialjob_on_slot_result(void* self, void (*callback)(void*, void*)) {
    KIO__SpecialJob_OnSlotResult((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_slot_info_message(void* self, void* job, const char* message) {
    KIO__SpecialJob_SlotInfoMessage((KIO__SpecialJob*)self, (KJob*)job, qstring(message));
}

void k_io__specialjob_qbase_slot_info_message(void* self, void* job, const char* message) {
    KIO__SpecialJob_QBaseSlotInfoMessage((KIO__SpecialJob*)self, (KJob*)job, qstring(message));
}

void k_io__specialjob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KIO__SpecialJob_OnSlotInfoMessage((KIO__SpecialJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_event(void* self, void* event) {
    return KIO__SpecialJob_Event((KIO__SpecialJob*)self, (QEvent*)event);
}

bool k_io__specialjob_qbase_event(void* self, void* event) {
    return KIO__SpecialJob_QBaseEvent((KIO__SpecialJob*)self, (QEvent*)event);
}

void k_io__specialjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__SpecialJob_OnEvent((KIO__SpecialJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_event_filter(void* self, void* watched, void* event) {
    return KIO__SpecialJob_EventFilter((KIO__SpecialJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__specialjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__SpecialJob_QBaseEventFilter((KIO__SpecialJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__specialjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__SpecialJob_OnEventFilter((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_timer_event(void* self, void* event) {
    KIO__SpecialJob_TimerEvent((KIO__SpecialJob*)self, (QTimerEvent*)event);
}

void k_io__specialjob_qbase_timer_event(void* self, void* event) {
    KIO__SpecialJob_QBaseTimerEvent((KIO__SpecialJob*)self, (QTimerEvent*)event);
}

void k_io__specialjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__SpecialJob_OnTimerEvent((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_child_event(void* self, void* event) {
    KIO__SpecialJob_ChildEvent((KIO__SpecialJob*)self, (QChildEvent*)event);
}

void k_io__specialjob_qbase_child_event(void* self, void* event) {
    KIO__SpecialJob_QBaseChildEvent((KIO__SpecialJob*)self, (QChildEvent*)event);
}

void k_io__specialjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__SpecialJob_OnChildEvent((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_custom_event(void* self, void* event) {
    KIO__SpecialJob_CustomEvent((KIO__SpecialJob*)self, (QEvent*)event);
}

void k_io__specialjob_qbase_custom_event(void* self, void* event) {
    KIO__SpecialJob_QBaseCustomEvent((KIO__SpecialJob*)self, (QEvent*)event);
}

void k_io__specialjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__SpecialJob_OnCustomEvent((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_connect_notify(void* self, void* signal) {
    KIO__SpecialJob_ConnectNotify((KIO__SpecialJob*)self, (QMetaMethod*)signal);
}

void k_io__specialjob_qbase_connect_notify(void* self, void* signal) {
    KIO__SpecialJob_QBaseConnectNotify((KIO__SpecialJob*)self, (QMetaMethod*)signal);
}

void k_io__specialjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__SpecialJob_OnConnectNotify((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_disconnect_notify(void* self, void* signal) {
    KIO__SpecialJob_DisconnectNotify((KIO__SpecialJob*)self, (QMetaMethod*)signal);
}

void k_io__specialjob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__SpecialJob_QBaseDisconnectNotify((KIO__SpecialJob*)self, (QMetaMethod*)signal);
}

void k_io__specialjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__SpecialJob_OnDisconnectNotify((KIO__SpecialJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_has_subjobs(void* self) {
    return KIO__SpecialJob_HasSubjobs((KIO__SpecialJob*)self);
}

bool k_io__specialjob_qbase_has_subjobs(void* self) {
    return KIO__SpecialJob_QBaseHasSubjobs((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_has_subjobs(void* self, bool (*callback)()) {
    KIO__SpecialJob_OnHasSubjobs((KIO__SpecialJob*)self, (intptr_t)callback);
}

libqt_list /* of KJob* */ k_io__specialjob_subjobs(void* self) {
    libqt_list _arr = KIO__SpecialJob_Subjobs((KIO__SpecialJob*)self);
    return _arr;
}

libqt_list /* of KJob* */ k_io__specialjob_qbase_subjobs(void* self) {
    libqt_list _arr = KIO__SpecialJob_QBaseSubjobs((KIO__SpecialJob*)self);
    return _arr;
}

void k_io__specialjob_on_subjobs(void* self, KJob** (*callback)()) {
    KIO__SpecialJob_OnSubjobs((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_clear_subjobs(void* self) {
    KIO__SpecialJob_ClearSubjobs((KIO__SpecialJob*)self);
}

void k_io__specialjob_qbase_clear_subjobs(void* self) {
    KIO__SpecialJob_QBaseClearSubjobs((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_clear_subjobs(void* self, void (*callback)()) {
    KIO__SpecialJob_OnClearSubjobs((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_set_capabilities(void* self, int32_t capabilities) {
    KIO__SpecialJob_SetCapabilities((KIO__SpecialJob*)self, capabilities);
}

void k_io__specialjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__SpecialJob_QBaseSetCapabilities((KIO__SpecialJob*)self, capabilities);
}

void k_io__specialjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__SpecialJob_OnSetCapabilities((KIO__SpecialJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_is_finished(void* self) {
    return KIO__SpecialJob_IsFinished((KIO__SpecialJob*)self);
}

bool k_io__specialjob_qbase_is_finished(void* self) {
    return KIO__SpecialJob_QBaseIsFinished((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_is_finished(void* self, bool (*callback)()) {
    KIO__SpecialJob_OnIsFinished((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_set_error(void* self, int errorCode) {
    KIO__SpecialJob_SetError((KIO__SpecialJob*)self, errorCode);
}

void k_io__specialjob_qbase_set_error(void* self, int errorCode) {
    KIO__SpecialJob_QBaseSetError((KIO__SpecialJob*)self, errorCode);
}

void k_io__specialjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__SpecialJob_OnSetError((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_set_error_text(void* self, const char* errorText) {
    KIO__SpecialJob_SetErrorText((KIO__SpecialJob*)self, qstring(errorText));
}

void k_io__specialjob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__SpecialJob_QBaseSetErrorText((KIO__SpecialJob*)self, qstring(errorText));
}

void k_io__specialjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__SpecialJob_OnSetErrorText((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__SpecialJob_SetProcessedAmount((KIO__SpecialJob*)self, unit, amount);
}

void k_io__specialjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__SpecialJob_QBaseSetProcessedAmount((KIO__SpecialJob*)self, unit, amount);
}

void k_io__specialjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__SpecialJob_OnSetProcessedAmount((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__SpecialJob_SetTotalAmount((KIO__SpecialJob*)self, unit, amount);
}

void k_io__specialjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__SpecialJob_QBaseSetTotalAmount((KIO__SpecialJob*)self, unit, amount);
}

void k_io__specialjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__SpecialJob_OnSetTotalAmount((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_set_progress_unit(void* self, int32_t unit) {
    KIO__SpecialJob_SetProgressUnit((KIO__SpecialJob*)self, unit);
}

void k_io__specialjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__SpecialJob_QBaseSetProgressUnit((KIO__SpecialJob*)self, unit);
}

void k_io__specialjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__SpecialJob_OnSetProgressUnit((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_set_percent(void* self, uint64_t percentage) {
    KIO__SpecialJob_SetPercent((KIO__SpecialJob*)self, percentage);
}

void k_io__specialjob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__SpecialJob_QBaseSetPercent((KIO__SpecialJob*)self, percentage);
}

void k_io__specialjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__SpecialJob_OnSetPercent((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_emit_result(void* self) {
    KIO__SpecialJob_EmitResult((KIO__SpecialJob*)self);
}

void k_io__specialjob_qbase_emit_result(void* self) {
    KIO__SpecialJob_QBaseEmitResult((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_emit_result(void* self, void (*callback)()) {
    KIO__SpecialJob_OnEmitResult((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__SpecialJob_EmitPercent((KIO__SpecialJob*)self, processedAmount, totalAmount);
}

void k_io__specialjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__SpecialJob_QBaseEmitPercent((KIO__SpecialJob*)self, processedAmount, totalAmount);
}

void k_io__specialjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__SpecialJob_OnEmitPercent((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_emit_speed(void* self, uint64_t speed) {
    KIO__SpecialJob_EmitSpeed((KIO__SpecialJob*)self, speed);
}

void k_io__specialjob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__SpecialJob_QBaseEmitSpeed((KIO__SpecialJob*)self, speed);
}

void k_io__specialjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__SpecialJob_OnEmitSpeed((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_start_elapsed_timer(void* self) {
    KIO__SpecialJob_StartElapsedTimer((KIO__SpecialJob*)self);
}

void k_io__specialjob_qbase_start_elapsed_timer(void* self) {
    KIO__SpecialJob_QBaseStartElapsedTimer((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__SpecialJob_OnStartElapsedTimer((KIO__SpecialJob*)self, (intptr_t)callback);
}

QObject* k_io__specialjob_sender(void* self) {
    return KIO__SpecialJob_Sender((KIO__SpecialJob*)self);
}

QObject* k_io__specialjob_qbase_sender(void* self) {
    return KIO__SpecialJob_QBaseSender((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_sender(void* self, QObject* (*callback)()) {
    KIO__SpecialJob_OnSender((KIO__SpecialJob*)self, (intptr_t)callback);
}

int32_t k_io__specialjob_sender_signal_index(void* self) {
    return KIO__SpecialJob_SenderSignalIndex((KIO__SpecialJob*)self);
}

int32_t k_io__specialjob_qbase_sender_signal_index(void* self) {
    return KIO__SpecialJob_QBaseSenderSignalIndex((KIO__SpecialJob*)self);
}

void k_io__specialjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__SpecialJob_OnSenderSignalIndex((KIO__SpecialJob*)self, (intptr_t)callback);
}

int32_t k_io__specialjob_receivers(void* self, const char* signal) {
    return KIO__SpecialJob_Receivers((KIO__SpecialJob*)self, signal);
}

int32_t k_io__specialjob_qbase_receivers(void* self, const char* signal) {
    return KIO__SpecialJob_QBaseReceivers((KIO__SpecialJob*)self, signal);
}

void k_io__specialjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__SpecialJob_OnReceivers((KIO__SpecialJob*)self, (intptr_t)callback);
}

bool k_io__specialjob_is_signal_connected(void* self, void* signal) {
    return KIO__SpecialJob_IsSignalConnected((KIO__SpecialJob*)self, (QMetaMethod*)signal);
}

bool k_io__specialjob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__SpecialJob_QBaseIsSignalConnected((KIO__SpecialJob*)self, (QMetaMethod*)signal);
}

void k_io__specialjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__SpecialJob_OnIsSignalConnected((KIO__SpecialJob*)self, (intptr_t)callback);
}

void k_io__specialjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__specialjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__specialjob_delete(void* self) {
    KIO__SpecialJob_Delete((KIO__SpecialJob*)(self));
}
