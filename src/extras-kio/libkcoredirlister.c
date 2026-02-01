#include "libkfileitem.hpp"
#include "libjob_base.hpp"
#include "liblistjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libkcoredirlister.hpp"
#include "libkcoredirlister.h"

KCoreDirLister* k_coredirlister_new() {
    return KCoreDirLister_new();
}

KCoreDirLister* k_coredirlister_new2(void* parent) {
    return KCoreDirLister_new2((QObject*)parent);
}

const QMetaObject* k_coredirlister_meta_object(void* self) {
    return KCoreDirLister_MetaObject((KCoreDirLister*)self);
}

void k_coredirlister_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KCoreDirLister_OnMetaObject((KCoreDirLister*)self, (intptr_t)callback);
}

const QMetaObject* k_coredirlister_qbase_meta_object(void* self) {
    return KCoreDirLister_QBaseMetaObject((KCoreDirLister*)self);
}

void* k_coredirlister_metacast(void* self, const char* param1) {
    return KCoreDirLister_Metacast((KCoreDirLister*)self, param1);
}

void k_coredirlister_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KCoreDirLister_OnMetacast((KCoreDirLister*)self, (intptr_t)callback);
}

void* k_coredirlister_qbase_metacast(void* self, const char* param1) {
    return KCoreDirLister_QBaseMetacast((KCoreDirLister*)self, param1);
}

int32_t k_coredirlister_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCoreDirLister_Metacall((KCoreDirLister*)self, param1, param2, param3);
}

void k_coredirlister_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCoreDirLister_OnMetacall((KCoreDirLister*)self, (intptr_t)callback);
}

int32_t k_coredirlister_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCoreDirLister_QBaseMetacall((KCoreDirLister*)self, param1, param2, param3);
}

