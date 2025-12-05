#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSHAREDDATACACHE_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSHAREDDATACACHE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kshareddatacache.html)

/// k_shareddatacache_new constructs a new KSharedDataCache object.
///
/// @param cacheName const char*
/// @param defaultCacheSize uint32_t
///
KSharedDataCache* k_shareddatacache_new(const char* cacheName, uint32_t defaultCacheSize);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html)

/// k_shareddatacache_new2 constructs a new KSharedDataCache object.
///
/// @param cacheName const char*
/// @param defaultCacheSize uint32_t
/// @param expectedItemSize uint32_t
///
KSharedDataCache* k_shareddatacache_new2(const char* cacheName, uint32_t defaultCacheSize, uint32_t expectedItemSize);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#evictionPolicy)
///
/// @param self KSharedDataCache*
///
/// @return enum KSharedDataCache__EvictionPolicy
///
int32_t k_shareddatacache_eviction_policy(void* self);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#setEvictionPolicy)
///
/// @param self KSharedDataCache*
/// @param newPolicy enum KSharedDataCache__EvictionPolicy
///
void k_shareddatacache_set_eviction_policy(void* self, int32_t newPolicy);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#insert)
///
/// @param self KSharedDataCache*
/// @param key const char*
/// @param data const char*
///
bool k_shareddatacache_insert(void* self, const char* key, const char* data);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#clear)
///
/// @param self KSharedDataCache*
///
void k_shareddatacache_clear(void* self);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#deleteCache)
///
/// @param cacheName const char*
///
void k_shareddatacache_delete_cache(const char* cacheName);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#contains)
///
/// @param self KSharedDataCache*
/// @param key const char*
///
bool k_shareddatacache_contains(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#totalSize)
///
/// @param self KSharedDataCache*
///
uint32_t k_shareddatacache_total_size(void* self);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#freeSize)
///
/// @param self KSharedDataCache*
///
uint32_t k_shareddatacache_free_size(void* self);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#timestamp)
///
/// @param self KSharedDataCache*
///
uint32_t k_shareddatacache_timestamp(void* self);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#setTimestamp)
///
/// @param self KSharedDataCache*
/// @param newTimestamp uint32_t
///
void k_shareddatacache_set_timestamp(void* self, uint32_t newTimestamp);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#dtor.KSharedDataCache)
///
/// Delete this object from C++ memory.
///
/// @param self KSharedDataCache*
///
void k_shareddatacache_delete(void* self);

/// [Upstream resources](https://api.kde.org/kshareddatacache.html#public-types)

typedef enum {
    KSHAREDDATACACHE_EVICTIONPOLICY_NOEVICTIONPREFERENCE = 0,
    KSHAREDDATACACHE_EVICTIONPOLICY_EVICTLEASTRECENTLYUSED = 1,
    KSHAREDDATACACHE_EVICTIONPOLICY_EVICTLEASTOFTENUSED = 2,
    KSHAREDDATACACHE_EVICTIONPOLICY_EVICTOLDEST = 3
} KSharedDataCache__EvictionPolicy;

#endif
