#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKDIRLISTER_H
#define SRC_EXTRAS_KIO_QT6C_LIBKDIRLISTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdirlister.html)

/// k_dirlister_new constructs a new KDirLister object.
///
KDirLister* k_dirlister_new();

/// [Upstream resources](https://api.kde.org/kdirlister.html)

/// k_dirlister_new2 constructs a new KDirLister object.
///
/// @param parent QObject*
///
KDirLister* k_dirlister_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDirLister*
///
const QMetaObject* k_dirlister_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KDirLister*
/// @param callback const QMetaObject* func()
///
void k_dirlister_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KDirLister*
///
const QMetaObject* k_dirlister_qbase_meta_object(void* self);

/// @param self KDirLister*
/// @param param1 const char*
///
void* k_dirlister_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KDirLister*
/// @param callback void* func(KDirLister* self, const char* param1)
///
void k_dirlister_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KDirLister*
/// @param param1 const char*
///
void* k_dirlister_qbase_metacast(void* self, const char* param1);

/// @param self KDirLister*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dirlister_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDirLister*
/// @param callback int32_t func(KDirLister* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_dirlister_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDirLister*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dirlister_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_dirlister_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdirlister.html#autoErrorHandlingEnabled)
///
/// @param self KDirLister*
///
bool k_dirlister_auto_error_handling_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kdirlister.html#setMainWindow)
///
/// @param self KDirLister*
/// @param window QWidget*
///
void k_dirlister_set_main_window(void* self, void* window);

/// [Upstream resources](https://api.kde.org/kdirlister.html#mainWindow)
///
/// @param self KDirLister*
///
QWidget* k_dirlister_main_window(void* self);