const char* k_coredirlister_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_coredirlister_open_url(void* self, void* dirUrl) {
    return KCoreDirLister_OpenUrl((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_coredirlister_stop(void* self) {
    KCoreDirLister_Stop((KCoreDirLister*)self);
}

void k_coredirlister_stop2(void* self, void* dirUrl) {
    KCoreDirLister_Stop2((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_coredirlister_forget_dirs(void* self, void* dirUrl) {
    KCoreDirLister_ForgetDirs((KCoreDirLister*)self, (QUrl*)dirUrl);
}

bool k_coredirlister_delayed_mime_types(void* self) {
    return KCoreDirLister_DelayedMimeTypes((KCoreDirLister*)self);
}

void k_coredirlister_set_delayed_mime_types(void* self, bool delayedMimeTypes) {
    KCoreDirLister_SetDelayedMimeTypes((KCoreDirLister*)self, delayedMimeTypes);
}

bool k_coredirlister_auto_update(void* self) {
    return KCoreDirLister_AutoUpdate((KCoreDirLister*)self);
}

void k_coredirlister_set_auto_update(void* self, bool enable) {
    KCoreDirLister_SetAutoUpdate((KCoreDirLister*)self, enable);
}

bool k_coredirlister_show_hidden_files(void* self) {
    return KCoreDirLister_ShowHiddenFiles((KCoreDirLister*)self);
}

void k_coredirlister_set_show_hidden_files(void* self, bool showHiddenFiles) {
    KCoreDirLister_SetShowHiddenFiles((KCoreDirLister*)self, showHiddenFiles);
}

bool k_coredirlister_dir_only_mode(void* self) {
    return KCoreDirLister_DirOnlyMode((KCoreDirLister*)self);
}

void k_coredirlister_set_dir_only_mode(void* self, bool dirsOnly) {
    KCoreDirLister_SetDirOnlyMode((KCoreDirLister*)self, dirsOnly);
}

bool k_coredirlister_request_mime_type_while_listing(void* self) {
    return KCoreDirLister_RequestMimeTypeWhileListing((KCoreDirLister*)self);
}

void k_coredirlister_set_request_mime_type_while_listing(void* self, bool request) {
    KCoreDirLister_SetRequestMimeTypeWhileListing((KCoreDirLister*)self, request);
}

QUrl* k_coredirlister_url(void* self) {
    return KCoreDirLister_Url((KCoreDirLister*)self);
}

libqt_list /* of QUrl* */ k_coredirlister_directories(void* self) {
    libqt_list _arr = KCoreDirLister_Directories((KCoreDirLister*)self);
    return _arr;
}

void k_coredirlister_emit_changes(void* self) {
    KCoreDirLister_EmitChanges((KCoreDirLister*)self);
}

void k_coredirlister_update_directory(void* self, void* dirUrl) {
    KCoreDirLister_UpdateDirectory((KCoreDirLister*)self, (QUrl*)dirUrl);
}

bool k_coredirlister_is_finished(void* self) {
    return KCoreDirLister_IsFinished((KCoreDirLister*)self);
}

KFileItem* k_coredirlister_root_item(void* self) {
    return KCoreDirLister_RootItem((KCoreDirLister*)self);
}

KFileItem* k_coredirlister_find_by_url(void* self, void* url) {
    return KCoreDirLister_FindByUrl((KCoreDirLister*)self, (QUrl*)url);
}

KFileItem* k_coredirlister_find_by_name(void* self, const char* name) {
    return KCoreDirLister_FindByName((KCoreDirLister*)self, qstring(name));
}

void k_coredirlister_set_name_filter(void* self, const char* filter) {
    KCoreDirLister_SetNameFilter((KCoreDirLister*)self, qstring(filter));
}

const char* k_coredirlister_name_filter(void* self) {
    libqt_string _str = KCoreDirLister_NameFilter((KCoreDirLister*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coredirlister_set_mime_filter(void* self, const char* mimeList[static 1]) {
    size_t mimeList_len = libqt_strv_length(mimeList);
    libqt_string* mimeList_qstr = (libqt_string*)malloc(mimeList_len * sizeof(libqt_string));
    if (mimeList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coredirlister_set_mime_filter\n");
        abort();
    }
    for (size_t i = 0; i < mimeList_len; ++i) {
        mimeList_qstr[i] = qstring(mimeList[i]);
    }
    libqt_list mimeList_list = qlist(mimeList_qstr, mimeList_len);
    KCoreDirLister_SetMimeFilter((KCoreDirLister*)self, mimeList_list);
    free(mimeList_qstr);
}

void k_coredirlister_set_mime_exclude_filter(void* self, const char* mimeList[static 1]) {
    size_t mimeList_len = libqt_strv_length(mimeList);
    libqt_string* mimeList_qstr = (libqt_string*)malloc(mimeList_len * sizeof(libqt_string));
    if (mimeList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coredirlister_set_mime_exclude_filter\n");
        abort();
    }
    for (size_t i = 0; i < mimeList_len; ++i) {
        mimeList_qstr[i] = qstring(mimeList[i]);
    }
    libqt_list mimeList_list = qlist(mimeList_qstr, mimeList_len);
    KCoreDirLister_SetMimeExcludeFilter((KCoreDirLister*)self, mimeList_list);
    free(mimeList_qstr);
}

void k_coredirlister_clear_mime_filter(void* self) {
    KCoreDirLister_ClearMimeFilter((KCoreDirLister*)self);
}

const char** k_coredirlister_mime_filters(void* self) {
    libqt_list _arr = KCoreDirLister_MimeFilters((KCoreDirLister*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coredirlister_mime_filters\n");
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

KFileItemList* k_coredirlister_items(void* self) {
    return KCoreDirLister_Items((KCoreDirLister*)self);
}

KFileItemList* k_coredirlister_items_for_dir(void* self, void* dirUrl) {
    return KCoreDirLister_ItemsForDir((KCoreDirLister*)self, (QUrl*)dirUrl);
}

KFileItem* k_coredirlister_cached_item_for_url(void* url) {
    return KCoreDirLister_CachedItemForUrl((QUrl*)url);
}

bool k_coredirlister_auto_error_handling_enabled(void* self) {
    return KCoreDirLister_AutoErrorHandlingEnabled((KCoreDirLister*)self);
}

void k_coredirlister_set_auto_error_handling_enabled(void* self, bool enable) {
    KCoreDirLister_SetAutoErrorHandlingEnabled((KCoreDirLister*)self, enable);
}

void k_coredirlister_started(void* self, void* dirUrl) {
    KCoreDirLister_Started((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_coredirlister_on_started(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_Started((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_completed(void* self) {
    KCoreDirLister_Completed((KCoreDirLister*)self);
}

void k_coredirlister_on_completed(void* self, void (*callback)(void*)) {
    KCoreDirLister_Connect_Completed((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_listing_dir_completed(void* self, void* dirUrl) {
    KCoreDirLister_ListingDirCompleted((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_coredirlister_on_listing_dir_completed(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ListingDirCompleted((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_canceled(void* self) {
    KCoreDirLister_Canceled((KCoreDirLister*)self);
}

void k_coredirlister_on_canceled(void* self, void (*callback)(void*)) {
    KCoreDirLister_Connect_Canceled((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_listing_dir_canceled(void* self, void* dirUrl) {
    KCoreDirLister_ListingDirCanceled((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_coredirlister_on_listing_dir_canceled(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ListingDirCanceled((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_redirection(void* self, void* oldUrl, void* newUrl) {
    KCoreDirLister_Redirection((KCoreDirLister*)self, (QUrl*)oldUrl, (QUrl*)newUrl);
}

void k_coredirlister_on_redirection(void* self, void (*callback)(void*, void*, void*)) {
    KCoreDirLister_Connect_Redirection((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_clear(void* self) {
    KCoreDirLister_Clear((KCoreDirLister*)self);
}

void k_coredirlister_on_clear(void* self, void (*callback)(void*)) {
    KCoreDirLister_Connect_Clear((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_clear_dir(void* self, void* dirUrl) {
    KCoreDirLister_ClearDir((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_coredirlister_on_clear_dir(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ClearDir((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_new_items(void* self, void* items) {
    KCoreDirLister_NewItems((KCoreDirLister*)self, (KFileItemList*)items);
}

void k_coredirlister_on_new_items(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_NewItems((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_items_added(void* self, void* directoryUrl, void* items) {
    KCoreDirLister_ItemsAdded((KCoreDirLister*)self, (QUrl*)directoryUrl, (KFileItemList*)items);
}

void k_coredirlister_on_items_added(void* self, void (*callback)(void*, void*, void*)) {
    KCoreDirLister_Connect_ItemsAdded((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_items_filtered_by_mime(void* self, void* items) {
    KCoreDirLister_ItemsFilteredByMime((KCoreDirLister*)self, (KFileItemList*)items);
}

void k_coredirlister_on_items_filtered_by_mime(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ItemsFilteredByMime((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_items_deleted(void* self, void* items) {
    KCoreDirLister_ItemsDeleted((KCoreDirLister*)self, (KFileItemList*)items);
}

void k_coredirlister_on_items_deleted(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ItemsDeleted((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_info_message(void* self, const char* msg) {
    KCoreDirLister_InfoMessage((KCoreDirLister*)self, qstring(msg));
}

void k_coredirlister_on_info_message(void* self, void (*callback)(void*, const char*)) {
    KCoreDirLister_Connect_InfoMessage((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_percent(void* self, int percent) {
    KCoreDirLister_Percent((KCoreDirLister*)self, percent);
}

void k_coredirlister_on_percent(void* self, void (*callback)(void*, int)) {
    KCoreDirLister_Connect_Percent((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_total_size(void* self, uint64_t size) {
    KCoreDirLister_TotalSize((KCoreDirLister*)self, size);
}

void k_coredirlister_on_total_size(void* self, void (*callback)(void*, uint64_t)) {
    KCoreDirLister_Connect_TotalSize((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_processed_size(void* self, uint64_t size) {
    KCoreDirLister_ProcessedSize((KCoreDirLister*)self, size);
}

void k_coredirlister_on_processed_size(void* self, void (*callback)(void*, uint64_t)) {
    KCoreDirLister_Connect_ProcessedSize((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_speed(void* self, int bytes_per_second) {
    KCoreDirLister_Speed((KCoreDirLister*)self, bytes_per_second);
}

void k_coredirlister_on_speed(void* self, void (*callback)(void*, int)) {
    KCoreDirLister_Connect_Speed((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_job_error(void* self, void* job) {
    KCoreDirLister_JobError((KCoreDirLister*)self, (KIO__Job*)job);
}

void k_coredirlister_on_job_error(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_JobError((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_job_started(void* self, void* param1) {
    KCoreDirLister_JobStarted((KCoreDirLister*)self, (KIO__ListJob*)param1);
}

void k_coredirlister_on_job_started(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_OnJobStarted((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_qbase_job_started(void* self, void* param1) {
    KCoreDirLister_QBaseJobStarted((KCoreDirLister*)self, (KIO__ListJob*)param1);
}

const char* k_coredirlister_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_coredirlister_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_coredirlister_open_url2(void* self, void* dirUrl, int32_t flags) {
    return KCoreDirLister_OpenUrl2((KCoreDirLister*)self, (QUrl*)dirUrl, flags);
}

KFileItemList* k_coredirlister_items1(void* self, int32_t which) {
    return KCoreDirLister_Items1((KCoreDirLister*)self, which);
}

KFileItemList* k_coredirlister_items_for_dir2(void* self, void* dirUrl, int32_t which) {
    return KCoreDirLister_ItemsForDir2((KCoreDirLister*)self, (QUrl*)dirUrl, which);
}

const char* k_coredirlister_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_coredirlister_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_coredirlister_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_coredirlister_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_coredirlister_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_coredirlister_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_coredirlister_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_coredirlister_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_coredirlister_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_coredirlister_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_coredirlister_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_coredirlister_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_coredirlister_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_coredirlister_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_coredirlister_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_coredirlister_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_coredirlister_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_coredirlister_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_coredirlister_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_coredirlister_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_coredirlister_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_coredirlister_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_coredirlister_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_coredirlister_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_coredirlister_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_coredirlister_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_coredirlister_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_coredirlister_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_coredirlister_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_coredirlister_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_coredirlister_dynamic_property_names\n");
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

QBindingStorage* k_coredirlister_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_coredirlister_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_coredirlister_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_coredirlister_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_coredirlister_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_coredirlister_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_coredirlister_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_coredirlister_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_coredirlister_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_coredirlister_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_coredirlister_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_coredirlister_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_coredirlister_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_coredirlister_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_coredirlister_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_coredirlister_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_coredirlister_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_coredirlister_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_coredirlister_event(void* self, void* event) {
    return KCoreDirLister_Event((KCoreDirLister*)self, (QEvent*)event);
}

bool k_coredirlister_qbase_event(void* self, void* event) {
    return KCoreDirLister_QBaseEvent((KCoreDirLister*)self, (QEvent*)event);
}

void k_coredirlister_on_event(void* self, bool (*callback)(void*, void*)) {
    KCoreDirLister_OnEvent((KCoreDirLister*)self, (intptr_t)callback);
}

bool k_coredirlister_event_filter(void* self, void* watched, void* event) {
    return KCoreDirLister_EventFilter((KCoreDirLister*)self, (QObject*)watched, (QEvent*)event);
}

bool k_coredirlister_qbase_event_filter(void* self, void* watched, void* event) {
    return KCoreDirLister_QBaseEventFilter((KCoreDirLister*)self, (QObject*)watched, (QEvent*)event);
}

void k_coredirlister_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCoreDirLister_OnEventFilter((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_timer_event(void* self, void* event) {
    KCoreDirLister_TimerEvent((KCoreDirLister*)self, (QTimerEvent*)event);
}

void k_coredirlister_qbase_timer_event(void* self, void* event) {
    KCoreDirLister_QBaseTimerEvent((KCoreDirLister*)self, (QTimerEvent*)event);
}

void k_coredirlister_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_OnTimerEvent((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_child_event(void* self, void* event) {
    KCoreDirLister_ChildEvent((KCoreDirLister*)self, (QChildEvent*)event);
}

void k_coredirlister_qbase_child_event(void* self, void* event) {
    KCoreDirLister_QBaseChildEvent((KCoreDirLister*)self, (QChildEvent*)event);
}

void k_coredirlister_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_OnChildEvent((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_custom_event(void* self, void* event) {
    KCoreDirLister_CustomEvent((KCoreDirLister*)self, (QEvent*)event);
}

void k_coredirlister_qbase_custom_event(void* self, void* event) {
    KCoreDirLister_QBaseCustomEvent((KCoreDirLister*)self, (QEvent*)event);
}

void k_coredirlister_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_OnCustomEvent((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_connect_notify(void* self, void* signal) {
    KCoreDirLister_ConnectNotify((KCoreDirLister*)self, (QMetaMethod*)signal);
}

void k_coredirlister_qbase_connect_notify(void* self, void* signal) {
    KCoreDirLister_QBaseConnectNotify((KCoreDirLister*)self, (QMetaMethod*)signal);
}

void k_coredirlister_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_OnConnectNotify((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_disconnect_notify(void* self, void* signal) {
    KCoreDirLister_DisconnectNotify((KCoreDirLister*)self, (QMetaMethod*)signal);
}

void k_coredirlister_qbase_disconnect_notify(void* self, void* signal) {
    KCoreDirLister_QBaseDisconnectNotify((KCoreDirLister*)self, (QMetaMethod*)signal);
}

void k_coredirlister_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_OnDisconnectNotify((KCoreDirLister*)self, (intptr_t)callback);
}

QObject* k_coredirlister_sender(void* self) {
    return KCoreDirLister_Sender((KCoreDirLister*)self);
}

QObject* k_coredirlister_qbase_sender(void* self) {
    return KCoreDirLister_QBaseSender((KCoreDirLister*)self);
}

void k_coredirlister_on_sender(void* self, QObject* (*callback)()) {
    KCoreDirLister_OnSender((KCoreDirLister*)self, (intptr_t)callback);
}

int32_t k_coredirlister_sender_signal_index(void* self) {
    return KCoreDirLister_SenderSignalIndex((KCoreDirLister*)self);
}

int32_t k_coredirlister_qbase_sender_signal_index(void* self) {
    return KCoreDirLister_QBaseSenderSignalIndex((KCoreDirLister*)self);
}

void k_coredirlister_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCoreDirLister_OnSenderSignalIndex((KCoreDirLister*)self, (intptr_t)callback);
}

int32_t k_coredirlister_receivers(void* self, const char* signal) {
    return KCoreDirLister_Receivers((KCoreDirLister*)self, signal);
}

int32_t k_coredirlister_qbase_receivers(void* self, const char* signal) {
    return KCoreDirLister_QBaseReceivers((KCoreDirLister*)self, signal);
}

void k_coredirlister_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCoreDirLister_OnReceivers((KCoreDirLister*)self, (intptr_t)callback);
}

bool k_coredirlister_is_signal_connected(void* self, void* signal) {
    return KCoreDirLister_IsSignalConnected((KCoreDirLister*)self, (QMetaMethod*)signal);
}

bool k_coredirlister_qbase_is_signal_connected(void* self, void* signal) {
    return KCoreDirLister_QBaseIsSignalConnected((KCoreDirLister*)self, (QMetaMethod*)signal);
}

void k_coredirlister_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCoreDirLister_OnIsSignalConnected((KCoreDirLister*)self, (intptr_t)callback);
}

void k_coredirlister_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_coredirlister_delete(void* self) {
    KCoreDirLister_Delete((KCoreDirLister*)(self));
}
