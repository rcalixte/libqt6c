#include "libkmemoryinfo.hpp"
#include "libkmemoryinfo.h"

KMemoryInfo* k_memoryinfo_new() {
    return KMemoryInfo_new();
}

KMemoryInfo* k_memoryinfo_new2(void* other) {
    return KMemoryInfo_new2((KMemoryInfo*)other);
}

void k_memoryinfo_operator_assign(void* self, void* other) {
    KMemoryInfo_OperatorAssign((KMemoryInfo*)self, (KMemoryInfo*)other);
}

bool k_memoryinfo_operator_equal(void* self, void* other) {
    return KMemoryInfo_OperatorEqual((KMemoryInfo*)self, (KMemoryInfo*)other);
}

bool k_memoryinfo_operator_not_equal(void* self, void* other) {
    return KMemoryInfo_OperatorNotEqual((KMemoryInfo*)self, (KMemoryInfo*)other);
}

bool k_memoryinfo_is_null(void* self) {
    return KMemoryInfo_IsNull((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_total_physical(void* self) {
    return KMemoryInfo_TotalPhysical((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_free_physical(void* self) {
    return KMemoryInfo_FreePhysical((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_available_physical(void* self) {
    return KMemoryInfo_AvailablePhysical((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_cached(void* self) {
    return KMemoryInfo_Cached((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_buffers(void* self) {
    return KMemoryInfo_Buffers((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_total_swap_file(void* self) {
    return KMemoryInfo_TotalSwapFile((KMemoryInfo*)self);
}

uint64_t k_memoryinfo_free_swap_file(void* self) {
    return KMemoryInfo_FreeSwapFile((KMemoryInfo*)self);
}

void k_memoryinfo_delete(void* self) {
    KMemoryInfo_Delete((KMemoryInfo*)(self));
}
