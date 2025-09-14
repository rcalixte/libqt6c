#include "libkcoredirlister.hpp"
#include "liblistjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkdirlister.hpp"
#include "libkdirlister.h"

KDirLister* k_dirlister_new() {
    return KDirLister_new();
}

KDirLister* k_dirlister_new2(void* parent) {
    return KDirLister_new2((QObject*)parent);
}

const QMetaObject* k_dirlister_meta_object(void* self) {
    return KDirLister_MetaObject((KDirLister*)self);
}

void* k_dirlister_metacast(void* self, const char* param1) {
    return KDirLister_Metacast((KDirLister*)self, param1);
}

int32_t k_dirlister_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirLister_Metacall((KDirLister*)self, param1, param2, param3);
}

void k_dirlister_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDirLister_OnMetacall((KDirLister*)self, (intptr_t)callback);
}

int32_t k_dirlister_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirLister_QBaseMetacall((KDirLister*)self, param1, param2, param3);
}

const char* k_dirlister_tr(const char* s) {
    libqt_string _str = KDirLister_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_dirlister_auto_error_handling_enabled(void* self) {
    return KDirLister_AutoErrorHandlingEnabled((KDirLister*)self);
}

void k_dirlister_set_main_window(void* self, void* window) {
    KDirLister_SetMainWindow((KDirLister*)self, (QWidget*)window);
}

QWidget* k_dirlister_main_window(void* self) {
    return KDirLister_MainWindow((KDirLister*)self);
}

void k_dirlister_job_started(void* self, void* param1) {
    KDirLister_JobStarted((KDirLister*)self, (KIO__ListJob*)param1);
}

void k_dirlister_on_job_started(void* self, void (*callback)(void*, void*)) {
    KDirLister_OnJobStarted((KDirLister*)self, (intptr_t)callback);
}

void k_dirlister_qbase_job_started(void* self, void* param1) {
    KDirLister_QBaseJobStarted((KDirLister*)self, (KIO__ListJob*)param1);
}

const char* k_dirlister_tr2(const char* s, const char* c) {
    libqt_string _str = KDirLister_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_dirlister_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KDirLister_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_dirlister_open_url(void* self, void* dirUrl) {
    return KCoreDirLister_OpenUrl((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_dirlister_stop(void* self) {
    KCoreDirLister_Stop((KCoreDirLister*)self);
}

void k_dirlister_stop2(void* self, void* dirUrl) {
    KCoreDirLister_Stop2((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_dirlister_forget_dirs(void* self, void* dirUrl) {
    KCoreDirLister_ForgetDirs((KCoreDirLister*)self, (QUrl*)dirUrl);
}

bool k_dirlister_delayed_mime_types(void* self) {
    return KCoreDirLister_DelayedMimeTypes((KCoreDirLister*)self);
}

void k_dirlister_set_delayed_mime_types(void* self, bool delayedMimeTypes) {
    KCoreDirLister_SetDelayedMimeTypes((KCoreDirLister*)self, delayedMimeTypes);
}

bool k_dirlister_auto_update(void* self) {
    return KCoreDirLister_AutoUpdate((KCoreDirLister*)self);
}

void k_dirlister_set_auto_update(void* self, bool enable) {
    KCoreDirLister_SetAutoUpdate((KCoreDirLister*)self, enable);
}

bool k_dirlister_show_hidden_files(void* self) {
    return KCoreDirLister_ShowHiddenFiles((KCoreDirLister*)self);
}

void k_dirlister_set_show_hidden_files(void* self, bool showHiddenFiles) {
    KCoreDirLister_SetShowHiddenFiles((KCoreDirLister*)self, showHiddenFiles);
}

bool k_dirlister_dir_only_mode(void* self) {
    return KCoreDirLister_DirOnlyMode((KCoreDirLister*)self);
}

void k_dirlister_set_dir_only_mode(void* self, bool dirsOnly) {
    KCoreDirLister_SetDirOnlyMode((KCoreDirLister*)self, dirsOnly);
}

bool k_dirlister_request_mime_type_while_listing(void* self) {
    return KCoreDirLister_RequestMimeTypeWhileListing((KCoreDirLister*)self);
}

void k_dirlister_set_request_mime_type_while_listing(void* self, bool request) {
    KCoreDirLister_SetRequestMimeTypeWhileListing((KCoreDirLister*)self, request);
}

QUrl* k_dirlister_url(void* self) {
    return KCoreDirLister_Url((KCoreDirLister*)self);
}

libqt_list /* of QUrl* */ k_dirlister_directories(void* self) {
    libqt_list _arr = KCoreDirLister_Directories((KCoreDirLister*)self);
    return _arr;
}

void k_dirlister_emit_changes(void* self) {
    KCoreDirLister_EmitChanges((KCoreDirLister*)self);
}

void k_dirlister_update_directory(void* self, void* dirUrl) {
    KCoreDirLister_UpdateDirectory((KCoreDirLister*)self, (QUrl*)dirUrl);
}

bool k_dirlister_is_finished(void* self) {
    return KCoreDirLister_IsFinished((KCoreDirLister*)self);
}

KFileItem* k_dirlister_root_item(void* self) {
    return KCoreDirLister_RootItem((KCoreDirLister*)self);
}

KFileItem* k_dirlister_find_by_url(void* self, void* url) {
    return KCoreDirLister_FindByUrl((KCoreDirLister*)self, (QUrl*)url);
}

KFileItem* k_dirlister_find_by_name(void* self, const char* name) {
    return KCoreDirLister_FindByName((KCoreDirLister*)self, qstring(name));
}

void k_dirlister_set_name_filter(void* self, const char* filter) {
    KCoreDirLister_SetNameFilter((KCoreDirLister*)self, qstring(filter));
}

const char* k_dirlister_name_filter(void* self) {
    libqt_string _str = KCoreDirLister_NameFilter((KCoreDirLister*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dirlister_set_mime_filter(void* self, const char* mimeList[]) {
    size_t mimeList_len = libqt_strv_length(mimeList);
    libqt_string* mimeList_qstr = (libqt_string*)malloc(mimeList_len * sizeof(libqt_string));
    if (mimeList_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirlister_set_mime_filter");
        abort();
    }
    for (size_t i = 0; i < mimeList_len; ++i) {
        mimeList_qstr[i] = qstring(mimeList[i]);
    }
    libqt_list mimeList_list = qlist(mimeList_qstr, mimeList_len);
    KCoreDirLister_SetMimeFilter((KCoreDirLister*)self, mimeList_list);
    free(mimeList_qstr);
}

void k_dirlister_set_mime_exclude_filter(void* self, const char* mimeList[]) {
    size_t mimeList_len = libqt_strv_length(mimeList);
    libqt_string* mimeList_qstr = (libqt_string*)malloc(mimeList_len * sizeof(libqt_string));
    if (mimeList_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirlister_set_mime_exclude_filter");
        abort();
    }
    for (size_t i = 0; i < mimeList_len; ++i) {
        mimeList_qstr[i] = qstring(mimeList[i]);
    }
    libqt_list mimeList_list = qlist(mimeList_qstr, mimeList_len);
    KCoreDirLister_SetMimeExcludeFilter((KCoreDirLister*)self, mimeList_list);
    free(mimeList_qstr);
}

void k_dirlister_clear_mime_filter(void* self) {
    KCoreDirLister_ClearMimeFilter((KCoreDirLister*)self);
}

const char** k_dirlister_mime_filters(void* self) {
    libqt_list _arr = KCoreDirLister_MimeFilters((KCoreDirLister*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirlister_mime_filters");
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

KFileItemList* k_dirlister_items(void* self) {
    return KCoreDirLister_Items((KCoreDirLister*)self);
}

KFileItemList* k_dirlister_items_for_dir(void* self, void* dirUrl) {
    return KCoreDirLister_ItemsForDir((KCoreDirLister*)self, (QUrl*)dirUrl);
}

KFileItem* k_dirlister_cached_item_for_url(void* url) {
    return KCoreDirLister_CachedItemForUrl((QUrl*)url);
}

void k_dirlister_set_auto_error_handling_enabled(void* self, bool enable) {
    KCoreDirLister_SetAutoErrorHandlingEnabled((KCoreDirLister*)self, enable);
}

void k_dirlister_started(void* self, void* dirUrl) {
    KCoreDirLister_Started((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_dirlister_on_started(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_Started((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_completed(void* self) {
    KCoreDirLister_Completed((KCoreDirLister*)self);
}

void k_dirlister_on_completed(void* self, void (*callback)(void*)) {
    KCoreDirLister_Connect_Completed((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_listing_dir_completed(void* self, void* dirUrl) {
    KCoreDirLister_ListingDirCompleted((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_dirlister_on_listing_dir_completed(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ListingDirCompleted((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_canceled(void* self) {
    KCoreDirLister_Canceled((KCoreDirLister*)self);
}

void k_dirlister_on_canceled(void* self, void (*callback)(void*)) {
    KCoreDirLister_Connect_Canceled((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_listing_dir_canceled(void* self, void* dirUrl) {
    KCoreDirLister_ListingDirCanceled((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_dirlister_on_listing_dir_canceled(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ListingDirCanceled((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_redirection(void* self, void* oldUrl, void* newUrl) {
    KCoreDirLister_Redirection((KCoreDirLister*)self, (QUrl*)oldUrl, (QUrl*)newUrl);
}

void k_dirlister_on_redirection(void* self, void (*callback)(void*, void*, void*)) {
    KCoreDirLister_Connect_Redirection((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_clear(void* self) {
    KCoreDirLister_Clear((KCoreDirLister*)self);
}

void k_dirlister_on_clear(void* self, void (*callback)(void*)) {
    KCoreDirLister_Connect_Clear((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_clear_dir(void* self, void* dirUrl) {
    KCoreDirLister_ClearDir((KCoreDirLister*)self, (QUrl*)dirUrl);
}

void k_dirlister_on_clear_dir(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ClearDir((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_new_items(void* self, void* items) {
    KCoreDirLister_NewItems((KCoreDirLister*)self, (KFileItemList*)items);
}

void k_dirlister_on_new_items(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_NewItems((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_items_added(void* self, void* directoryUrl, void* items) {
    KCoreDirLister_ItemsAdded((KCoreDirLister*)self, (QUrl*)directoryUrl, (KFileItemList*)items);
}

void k_dirlister_on_items_added(void* self, void (*callback)(void*, void*, void*)) {
    KCoreDirLister_Connect_ItemsAdded((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_items_filtered_by_mime(void* self, void* items) {
    KCoreDirLister_ItemsFilteredByMime((KCoreDirLister*)self, (KFileItemList*)items);
}

void k_dirlister_on_items_filtered_by_mime(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ItemsFilteredByMime((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_items_deleted(void* self, void* items) {
    KCoreDirLister_ItemsDeleted((KCoreDirLister*)self, (KFileItemList*)items);
}

void k_dirlister_on_items_deleted(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_ItemsDeleted((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_refresh_items(void* self, libqt_list /* of libqt_pair  tuple of KFileItem* and KFileItem*  */ items) {
    KCoreDirLister_RefreshItems((KCoreDirLister*)self, items);
}

void k_dirlister_info_message(void* self, const char* msg) {
    KCoreDirLister_InfoMessage((KCoreDirLister*)self, qstring(msg));
}

void k_dirlister_on_info_message(void* self, void (*callback)(void*, const char*)) {
    KCoreDirLister_Connect_InfoMessage((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_percent(void* self, int percent) {
    KCoreDirLister_Percent((KCoreDirLister*)self, percent);
}

void k_dirlister_on_percent(void* self, void (*callback)(void*, int)) {
    KCoreDirLister_Connect_Percent((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_total_size(void* self, uint64_t size) {
    KCoreDirLister_TotalSize((KCoreDirLister*)self, size);
}

void k_dirlister_on_total_size(void* self, void (*callback)(void*, uint64_t)) {
    KCoreDirLister_Connect_TotalSize((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_processed_size(void* self, uint64_t size) {
    KCoreDirLister_ProcessedSize((KCoreDirLister*)self, size);
}

void k_dirlister_on_processed_size(void* self, void (*callback)(void*, uint64_t)) {
    KCoreDirLister_Connect_ProcessedSize((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_speed(void* self, int bytes_per_second) {
    KCoreDirLister_Speed((KCoreDirLister*)self, bytes_per_second);
}

void k_dirlister_on_speed(void* self, void (*callback)(void*, int)) {
    KCoreDirLister_Connect_Speed((KCoreDirLister*)self, (intptr_t)callback);
}

void k_dirlister_job_error(void* self, void* job) {
    KCoreDirLister_JobError((KCoreDirLister*)self, (KIO__Job*)job);
}

void k_dirlister_on_job_error(void* self, void (*callback)(void*, void*)) {
    KCoreDirLister_Connect_JobError((KCoreDirLister*)self, (intptr_t)callback);
}

bool k_dirlister_open_url2(void* self, void* dirUrl, int32_t flags) {
    return KCoreDirLister_OpenUrl2((KCoreDirLister*)self, (QUrl*)dirUrl, flags);
}

KFileItemList* k_dirlister_items1(void* self, int32_t which) {
    return KCoreDirLister_Items1((KCoreDirLister*)self, which);
}

KFileItemList* k_dirlister_items_for_dir2(void* self, void* dirUrl, int32_t which) {
    return KCoreDirLister_ItemsForDir2((KCoreDirLister*)self, (QUrl*)dirUrl, which);
}

const char* k_dirlister_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dirlister_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_dirlister_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_dirlister_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_dirlister_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_dirlister_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_dirlister_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_dirlister_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_dirlister_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_dirlister_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_dirlister_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_dirlister_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_dirlister_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_dirlister_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_dirlister_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_dirlister_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_dirlister_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_dirlister_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_dirlister_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_dirlister_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_dirlister_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_dirlister_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_dirlister_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_dirlister_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_dirlister_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_dirlister_dynamic_property_names");
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

QBindingStorage* k_dirlister_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_dirlister_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_dirlister_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_dirlister_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_dirlister_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_dirlister_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_dirlister_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_dirlister_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_dirlister_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_dirlister_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_dirlister_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_dirlister_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_dirlister_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_dirlister_event(void* self, void* event) {
    return KDirLister_Event((KDirLister*)self, (QEvent*)event);
}

bool k_dirlister_qbase_event(void* self, void* event) {
    return KDirLister_QBaseEvent((KDirLister*)self, (QEvent*)event);
}

void k_dirlister_on_event(void* self, bool (*callback)(void*, void*)) {
    KDirLister_OnEvent((KDirLister*)self, (intptr_t)callback);
}

bool k_dirlister_event_filter(void* self, void* watched, void* event) {
    return KDirLister_EventFilter((KDirLister*)self, (QObject*)watched, (QEvent*)event);
}

bool k_dirlister_qbase_event_filter(void* self, void* watched, void* event) {
    return KDirLister_QBaseEventFilter((KDirLister*)self, (QObject*)watched, (QEvent*)event);
}

void k_dirlister_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDirLister_OnEventFilter((KDirLister*)self, (intptr_t)callback);
}

void k_dirlister_timer_event(void* self, void* event) {
    KDirLister_TimerEvent((KDirLister*)self, (QTimerEvent*)event);
}

void k_dirlister_qbase_timer_event(void* self, void* event) {
    KDirLister_QBaseTimerEvent((KDirLister*)self, (QTimerEvent*)event);
}

void k_dirlister_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDirLister_OnTimerEvent((KDirLister*)self, (intptr_t)callback);
}

void k_dirlister_child_event(void* self, void* event) {
    KDirLister_ChildEvent((KDirLister*)self, (QChildEvent*)event);
}

void k_dirlister_qbase_child_event(void* self, void* event) {
    KDirLister_QBaseChildEvent((KDirLister*)self, (QChildEvent*)event);
}

void k_dirlister_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDirLister_OnChildEvent((KDirLister*)self, (intptr_t)callback);
}

void k_dirlister_custom_event(void* self, void* event) {
    KDirLister_CustomEvent((KDirLister*)self, (QEvent*)event);
}

void k_dirlister_qbase_custom_event(void* self, void* event) {
    KDirLister_QBaseCustomEvent((KDirLister*)self, (QEvent*)event);
}

void k_dirlister_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDirLister_OnCustomEvent((KDirLister*)self, (intptr_t)callback);
}

void k_dirlister_connect_notify(void* self, void* signal) {
    KDirLister_ConnectNotify((KDirLister*)self, (QMetaMethod*)signal);
}

void k_dirlister_qbase_connect_notify(void* self, void* signal) {
    KDirLister_QBaseConnectNotify((KDirLister*)self, (QMetaMethod*)signal);
}

void k_dirlister_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDirLister_OnConnectNotify((KDirLister*)self, (intptr_t)callback);
}

void k_dirlister_disconnect_notify(void* self, void* signal) {
    KDirLister_DisconnectNotify((KDirLister*)self, (QMetaMethod*)signal);
}

void k_dirlister_qbase_disconnect_notify(void* self, void* signal) {
    KDirLister_QBaseDisconnectNotify((KDirLister*)self, (QMetaMethod*)signal);
}

void k_dirlister_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDirLister_OnDisconnectNotify((KDirLister*)self, (intptr_t)callback);
}

QObject* k_dirlister_sender(void* self) {
    return KDirLister_Sender((KDirLister*)self);
}

QObject* k_dirlister_qbase_sender(void* self) {
    return KDirLister_QBaseSender((KDirLister*)self);
}

void k_dirlister_on_sender(void* self, QObject* (*callback)()) {
    KDirLister_OnSender((KDirLister*)self, (intptr_t)callback);
}

int32_t k_dirlister_sender_signal_index(void* self) {
    return KDirLister_SenderSignalIndex((KDirLister*)self);
}

int32_t k_dirlister_qbase_sender_signal_index(void* self) {
    return KDirLister_QBaseSenderSignalIndex((KDirLister*)self);
}

void k_dirlister_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDirLister_OnSenderSignalIndex((KDirLister*)self, (intptr_t)callback);
}

int32_t k_dirlister_receivers(void* self, const char* signal) {
    return KDirLister_Receivers((KDirLister*)self, signal);
}

int32_t k_dirlister_qbase_receivers(void* self, const char* signal) {
    return KDirLister_QBaseReceivers((KDirLister*)self, signal);
}

void k_dirlister_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDirLister_OnReceivers((KDirLister*)self, (intptr_t)callback);
}

bool k_dirlister_is_signal_connected(void* self, void* signal) {
    return KDirLister_IsSignalConnected((KDirLister*)self, (QMetaMethod*)signal);
}

bool k_dirlister_qbase_is_signal_connected(void* self, void* signal) {
    return KDirLister_QBaseIsSignalConnected((KDirLister*)self, (QMetaMethod*)signal);
}

void k_dirlister_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDirLister_OnIsSignalConnected((KDirLister*)self, (intptr_t)callback);
}

void k_dirlister_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_dirlister_delete(void* self) {
    KDirLister_Delete((KDirLister*)(self));
}
