#include "libkshareddatacache.hpp"
#include "libkshareddatacache.h"

KSharedDataCache* k_shareddatacache_new(const char* cacheName, uint32_t defaultCacheSize) {
    return KSharedDataCache_new(qstring(cacheName), defaultCacheSize);
}

KSharedDataCache* k_shareddatacache_new2(const char* cacheName, uint32_t defaultCacheSize, uint32_t expectedItemSize) {
    return KSharedDataCache_new2(qstring(cacheName), defaultCacheSize, expectedItemSize);
}

int32_t k_shareddatacache_eviction_policy(void* self) {
    return KSharedDataCache_EvictionPolicy((KSharedDataCache*)self);
}

void k_shareddatacache_set_eviction_policy(void* self, int32_t newPolicy) {
    KSharedDataCache_SetEvictionPolicy((KSharedDataCache*)self, newPolicy);
}

bool k_shareddatacache_insert(void* self, const char* key, const char* data) {
    return KSharedDataCache_Insert((KSharedDataCache*)self, qstring(key), qstring(data));
}

void k_shareddatacache_clear(void* self) {
    KSharedDataCache_Clear((KSharedDataCache*)self);
}

void k_shareddatacache_delete_cache(const char* cacheName) {
    KSharedDataCache_DeleteCache(qstring(cacheName));
}

bool k_shareddatacache_contains(void* self, const char* key) {
    return KSharedDataCache_Contains((KSharedDataCache*)self, qstring(key));
}

uint32_t k_shareddatacache_total_size(void* self) {
    return KSharedDataCache_TotalSize((KSharedDataCache*)self);
}

uint32_t k_shareddatacache_free_size(void* self) {
    return KSharedDataCache_FreeSize((KSharedDataCache*)self);
}

uint32_t k_shareddatacache_timestamp(void* self) {
    return KSharedDataCache_Timestamp((KSharedDataCache*)self);
}

void k_shareddatacache_set_timestamp(void* self, uint32_t newTimestamp) {
    KSharedDataCache_SetTimestamp((KSharedDataCache*)self, newTimestamp);
}

void k_shareddatacache_delete(void* self) {
    KSharedDataCache_Delete((KSharedDataCache*)(self));
}