/// [Upstream resources](https://api.kde.org/kdirlister.html#jobStarted)
///
/// @param self KDirLister*
/// @param param1 KIO__ListJob*
///
void k_dirlister_job_started(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kdirlister.html#jobStarted)
///
/// Allows for overriding the related default method
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, KIO__ListJob* param1)
///
void k_dirlister_on_job_started(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kdirlister.html#jobStarted)
///
/// Base class method implementation
///
/// @param self KDirLister*
/// @param param1 KIO__ListJob*
///
void k_dirlister_qbase_job_started(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_dirlister_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_dirlister_tr3(const char* s, const char* c, int n);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#openUrl)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
///
bool k_dirlister_open_url(void* self, void* dirUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#stop)
///
/// @param self KDirLister*
///
void k_dirlister_stop(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#stop)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
///
void k_dirlister_stop2(void* self, void* dirUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#forgetDirs)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
///
void k_dirlister_forget_dirs(void* self, void* dirUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#delayedMimeTypes)
///
/// @param self KDirLister*
///
bool k_dirlister_delayed_mime_types(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setDelayedMimeTypes)
///
/// @param self KDirLister*
/// @param delayedMimeTypes bool
///
void k_dirlister_set_delayed_mime_types(void* self, bool delayedMimeTypes);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#autoUpdate)
///
/// @param self KDirLister*
///
bool k_dirlister_auto_update(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setAutoUpdate)
///
/// @param self KDirLister*
/// @param enable bool
///
void k_dirlister_set_auto_update(void* self, bool enable);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#showHiddenFiles)
///
/// @param self KDirLister*
///
bool k_dirlister_show_hidden_files(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setShowHiddenFiles)
///
/// @param self KDirLister*
/// @param showHiddenFiles bool
///
void k_dirlister_set_show_hidden_files(void* self, bool showHiddenFiles);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#dirOnlyMode)
///
/// @param self KDirLister*
///
bool k_dirlister_dir_only_mode(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setDirOnlyMode)
///
/// @param self KDirLister*
/// @param dirsOnly bool
///
void k_dirlister_set_dir_only_mode(void* self, bool dirsOnly);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#requestMimeTypeWhileListing)
///
/// @param self KDirLister*
///
bool k_dirlister_request_mime_type_while_listing(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setRequestMimeTypeWhileListing)
///
/// @param self KDirLister*
/// @param request bool
///
void k_dirlister_set_request_mime_type_while_listing(void* self, bool request);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#url)
///
/// @param self KDirLister*
///
QUrl* k_dirlister_url(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#directories)
///
/// @param self KDirLister*
///
/// @return libqt_list of QUrl*
///
libqt_list k_dirlister_directories(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#emitChanges)
///
/// @param self KDirLister*
///
void k_dirlister_emit_changes(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#updateDirectory)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
///
void k_dirlister_update_directory(void* self, void* dirUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#isFinished)
///
/// @param self KDirLister*
///
bool k_dirlister_is_finished(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#rootItem)
///
/// @param self KDirLister*
///
KFileItem* k_dirlister_root_item(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#findByUrl)
///
/// @param self KDirLister*
/// @param url QUrl*
///
KFileItem* k_dirlister_find_by_url(void* self, void* url);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#findByName)
///
/// @param self KDirLister*
/// @param name const char*
///
KFileItem* k_dirlister_find_by_name(void* self, const char* name);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setNameFilter)
///
/// @param self KDirLister*
/// @param filter const char*
///
void k_dirlister_set_name_filter(void* self, const char* filter);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#nameFilter)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDirLister*
///
const char* k_dirlister_name_filter(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setMimeFilter)
///
/// @param self KDirLister*
/// @param mimeList const char**
///
void k_dirlister_set_mime_filter(void* self, const char* mimeList[static 1]);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setMimeExcludeFilter)
///
/// @param self KDirLister*
/// @param mimeList const char**
///
void k_dirlister_set_mime_exclude_filter(void* self, const char* mimeList[static 1]);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clearMimeFilter)
///
/// @param self KDirLister*
///
void k_dirlister_clear_mime_filter(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#mimeFilters)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDirLister*
///
const char** k_dirlister_mime_filters(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#items)
///
/// @param self KDirLister*
///
KFileItemList* k_dirlister_items(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsForDir)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
///
KFileItemList* k_dirlister_items_for_dir(void* self, void* dirUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#cachedItemForUrl)
///
/// @param url QUrl*
///
KFileItem* k_dirlister_cached_item_for_url(void* url);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#setAutoErrorHandlingEnabled)
///
/// @param self KDirLister*
/// @param enable bool
///
void k_dirlister_set_auto_error_handling_enabled(void* self, bool enable);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#started)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
///
void k_dirlister_started(void* self, void* dirUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#started)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QUrl* dirUrl)
///
void k_dirlister_on_started(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#completed)
///
/// @param self KDirLister*
///
void k_dirlister_completed(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#completed)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self)
///
void k_dirlister_on_completed(void* self, void (*callback)(void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
///
void k_dirlister_listing_dir_completed(void* self, void* dirUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCompleted)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QUrl* dirUrl)
///
void k_dirlister_on_listing_dir_completed(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#canceled)
///
/// @param self KDirLister*
///
void k_dirlister_canceled(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#canceled)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self)
///
void k_dirlister_on_canceled(void* self, void (*callback)(void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
///
void k_dirlister_listing_dir_canceled(void* self, void* dirUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#listingDirCanceled)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QUrl* dirUrl)
///
void k_dirlister_on_listing_dir_canceled(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#redirection)
///
/// @param self KDirLister*
/// @param oldUrl QUrl*
/// @param newUrl QUrl*
///
void k_dirlister_redirection(void* self, void* oldUrl, void* newUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#redirection)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QUrl* oldUrl, QUrl* newUrl)
///
void k_dirlister_on_redirection(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clear)
///
/// @param self KDirLister*
///
void k_dirlister_clear(void* self);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clear)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self)
///
void k_dirlister_on_clear(void* self, void (*callback)(void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clearDir)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
///
void k_dirlister_clear_dir(void* self, void* dirUrl);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#clearDir)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QUrl* dirUrl)
///
void k_dirlister_on_clear_dir(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#newItems)
///
/// @param self KDirLister*
/// @param items KFileItemList*
///
void k_dirlister_new_items(void* self, void* items);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#newItems)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, KFileItemList* items)
///
void k_dirlister_on_new_items(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsAdded)
///
/// @param self KDirLister*
/// @param directoryUrl QUrl*
/// @param items KFileItemList*
///
void k_dirlister_items_added(void* self, void* directoryUrl, void* items);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsAdded)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QUrl* directoryUrl, KFileItemList* items)
///
void k_dirlister_on_items_added(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
///
/// @param self KDirLister*
/// @param items KFileItemList*
///
void k_dirlister_items_filtered_by_mime(void* self, void* items);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsFilteredByMime)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, KFileItemList* items)
///
void k_dirlister_on_items_filtered_by_mime(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsDeleted)
///
/// @param self KDirLister*
/// @param items KFileItemList*
///
void k_dirlister_items_deleted(void* self, void* items);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsDeleted)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, KFileItemList* items)
///
void k_dirlister_on_items_deleted(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#infoMessage)
///
/// @param self KDirLister*
/// @param msg const char*
///
void k_dirlister_info_message(void* self, const char* msg);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#infoMessage)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, const char* msg)
///
void k_dirlister_on_info_message(void* self, void (*callback)(void*, const char*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#percent)
///
/// @param self KDirLister*
/// @param percent int
///
void k_dirlister_percent(void* self, int percent);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#percent)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, int percent)
///
void k_dirlister_on_percent(void* self, void (*callback)(void*, int));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#totalSize)
///
/// @param self KDirLister*
/// @param size uint64_t
///
void k_dirlister_total_size(void* self, uint64_t size);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#totalSize)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, uint64_t size)
///
void k_dirlister_on_total_size(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#processedSize)
///
/// @param self KDirLister*
/// @param size uint64_t
///
void k_dirlister_processed_size(void* self, uint64_t size);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#processedSize)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, uint64_t size)
///
void k_dirlister_on_processed_size(void* self, void (*callback)(void*, uint64_t));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#speed)
///
/// @param self KDirLister*
/// @param bytes_per_second int
///
void k_dirlister_speed(void* self, int bytes_per_second);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#speed)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, int bytes_per_second)
///
void k_dirlister_on_speed(void* self, void (*callback)(void*, int));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#jobError)
///
/// @param self KDirLister*
/// @param job KIO__Job*
///
void k_dirlister_job_error(void* self, void* job);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#jobError)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, KIO__Job* job)
///
void k_dirlister_on_job_error(void* self, void (*callback)(void*, void*));

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#openUrl)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
/// @param flags flag of enum KCoreDirLister__OpenUrlFlag
///
bool k_dirlister_open_url2(void* self, void* dirUrl, int32_t flags);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#items)
///
/// @param self KDirLister*
/// @param which enum KCoreDirLister__WhichItems
///
KFileItemList* k_dirlister_items1(void* self, int32_t which);

/// Inherited from KCoreDirLister
///
/// [Upstream resources](https://api.kde.org/kcoredirlister.html#itemsForDir)
///
/// @param self KDirLister*
/// @param dirUrl QUrl*
/// @param which enum KCoreDirLister__WhichItems
///
KFileItemList* k_dirlister_items_for_dir2(void* self, void* dirUrl, int32_t which);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDirLister*
///
const char* k_dirlister_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDirLister*
/// @param name char*
///
void k_dirlister_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDirLister*
///
bool k_dirlister_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDirLister*
///
bool k_dirlister_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDirLister*
///
bool k_dirlister_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDirLister*
///
bool k_dirlister_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDirLister*
/// @param b bool
///
bool k_dirlister_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDirLister*
///
QThread* k_dirlister_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDirLister*
/// @param thread QThread*
///
bool k_dirlister_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirLister*
/// @param interval int
///
int32_t k_dirlister_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirLister*
/// @param time int64_t of nanoseconds
///
int32_t k_dirlister_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirLister*
/// @param id int
///
void k_dirlister_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirLister*
/// @param id enum Qt__TimerId
///
void k_dirlister_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDirLister*
///
/// @return libqt_list of QObject*
///
libqt_list k_dirlister_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KDirLister*
/// @param parent QObject*
///
void k_dirlister_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDirLister*
/// @param filterObj QObject*
///
void k_dirlister_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDirLister*
/// @param obj QObject*
///
void k_dirlister_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_dirlister_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_dirlister_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirLister*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_dirlister_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_dirlister_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_dirlister_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirLister*
///
bool k_dirlister_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirLister*
/// @param receiver QObject*
///
bool k_dirlister_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_dirlister_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDirLister*
///
void k_dirlister_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDirLister*
///
void k_dirlister_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDirLister*
/// @param name const char*
/// @param value QVariant*
///
bool k_dirlister_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDirLister*
/// @param name const char*
///
QVariant* k_dirlister_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDirLister*
///
const char** k_dirlister_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirLister*
///
QBindingStorage* k_dirlister_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirLister*
///
const QBindingStorage* k_dirlister_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirLister*
///
void k_dirlister_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self)
///
void k_dirlister_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KDirLister*
///
QObject* k_dirlister_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDirLister*
/// @param classname const char*
///
bool k_dirlister_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDirLister*
///
void k_dirlister_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirLister*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_dirlister_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirLister*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_dirlister_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_dirlister_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_dirlister_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirLister*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_dirlister_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirLister*
/// @param signal const char*
///
bool k_dirlister_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirLister*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_dirlister_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirLister*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_dirlister_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KDirLister*
/// @param receiver QObject*
/// @param member const char*
///
bool k_dirlister_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirLister*
/// @param param1 QObject*
///
void k_dirlister_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QObject* param1)
///
void k_dirlister_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
/// @param event QEvent*
///
bool k_dirlister_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
/// @param event QEvent*
///
bool k_dirlister_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback bool func(KDirLister* self, QEvent* event)
///
void k_dirlister_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dirlister_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dirlister_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback bool func(KDirLister* self, QObject* watched, QEvent* event)
///
void k_dirlister_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
/// @param event QTimerEvent*
///
void k_dirlister_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
/// @param event QTimerEvent*
///
void k_dirlister_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QTimerEvent* event)
///
void k_dirlister_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
/// @param event QChildEvent*
///
void k_dirlister_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
/// @param event QChildEvent*
///
void k_dirlister_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QChildEvent* event)
///
void k_dirlister_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
/// @param event QEvent*
///
void k_dirlister_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
/// @param event QEvent*
///
void k_dirlister_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QEvent* event)
///
void k_dirlister_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
/// @param signal QMetaMethod*
///
void k_dirlister_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
/// @param signal QMetaMethod*
///
void k_dirlister_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QMetaMethod* signal)
///
void k_dirlister_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
/// @param signal QMetaMethod*
///
void k_dirlister_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
/// @param signal QMetaMethod*
///
void k_dirlister_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, QMetaMethod* signal)
///
void k_dirlister_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
///
QObject* k_dirlister_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
///
QObject* k_dirlister_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback QObject* func()
///
void k_dirlister_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
///
int32_t k_dirlister_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
///
int32_t k_dirlister_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback int32_t func()
///
void k_dirlister_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
/// @param signal const char*
///
int32_t k_dirlister_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
/// @param signal const char*
///
int32_t k_dirlister_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback int32_t func(KDirLister* self, const char* signal)
///
void k_dirlister_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirLister*
/// @param signal QMetaMethod*
///
bool k_dirlister_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirLister*
/// @param signal QMetaMethod*
///
bool k_dirlister_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirLister*
/// @param callback bool func(KDirLister* self, QMetaMethod* signal)
///
void k_dirlister_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirLister*
/// @param callback void func(KDirLister* self, const char* objectName)
///
void k_dirlister_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdirlister.html#dtor.KDirLister)
///
/// Delete this object from C++ memory.
///
/// @param self KDirLister*
///
void k_dirlister_delete(void* self);

#endif
