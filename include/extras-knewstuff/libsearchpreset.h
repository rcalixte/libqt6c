#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBSEARCHPRESET_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBSEARCHPRESET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knscore-searchpreset.html)

/// k_nscore__searchpreset_new constructs a new KNSCore::SearchPreset object.
///
/// @param param1 KNSCore__SearchPreset*
///
KNSCore__SearchPreset* k_nscore__searchpreset_new(void* param1);

/// [Upstream resources](https://api.kde.org/knscore-searchpreset.html#request)
///
/// @param self KNSCore__SearchPreset*
///
KNSCore__SearchRequest* k_nscore__searchpreset_request(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchpreset.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNSCore__SearchPreset*
///
const char* k_nscore__searchpreset_display_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchpreset.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNSCore__SearchPreset*
///
const char* k_nscore__searchpreset_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchpreset.html#type)
///
/// @param self KNSCore__SearchPreset*
///
/// @return enum KNSCore__SearchPreset__Type
///
int32_t k_nscore__searchpreset_type(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchpreset.html#providerId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNSCore__SearchPreset*
///
const char* k_nscore__searchpreset_provider_id(void* self);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__SearchPreset*
///
void k_nscore__searchpreset_delete(void* self);

/// [Upstream resources](https://api.kde.org/knscore-searchpreset.html#public-types)

typedef enum {
    KNSCORE_SEARCHPRESET_TYPE_NOPRESETTYPE = 0,
    KNSCORE_SEARCHPRESET_TYPE_GOBACK = 1,
    KNSCORE_SEARCHPRESET_TYPE_ROOT = 2,
    KNSCORE_SEARCHPRESET_TYPE_START = 3,
    KNSCORE_SEARCHPRESET_TYPE_POPULAR = 4,
    KNSCORE_SEARCHPRESET_TYPE_FEATURED = 5,
    KNSCORE_SEARCHPRESET_TYPE_RECOMMENDED = 6,
    KNSCORE_SEARCHPRESET_TYPE_SHELF = 7,
    KNSCORE_SEARCHPRESET_TYPE_SUBSCRIPTION = 8,
    KNSCORE_SEARCHPRESET_TYPE_NEW = 9,
    KNSCORE_SEARCHPRESET_TYPE_FOLDERUP = 10,
    KNSCORE_SEARCHPRESET_TYPE_ALLENTRIES = 11
} KNSCore__SearchPreset__Type;

#endif
