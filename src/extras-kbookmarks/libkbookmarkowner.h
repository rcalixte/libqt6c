#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKS_QT6C_LIBKBOOKMARKOWNER_H
#define SRC_EXTRAS_KBOOKMARKS_QT6C_LIBKBOOKMARKOWNER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kbookmarkowner.html

/// k_bookmarkowner_new constructs a new KBookmarkOwner object.
///
KBookmarkOwner* k_bookmarkowner_new();

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkOwner*
const char* k_bookmarkowner_current_title(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback const char* func()
void k_bookmarkowner_on_current_title(void* self, const char* (*callback)());

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
const char* k_bookmarkowner_qbase_current_title(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
///
/// @param self KBookmarkOwner*
QUrl* k_bookmarkowner_current_url(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback QUrl* func()
void k_bookmarkowner_on_current_url(void* self, QUrl* (*callback)());

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
QUrl* k_bookmarkowner_qbase_current_url(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkOwner*
const char* k_bookmarkowner_current_icon(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback const char* func()
void k_bookmarkowner_on_current_icon(void* self, const char* (*callback)());

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
const char* k_bookmarkowner_qbase_current_icon(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
///
/// @param self KBookmarkOwner*
bool k_bookmarkowner_supports_tabs(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback bool func()
void k_bookmarkowner_on_supports_tabs(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
bool k_bookmarkowner_qbase_supports_tabs(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
///
/// @param self KBookmarkOwner*
libqt_list /* of KBookmarkOwner__FutureBookmark* */ k_bookmarkowner_current_bookmark_list(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback KBookmarkOwner__FutureBookmark** func()
void k_bookmarkowner_on_current_bookmark_list(void* self, KBookmarkOwner__FutureBookmark** (*callback)());

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
libqt_list /* of KBookmarkOwner__FutureBookmark* */ k_bookmarkowner_qbase_current_bookmark_list(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
///
/// @param self KBookmarkOwner*
/// @param option enum KBookmarkOwner__BookmarkOption
bool k_bookmarkowner_enable_option(void* self, int32_t option);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback bool func(KBookmarkOwner* self, enum KBookmarkOwner__BookmarkOption option)
void k_bookmarkowner_on_enable_option(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
/// @param option enum KBookmarkOwner__BookmarkOption
bool k_bookmarkowner_qbase_enable_option(void* self, int32_t option);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openBookmark)
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
/// @param mb flag of enum Qt__MouseButton
/// @param km flag of enum Qt__KeyboardModifier
void k_bookmarkowner_open_bookmark(void* self, void* bm, int64_t mb, int64_t km);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openBookmark)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback void func(KBookmarkOwner* self, KBookmark* bm, flag of enum Qt__MouseButton mb, flag of enum Qt__KeyboardModifier km)
void k_bookmarkowner_on_open_bookmark(void* self, void (*callback)(void*, void*, int64_t, int64_t));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openBookmark)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
/// @param mb flag of enum Qt__MouseButton
/// @param km flag of enum Qt__KeyboardModifier
void k_bookmarkowner_qbase_open_bookmark(void* self, void* bm, int64_t mb, int64_t km);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
///
/// @param self KBookmarkOwner*
/// @param bm KBookmarkGroup*
void k_bookmarkowner_open_folderin_tabs(void* self, void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback void func(KBookmarkOwner* self, KBookmarkGroup* bm)
void k_bookmarkowner_on_open_folderin_tabs(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
/// @param bm KBookmarkGroup*
void k_bookmarkowner_qbase_open_folderin_tabs(void* self, void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
void k_bookmarkowner_open_in_new_tab(void* self, void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback void func(KBookmarkOwner* self, KBookmark* bm)
void k_bookmarkowner_on_open_in_new_tab(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
void k_bookmarkowner_qbase_open_in_new_tab(void* self, void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
void k_bookmarkowner_open_in_new_window(void* self, void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback void func(KBookmarkOwner* self, KBookmark* bm)
void k_bookmarkowner_on_open_in_new_window(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
void k_bookmarkowner_qbase_open_in_new_window(void* self, void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#dtor.KBookmarkOwner)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmarkOwner*
void k_bookmarkowner_delete(void* self);

/// https://api.kde.org/kbookmarkowner-futurebookmark.html

/// k_bookmarkowner__futurebookmark_new constructs a new KBookmarkOwner::FutureBookmark object.
///
/// @param title const char*
/// @param url QUrl*
/// @param icon const char*
KBookmarkOwner__FutureBookmark* k_bookmarkowner__futurebookmark_new(const char* title, void* url, const char* icon);

/// k_bookmarkowner__futurebookmark_new2 constructs a new KBookmarkOwner::FutureBookmark object.
///
/// @param other KBookmarkOwner__FutureBookmark*
KBookmarkOwner__FutureBookmark* k_bookmarkowner__futurebookmark_new2(void* other);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#operator-eq)
///
/// @param self KBookmarkOwner__FutureBookmark*
/// @param other KBookmarkOwner__FutureBookmark*
void k_bookmarkowner__futurebookmark_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkOwner__FutureBookmark*
const char* k_bookmarkowner__futurebookmark_title(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#url)
///
/// @param self KBookmarkOwner__FutureBookmark*
QUrl* k_bookmarkowner__futurebookmark_url(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#icon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkOwner__FutureBookmark*
const char* k_bookmarkowner__futurebookmark_icon(void* self);

/// Delete this object from C++ memory.
///
/// @param self KBookmarkOwner__FutureBookmark*
void k_bookmarkowner__futurebookmark_delete(void* self);

/// https://api.kde.org/kbookmarkowner.html#types

typedef enum {
    KBOOKMARKOWNER_BOOKMARKOPTION_SHOWADDBOOKMARK = 0,
    KBOOKMARKOWNER_BOOKMARKOPTION_SHOWEDITBOOKMARK = 1
} KBookmarkOwner__BookmarkOption;

#endif
