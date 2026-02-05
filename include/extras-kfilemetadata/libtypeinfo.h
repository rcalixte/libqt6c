#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBTYPEINFO_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBTYPEINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html)

/// k_filemetadata__typeinfo_new constructs a new KFileMetaData::TypeInfo object.
///
KFileMetaData__TypeInfo* k_filemetadata__typeinfo_new();

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html)

/// k_filemetadata__typeinfo_new2 constructs a new KFileMetaData::TypeInfo object.
///
/// @param type enum KFileMetaData__Type__Type
///
KFileMetaData__TypeInfo* k_filemetadata__typeinfo_new2(int32_t type);

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html)

/// k_filemetadata__typeinfo_new3 constructs a new KFileMetaData::TypeInfo object.
///
/// @param ti KFileMetaData__TypeInfo*
///
KFileMetaData__TypeInfo* k_filemetadata__typeinfo_new3(void* ti);

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#operator-eq)
///
/// @param self KFileMetaData__TypeInfo*
/// @param rhs KFileMetaData__TypeInfo*
///
void k_filemetadata__typeinfo_operator_assign(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#operator-eq-eq)
///
/// @param self KFileMetaData__TypeInfo*
/// @param rhs KFileMetaData__TypeInfo*
///
bool k_filemetadata__typeinfo_operator_equal(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#type)
///
/// @param self KFileMetaData__TypeInfo*
///
/// @return enum KFileMetaData__Type__Type
///
int32_t k_filemetadata__typeinfo_type(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__TypeInfo*
///
const char* k_filemetadata__typeinfo_name(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__TypeInfo*
///
const char* k_filemetadata__typeinfo_display_name(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#fromName)
///
/// @param name const char*
///
KFileMetaData__TypeInfo* k_filemetadata__typeinfo_from_name(const char* name);

/// [Upstream resources](https://api.kde.org/kfilemetadata-typeinfo.html#allNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_filemetadata__typeinfo_all_names();

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__TypeInfo*
///
void k_filemetadata__typeinfo_delete(void* self);

#endif
