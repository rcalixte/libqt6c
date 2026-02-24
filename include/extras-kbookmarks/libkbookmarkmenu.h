#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKS_QT6C_LIBKBOOKMARKMENU_H
#define SRC_EXTRAS_KBOOKMARKS_QT6C_LIBKBOOKMARKMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html)

/// k_bookmarkmenu_new constructs a new KBookmarkMenu object.
///
/// @param manager KBookmarkManager*
/// @param owner KBookmarkOwner*
/// @param parentMenu QMenu*
///
KBookmarkMenu* k_bookmarkmenu_new(void* manager, void* owner, void* parentMenu);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html)

/// k_bookmarkmenu_new2 constructs a new KBookmarkMenu object.
///
/// @param mgr KBookmarkManager*
/// @param owner KBookmarkOwner*
/// @param parentMenu QMenu*
/// @param parentAddress const char*
///
KBookmarkMenu* k_bookmarkmenu_new2(void* mgr, void* owner, void* parentMenu, const char* parentAddress);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KBookmarkMenu*
///
const QMetaObject* k_bookmarkmenu_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback const QMetaObject* func()
///
void k_bookmarkmenu_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_meta_object` instead
///
#define k_bookmarkmenu_qbase_meta_object k_bookmarkmenu_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
const QMetaObject* k_bookmarkmenu_super_meta_object(void* self);

/// @param self KBookmarkMenu*
/// @param param1 const char*
///
void* k_bookmarkmenu_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void* func(KBookmarkMenu* self, const char* param1)
///
void k_bookmarkmenu_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_metacast` instead
///
#define k_bookmarkmenu_qbase_metacast k_bookmarkmenu_super_metacast

/// Base class method implementation
///
/// @param self KBookmarkMenu*
/// @param param1 const char*
///
void* k_bookmarkmenu_super_metacast(void* self, const char* param1);

/// @param self KBookmarkMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_bookmarkmenu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback int32_t func(KBookmarkMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_bookmarkmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_metacall` instead
///
#define k_bookmarkmenu_qbase_metacall k_bookmarkmenu_super_metacall

