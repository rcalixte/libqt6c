#include "libkmemoryinfo.hpp"
#include "libkmemoryinfo.h"

KMemoryInfo* k_memoryinfo_new() {
    return KMemoryInfo_New();
}

KMemoryInfo* k_memoryinfo_new2(const void* other) {
    return KMemoryInfo_New2((KMemoryInfo*)other);
}

void k_memoryinfo_operator_assign(void* self, const void* other) {
    KMemoryInfo_OperatorAssign((KMemoryInfo*)self, (KMemoryInfo*)other);
}

bool k_memoryinfo_operator_equal(const void* self, const void* other) {
    return KMemoryInfo_OperatorEqual((KMemoryInfo*)self, (KMemoryInfo*)other);
}

bool k_memoryinfo_operator_not_equal(const void* self, const void* other) {
    return KMemoryInfo_OperatorNotEqual((KMemoryInfo*)self, (KMemoryInfo*)other);
}

bool k_memoryinfo_is_null(const void* self) {
    return KMemoryInfo_IsNull((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_total_physical(const void* self) {
    return KMemoryInfo_TotalPhysical((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_free_physical(const void* self) {
    return KMemoryInfo_FreePhysical((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_available_physical(const void* self) {
    return KMemoryInfo_AvailablePhysical((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_cached(const void* self) {
    return KMemoryInfo_Cached((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_buffers(const void* self) {
    return KMemoryInfo_Buffers((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_total_swap_file(const void* self) {
    return KMemoryInfo_TotalSwapFile((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_free_swap_file(const void* self) {
    return KMemoryInfo_FreeSwapFile((KMemoryInfo*)self);
}

void k_memoryinfo_delete(void* self) {
    KMemoryInfo_Delete((KMemoryInfo*)(self));
}
