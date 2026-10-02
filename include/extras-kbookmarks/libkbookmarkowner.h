#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARKOWNER_H
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARKOWNER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html)

/// k_bookmarkowner_new constructs a new KBookmarkOwner object.
///
KBookmarkOwner* k_bookmarkowner_new();

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkOwner*
///
const char* k_bookmarkowner_current_title(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback const char* func(const KBookmarkOwner* self)
///
void k_bookmarkowner_on_current_title(void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
///
/// Base class method implementation
///
/// @param self const KBookmarkOwner*
///
const char* k_bookmarkowner_super_current_title(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
///
/// @param self const KBookmarkOwner*
///
QUrl* k_bookmarkowner_current_url(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback QUrl* func(const KBookmarkOwner* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_bookmarkowner_on_current_url(void* self, QUrl* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
///
/// Base class method implementation
///
/// @param self const KBookmarkOwner*
///
QUrl* k_bookmarkowner_super_current_url(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkOwner*
///
const char* k_bookmarkowner_current_icon(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback const char* func(const KBookmarkOwner* self)
///
void k_bookmarkowner_on_current_icon(void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
///
/// Base class method implementation
///
/// @param self const KBookmarkOwner*
///
const char* k_bookmarkowner_super_current_icon(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
///
/// @param self const KBookmarkOwner*
///
bool k_bookmarkowner_supports_tabs(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback bool func(const KBookmarkOwner* self)
///
void k_bookmarkowner_on_supports_tabs(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
///
/// Base class method implementation
///
/// @param self const KBookmarkOwner*
///
bool k_bookmarkowner_super_supports_tabs(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
///
/// @param self const KBookmarkOwner*
///
/// @return libqt_list of KBookmarkOwner__FutureBookmark*
///
libqt_list k_bookmarkowner_current_bookmark_list(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback libqt_list of KBookmarkOwner__FutureBookmark* func(const KBookmarkOwner* self)
///
void k_bookmarkowner_on_current_bookmark_list(void* self, libqt_list (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
///
/// Base class method implementation
///
/// @param self const KBookmarkOwner*
///
/// @return libqt_list of KBookmarkOwner__FutureBookmark*
///
libqt_list k_bookmarkowner_super_current_bookmark_list(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
///
/// @param self const KBookmarkOwner*
/// @param option enum KBookmarkOwner__BookmarkOption
///
bool k_bookmarkowner_enable_option(const void* self, int32_t option);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback bool func(const KBookmarkOwner* self, enum KBookmarkOwner__BookmarkOption option)
///
void k_bookmarkowner_on_enable_option(void* self, bool (*callback)(const void*, int32_t));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
///
/// Base class method implementation
///
/// @param self const KBookmarkOwner*
/// @param option enum KBookmarkOwner__BookmarkOption
///
bool k_bookmarkowner_super_enable_option(const void* self, int32_t option);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openBookmark)
///
/// @warning This method must be implemented with `k_bookmarkowner_on_open_bookmark` before it can be called.
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
/// @param mb flag of enum Qt__MouseButton
/// @param km flag of enum Qt__KeyboardModifier
///
void k_bookmarkowner_open_bookmark(void* self, const void* bm, int32_t mb, int32_t km);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openBookmark)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback void func(KBookmarkOwner* self, KBookmark* bm, flag of enum Qt__MouseButton mb, flag of enum Qt__KeyboardModifier km)
///
void k_bookmarkowner_on_open_bookmark(void* self, void (*callback)(void*, const void*, int32_t, int32_t));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
///
/// @param self KBookmarkOwner*
/// @param bm KBookmarkGroup*
///
void k_bookmarkowner_open_folderin_tabs(void* self, const void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback void func(KBookmarkOwner* self, KBookmarkGroup* bm)
///
void k_bookmarkowner_on_open_folderin_tabs(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
/// @param bm KBookmarkGroup*
///
void k_bookmarkowner_super_open_folderin_tabs(void* self, const void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
///
void k_bookmarkowner_open_in_new_tab(void* self, const void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback void func(KBookmarkOwner* self, KBookmark* bm)
///
void k_bookmarkowner_on_open_in_new_tab(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
///
void k_bookmarkowner_super_open_in_new_tab(void* self, const void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
///
void k_bookmarkowner_open_in_new_window(void* self, const void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkOwner*
/// @param callback void func(KBookmarkOwner* self, KBookmark* bm)
///
void k_bookmarkowner_on_open_in_new_window(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
///
/// Base class method implementation
///
/// @param self KBookmarkOwner*
/// @param bm KBookmark*
///
void k_bookmarkowner_super_open_in_new_window(void* self, const void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#dtor.KBookmarkOwner)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmarkOwner*
///
void k_bookmarkowner_delete(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html)

/// k_bookmarkowner__futurebookmark_new constructs a new KBookmarkOwner::FutureBookmark object.
///
/// @param title const char*
/// @param url QUrl*
/// @param icon const char*
///
KBookmarkOwner__FutureBookmark* k_bookmarkowner__futurebookmark_new(const char* title, const void* url, const char* icon);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html)

/// k_bookmarkowner__futurebookmark_new2 constructs a new KBookmarkOwner::FutureBookmark object.
///
/// @param other KBookmarkOwner__FutureBookmark*
///
KBookmarkOwner__FutureBookmark* k_bookmarkowner__futurebookmark_new2(const void* other);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#operator-eq)
///
/// @param self KBookmarkOwner__FutureBookmark*
/// @param other KBookmarkOwner__FutureBookmark*
///
void k_bookmarkowner__futurebookmark_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkOwner__FutureBookmark*
///
const char* k_bookmarkowner__futurebookmark_title(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#url)
///
/// @param self const KBookmarkOwner__FutureBookmark*
///
QUrl* k_bookmarkowner__futurebookmark_url(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkOwner__FutureBookmark*
///
const char* k_bookmarkowner__futurebookmark_icon(const void* self);

/// Delete this object from C++ memory.
///
/// @param self KBookmarkOwner__FutureBookmark*
///
void k_bookmarkowner__futurebookmark_delete(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkowner.html#public-types)

typedef enum {
    KBOOKMARKOWNER_BOOKMARKOPTION_SHOWADDBOOKMARK = 0,
    KBOOKMARKOWNER_BOOKMARKOPTION_SHOWEDITBOOKMARK = 1
} KBookmarkOwner__BookmarkOption;

#endif
