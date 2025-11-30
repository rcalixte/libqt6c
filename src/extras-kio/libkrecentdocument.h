#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKRECENTDOCUMENT_H
#define SRC_EXTRAS_KIO_QT6C_LIBKRECENTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/krecentdocument.html

/// k_recentdocument_new constructs a new KRecentDocument object.
///
/// @param other KRecentDocument*
KRecentDocument* k_recentdocument_new(void* other);

/// k_recentdocument_new2 constructs a new KRecentDocument object and invalidates the source KRecentDocument object.
///
/// @param other KRecentDocument*
KRecentDocument* k_recentdocument_new2(void* other);

/// k_recentdocument_copy_assign shallow copies `other` into `self`.
///
/// @param self KRecentDocument*
/// @param other KRecentDocument*
void k_recentdocument_copy_assign(void* self, void* other);

/// k_recentdocument_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KRecentDocument*
/// @param other KRecentDocument*
void k_recentdocument_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/krecentdocument.html#recentUrls)
///
libqt_list /* of QUrl* */ k_recentdocument_recent_urls();

/// [Upstream resources](https://api.kde.org/krecentdocument.html#add)
///
/// @param url QUrl*
void k_recentdocument_add(void* url);

/// [Upstream resources](https://api.kde.org/krecentdocument.html#add)
///
/// @param url QUrl*
/// @param groups libqt_list /* of enum KRecentDocument__RecentDocumentGroup */
void k_recentdocument_add2(void* url, libqt_list groups);

/// [Upstream resources](https://api.kde.org/krecentdocument.html#add)
///
/// @param url QUrl*
/// @param desktopEntryName const char*
void k_recentdocument_add3(void* url, const char* desktopEntryName);

/// [Upstream resources](https://api.kde.org/krecentdocument.html#add)
///
/// @param url QUrl*
/// @param desktopEntryName const char*
/// @param groups libqt_list /* of enum KRecentDocument__RecentDocumentGroup */
void k_recentdocument_add4(void* url, const char* desktopEntryName, libqt_list groups);

/// [Upstream resources](https://api.kde.org/krecentdocument.html#removeFile)
///
/// @param url QUrl*
void k_recentdocument_remove_file(void* url);

/// [Upstream resources](https://api.kde.org/krecentdocument.html#removeApplication)
///
/// @param desktopEntryName const char*
void k_recentdocument_remove_application(const char* desktopEntryName);

/// [Upstream resources](https://api.kde.org/krecentdocument.html#removeBookmarksModifiedSince)
///
/// @param since QDateTime*
void k_recentdocument_remove_bookmarks_modified_since(void* since);

/// [Upstream resources](https://api.kde.org/krecentdocument.html#clear)
///
void k_recentdocument_clear();

/// [Upstream resources](https://api.kde.org/krecentdocument.html#maximumItems)
///
int32_t k_recentdocument_maximum_items();

/// [Upstream resources](https://api.kde.org/krecentdocument.html#dtor.KRecentDocument)
///
/// Delete this object from C++ memory.
///
/// @param self KRecentDocument*
void k_recentdocument_delete(void* self);

/// https://api.kde.org/krecentdocument.html#types

typedef enum {
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_DEVELOPMENT = 0,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_OFFICE = 1,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_DATABASE = 2,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_EMAIL = 3,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_PRESENTATION = 4,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_SPREADSHEET = 5,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_WORDPROCESSOR = 6,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_GRAPHICS = 7,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_TEXTEDITOR = 8,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_VIEWER = 9,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_ARCHIVE = 10,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_MULTIMEDIA = 11,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_AUDIO = 12,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_VIDEO = 13,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_PHOTO = 14,
    KRECENTDOCUMENT_RECENTDOCUMENTGROUP_APPLICATION = 15
} KRecentDocument__RecentDocumentGroup;

#endif
