#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKMEMORYINFO_H
#define EXTRAS_KCOREADDONS_LIBKMEMORYINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html)

/// k_memoryinfo_new constructs a new KMemoryInfo object.
///
KMemoryInfo* k_memoryinfo_new();

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html)

/// k_memoryinfo_new2 constructs a new KMemoryInfo object.
///
/// @param other KMemoryInfo*
///
KMemoryInfo* k_memoryinfo_new2(const void* other);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-eq)
///
/// @param self KMemoryInfo*
/// @param other KMemoryInfo*
///
void k_memoryinfo_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-eq-eq)
///
/// @param self const KMemoryInfo*
/// @param other KMemoryInfo*
///
bool k_memoryinfo_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-not-eq)
///
/// @param self const KMemoryInfo*
/// @param other KMemoryInfo*
///
bool k_memoryinfo_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#isNull)
///
/// @param self const KMemoryInfo*
///
bool k_memoryinfo_is_null(const void* self);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#totalPhysical)
///
/// @param self const KMemoryInfo*
///
uint64_t k_memoryinfo_total_physical(const void* self);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#freePhysical)
///
/// @param self const KMemoryInfo*
///
uint64_t k_memoryinfo_free_physical(const void* self);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#availablePhysical)
///
/// @param self const KMemoryInfo*
///
uint64_t k_memoryinfo_available_physical(const void* self);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#cached)
///
/// @param self const KMemoryInfo*
///
uint64_t k_memoryinfo_cached(const void* self);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#buffers)
///
/// @param self const KMemoryInfo*
///
uint64_t k_memoryinfo_buffers(const void* self);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#totalSwapFile)
///
/// @param self const KMemoryInfo*
///
uint64_t k_memoryinfo_total_swap_file(const void* self);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#freeSwapFile)
///
/// @param self const KMemoryInfo*
///
uint64_t k_memoryinfo_free_swap_file(const void* self);

/// [Upstream resources](https://api.kde.org/kmemoryinfo.html#dtor.KMemoryInfo)
///
/// Delete this object from C++ memory.
///
/// @param self KMemoryInfo*
///
void k_memoryinfo_delete(void* self);

#endif