/// Base class method implementation
///
/// @param self KBookmarkMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_bookmarkmenu_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_bookmarkmenu_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#ensureUpToDate)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_ensure_up_to_date(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addBookmarkAction)
///
/// @param self KBookmarkMenu*
///
QAction* k_bookmarkmenu_add_bookmark_action(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#bookmarkTabsAsFolderAction)
///
/// @param self KBookmarkMenu*
///
QAction* k_bookmarkmenu_bookmark_tabs_as_folder_action(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#newBookmarkFolderAction)
///
/// @param self KBookmarkMenu*
///
QAction* k_bookmarkmenu_new_bookmark_folder_action(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#editBookmarksAction)
///
/// @param self KBookmarkMenu*
///
QAction* k_bookmarkmenu_edit_bookmarks_action(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#setBrowserMode)
///
/// @param self KBookmarkMenu*
/// @param browserMode bool
///
void k_bookmarkmenu_set_browser_mode(void* self, bool browserMode);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#browserMode)
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_browser_mode(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotBookmarksChanged)
///
/// @param self KBookmarkMenu*
/// @param param1 const char*
///
void k_bookmarkmenu_slot_bookmarks_changed(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAboutToShow)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_slot_about_to_show(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAboutToShow)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_slot_about_to_show(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_slot_about_to_show` instead
///
#define k_bookmarkmenu_qbase_slot_about_to_show k_bookmarkmenu_super_slot_about_to_show

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAboutToShow)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_slot_about_to_show(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmarksList)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_slot_add_bookmarks_list(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmarksList)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_slot_add_bookmarks_list(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_slot_add_bookmarks_list` instead
///
#define k_bookmarkmenu_qbase_slot_add_bookmarks_list k_bookmarkmenu_super_slot_add_bookmarks_list

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmarksList)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_slot_add_bookmarks_list(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmark)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_slot_add_bookmark(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmark)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_slot_add_bookmark(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_slot_add_bookmark` instead
///
#define k_bookmarkmenu_qbase_slot_add_bookmark k_bookmarkmenu_super_slot_add_bookmark

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmark)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_slot_add_bookmark(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotNewFolder)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_slot_new_folder(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotNewFolder)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_slot_new_folder(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_slot_new_folder` instead
///
#define k_bookmarkmenu_qbase_slot_new_folder k_bookmarkmenu_super_slot_new_folder

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotNewFolder)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_slot_new_folder(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotOpenFolderInTabs)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_slot_open_folder_in_tabs(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotOpenFolderInTabs)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_slot_open_folder_in_tabs(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_slot_open_folder_in_tabs` instead
///
#define k_bookmarkmenu_qbase_slot_open_folder_in_tabs k_bookmarkmenu_super_slot_open_folder_in_tabs

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotOpenFolderInTabs)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_slot_open_folder_in_tabs(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#clear)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_clear(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_clear(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_clear` instead
///
#define k_bookmarkmenu_qbase_clear k_bookmarkmenu_super_clear

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#clear)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_clear(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#refill)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_refill(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#refill)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_refill(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_refill` instead
///
#define k_bookmarkmenu_qbase_refill k_bookmarkmenu_super_refill

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#refill)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_refill(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#actionForBookmark)
///
/// @param self KBookmarkMenu*
/// @param bm KBookmark*
///
QAction* k_bookmarkmenu_action_for_bookmark(void* self, void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#actionForBookmark)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback QAction* func(KBookmarkMenu* self, KBookmark* bm)
///
void k_bookmarkmenu_on_action_for_bookmark(void* self, QAction* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_action_for_bookmark` instead
///
#define k_bookmarkmenu_qbase_action_for_bookmark k_bookmarkmenu_super_action_for_bookmark

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#actionForBookmark)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
/// @param bm KBookmark*
///
QAction* k_bookmarkmenu_super_action_for_bookmark(void* self, void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#contextMenu)
///
/// @param self KBookmarkMenu*
/// @param action QAction*
///
QMenu* k_bookmarkmenu_context_menu(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#contextMenu)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback QMenu* func(KBookmarkMenu* self, QAction* action)
///
void k_bookmarkmenu_on_context_menu(void* self, QMenu* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_context_menu` instead
///
#define k_bookmarkmenu_qbase_context_menu k_bookmarkmenu_super_context_menu

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#contextMenu)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
/// @param action QAction*
///
QMenu* k_bookmarkmenu_super_context_menu(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addActions)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_add_actions(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addActions)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_add_actions(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_add_actions` instead
///
#define k_bookmarkmenu_qbase_add_actions k_bookmarkmenu_super_add_actions

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addActions)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_add_actions(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#fillBookmarks)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_fill_bookmarks(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#fillBookmarks)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_fill_bookmarks(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_fill_bookmarks` instead
///
#define k_bookmarkmenu_qbase_fill_bookmarks k_bookmarkmenu_super_fill_bookmarks

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#fillBookmarks)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_fill_bookmarks(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmark)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_add_add_bookmark(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmark)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_add_add_bookmark(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_add_add_bookmark` instead
///
#define k_bookmarkmenu_qbase_add_add_bookmark k_bookmarkmenu_super_add_add_bookmark

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmark)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_add_add_bookmark(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmarksList)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_add_add_bookmarks_list(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmarksList)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_add_add_bookmarks_list(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_add_add_bookmarks_list` instead
///
#define k_bookmarkmenu_qbase_add_add_bookmarks_list k_bookmarkmenu_super_add_add_bookmarks_list

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmarksList)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_add_add_bookmarks_list(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addEditBookmarks)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_add_edit_bookmarks(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addEditBookmarks)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_add_edit_bookmarks(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_add_edit_bookmarks` instead
///
#define k_bookmarkmenu_qbase_add_edit_bookmarks k_bookmarkmenu_super_add_edit_bookmarks

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addEditBookmarks)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_add_edit_bookmarks(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addNewFolder)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_add_new_folder(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addNewFolder)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_add_new_folder(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_add_new_folder` instead
///
#define k_bookmarkmenu_qbase_add_new_folder k_bookmarkmenu_super_add_new_folder

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addNewFolder)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_add_new_folder(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addOpenInTabs)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_add_open_in_tabs(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addOpenInTabs)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback void func()
///
void k_bookmarkmenu_on_add_open_in_tabs(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_add_open_in_tabs` instead
///
#define k_bookmarkmenu_qbase_add_open_in_tabs k_bookmarkmenu_super_add_open_in_tabs

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addOpenInTabs)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_super_add_open_in_tabs(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isRoot)
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_is_root(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isRoot)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback bool func()
///
void k_bookmarkmenu_on_is_root(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_is_root` instead
///
#define k_bookmarkmenu_qbase_is_root k_bookmarkmenu_super_is_root

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isRoot)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_super_is_root(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isDirty)
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_is_dirty(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isDirty)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback bool func()
///
void k_bookmarkmenu_on_is_dirty(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_is_dirty` instead
///
#define k_bookmarkmenu_qbase_is_dirty k_bookmarkmenu_super_is_dirty

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isDirty)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_super_is_dirty(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KBookmarkMenu*
///
const char* k_bookmarkmenu_parent_address(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentAddress)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback const char* func()
///
void k_bookmarkmenu_on_parent_address(void* self, const char* (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_parent_address` instead
///
#define k_bookmarkmenu_qbase_parent_address k_bookmarkmenu_super_parent_address

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentAddress)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
const char* k_bookmarkmenu_super_parent_address(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#manager)
///
/// @param self KBookmarkMenu*
///
KBookmarkManager* k_bookmarkmenu_manager(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#manager)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback KBookmarkManager* func()
///
void k_bookmarkmenu_on_manager(void* self, KBookmarkManager* (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_manager` instead
///
#define k_bookmarkmenu_qbase_manager k_bookmarkmenu_super_manager

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#manager)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
KBookmarkManager* k_bookmarkmenu_super_manager(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#owner)
///
/// @param self KBookmarkMenu*
///
KBookmarkOwner* k_bookmarkmenu_owner(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#owner)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback KBookmarkOwner* func()
///
void k_bookmarkmenu_on_owner(void* self, KBookmarkOwner* (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_owner` instead
///
#define k_bookmarkmenu_qbase_owner k_bookmarkmenu_super_owner

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#owner)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
KBookmarkOwner* k_bookmarkmenu_super_owner(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentMenu)
///
/// @param self KBookmarkMenu*
///
QMenu* k_bookmarkmenu_parent_menu(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentMenu)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkMenu*
/// @param callback QMenu* func()
///
void k_bookmarkmenu_on_parent_menu(void* self, QMenu* (*callback)());

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_parent_menu` instead
///
#define k_bookmarkmenu_qbase_parent_menu k_bookmarkmenu_super_parent_menu

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentMenu)
///
/// Base class method implementation
///
/// @param self KBookmarkMenu*
///
QMenu* k_bookmarkmenu_super_parent_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_bookmarkmenu_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_bookmarkmenu_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KBookmarkMenu*
///
const char* k_bookmarkmenu_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KBookmarkMenu*
/// @param name const char*
///
void k_bookmarkmenu_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KBookmarkMenu*
/// @param b bool
///
bool k_bookmarkmenu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KBookmarkMenu*
///
QThread* k_bookmarkmenu_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBookmarkMenu*
/// @param thread QThread*
///
bool k_bookmarkmenu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkMenu*
/// @param interval int
///
int32_t k_bookmarkmenu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkMenu*
/// @param time int64_t of nanoseconds
///
int32_t k_bookmarkmenu_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBookmarkMenu*
/// @param id int
///
void k_bookmarkmenu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBookmarkMenu*
/// @param id enum Qt__TimerId
///
void k_bookmarkmenu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KBookmarkMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_bookmarkmenu_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KBookmarkMenu*
/// @param parent QObject*
///
void k_bookmarkmenu_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KBookmarkMenu*
/// @param filterObj QObject*
///
void k_bookmarkmenu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KBookmarkMenu*
/// @param obj QObject*
///
void k_bookmarkmenu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_bookmarkmenu_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_bookmarkmenu_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KBookmarkMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_bookmarkmenu_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_bookmarkmenu_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_bookmarkmenu_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KBookmarkMenu*
///
bool k_bookmarkmenu_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KBookmarkMenu*
/// @param receiver QObject*
///
bool k_bookmarkmenu_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_bookmarkmenu_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KBookmarkMenu*
/// @param name const char*
/// @param value QVariant*
///
bool k_bookmarkmenu_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KBookmarkMenu*
/// @param name const char*
///
QVariant* k_bookmarkmenu_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KBookmarkMenu*
///
const char** k_bookmarkmenu_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBookmarkMenu*
///
QBindingStorage* k_bookmarkmenu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBookmarkMenu*
///
const QBindingStorage* k_bookmarkmenu_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkMenu*
/// @param callback void func(KBookmarkMenu* self)
///
void k_bookmarkmenu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KBookmarkMenu*
///
QObject* k_bookmarkmenu_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KBookmarkMenu*
/// @param classname const char*
///
bool k_bookmarkmenu_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_bookmarkmenu_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkMenu*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_bookmarkmenu_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_bookmarkmenu_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_bookmarkmenu_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KBookmarkMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_bookmarkmenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KBookmarkMenu*
/// @param signal const char*
///
bool k_bookmarkmenu_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KBookmarkMenu*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_bookmarkmenu_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KBookmarkMenu*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_bookmarkmenu_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KBookmarkMenu*
/// @param receiver QObject*
/// @param member const char*
///
bool k_bookmarkmenu_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkMenu*
/// @param param1 QObject*
///
void k_bookmarkmenu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkMenu*
/// @param callback void func(KBookmarkMenu* self, QObject* param1)
///
void k_bookmarkmenu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param event QEvent*
///
bool k_bookmarkmenu_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_event` instead
///
#define k_bookmarkmenu_qbase_event k_bookmarkmenu_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param event QEvent*
///
bool k_bookmarkmenu_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback bool func(KBookmarkMenu* self, QEvent* event)
///
void k_bookmarkmenu_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_bookmarkmenu_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_event_filter` instead
///
#define k_bookmarkmenu_qbase_event_filter k_bookmarkmenu_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_bookmarkmenu_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback bool func(KBookmarkMenu* self, QObject* watched, QEvent* event)
///
void k_bookmarkmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param event QTimerEvent*
///
void k_bookmarkmenu_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_timer_event` instead
///
#define k_bookmarkmenu_qbase_timer_event k_bookmarkmenu_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param event QTimerEvent*
///
void k_bookmarkmenu_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback void func(KBookmarkMenu* self, QTimerEvent* event)
///
void k_bookmarkmenu_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param event QChildEvent*
///
void k_bookmarkmenu_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_child_event` instead
///
#define k_bookmarkmenu_qbase_child_event k_bookmarkmenu_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param event QChildEvent*
///
void k_bookmarkmenu_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback void func(KBookmarkMenu* self, QChildEvent* event)
///
void k_bookmarkmenu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param event QEvent*
///
void k_bookmarkmenu_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_custom_event` instead
///
#define k_bookmarkmenu_qbase_custom_event k_bookmarkmenu_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param event QEvent*
///
void k_bookmarkmenu_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback void func(KBookmarkMenu* self, QEvent* event)
///
void k_bookmarkmenu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkmenu_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_connect_notify` instead
///
#define k_bookmarkmenu_qbase_connect_notify k_bookmarkmenu_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkmenu_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback void func(KBookmarkMenu* self, QMetaMethod* signal)
///
void k_bookmarkmenu_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkmenu_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_disconnect_notify` instead
///
#define k_bookmarkmenu_qbase_disconnect_notify k_bookmarkmenu_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkmenu_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback void func(KBookmarkMenu* self, QMetaMethod* signal)
///
void k_bookmarkmenu_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
///
QObject* k_bookmarkmenu_sender(void* self);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_sender` instead
///
#define k_bookmarkmenu_qbase_sender k_bookmarkmenu_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
///
QObject* k_bookmarkmenu_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback QObject* func()
///
void k_bookmarkmenu_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
///
int32_t k_bookmarkmenu_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_sender_signal_index` instead
///
#define k_bookmarkmenu_qbase_sender_signal_index k_bookmarkmenu_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
///
int32_t k_bookmarkmenu_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback int32_t func()
///
void k_bookmarkmenu_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param signal const char*
///
int32_t k_bookmarkmenu_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_receivers` instead
///
#define k_bookmarkmenu_qbase_receivers k_bookmarkmenu_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param signal const char*
///
int32_t k_bookmarkmenu_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback int32_t func(KBookmarkMenu* self, const char* signal)
///
void k_bookmarkmenu_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param signal QMetaMethod*
///
bool k_bookmarkmenu_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_bookmarkmenu_super_is_signal_connected` instead
///
#define k_bookmarkmenu_qbase_is_signal_connected k_bookmarkmenu_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param signal QMetaMethod*
///
bool k_bookmarkmenu_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkMenu*
/// @param callback bool func(KBookmarkMenu* self, QMetaMethod* signal)
///
void k_bookmarkmenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KBookmarkMenu*
/// @param callback void func(KBookmarkMenu* self, const char* objectName)
///
void k_bookmarkmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kbookmarkmenu.html#dtor.KBookmarkMenu)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmarkMenu*
///
void k_bookmarkmenu_delete(void* self);

#endif
