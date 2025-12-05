#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBCATEGORYMETADATA_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBCATEGORYMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knscore-categorymetadata.html)

/// k_nscore__categorymetadata_new constructs a new KNSCore::CategoryMetadata object.
///
/// @param param1 KNSCore__CategoryMetadata*
///
KNSCore__CategoryMetadata* k_nscore__categorymetadata_new(void* param1);

/// [Upstream resources](https://api.kde.org/knscore-categorymetadata.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__CategoryMetadata*
///
const char* k_nscore__categorymetadata_id(void* self);

/// [Upstream resources](https://api.kde.org/knscore-categorymetadata.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__CategoryMetadata*
///
const char* k_nscore__categorymetadata_name(void* self);

/// [Upstream resources](https://api.kde.org/knscore-categorymetadata.html#displayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__CategoryMetadata*
///
const char* k_nscore__categorymetadata_display_name(void* self);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__CategoryMetadata*
///
void k_nscore__categorymetadata_delete(void* self);

#endif
