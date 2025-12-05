#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKFILE_H
#define SRC_EXTRAS_KIO_QT6C_LIBKFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfile.html)

/// k_file_new constructs a new KFile object.
///
/// @param other KFile*
///
KFile* k_file_new(void* other);

/// [Upstream resources](https://api.kde.org/kfile.html)

/// k_file_new2 constructs a new KFile object and invalidates the source KFile object.
///
/// @param other KFile*
///
KFile* k_file_new2(void* other);

/// k_file_copy_assign shallow copies `other` into `self`.
///
/// @param self KFile*
/// @param other KFile*
///
void k_file_copy_assign(void* self, void* other);

/// k_file_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KFile*
/// @param other KFile*
///
void k_file_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kfile.html#isSortByName)
///
/// @param sort flag of enum QDir__SortFlag
///
bool k_file_is_sort_by_name(const int32_t* sort);

/// [Upstream resources](https://api.kde.org/kfile.html#isSortBySize)
///
/// @param sort flag of enum QDir__SortFlag
///
bool k_file_is_sort_by_size(const int32_t* sort);

/// [Upstream resources](https://api.kde.org/kfile.html#isSortByDate)
///
/// @param sort flag of enum QDir__SortFlag
///
bool k_file_is_sort_by_date(const int32_t* sort);

/// [Upstream resources](https://api.kde.org/kfile.html#isSortByType)
///
/// @param sort flag of enum QDir__SortFlag
///
bool k_file_is_sort_by_type(const int32_t* sort);

/// [Upstream resources](https://api.kde.org/kfile.html#isSortDirsFirst)
///
/// @param sort flag of enum QDir__SortFlag
///
bool k_file_is_sort_dirs_first(const int32_t* sort);

/// [Upstream resources](https://api.kde.org/kfile.html#isSortCaseInsensitive)
///
/// @param sort flag of enum QDir__SortFlag
///
bool k_file_is_sort_case_insensitive(const int32_t* sort);

/// [Upstream resources](https://api.kde.org/kfile.html#isDefaultView)
///
/// @param view enum KFile__FileView*
///
bool k_file_is_default_view(int32_t* view);

/// [Upstream resources](https://api.kde.org/kfile.html#isSimpleView)
///
/// @param view enum KFile__FileView*
///
bool k_file_is_simple_view(int32_t* view);

/// [Upstream resources](https://api.kde.org/kfile.html#isDetailView)
///
/// @param view enum KFile__FileView*
///
bool k_file_is_detail_view(int32_t* view);

/// [Upstream resources](https://api.kde.org/kfile.html#isSeparateDirs)
///
/// @param view enum KFile__FileView*
///
bool k_file_is_separate_dirs(int32_t* view);

/// [Upstream resources](https://api.kde.org/kfile.html#isPreviewContents)
///
/// @param view enum KFile__FileView*
///
bool k_file_is_preview_contents(int32_t* view);

/// [Upstream resources](https://api.kde.org/kfile.html#isPreviewInfo)
///
/// @param view enum KFile__FileView*
///
bool k_file_is_preview_info(int32_t* view);

/// [Upstream resources](https://api.kde.org/kfile.html#isTreeView)
///
/// @param view enum KFile__FileView*
///
bool k_file_is_tree_view(int32_t* view);

/// [Upstream resources](https://api.kde.org/kfile.html#isDetailTreeView)
///
/// @param view enum KFile__FileView*
///
bool k_file_is_detail_tree_view(int32_t* view);

/// [Upstream resources](https://api.kde.org/kfile.html#dtor.KFile)
///
/// Delete this object from C++ memory.
///
/// @param self KFile*
///
void k_file_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfile.html#public-types)

typedef enum {
    KFILE_MODE_FILE = 1,
    KFILE_MODE_DIRECTORY = 2,
    KFILE_MODE_FILES = 4,
    KFILE_MODE_EXISTINGONLY = 8,
    KFILE_MODE_LOCALONLY = 16,
    KFILE_MODE_MODEMAX = 65536
} KFile__Mode;

/// [Upstream resources](https://api.kde.org/kfile.html#public-types)

typedef enum {
    KFILE_FILEVIEW_DEFAULT = 0,
    KFILE_FILEVIEW_SIMPLE = 1,
    KFILE_FILEVIEW_DETAIL = 2,
    KFILE_FILEVIEW_SEPARATEDIRS = 4,
    KFILE_FILEVIEW_PREVIEWCONTENTS = 8,
    KFILE_FILEVIEW_PREVIEWINFO = 16,
    KFILE_FILEVIEW_TREE = 32,
    KFILE_FILEVIEW_DETAILTREE = 64,
    KFILE_FILEVIEW_FILEVIEWMAX = 65536
} KFile__FileView;

/// [Upstream resources](https://api.kde.org/kfile.html#public-types)

typedef enum {
    KFILE_SELECTIONMODE_SINGLE = 1,
    KFILE_SELECTIONMODE_MULTI = 2,
    KFILE_SELECTIONMODE_EXTENDED = 4,
    KFILE_SELECTIONMODE_NOSELECTION = 8
} KFile__SelectionMode;

#endif
