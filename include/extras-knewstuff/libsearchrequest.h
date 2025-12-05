#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBSEARCHREQUEST_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBSEARCHREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knscore.html)

/// [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumMetaObject)
///
/// @param param1 enum KNSCore__SortMode
///
const QMetaObject* k_nscore_get_enum_meta_object(int32_t param1);

/// [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum KNSCore__SortMode
///
const char* k_nscore_get_enum_name(int32_t param1);

/// [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumMetaObject)
///
/// @param param1 enum KNSCore__Filter
///
const QMetaObject* k_nscore_get_enum_meta_object2(int32_t param1);

/// [Upstream resources](https://api.kde.org/knscore.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum KNSCore__Filter
///
const char* k_nscore_get_enum_name2(int32_t param1);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html)

/// k_nscore__searchrequest_new constructs a new KNSCore::SearchRequest object.
///
KNSCore__SearchRequest* k_nscore__searchrequest_new();

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html)

/// k_nscore__searchrequest_new2 constructs a new KNSCore::SearchRequest object.
///
/// @param param1 KNSCore__SearchRequest*
///
KNSCore__SearchRequest* k_nscore__searchrequest_new2(void* param1);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html)

/// k_nscore__searchrequest_new3 constructs a new KNSCore::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__SortMode
///
KNSCore__SearchRequest* k_nscore__searchrequest_new3(int32_t sortMode_);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html)

/// k_nscore__searchrequest_new4 constructs a new KNSCore::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__SortMode
/// @param filter_ enum KNSCore__Filter
///
KNSCore__SearchRequest* k_nscore__searchrequest_new4(int32_t sortMode_, int32_t filter_);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html)

/// k_nscore__searchrequest_new5 constructs a new KNSCore::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__SortMode
/// @param filter_ enum KNSCore__Filter
/// @param searchTerm_ const char*
///
KNSCore__SearchRequest* k_nscore__searchrequest_new5(int32_t sortMode_, int32_t filter_, const char* searchTerm_);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html)

/// k_nscore__searchrequest_new6 constructs a new KNSCore::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__SortMode
/// @param filter_ enum KNSCore__Filter
/// @param searchTerm_ const char*
/// @param categories_ const char**
///
KNSCore__SearchRequest* k_nscore__searchrequest_new6(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[static 1]);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html)

/// k_nscore__searchrequest_new7 constructs a new KNSCore::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__SortMode
/// @param filter_ enum KNSCore__Filter
/// @param searchTerm_ const char*
/// @param categories_ const char**
/// @param page_ int
///
KNSCore__SearchRequest* k_nscore__searchrequest_new7(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[static 1], int page_);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html)

/// k_nscore__searchrequest_new8 constructs a new KNSCore::SearchRequest object.
///
/// @param sortMode_ enum KNSCore__SortMode
/// @param filter_ enum KNSCore__Filter
/// @param searchTerm_ const char*
/// @param categories_ const char**
/// @param page_ int
/// @param pageSize_ int
///
KNSCore__SearchRequest* k_nscore__searchrequest_new8(int32_t sortMode_, int32_t filter_, const char* searchTerm_, const char* categories_[static 1], int page_, int pageSize_);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html#sortMode)
///
/// @param self KNSCore__SearchRequest*
///
/// @return enum KNSCore__SortMode
///
int32_t k_nscore__searchrequest_sort_mode(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html#filter)
///
/// @param self KNSCore__SearchRequest*
///
/// @return enum KNSCore__Filter
///
int32_t k_nscore__searchrequest_filter(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html#searchTerm)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__SearchRequest*
///
const char* k_nscore__searchrequest_search_term(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html#categories)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__SearchRequest*
///
const char** k_nscore__searchrequest_categories(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html#page)
///
/// @param self KNSCore__SearchRequest*
///
int32_t k_nscore__searchrequest_page(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html#pageSize)
///
/// @param self KNSCore__SearchRequest*
///
int32_t k_nscore__searchrequest_page_size(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html#nextPage)
///
/// @param self KNSCore__SearchRequest*
///
KNSCore__SearchRequest* k_nscore__searchrequest_next_page(void* self);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__SearchRequest*
///
void k_nscore__searchrequest_delete(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html#public-types)

typedef enum {
    KNSCORE_SORTMODE_NEWEST = 0,
    KNSCORE_SORTMODE_ALPHABETICAL = 1,
    KNSCORE_SORTMODE_RATING = 2,
    KNSCORE_SORTMODE_DOWNLOADS = 3
} KNSCore__SortMode;

/// [Upstream resources](https://api.kde.org/knscore-searchrequest.html#public-types)

typedef enum {
    KNSCORE_FILTER_NONE = 0,
    KNSCORE_FILTER_INSTALLED = 1,
    KNSCORE_FILTER_UPDATES = 2,
    KNSCORE_FILTER_EXACTENTRYID = 3
} KNSCore__Filter;

#endif
