#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKMEMORYINFO_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKMEMORYINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kmemoryinfo.html

/// k_memoryinfo_new constructs a new KMemoryInfo object.
///
KMemoryInfo* k_memoryinfo_new();

/// k_memoryinfo_new2 constructs a new KMemoryInfo object.
///
/// @param other KMemoryInfo*
KMemoryInfo* k_memoryinfo_new2(void* other);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#operator-eq)
///
/// @param self KMemoryInfo*
/// @param other KMemoryInfo*
void k_memoryinfo_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#operator-eq-eq)
///
/// @param self KMemoryInfo*
/// @param other KMemoryInfo*
bool k_memoryinfo_operator_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#operator-not-eq)
///
/// @param self KMemoryInfo*
/// @param other KMemoryInfo*
bool k_memoryinfo_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#isNull)
///
/// @param self KMemoryInfo*
bool k_memoryinfo_is_null(void* self);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#totalPhysical)
///
/// @param self KMemoryInfo*
uint64_t k_memoryinfo_total_physical(void* self);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#freePhysical)
///
/// @param self KMemoryInfo*
uint64_t k_memoryinfo_free_physical(void* self);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#availablePhysical)
///
/// @param self KMemoryInfo*
uint64_t k_memoryinfo_available_physical(void* self);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#cached)
///
/// @param self KMemoryInfo*
uint64_t k_memoryinfo_cached(void* self);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#buffers)
///
/// @param self KMemoryInfo*
uint64_t k_memoryinfo_buffers(void* self);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#totalSwapFile)
///
/// @param self KMemoryInfo*
uint64_t k_memoryinfo_total_swap_file(void* self);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#freeSwapFile)
///
/// @param self KMemoryInfo*
uint64_t k_memoryinfo_free_swap_file(void* self);

/// [Qt documentation](https://api.kde.org/kmemoryinfo.html#dtor.KMemoryInfo)
///
/// Delete this object from C++ memory.
///
/// @param self KMemoryInfo*
void k_memoryinfo_delete(void* self);

#endif
