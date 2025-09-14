#pragma once
#ifndef SRC_EXTRAS_KSERVICEQT6C_LIBKSYCOCAENTRY_H
#define SRC_EXTRAS_KSERVICEQT6C_LIBKSYCOCAENTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksycocaentry.html

/// k_sycocaentry_new constructs a new KSycocaEntry object.
///
KSycocaEntry* k_sycocaentry_new();

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#isType)
///
/// @param self KSycocaEntry*
/// @param t enum KSycocaEntry__KSycocaType
bool k_sycocaentry_is_type(void* self, int32_t t);

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#sycocaType)
///
/// @param self KSycocaEntry*
///
/// @return enum KSycocaEntry__KSycocaType
int32_t k_sycocaentry_sycoca_type(void* self);

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSycocaEntry*
const char* k_sycocaentry_name(void* self);

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#entryPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSycocaEntry*
const char* k_sycocaentry_entry_path(void* self);

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#storageId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSycocaEntry*
const char* k_sycocaentry_storage_id(void* self);

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#isValid)
///
/// @param self KSycocaEntry*
bool k_sycocaentry_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#isDeleted)
///
/// @param self KSycocaEntry*
bool k_sycocaentry_is_deleted(void* self);

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#setDeleted)
///
/// @param self KSycocaEntry*
/// @param deleted bool
void k_sycocaentry_set_deleted(void* self, bool deleted);

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#isSeparator)
///
/// @param self KSycocaEntry*
bool k_sycocaentry_is_separator(void* self);

/// [Qt documentation](https://api.kde.org/ksycocaentry.html#dtor.KSycocaEntry)
///
/// Delete this object from C++ memory.
///
/// @param self KSycocaEntry*
void k_sycocaentry_delete(void* self);

#endif
