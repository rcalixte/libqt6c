#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKCOREDIRLISTER_H
#define SRC_EXTRAS_KIO_QT6C_LIBKCOREDIRLISTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcoredirlister.html)

/// k_coredirlister_new constructs a new KCoreDirLister object.
///
KCoreDirLister* k_coredirlister_new();

/// [Upstream resources](https://api.kde.org/kcoredirlister.html)

/// k_coredirlister_new2 constructs a new KCoreDirLister object.
///
/// @param parent QObject*
///
KCoreDirLister* k_coredirlister_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCoreDirLister*
///
const QMetaObject* k_coredirlister_meta_object(void* self);

/// @param self KCoreDirLister*
/// @param param1 const char*
///
void* k_coredirlister_metacast(void* self, const char* param1);

/// @param self KCoreDirLister*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_coredirlister_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCoreDirLister*
/// @param callback int32_t func(KCoreDirLister* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_coredirlister_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCoreDirLister*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_coredirlister_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_coredirlister_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#openUrl)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
///
bool k_coredirlister_open_url(void* self, void* dirUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#stop)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_stop(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#stop)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
///
void k_coredirlister_stop2(void* self, void* dirUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#forgetDirs)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
///
void k_coredirlister_forget_dirs(void* self, void* dirUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#delayedMimeTypes)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_delayed_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setDelayedMimeTypes)
///
/// @param self KCoreDirLister*
/// @param delayedMimeTypes bool
///
void k_coredirlister_set_delayed_mime_types(void* self, bool delayedMimeTypes);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#autoUpdate)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_auto_update(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setAutoUpdate)
///
/// @param self KCoreDirLister*
/// @param enable bool
///
void k_coredirlister_set_auto_update(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#showHiddenFiles)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_show_hidden_files(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setShowHiddenFiles)
///
/// @param self KCoreDirLister*
/// @param showHiddenFiles bool
///
void k_coredirlister_set_show_hidden_files(void* self, bool showHiddenFiles);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#dirOnlyMode)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_dir_only_mode(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setDirOnlyMode)
///
/// @param self KCoreDirLister*
/// @param dirsOnly bool
///
void k_coredirlister_set_dir_only_mode(void* self, bool dirsOnly);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#requestMimeTypeWhileListing)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_request_mime_type_while_listing(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setRequestMimeTypeWhileListing)
///
/// @param self KCoreDirLister*
/// @param request bool
///
void k_coredirlister_set_request_mime_type_while_listing(void* self, bool request);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#url)
///
/// @param self KCoreDirLister*
///
QUrl* k_coredirlister_url(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#directories)
///
/// @param self KCoreDirLister*
///
libqt_list /* of QUrl* */ k_coredirlister_directories(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#emitChanges)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_emit_changes(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#updateDirectory)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
///
void k_coredirlister_update_directory(void* self, void* dirUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#isFinished)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_is_finished(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#rootItem)
///
/// @param self KCoreDirLister*
///
KFileItem* k_coredirlister_root_item(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#findByUrl)
///
/// @param self KCoreDirLister*
/// @param url QUrl*
///
KFileItem* k_coredirlister_find_by_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#findByName)
///
/// @param self KCoreDirLister*
/// @param name const char*
///
KFileItem* k_coredirlister_find_by_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setNameFilter)
///
/// @param self KCoreDirLister*
/// @param filter const char*
///
void k_coredirlister_set_name_filter(void* self, const char* filter);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#nameFilter)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreDirLister*
///
const char* k_coredirlister_name_filter(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setMimeFilter)
///
/// @param self KCoreDirLister*
/// @param mimeList const char**
///
void k_coredirlister_set_mime_filter(void* self, const char* mimeList[static 1]);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setMimeExcludeFilter)
///
/// @param self KCoreDirLister*
/// @param mimeList const char**
///
void k_coredirlister_set_mime_exclude_filter(void* self, const char* mimeList[static 1]);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clearMimeFilter)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_clear_mime_filter(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#mimeFilters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreDirLister*
///
const char** k_coredirlister_mime_filters(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#items)
///
/// @param self KCoreDirLister*
///
KFileItemList* k_coredirlister_items(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsForDir)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
///
KFileItemList* k_coredirlister_items_for_dir(void* self, void* dirUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#cachedItemForUrl)
///
/// @param url QUrl*
///
KFileItem* k_coredirlister_cached_item_for_url(void* url);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#autoErrorHandlingEnabled)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_auto_error_handling_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setAutoErrorHandlingEnabled)
///
/// @param self KCoreDirLister*
/// @param enable bool
///
void k_coredirlister_set_auto_error_handling_enabled(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#started)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
///
void k_coredirlister_started(void* self, void* dirUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#started)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QUrl* dirUrl)
///
void k_coredirlister_on_started(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#completed)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_completed(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#completed)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self)
///
void k_coredirlister_on_completed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
///
void k_coredirlister_listing_dir_completed(void* self, void* dirUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QUrl* dirUrl)
///
void k_coredirlister_on_listing_dir_completed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#canceled)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_canceled(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#canceled)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self)
///
void k_coredirlister_on_canceled(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
///
void k_coredirlister_listing_dir_canceled(void* self, void* dirUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QUrl* dirUrl)
///
void k_coredirlister_on_listing_dir_canceled(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#redirection)
///
/// @param self KCoreDirLister*
/// @param oldUrl QUrl*
/// @param newUrl QUrl*
///
void k_coredirlister_redirection(void* self, void* oldUrl, void* newUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#redirection)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QUrl* oldUrl, QUrl* newUrl)
///
void k_coredirlister_on_redirection(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clear)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_clear(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clear)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self)
///
void k_coredirlister_on_clear(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clearDir)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
///
void k_coredirlister_clear_dir(void* self, void* dirUrl);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clearDir)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QUrl* dirUrl)
///
void k_coredirlister_on_clear_dir(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#newItems)
///
/// @param self KCoreDirLister*
/// @param items KFileItemList*
///
void k_coredirlister_new_items(void* self, void* items);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#newItems)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, KFileItemList* items)
///
void k_coredirlister_on_new_items(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsAdded)
///
/// @param self KCoreDirLister*
/// @param directoryUrl QUrl*
/// @param items KFileItemList*
///
void k_coredirlister_items_added(void* self, void* directoryUrl, void* items);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsAdded)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QUrl* directoryUrl, KFileItemList* items)
///
void k_coredirlister_on_items_added(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
///
/// @param self KCoreDirLister*
/// @param items KFileItemList*
///
void k_coredirlister_items_filtered_by_mime(void* self, void* items);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, KFileItemList* items)
///
void k_coredirlister_on_items_filtered_by_mime(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsDeleted)
///
/// @param self KCoreDirLister*
/// @param items KFileItemList*
///
void k_coredirlister_items_deleted(void* self, void* items);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsDeleted)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, KFileItemList* items)
///
void k_coredirlister_on_items_deleted(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#infoMessage)
///
/// @param self KCoreDirLister*
/// @param msg const char*
///
void k_coredirlister_info_message(void* self, const char* msg);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#infoMessage)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, const char* msg)
///
void k_coredirlister_on_info_message(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#percent)
///
/// @param self KCoreDirLister*
/// @param percent int
///
void k_coredirlister_percent(void* self, int percent);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#percent)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, int percent)
///
void k_coredirlister_on_percent(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#totalSize)
///
/// @param self KCoreDirLister*
/// @param size uint64_t
///
void k_coredirlister_total_size(void* self, uint64_t size);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#totalSize)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, uint64_t size)
///
void k_coredirlister_on_total_size(void* self, void (*callback)(void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#processedSize)
///
/// @param self KCoreDirLister*
/// @param size uint64_t
///
void k_coredirlister_processed_size(void* self, uint64_t size);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#processedSize)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, uint64_t size)
///
void k_coredirlister_on_processed_size(void* self, void (*callback)(void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#speed)
///
/// @param self KCoreDirLister*
/// @param bytes_per_second int
///
void k_coredirlister_speed(void* self, int bytes_per_second);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#speed)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, int bytes_per_second)
///
void k_coredirlister_on_speed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#jobError)
///
/// @param self KCoreDirLister*
/// @param job KIO__Job*
///
void k_coredirlister_job_error(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#jobError)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, KIO__Job* job)
///
void k_coredirlister_on_job_error(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#jobStarted)
///
/// @param self KCoreDirLister*
/// @param param1 KIO__ListJob*
///
void k_coredirlister_job_started(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#jobStarted)
///
/// Allows for overriding the related default method
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, KIO__ListJob* param1)
///
void k_coredirlister_on_job_started(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#jobStarted)
///
/// Base class method implementation
///
/// @param self KCoreDirLister*
/// @param param1 KIO__ListJob*
///
void k_coredirlister_qbase_job_started(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_coredirlister_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_coredirlister_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#openUrl)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
/// @param flags flag of enum KCoreDirLister__OpenUrlFlag
///
bool k_coredirlister_open_url2(void* self, void* dirUrl, int32_t flags);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#items)
///
/// @param self KCoreDirLister*
/// @param which enum KCoreDirLister__WhichItems
///
KFileItemList* k_coredirlister_items1(void* self, int32_t which);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsForDir)
///
/// @param self KCoreDirLister*
/// @param dirUrl QUrl*
/// @param which enum KCoreDirLister__WhichItems
///
KFileItemList* k_coredirlister_items_for_dir2(void* self, void* dirUrl, int32_t which);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreDirLister*
///
const char* k_coredirlister_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCoreDirLister*
/// @param name char*
///
void k_coredirlister_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCoreDirLister*
///
bool k_coredirlister_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCoreDirLister*
/// @param b bool
///
bool k_coredirlister_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCoreDirLister*
///
QThread* k_coredirlister_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCoreDirLister*
/// @param thread QThread*
///
bool k_coredirlister_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreDirLister*
/// @param interval int
///
int32_t k_coredirlister_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCoreDirLister*
/// @param id int
///
void k_coredirlister_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCoreDirLister*
/// @param id enum Qt__TimerId
///
void k_coredirlister_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCoreDirLister*
///
libqt_list /* of QObject* */ k_coredirlister_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCoreDirLister*
/// @param parent QObject*
///
void k_coredirlister_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCoreDirLister*
/// @param filterObj QObject*
///
void k_coredirlister_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCoreDirLister*
/// @param obj QObject*
///
void k_coredirlister_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_coredirlister_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCoreDirLister*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_coredirlister_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_coredirlister_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_coredirlister_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCoreDirLister*
/// @param name const char*
/// @param value QVariant*
///
bool k_coredirlister_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCoreDirLister*
/// @param name const char*
///
QVariant* k_coredirlister_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCoreDirLister*
///
const char** k_coredirlister_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCoreDirLister*
///
QBindingStorage* k_coredirlister_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCoreDirLister*
///
const QBindingStorage* k_coredirlister_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self)
///
void k_coredirlister_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCoreDirLister*
///
QObject* k_coredirlister_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCoreDirLister*
/// @param classname const char*
///
bool k_coredirlister_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCoreDirLister*
///
void k_coredirlister_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCoreDirLister*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_coredirlister_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCoreDirLister*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_coredirlister_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_coredirlister_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCoreDirLister*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_coredirlister_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreDirLister*
/// @param param1 QObject*
///
void k_coredirlister_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QObject* param1)
///
void k_coredirlister_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
/// @param event QEvent*
///
bool k_coredirlister_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param event QEvent*
///
bool k_coredirlister_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback bool func(KCoreDirLister* self, QEvent* event)
///
void k_coredirlister_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_coredirlister_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_coredirlister_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback bool func(KCoreDirLister* self, QObject* watched, QEvent* event)
///
void k_coredirlister_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
/// @param event QTimerEvent*
///
void k_coredirlister_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param event QTimerEvent*
///
void k_coredirlister_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QTimerEvent* event)
///
void k_coredirlister_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
/// @param event QChildEvent*
///
void k_coredirlister_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param event QChildEvent*
///
void k_coredirlister_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QChildEvent* event)
///
void k_coredirlister_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
/// @param event QEvent*
///
void k_coredirlister_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param event QEvent*
///
void k_coredirlister_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QEvent* event)
///
void k_coredirlister_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
/// @param signal QMetaMethod*
///
void k_coredirlister_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param signal QMetaMethod*
///
void k_coredirlister_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QMetaMethod* signal)
///
void k_coredirlister_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
/// @param signal QMetaMethod*
///
void k_coredirlister_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param signal QMetaMethod*
///
void k_coredirlister_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, QMetaMethod* signal)
///
void k_coredirlister_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
///
QObject* k_coredirlister_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
///
QObject* k_coredirlister_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback QObject* func()
///
void k_coredirlister_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
///
int32_t k_coredirlister_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
///
int32_t k_coredirlister_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback int32_t func()
///
void k_coredirlister_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
/// @param signal const char*
///
int32_t k_coredirlister_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param signal const char*
///
int32_t k_coredirlister_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback int32_t func(KCoreDirLister* self, const char* signal)
///
void k_coredirlister_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCoreDirLister*
/// @param signal QMetaMethod*
///
bool k_coredirlister_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param signal QMetaMethod*
///
bool k_coredirlister_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCoreDirLister*
/// @param callback bool func(KCoreDirLister* self, QMetaMethod* signal)
///
void k_coredirlister_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCoreDirLister*
/// @param callback void func(KCoreDirLister* self, const char* objectName)
///
void k_coredirlister_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#dtor.KCoreDirLister)
///
/// Delete this object from C++ memory.
///
/// @param self KCoreDirLister*
///
void k_coredirlister_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#public-types)

typedef enum {
    KCOREDIRLISTER_OPENURLFLAG_NOFLAGS = 0,
    KCOREDIRLISTER_OPENURLFLAG_KEEP = 1,
    KCOREDIRLISTER_OPENURLFLAG_RELOAD = 2
} KCoreDirLister__OpenUrlFlag;

/// [Upstream resources](https://api.kde.org/kcoredirlister.html#public-types)

typedef enum {
    KCOREDIRLISTER_WHICHITEMS_ALLITEMS = 0,
    KCOREDIRLISTER_WHICHITEMS_FILTEREDITEMS = 1
} KCoreDirLister__WhichItems;

#endif
