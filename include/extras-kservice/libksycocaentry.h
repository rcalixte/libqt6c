#pragma once
#ifndef EXTRAS_KSERVICE_LIBKSYCOCAENTRY_H
#define EXTRAS_KSERVICE_LIBKSYCOCAENTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksycocaentry.html)

/// k_sycocaentry_new constructs a new KSycocaEntry object.
///
KSycocaEntry* k_sycocaentry_new();

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isType)
///
/// @param self const KSycocaEntry*
/// @param t enum KSycocaEntry__KSycocaType
///
bool k_sycocaentry_is_type(const void* self, int32_t t);

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#sycocaType)
///
/// @param self const KSycocaEntry*
///
/// @return enum KSycocaEntry__KSycocaType
///
int32_t k_sycocaentry_sycoca_type(const void* self);

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSycocaEntry*
///
const char* k_sycocaentry_name(const void* self);

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#entryPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSycocaEntry*
///
const char* k_sycocaentry_entry_path(const void* self);

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#storageId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSycocaEntry*
///
const char* k_sycocaentry_storage_id(const void* self);

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
///
/// @param self const KSycocaEntry*
///
bool k_sycocaentry_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
///
/// @param self const KSycocaEntry*
///
bool k_sycocaentry_is_deleted(const void* self);

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#setDeleted)
///
/// @param self KSycocaEntry*
/// @param deleted bool
///
void k_sycocaentry_set_deleted(void* self, bool deleted);

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
///
/// @param self const KSycocaEntry*
///
bool k_sycocaentry_is_separator(const void* self);

/// [Upstream resources](https://api.kde.org/ksycocaentry.html#dtor.KSycocaEntry)
///
/// Delete this object from C++ memory.
///
/// @param self KSycocaEntry*
///
void k_sycocaentry_delete(void* self);

#endif
