#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKDIROPERATOR_H
#define SRC_EXTRAS_KIOQT6C_LIBKDIROPERATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kdiroperator.html

/// k_diroperator_new constructs a new KDirOperator object.
///
KDirOperator* k_diroperator_new();

/// k_diroperator_new2 constructs a new KDirOperator object.
///
/// @param urlName QUrl*
KDirOperator* k_diroperator_new2(void* urlName);

/// k_diroperator_new3 constructs a new KDirOperator object.
///
/// @param urlName QUrl*
/// @param parent QWidget*
KDirOperator* k_diroperator_new3(void* urlName, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDirOperator*
const QMetaObject* k_diroperator_meta_object(void* self);

/// @param self KDirOperator*
/// @param param1 const char*
void* k_diroperator_metacast(void* self, const char* param1);

/// @param self KDirOperator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_diroperator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback int32_t func(KDirOperator* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_diroperator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDirOperator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_diroperator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_diroperator_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setShowHiddenFiles)
///
/// @param self KDirOperator*
/// @param s bool
void k_diroperator_set_show_hidden_files(void* self, bool s);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setShowHiddenFiles)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, bool s)
void k_diroperator_on_set_show_hidden_files(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setShowHiddenFiles)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param s bool
void k_diroperator_qbase_set_show_hidden_files(void* self, bool s);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#showHiddenFiles)
///
/// @param self KDirOperator*
bool k_diroperator_show_hidden_files(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#close)
///
/// @param self KDirOperator*
void k_diroperator_close(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setNameFilter)
///
/// @param self KDirOperator*
/// @param filter const char*
void k_diroperator_set_name_filter(void* self, const char* filter);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#nameFilter)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_name_filter(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setMimeFilter)
///
/// @param self KDirOperator*
/// @param mimetypes const char**
void k_diroperator_set_mime_filter(void* self, const char* mimetypes[]);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#mimeFilter)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char** k_diroperator_mime_filter(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setNewFileMenuSupportedMimeTypes)
///
/// @param self KDirOperator*
/// @param mime const char**
void k_diroperator_set_new_file_menu_supported_mime_types(void* self, const char* mime[]);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#newFileMenuSupportedMimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char** k_diroperator_new_file_menu_supported_mime_types(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setNewFileMenuSelectDirWhenAlreadyExist)
///
/// @param self KDirOperator*
/// @param selectOnDirExists bool
void k_diroperator_set_new_file_menu_select_dir_when_already_exist(void* self, bool selectOnDirExists);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#clearFilter)
///
/// @param self KDirOperator*
void k_diroperator_clear_filter(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#url)
///
/// @param self KDirOperator*
QUrl* k_diroperator_url(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setUrl)
///
/// @param self KDirOperator*
/// @param url QUrl*
/// @param clearforward bool
void k_diroperator_set_url(void* self, void* url, bool clearforward);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setUrl)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QUrl* url, bool clearforward)
void k_diroperator_on_set_url(void* self, void (*callback)(void*, void*, bool));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setUrl)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param url QUrl*
/// @param clearforward bool
void k_diroperator_qbase_set_url(void* self, void* url, bool clearforward);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setCurrentItem)
///
/// @param self KDirOperator*
/// @param url QUrl*
void k_diroperator_set_current_item(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setCurrentItem)
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_set_current_item2(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setCurrentItems)
///
/// @param self KDirOperator*
/// @param urls libqt_list /* of QUrl* */
void k_diroperator_set_current_items(void* self, libqt_list urls);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setCurrentItems)
///
/// @param self KDirOperator*
/// @param items KFileItemList*
void k_diroperator_set_current_items2(void* self, void* items);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#view)
///
/// @param self KDirOperator*
QAbstractItemView* k_diroperator_view(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setViewMode)
///
/// @param self KDirOperator*
/// @param viewKind enum KFile__FileView
void k_diroperator_set_view_mode(void* self, int32_t viewKind);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#viewMode)
///
/// @param self KDirOperator*
///
/// @return enum KFile__FileView
int32_t k_diroperator_view_mode(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setSorting)
///
/// @param self KDirOperator*
/// @param sorting flag of enum QDir__SortFlag
void k_diroperator_set_sorting(void* self, int32_t sorting);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sorting)
///
/// @param self KDirOperator*
///
/// @return flag of enum QDir__SortFlag
int32_t k_diroperator_sorting(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#isRoot)
///
/// @param self KDirOperator*
bool k_diroperator_is_root(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dirLister)
///
/// @param self KDirOperator*
KDirLister* k_diroperator_dir_lister(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#progressBar)
///
/// @param self KDirOperator*
QProgressBar* k_diroperator_progress_bar(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setMode)
///
/// @param self KDirOperator*
/// @param m flag of enum KFile__Mode
void k_diroperator_set_mode(void* self, int32_t m);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setMode)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, flag of enum KFile__Mode m)
void k_diroperator_on_set_mode(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setMode)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param m flag of enum KFile__Mode
void k_diroperator_qbase_set_mode(void* self, int32_t m);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#mode)
///
/// @param self KDirOperator*
///
/// @return flag of enum KFile__Mode
int32_t k_diroperator_mode(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setPreviewWidget)
///
/// @param self KDirOperator*
/// @param w KPreviewWidgetBase*
void k_diroperator_set_preview_widget(void* self, void* w);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setPreviewWidget)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KPreviewWidgetBase* w)
void k_diroperator_on_set_preview_widget(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setPreviewWidget)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param w KPreviewWidgetBase*
void k_diroperator_qbase_set_preview_widget(void* self, void* w);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#selectedItems)
///
/// @param self KDirOperator*
KFileItemList* k_diroperator_selected_items(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#isSelected)
///
/// @param self KDirOperator*
/// @param item KFileItem*
bool k_diroperator_is_selected(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#numDirs)
///
/// @param self KDirOperator*
int32_t k_diroperator_num_dirs(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#numFiles)
///
/// @param self KDirOperator*
int32_t k_diroperator_num_files(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#completionObject)
///
/// @param self KDirOperator*
KCompletion* k_diroperator_completion_object(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dirCompletionObject)
///
/// @param self KDirOperator*
KCompletion* k_diroperator_dir_completion_object(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#action)
///
/// @param self KDirOperator*
/// @param action enum KDirOperator__Action
QAction* k_diroperator_action(void* self, int32_t action);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#allActions)
///
/// @param self KDirOperator*
libqt_list /* of QAction* */ k_diroperator_all_actions(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setViewConfig)
///
/// @param self KDirOperator*
/// @param configGroup KConfigGroup*
void k_diroperator_set_view_config(void* self, void* configGroup);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setViewConfig)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KConfigGroup* configGroup)
void k_diroperator_on_set_view_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setViewConfig)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param configGroup KConfigGroup*
void k_diroperator_qbase_set_view_config(void* self, void* configGroup);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#viewConfigGroup)
///
/// @param self KDirOperator*
KConfigGroup* k_diroperator_view_config_group(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#readConfig)
///
/// @param self KDirOperator*
/// @param configGroup KConfigGroup*
void k_diroperator_read_config(void* self, void* configGroup);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#readConfig)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KConfigGroup* configGroup)
void k_diroperator_on_read_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#readConfig)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param configGroup KConfigGroup*
void k_diroperator_qbase_read_config(void* self, void* configGroup);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#writeConfig)
///
/// @param self KDirOperator*
/// @param configGroup KConfigGroup*
void k_diroperator_write_config(void* self, void* configGroup);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#writeConfig)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KConfigGroup* configGroup)
void k_diroperator_on_write_config(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#writeConfig)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param configGroup KConfigGroup*
void k_diroperator_qbase_write_config(void* self, void* configGroup);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setOnlyDoubleClickSelectsFiles)
///
/// @param self KDirOperator*
/// @param enable bool
void k_diroperator_set_only_double_click_selects_files(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#onlyDoubleClickSelectsFiles)
///
/// @param self KDirOperator*
bool k_diroperator_only_double_click_selects_files(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setFollowNewDirectories)
///
/// @param self KDirOperator*
/// @param enable bool
void k_diroperator_set_follow_new_directories(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#followNewDirectories)
///
/// @param self KDirOperator*
bool k_diroperator_follow_new_directories(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setFollowSelectedDirectories)
///
/// @param self KDirOperator*
/// @param enable bool
void k_diroperator_set_follow_selected_directories(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#followSelectedDirectories)
///
/// @param self KDirOperator*
bool k_diroperator_follow_selected_directories(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#del)
///
/// @param self KDirOperator*
/// @param items KFileItemList*
/// @param parent QWidget*
/// @param ask bool
/// @param showProgress bool
KIO__DeleteJob* k_diroperator_del(void* self, void* items, void* parent, bool ask, bool showProgress);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#del)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback KIO__DeleteJob* func(KDirOperator* self, KFileItemList* items, QWidget* parent, bool ask, bool showProgress)
void k_diroperator_on_del(void* self, KIO__DeleteJob* (*callback)(void*, void*, void*, bool, bool));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#del)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param items KFileItemList*
/// @param parent QWidget*
/// @param ask bool
/// @param showProgress bool
KIO__DeleteJob* k_diroperator_qbase_del(void* self, void* items, void* parent, bool ask, bool showProgress);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#clearHistory)
///
/// @param self KDirOperator*
void k_diroperator_clear_history(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setEnableDirHighlighting)
///
/// @param self KDirOperator*
/// @param enable bool
void k_diroperator_set_enable_dir_highlighting(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setEnableDirHighlighting)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, bool enable)
void k_diroperator_on_set_enable_dir_highlighting(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setEnableDirHighlighting)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param enable bool
void k_diroperator_qbase_set_enable_dir_highlighting(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dirHighlighting)
///
/// @param self KDirOperator*
bool k_diroperator_dir_highlighting(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dirOnlyMode)
///
/// @param self KDirOperator*
bool k_diroperator_dir_only_mode(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dirOnlyMode)
///
/// @param mode uint32_t
bool k_diroperator_dir_only_mode2(uint32_t mode);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setupMenu)
///
/// @param self KDirOperator*
/// @param whichActions int
void k_diroperator_setup_menu(void* self, int whichActions);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setAcceptDrops)
///
/// @param self KDirOperator*
/// @param b bool
void k_diroperator_set_accept_drops(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setAcceptDrops)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, bool b)
void k_diroperator_on_set_accept_drops(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setAcceptDrops)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param b bool
void k_diroperator_qbase_set_accept_drops(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setDropOptions)
///
/// @param self KDirOperator*
/// @param options int
void k_diroperator_set_drop_options(void* self, int options);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setDropOptions)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, int options)
void k_diroperator_on_set_drop_options(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setDropOptions)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param options int
void k_diroperator_qbase_set_drop_options(void* self, int options);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#trash)
///
/// @param self KDirOperator*
/// @param items KFileItemList*
/// @param parent QWidget*
/// @param ask bool
/// @param showProgress bool
KIO__CopyJob* k_diroperator_trash(void* self, void* items, void* parent, bool ask, bool showProgress);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#trash)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback KIO__CopyJob* func(KDirOperator* self, KFileItemList* items, QWidget* parent, bool ask, bool showProgress)
void k_diroperator_on_trash(void* self, KIO__CopyJob* (*callback)(void*, void*, void*, bool, bool));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#trash)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param items KFileItemList*
/// @param parent QWidget*
/// @param ask bool
/// @param showProgress bool
KIO__CopyJob* k_diroperator_qbase_trash(void* self, void* items, void* parent, bool ask, bool showProgress);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#previewGenerator)
///
/// @param self KDirOperator*
KFilePreviewGenerator* k_diroperator_preview_generator(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setInlinePreviewShown)
///
/// @param self KDirOperator*
/// @param show bool
void k_diroperator_set_inline_preview_shown(void* self, bool show);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#decorationPosition)
///
/// @param self KDirOperator*
///
/// @return enum QStyleOptionViewItem__Position
int32_t k_diroperator_decoration_position(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setDecorationPosition)
///
/// @param self KDirOperator*
/// @param position enum QStyleOptionViewItem__Position
void k_diroperator_set_decoration_position(void* self, int32_t position);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#isInlinePreviewShown)
///
/// @param self KDirOperator*
bool k_diroperator_is_inline_preview_shown(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#iconSize)
///
/// @param self KDirOperator*
int32_t k_diroperator_icon_size(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setIsSaving)
///
/// @param self KDirOperator*
/// @param isSaving bool
void k_diroperator_set_is_saving(void* self, bool isSaving);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#isSaving)
///
/// @param self KDirOperator*
bool k_diroperator_is_saving(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#supportedSchemes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char** k_diroperator_supported_schemes(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#showOpenWithActions)
///
/// @param self KDirOperator*
/// @param enable bool
void k_diroperator_show_open_with_actions(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#usingKeyNavigation)
///
/// @param self KDirOperator*
bool k_diroperator_using_key_navigation(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#createView)
///
/// @param self KDirOperator*
/// @param parent QWidget*
/// @param viewKind enum KFile__FileView
QAbstractItemView* k_diroperator_create_view(void* self, void* parent, int32_t viewKind);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#createView)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback QAbstractItemView* func(KDirOperator* self, QWidget* parent, enum KFile__FileView viewKind)
void k_diroperator_on_create_view(void* self, QAbstractItemView* (*callback)(void*, void*, int32_t));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#createView)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param parent QWidget*
/// @param viewKind enum KFile__FileView
QAbstractItemView* k_diroperator_qbase_create_view(void* self, void* parent, int32_t viewKind);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setDirLister)
///
/// @param self KDirOperator*
/// @param lister KDirLister*
void k_diroperator_set_dir_lister(void* self, void* lister);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setDirLister)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KDirLister* lister)
void k_diroperator_on_set_dir_lister(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setDirLister)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param lister KDirLister*
void k_diroperator_qbase_set_dir_lister(void* self, void* lister);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#resizeEvent)
///
/// @param self KDirOperator*
/// @param event QResizeEvent*
void k_diroperator_resize_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QResizeEvent* event)
void k_diroperator_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param event QResizeEvent*
void k_diroperator_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setupActions)
///
/// @param self KDirOperator*
void k_diroperator_setup_actions(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setupActions)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_setup_actions(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setupActions)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_setup_actions(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateSortActions)
///
/// @param self KDirOperator*
void k_diroperator_update_sort_actions(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateSortActions)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_update_sort_actions(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateSortActions)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_update_sort_actions(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateViewActions)
///
/// @param self KDirOperator*
void k_diroperator_update_view_actions(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateViewActions)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_update_view_actions(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateViewActions)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_update_view_actions(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setupMenu)
///
/// @param self KDirOperator*
void k_diroperator_setup_menu2(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setupMenu)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_setup_menu2(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setupMenu)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_setup_menu2(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#prepareCompletionObjects)
///
/// @param self KDirOperator*
void k_diroperator_prepare_completion_objects(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#prepareCompletionObjects)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_prepare_completion_objects(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#prepareCompletionObjects)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_prepare_completion_objects(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#checkPreviewSupport)
///
/// @param self KDirOperator*
bool k_diroperator_check_preview_support(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#checkPreviewSupport)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback bool func()
void k_diroperator_on_check_preview_support(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#checkPreviewSupport)
///
/// Base class method implementation
///
/// @param self KDirOperator*
bool k_diroperator_qbase_check_preview_support(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#activatedMenu)
///
/// @param self KDirOperator*
/// @param item KFileItem*
/// @param pos QPoint*
void k_diroperator_activated_menu(void* self, void* item, void* pos);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#activatedMenu)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KFileItem* item, QPoint* pos)
void k_diroperator_on_activated_menu(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#activatedMenu)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param item KFileItem*
/// @param pos QPoint*
void k_diroperator_qbase_activated_menu(void* self, void* item, void* pos);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#changeEvent)
///
/// @param self KDirOperator*
/// @param event QEvent*
void k_diroperator_change_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QEvent* event)
void k_diroperator_on_change_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#changeEvent)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param event QEvent*
void k_diroperator_qbase_change_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#eventFilter)
///
/// @param self KDirOperator*
/// @param watched QObject*
/// @param event QEvent*
bool k_diroperator_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback bool func(KDirOperator* self, QObject* watched, QEvent* event)
void k_diroperator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param watched QObject*
/// @param event QEvent*
bool k_diroperator_qbase_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#back)
///
/// @param self KDirOperator*
void k_diroperator_back(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#back)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_back(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#back)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_back(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#forward)
///
/// @param self KDirOperator*
void k_diroperator_forward(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#forward)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_forward(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#forward)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_forward(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#home)
///
/// @param self KDirOperator*
void k_diroperator_home(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#home)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_home(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#home)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_home(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#cdUp)
///
/// @param self KDirOperator*
void k_diroperator_cd_up(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#cdUp)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_cd_up(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#cdUp)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_cd_up(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateDir)
///
/// @param self KDirOperator*
void k_diroperator_update_dir(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#rereadDir)
///
/// @param self KDirOperator*
void k_diroperator_reread_dir(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#rereadDir)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_reread_dir(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#rereadDir)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_reread_dir(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#mkdir)
///
/// @param self KDirOperator*
void k_diroperator_mkdir(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#mkdir)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_mkdir(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#mkdir)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_mkdir(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#deleteSelected)
///
/// @param self KDirOperator*
void k_diroperator_delete_selected(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#deleteSelected)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_delete_selected(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#deleteSelected)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_delete_selected(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateSelectionDependentActions)
///
/// @param self KDirOperator*
void k_diroperator_update_selection_dependent_actions(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#makeCompletion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
/// @param param1 const char*
const char* k_diroperator_make_completion(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#makeDirCompletion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
/// @param param1 const char*
const char* k_diroperator_make_dir_completion(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#renameSelected)
///
/// @param self KDirOperator*
void k_diroperator_rename_selected(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#trashSelected)
///
/// @param self KDirOperator*
void k_diroperator_trash_selected(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#trashSelected)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_trash_selected(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#trashSelected)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_trash_selected(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setIconSize)
///
/// @param self KDirOperator*
/// @param value int
void k_diroperator_set_icon_size(void* self, int value);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#setSupportedSchemes)
///
/// @param self KDirOperator*
/// @param schemes const char**
void k_diroperator_set_supported_schemes(void* self, const char* schemes[]);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#resetCursor)
///
/// @param self KDirOperator*
void k_diroperator_reset_cursor(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#resetCursor)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_reset_cursor(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#resetCursor)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_reset_cursor(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#pathChanged)
///
/// @param self KDirOperator*
void k_diroperator_path_changed(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#pathChanged)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_path_changed(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#pathChanged)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_path_changed(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#selectDir)
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_select_dir(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#selectDir)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KFileItem* item)
void k_diroperator_on_select_dir(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#selectDir)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_qbase_select_dir(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#selectFile)
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_select_file(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#selectFile)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KFileItem* item)
void k_diroperator_on_select_file(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#selectFile)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_qbase_select_file(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#highlightFile)
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_highlight_file(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#highlightFile)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KFileItem* item)
void k_diroperator_on_highlight_file(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#highlightFile)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_qbase_highlight_file(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortByName)
///
/// @param self KDirOperator*
void k_diroperator_sort_by_name(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortByName)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_sort_by_name(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortByName)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_sort_by_name(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortBySize)
///
/// @param self KDirOperator*
void k_diroperator_sort_by_size(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortBySize)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_sort_by_size(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortBySize)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_sort_by_size(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortByDate)
///
/// @param self KDirOperator*
void k_diroperator_sort_by_date(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortByDate)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_sort_by_date(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortByDate)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_sort_by_date(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortByType)
///
/// @param self KDirOperator*
void k_diroperator_sort_by_type(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortByType)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_sort_by_type(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortByType)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_sort_by_type(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortReversed)
///
/// @param self KDirOperator*
void k_diroperator_sort_reversed(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortReversed)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_sort_reversed(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#sortReversed)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_sort_reversed(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#toggleDirsFirst)
///
/// @param self KDirOperator*
void k_diroperator_toggle_dirs_first(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#toggleDirsFirst)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_toggle_dirs_first(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#toggleDirsFirst)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_toggle_dirs_first(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#toggleIgnoreCase)
///
/// @param self KDirOperator*
void k_diroperator_toggle_ignore_case(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#toggleIgnoreCase)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_toggle_ignore_case(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kdiroperator.html#toggleIgnoreCase)
///
/// Base class method implementation
///
/// @param self KDirOperator*
void k_diroperator_qbase_toggle_ignore_case(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#slotCompletionMatch)
///
/// @param self KDirOperator*
/// @param match const char*
void k_diroperator_slot_completion_match(void* self, const char* match);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#slotCompletionMatch)
///
/// Allows for overriding the related default method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, const char* match)
void k_diroperator_on_slot_completion_match(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#slotCompletionMatch)
///
/// Base class method implementation
///
/// @param self KDirOperator*
/// @param match const char*
void k_diroperator_qbase_slot_completion_match(void* self, const char* match);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#urlEntered)
///
/// @param self KDirOperator*
/// @param param1 QUrl*
void k_diroperator_url_entered(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#urlEntered)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QUrl* param1)
void k_diroperator_on_url_entered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateInformation)
///
/// @param self KDirOperator*
/// @param files int
/// @param dirs int
void k_diroperator_update_information(void* self, int files, int dirs);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#updateInformation)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, int files, int dirs)
void k_diroperator_on_update_information(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#completion)
///
/// @param self KDirOperator*
/// @param param1 const char*
void k_diroperator_completion(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#completion)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, const char* param1)
void k_diroperator_on_completion(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#finishedLoading)
///
/// @param self KDirOperator*
void k_diroperator_finished_loading(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#finishedLoading)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self)
void k_diroperator_on_finished_loading(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#viewChanged)
///
/// @param self KDirOperator*
/// @param newView QAbstractItemView*
void k_diroperator_view_changed(void* self, void* newView);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#viewChanged)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QAbstractItemView* newView)
void k_diroperator_on_view_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#fileHighlighted)
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_file_highlighted(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#fileHighlighted)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KFileItem* item)
void k_diroperator_on_file_highlighted(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dirActivated)
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_dir_activated(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dirActivated)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KFileItem* item)
void k_diroperator_on_dir_activated(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#fileSelected)
///
/// @param self KDirOperator*
/// @param item KFileItem*
void k_diroperator_file_selected(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#fileSelected)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KFileItem* item)
void k_diroperator_on_file_selected(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dropped)
///
/// @param self KDirOperator*
/// @param item KFileItem*
/// @param event QDropEvent*
/// @param urls libqt_list /* of QUrl* */
void k_diroperator_dropped(void* self, void* item, void* event, libqt_list urls);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dropped)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KFileItem* item, QDropEvent* event, QUrl** urls)
void k_diroperator_on_dropped(void* self, void (*callback)(void*, void*, void*, QUrl**));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#contextMenuAboutToShow)
///
/// @param self KDirOperator*
/// @param item KFileItem*
/// @param menu QMenu*
void k_diroperator_context_menu_about_to_show(void* self, void* item, void* menu);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#contextMenuAboutToShow)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, KFileItem* item, QMenu* menu)
void k_diroperator_on_context_menu_about_to_show(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#currentIconSizeChanged)
///
/// @param self KDirOperator*
/// @param size int
void k_diroperator_current_icon_size_changed(void* self, int size);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#currentIconSizeChanged)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, int size)
void k_diroperator_on_current_icon_size_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#keyEnterReturnPressed)
///
/// @param self KDirOperator*
void k_diroperator_key_enter_return_pressed(void* self);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#keyEnterReturnPressed)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self)
void k_diroperator_on_key_enter_return_pressed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#renamingFinished)
///
/// @param self KDirOperator*
/// @param urls libqt_list /* of QUrl* */
void k_diroperator_renaming_finished(void* self, libqt_list urls);

/// [Qt documentation](https://api.kde.org/kdiroperator.html#renamingFinished)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QUrl** urls)
void k_diroperator_on_renaming_finished(void* self, void (*callback)(void*, QUrl**));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_diroperator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_diroperator_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KDirOperator*
uintptr_t k_diroperator_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KDirOperator*
void k_diroperator_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KDirOperator*
uintptr_t k_diroperator_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KDirOperator*
uintptr_t k_diroperator_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KDirOperator*
QStyle* k_diroperator_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KDirOperator*
/// @param style QStyle*
void k_diroperator_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KDirOperator*
bool k_diroperator_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KDirOperator*
bool k_diroperator_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KDirOperator*
bool k_diroperator_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KDirOperator*
///
/// @return enum Qt__WindowModality
int32_t k_diroperator_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KDirOperator*
/// @param windowModality enum Qt__WindowModality
void k_diroperator_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KDirOperator*
bool k_diroperator_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KDirOperator*
/// @param param1 QWidget*
bool k_diroperator_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KDirOperator*
/// @param enabled bool
void k_diroperator_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KDirOperator*
/// @param disabled bool
void k_diroperator_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KDirOperator*
/// @param windowModified bool
void k_diroperator_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KDirOperator*
QRect* k_diroperator_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KDirOperator*
const QRect* k_diroperator_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KDirOperator*
QRect* k_diroperator_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KDirOperator*
int32_t k_diroperator_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KDirOperator*
int32_t k_diroperator_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KDirOperator*
QPoint* k_diroperator_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KDirOperator*
QSize* k_diroperator_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KDirOperator*
QSize* k_diroperator_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KDirOperator*
int32_t k_diroperator_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KDirOperator*
int32_t k_diroperator_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KDirOperator*
QRect* k_diroperator_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KDirOperator*
QRect* k_diroperator_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KDirOperator*
QRegion* k_diroperator_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KDirOperator*
QSize* k_diroperator_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KDirOperator*
QSize* k_diroperator_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KDirOperator*
int32_t k_diroperator_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KDirOperator*
int32_t k_diroperator_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KDirOperator*
int32_t k_diroperator_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KDirOperator*
int32_t k_diroperator_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KDirOperator*
/// @param minimumSize QSize*
void k_diroperator_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KDirOperator*
/// @param minw int
/// @param minh int
void k_diroperator_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KDirOperator*
/// @param maximumSize QSize*
void k_diroperator_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KDirOperator*
/// @param maxw int
/// @param maxh int
void k_diroperator_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KDirOperator*
/// @param minw int
void k_diroperator_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KDirOperator*
/// @param minh int
void k_diroperator_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KDirOperator*
/// @param maxw int
void k_diroperator_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KDirOperator*
/// @param maxh int
void k_diroperator_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KDirOperator*
QSize* k_diroperator_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KDirOperator*
/// @param sizeIncrement QSize*
void k_diroperator_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KDirOperator*
/// @param w int
/// @param h int
void k_diroperator_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KDirOperator*
QSize* k_diroperator_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KDirOperator*
/// @param baseSize QSize*
void k_diroperator_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KDirOperator*
/// @param basew int
/// @param baseh int
void k_diroperator_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KDirOperator*
/// @param fixedSize QSize*
void k_diroperator_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KDirOperator*
/// @param w int
/// @param h int
void k_diroperator_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KDirOperator*
/// @param w int
void k_diroperator_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KDirOperator*
/// @param h int
void k_diroperator_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KDirOperator*
/// @param param1 QPointF*
QPointF* k_diroperator_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KDirOperator*
/// @param param1 QPoint*
QPoint* k_diroperator_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KDirOperator*
/// @param param1 QPointF*
QPointF* k_diroperator_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KDirOperator*
/// @param param1 QPoint*
QPoint* k_diroperator_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KDirOperator*
/// @param param1 QPointF*
QPointF* k_diroperator_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KDirOperator*
/// @param param1 QPoint*
QPoint* k_diroperator_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KDirOperator*
/// @param param1 QPointF*
QPointF* k_diroperator_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KDirOperator*
/// @param param1 QPoint*
QPoint* k_diroperator_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KDirOperator*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_diroperator_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KDirOperator*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_diroperator_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KDirOperator*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_diroperator_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KDirOperator*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_diroperator_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KDirOperator*
QWidget* k_diroperator_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KDirOperator*
QWidget* k_diroperator_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KDirOperator*
QWidget* k_diroperator_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KDirOperator*
const QPalette* k_diroperator_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KDirOperator*
/// @param palette QPalette*
void k_diroperator_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KDirOperator*
/// @param backgroundRole enum QPalette__ColorRole
void k_diroperator_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KDirOperator*
///
/// @return enum QPalette__ColorRole
int32_t k_diroperator_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KDirOperator*
/// @param foregroundRole enum QPalette__ColorRole
void k_diroperator_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KDirOperator*
///
/// @return enum QPalette__ColorRole
int32_t k_diroperator_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KDirOperator*
const QFont* k_diroperator_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KDirOperator*
/// @param font QFont*
void k_diroperator_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KDirOperator*
QFontMetrics* k_diroperator_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KDirOperator*
QFontInfo* k_diroperator_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KDirOperator*
QCursor* k_diroperator_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KDirOperator*
/// @param cursor QCursor*
void k_diroperator_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KDirOperator*
void k_diroperator_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KDirOperator*
/// @param enable bool
void k_diroperator_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KDirOperator*
bool k_diroperator_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KDirOperator*
bool k_diroperator_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KDirOperator*
/// @param enable bool
void k_diroperator_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KDirOperator*
bool k_diroperator_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KDirOperator*
/// @param mask QBitmap*
void k_diroperator_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KDirOperator*
/// @param mask QRegion*
void k_diroperator_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KDirOperator*
QRegion* k_diroperator_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KDirOperator*
void k_diroperator_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDirOperator*
/// @param target QPaintDevice*
void k_diroperator_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDirOperator*
/// @param painter QPainter*
void k_diroperator_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KDirOperator*
QPixmap* k_diroperator_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KDirOperator*
QGraphicsEffect* k_diroperator_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KDirOperator*
/// @param effect QGraphicsEffect*
void k_diroperator_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KDirOperator*
/// @param typeVal enum Qt__GestureType
void k_diroperator_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KDirOperator*
/// @param typeVal enum Qt__GestureType
void k_diroperator_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KDirOperator*
/// @param windowTitle const char*
void k_diroperator_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KDirOperator*
/// @param styleSheet const char*
void k_diroperator_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KDirOperator*
/// @param icon QIcon*
void k_diroperator_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KDirOperator*
QIcon* k_diroperator_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KDirOperator*
/// @param windowIconText const char*
void k_diroperator_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KDirOperator*
/// @param windowRole const char*
void k_diroperator_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KDirOperator*
/// @param filePath const char*
void k_diroperator_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KDirOperator*
/// @param level double
void k_diroperator_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KDirOperator*
double k_diroperator_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KDirOperator*
bool k_diroperator_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KDirOperator*
/// @param toolTip const char*
void k_diroperator_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KDirOperator*
/// @param msec int
void k_diroperator_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KDirOperator*
int32_t k_diroperator_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KDirOperator*
/// @param statusTip const char*
void k_diroperator_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KDirOperator*
/// @param whatsThis const char*
void k_diroperator_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KDirOperator*
/// @param name const char*
void k_diroperator_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KDirOperator*
/// @param description const char*
void k_diroperator_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KDirOperator*
/// @param direction enum Qt__LayoutDirection
void k_diroperator_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KDirOperator*
///
/// @return enum Qt__LayoutDirection
int32_t k_diroperator_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KDirOperator*
void k_diroperator_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KDirOperator*
/// @param locale QLocale*
void k_diroperator_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KDirOperator*
QLocale* k_diroperator_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KDirOperator*
void k_diroperator_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KDirOperator*
bool k_diroperator_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KDirOperator*
bool k_diroperator_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KDirOperator*
void k_diroperator_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KDirOperator*
bool k_diroperator_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KDirOperator*
void k_diroperator_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KDirOperator*
void k_diroperator_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KDirOperator*
/// @param reason enum Qt__FocusReason
void k_diroperator_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KDirOperator*
///
/// @return enum Qt__FocusPolicy
int32_t k_diroperator_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KDirOperator*
/// @param policy enum Qt__FocusPolicy
void k_diroperator_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KDirOperator*
bool k_diroperator_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_diroperator_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KDirOperator*
/// @param focusProxy QWidget*
void k_diroperator_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KDirOperator*
QWidget* k_diroperator_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KDirOperator*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_diroperator_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KDirOperator*
/// @param policy enum Qt__ContextMenuPolicy
void k_diroperator_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KDirOperator*
void k_diroperator_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KDirOperator*
/// @param param1 QCursor*
void k_diroperator_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KDirOperator*
void k_diroperator_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KDirOperator*
void k_diroperator_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KDirOperator*
void k_diroperator_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KDirOperator*
/// @param key QKeySequence*
int32_t k_diroperator_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KDirOperator*
/// @param id int
void k_diroperator_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KDirOperator*
/// @param id int
void k_diroperator_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KDirOperator*
/// @param id int
void k_diroperator_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_diroperator_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_diroperator_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KDirOperator*
bool k_diroperator_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KDirOperator*
/// @param enable bool
void k_diroperator_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KDirOperator*
QGraphicsProxyWidget* k_diroperator_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDirOperator*
void k_diroperator_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDirOperator*
void k_diroperator_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDirOperator*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_diroperator_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDirOperator*
/// @param param1 QRect*
void k_diroperator_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDirOperator*
/// @param param1 QRegion*
void k_diroperator_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDirOperator*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_diroperator_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDirOperator*
/// @param param1 QRect*
void k_diroperator_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDirOperator*
/// @param param1 QRegion*
void k_diroperator_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KDirOperator*
/// @param hidden bool
void k_diroperator_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KDirOperator*
void k_diroperator_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KDirOperator*
void k_diroperator_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KDirOperator*
void k_diroperator_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KDirOperator*
void k_diroperator_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KDirOperator*
void k_diroperator_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KDirOperator*
void k_diroperator_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KDirOperator*
void k_diroperator_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KDirOperator*
void k_diroperator_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KDirOperator*
/// @param param1 QWidget*
void k_diroperator_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KDirOperator*
/// @param x int
/// @param y int
void k_diroperator_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KDirOperator*
/// @param param1 QPoint*
void k_diroperator_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KDirOperator*
/// @param w int
/// @param h int
void k_diroperator_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KDirOperator*
/// @param param1 QSize*
void k_diroperator_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KDirOperator*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_diroperator_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KDirOperator*
/// @param geometry QRect*
void k_diroperator_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
char* k_diroperator_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KDirOperator*
/// @param geometry const char*
bool k_diroperator_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KDirOperator*
void k_diroperator_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KDirOperator*
bool k_diroperator_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KDirOperator*
/// @param param1 QWidget*
bool k_diroperator_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KDirOperator*
bool k_diroperator_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KDirOperator*
bool k_diroperator_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KDirOperator*
bool k_diroperator_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KDirOperator*
bool k_diroperator_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KDirOperator*
///
/// @return flag of enum Qt__WindowState
int32_t k_diroperator_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KDirOperator*
/// @param state flag of enum Qt__WindowState
void k_diroperator_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KDirOperator*
/// @param state flag of enum Qt__WindowState
void k_diroperator_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KDirOperator*
QSizePolicy* k_diroperator_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KDirOperator*
/// @param sizePolicy QSizePolicy*
void k_diroperator_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KDirOperator*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_diroperator_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KDirOperator*
QRegion* k_diroperator_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KDirOperator*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_diroperator_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KDirOperator*
/// @param margins QMargins*
void k_diroperator_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KDirOperator*
QMargins* k_diroperator_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KDirOperator*
QRect* k_diroperator_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KDirOperator*
QLayout* k_diroperator_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KDirOperator*
/// @param layout QLayout*
void k_diroperator_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KDirOperator*
void k_diroperator_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KDirOperator*
/// @param parent QWidget*
void k_diroperator_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KDirOperator*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_diroperator_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KDirOperator*
/// @param dx int
/// @param dy int
void k_diroperator_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KDirOperator*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_diroperator_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KDirOperator*
QWidget* k_diroperator_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KDirOperator*
QWidget* k_diroperator_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KDirOperator*
QWidget* k_diroperator_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KDirOperator*
bool k_diroperator_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDirOperator*
/// @param action QAction*
void k_diroperator_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KDirOperator*
/// @param actions libqt_list /* of QAction* */
void k_diroperator_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KDirOperator*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_diroperator_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KDirOperator*
/// @param before QAction*
/// @param action QAction*
void k_diroperator_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KDirOperator*
/// @param action QAction*
void k_diroperator_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KDirOperator*
libqt_list /* of QAction* */ k_diroperator_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDirOperator*
/// @param text const char*
QAction* k_diroperator_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDirOperator*
/// @param icon QIcon*
/// @param text const char*
QAction* k_diroperator_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDirOperator*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_diroperator_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDirOperator*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_diroperator_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KDirOperator*
QWidget* k_diroperator_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KDirOperator*
/// @param typeVal flag of enum Qt__WindowType
void k_diroperator_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KDirOperator*
///
/// @return flag of enum Qt__WindowType
int64_t k_diroperator_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KDirOperator*
/// @param param1 enum Qt__WindowType
void k_diroperator_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KDirOperator*
/// @param typeVal flag of enum Qt__WindowType
void k_diroperator_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KDirOperator*
///
/// @return enum Qt__WindowType
int64_t k_diroperator_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_diroperator_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDirOperator*
/// @param x int
/// @param y int
QWidget* k_diroperator_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDirOperator*
/// @param p QPoint*
QWidget* k_diroperator_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDirOperator*
/// @param p QPointF*
QWidget* k_diroperator_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KDirOperator*
/// @param param1 enum Qt__WidgetAttribute
void k_diroperator_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KDirOperator*
/// @param param1 enum Qt__WidgetAttribute
bool k_diroperator_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KDirOperator*
void k_diroperator_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KDirOperator*
/// @param child QWidget*
bool k_diroperator_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KDirOperator*
bool k_diroperator_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KDirOperator*
/// @param enabled bool
void k_diroperator_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KDirOperator*
QBackingStore* k_diroperator_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KDirOperator*
QWindow* k_diroperator_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KDirOperator*
QScreen* k_diroperator_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KDirOperator*
/// @param screen QScreen*
void k_diroperator_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_diroperator_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KDirOperator*
/// @param title const char*
void k_diroperator_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, const char* title)
void k_diroperator_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KDirOperator*
/// @param icon QIcon*
void k_diroperator_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QIcon* icon)
void k_diroperator_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KDirOperator*
/// @param iconText const char*
void k_diroperator_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, const char* iconText)
void k_diroperator_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KDirOperator*
/// @param pos QPoint*
void k_diroperator_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QPoint* pos)
void k_diroperator_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KDirOperator*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_diroperator_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KDirOperator*
/// @param hints flag of enum Qt__InputMethodHint
void k_diroperator_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDirOperator*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_diroperator_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDirOperator*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_diroperator_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDirOperator*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_diroperator_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDirOperator*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_diroperator_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDirOperator*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_diroperator_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDirOperator*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_diroperator_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KDirOperator*
/// @param rectangle QRect*
QPixmap* k_diroperator_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KDirOperator*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_diroperator_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KDirOperator*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_diroperator_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KDirOperator*
/// @param id int
/// @param enable bool
void k_diroperator_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KDirOperator*
/// @param id int
/// @param enable bool
void k_diroperator_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KDirOperator*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_diroperator_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KDirOperator*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_diroperator_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_diroperator_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_diroperator_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char* k_diroperator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDirOperator*
/// @param name char*
void k_diroperator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDirOperator*
bool k_diroperator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDirOperator*
bool k_diroperator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDirOperator*
bool k_diroperator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDirOperator*
bool k_diroperator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDirOperator*
/// @param b bool
bool k_diroperator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDirOperator*
QThread* k_diroperator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDirOperator*
/// @param thread QThread*
bool k_diroperator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirOperator*
/// @param interval int
int32_t k_diroperator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirOperator*
/// @param id int
void k_diroperator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDirOperator*
/// @param id enum Qt__TimerId
void k_diroperator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDirOperator*
libqt_list /* of QObject* */ k_diroperator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDirOperator*
/// @param filterObj QObject*
void k_diroperator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDirOperator*
/// @param obj QObject*
void k_diroperator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_diroperator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirOperator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_diroperator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_diroperator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_diroperator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDirOperator*
void k_diroperator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDirOperator*
void k_diroperator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDirOperator*
/// @param name const char*
/// @param value QVariant*
bool k_diroperator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDirOperator*
/// @param name const char*
QVariant* k_diroperator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDirOperator*
const char** k_diroperator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirOperator*
QBindingStorage* k_diroperator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDirOperator*
const QBindingStorage* k_diroperator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirOperator*
void k_diroperator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self)
void k_diroperator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KDirOperator*
QObject* k_diroperator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDirOperator*
/// @param classname const char*
bool k_diroperator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDirOperator*
void k_diroperator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDirOperator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_diroperator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDirOperator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_diroperator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_diroperator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDirOperator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_diroperator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirOperator*
/// @param param1 QObject*
void k_diroperator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QObject* param1)
void k_diroperator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KDirOperator*
bool k_diroperator_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KDirOperator*
int32_t k_diroperator_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KDirOperator*
int32_t k_diroperator_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KDirOperator*
int32_t k_diroperator_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KDirOperator*
int32_t k_diroperator_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KDirOperator*
int32_t k_diroperator_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KDirOperator*
int32_t k_diroperator_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KDirOperator*
double k_diroperator_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KDirOperator*
double k_diroperator_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KDirOperator*
int32_t k_diroperator_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KDirOperator*
int32_t k_diroperator_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_diroperator_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_diroperator_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
int32_t k_diroperator_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
int32_t k_diroperator_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback int32_t func()
void k_diroperator_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param visible bool
void k_diroperator_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param visible bool
void k_diroperator_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, bool visible)
void k_diroperator_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
QSize* k_diroperator_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
QSize* k_diroperator_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback QSize* func()
void k_diroperator_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
QSize* k_diroperator_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
QSize* k_diroperator_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback QSize* func()
void k_diroperator_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param param1 int
int32_t k_diroperator_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param param1 int
int32_t k_diroperator_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback int32_t func(KDirOperator* self, int param1)
void k_diroperator_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
bool k_diroperator_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
bool k_diroperator_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback bool func()
void k_diroperator_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
QPaintEngine* k_diroperator_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
QPaintEngine* k_diroperator_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback QPaintEngine* func()
void k_diroperator_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QEvent*
bool k_diroperator_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QEvent*
bool k_diroperator_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback bool func(KDirOperator* self, QEvent* event)
void k_diroperator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMouseEvent*
void k_diroperator_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMouseEvent*
void k_diroperator_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QMouseEvent* event)
void k_diroperator_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMouseEvent*
void k_diroperator_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMouseEvent*
void k_diroperator_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QMouseEvent* event)
void k_diroperator_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMouseEvent*
void k_diroperator_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMouseEvent*
void k_diroperator_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QMouseEvent* event)
void k_diroperator_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMouseEvent*
void k_diroperator_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMouseEvent*
void k_diroperator_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QMouseEvent* event)
void k_diroperator_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QWheelEvent*
void k_diroperator_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QWheelEvent*
void k_diroperator_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QWheelEvent* event)
void k_diroperator_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QKeyEvent*
void k_diroperator_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QKeyEvent*
void k_diroperator_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QKeyEvent* event)
void k_diroperator_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QKeyEvent*
void k_diroperator_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QKeyEvent*
void k_diroperator_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QKeyEvent* event)
void k_diroperator_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QFocusEvent*
void k_diroperator_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QFocusEvent*
void k_diroperator_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QFocusEvent* event)
void k_diroperator_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QFocusEvent*
void k_diroperator_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QFocusEvent*
void k_diroperator_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QFocusEvent* event)
void k_diroperator_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QEnterEvent*
void k_diroperator_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QEnterEvent*
void k_diroperator_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QEnterEvent* event)
void k_diroperator_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QEvent*
void k_diroperator_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QEvent*
void k_diroperator_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QEvent* event)
void k_diroperator_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QPaintEvent*
void k_diroperator_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QPaintEvent*
void k_diroperator_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QPaintEvent* event)
void k_diroperator_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMoveEvent*
void k_diroperator_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QMoveEvent*
void k_diroperator_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QMoveEvent* event)
void k_diroperator_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QCloseEvent*
void k_diroperator_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QCloseEvent*
void k_diroperator_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QCloseEvent* event)
void k_diroperator_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QContextMenuEvent*
void k_diroperator_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QContextMenuEvent*
void k_diroperator_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QContextMenuEvent* event)
void k_diroperator_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QTabletEvent*
void k_diroperator_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QTabletEvent*
void k_diroperator_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QTabletEvent* event)
void k_diroperator_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QActionEvent*
void k_diroperator_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QActionEvent*
void k_diroperator_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QActionEvent* event)
void k_diroperator_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QDragEnterEvent*
void k_diroperator_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QDragEnterEvent*
void k_diroperator_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QDragEnterEvent* event)
void k_diroperator_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QDragMoveEvent*
void k_diroperator_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QDragMoveEvent*
void k_diroperator_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QDragMoveEvent* event)
void k_diroperator_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QDragLeaveEvent*
void k_diroperator_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QDragLeaveEvent*
void k_diroperator_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QDragLeaveEvent* event)
void k_diroperator_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QDropEvent*
void k_diroperator_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QDropEvent*
void k_diroperator_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QDropEvent* event)
void k_diroperator_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QShowEvent*
void k_diroperator_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QShowEvent*
void k_diroperator_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QShowEvent* event)
void k_diroperator_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QHideEvent*
void k_diroperator_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QHideEvent*
void k_diroperator_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QHideEvent* event)
void k_diroperator_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_diroperator_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_diroperator_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback bool func(KDirOperator* self, const char* eventType, void* message, intptr_t* result)
void k_diroperator_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_diroperator_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_diroperator_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback int32_t func(KDirOperator* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_diroperator_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param painter QPainter*
void k_diroperator_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param painter QPainter*
void k_diroperator_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QPainter* painter)
void k_diroperator_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param offset QPoint*
QPaintDevice* k_diroperator_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param offset QPoint*
QPaintDevice* k_diroperator_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback QPaintDevice* func(KDirOperator* self, QPoint* offset)
void k_diroperator_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
QPainter* k_diroperator_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
QPainter* k_diroperator_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback QPainter* func()
void k_diroperator_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param param1 QInputMethodEvent*
void k_diroperator_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param param1 QInputMethodEvent*
void k_diroperator_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QInputMethodEvent* param1)
void k_diroperator_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_diroperator_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_diroperator_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback QVariant* func(KDirOperator* self, enum Qt__InputMethodQuery param1)
void k_diroperator_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param next bool
bool k_diroperator_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param next bool
bool k_diroperator_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback bool func(KDirOperator* self, bool next)
void k_diroperator_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QTimerEvent*
void k_diroperator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QTimerEvent*
void k_diroperator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QTimerEvent* event)
void k_diroperator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QChildEvent*
void k_diroperator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QChildEvent*
void k_diroperator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QChildEvent* event)
void k_diroperator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param event QEvent*
void k_diroperator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param event QEvent*
void k_diroperator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QEvent* event)
void k_diroperator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param signal QMetaMethod*
void k_diroperator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param signal QMetaMethod*
void k_diroperator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QMetaMethod* signal)
void k_diroperator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param signal QMetaMethod*
void k_diroperator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param signal QMetaMethod*
void k_diroperator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, QMetaMethod* signal)
void k_diroperator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
void k_diroperator_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
void k_diroperator_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
void k_diroperator_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
void k_diroperator_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
void k_diroperator_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
void k_diroperator_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback void func()
void k_diroperator_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
bool k_diroperator_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
bool k_diroperator_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback bool func()
void k_diroperator_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
bool k_diroperator_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
bool k_diroperator_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback bool func()
void k_diroperator_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
QObject* k_diroperator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
QObject* k_diroperator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback QObject* func()
void k_diroperator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
int32_t k_diroperator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
int32_t k_diroperator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback int32_t func()
void k_diroperator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param signal const char*
int32_t k_diroperator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param signal const char*
int32_t k_diroperator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback int32_t func(KDirOperator* self, const char* signal)
void k_diroperator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param signal QMetaMethod*
bool k_diroperator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param signal QMetaMethod*
bool k_diroperator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback bool func(KDirOperator* self, QMetaMethod* signal)
void k_diroperator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDirOperator*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_diroperator_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDirOperator*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_diroperator_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDirOperator*
/// @param callback double func(KDirOperator* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_diroperator_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDirOperator*
/// @param callback void func(KDirOperator* self, const char* objectName)
void k_diroperator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kdiroperator.html#dtor.KDirOperator)
///
/// Delete this object from C++ memory.
///
/// @param self KDirOperator*
void k_diroperator_delete(void* self);

/// https://api.kde.org/kdiroperator.html#types

typedef enum {
    KDIROPERATOR_ACTIONTYPE_SORTACTIONS = 1,
    KDIROPERATOR_ACTIONTYPE_VIEWACTIONS = 2,
    KDIROPERATOR_ACTIONTYPE_NAVACTIONS = 4,
    KDIROPERATOR_ACTIONTYPE_FILEACTIONS = 8,
    KDIROPERATOR_ACTIONTYPE_ALLACTIONS = 15
} KDirOperator__ActionType;

typedef enum {
    KDIROPERATOR_ACTION_POPUPMENU = 0,
    KDIROPERATOR_ACTION_UP = 1,
    KDIROPERATOR_ACTION_BACK = 2,
    KDIROPERATOR_ACTION_FORWARD = 3,
    KDIROPERATOR_ACTION_HOME = 4,
    KDIROPERATOR_ACTION_RELOAD = 5,
    KDIROPERATOR_ACTION_NEW = 6,
    KDIROPERATOR_ACTION_NEWFOLDER = 7,
    KDIROPERATOR_ACTION_RENAME = 8,
    KDIROPERATOR_ACTION_TRASH = 9,
    KDIROPERATOR_ACTION_DELETE = 10,
    KDIROPERATOR_ACTION_SORTMENU = 11,
    KDIROPERATOR_ACTION_SORTBYNAME = 12,
    KDIROPERATOR_ACTION_SORTBYSIZE = 13,
    KDIROPERATOR_ACTION_SORTBYDATE = 14,
    KDIROPERATOR_ACTION_SORTBYTYPE = 15,
    KDIROPERATOR_ACTION_SORTASCENDING = 16,
    KDIROPERATOR_ACTION_SORTDESCENDING = 17,
    KDIROPERATOR_ACTION_SORTFOLDERSFIRST = 18,
    KDIROPERATOR_ACTION_SORTHIDDENFILESLAST = 19,
    KDIROPERATOR_ACTION_VIEWMODEMENU = 20,
    KDIROPERATOR_ACTION_VIEWICONSVIEW = 21,
    KDIROPERATOR_ACTION_VIEWCOMPACTVIEW = 22,
    KDIROPERATOR_ACTION_VIEWDETAILSVIEW = 23,
    KDIROPERATOR_ACTION_DECORATIONMENU = 24,
    KDIROPERATOR_ACTION_DECORATIONATTOP = 25,
    KDIROPERATOR_ACTION_DECORATIONATLEFT = 26,
    KDIROPERATOR_ACTION_SHORTVIEW = 27,
    KDIROPERATOR_ACTION_DETAILEDVIEW = 28,
    KDIROPERATOR_ACTION_TREEVIEW = 29,
    KDIROPERATOR_ACTION_DETAILEDTREEVIEW = 30,
    KDIROPERATOR_ACTION_ALLOWEXPANSIONINDETAILSVIEW = 31,
    KDIROPERATOR_ACTION_SHOWHIDDENFILES = 32,
    KDIROPERATOR_ACTION_SHOWPREVIEWPANEL = 33,
    KDIROPERATOR_ACTION_SHOWPREVIEW = 34,
    KDIROPERATOR_ACTION_OPENCONTAININGFOLDER = 35,
    KDIROPERATOR_ACTION_PROPERTIES = 36
} KDirOperator__Action;

#endif
