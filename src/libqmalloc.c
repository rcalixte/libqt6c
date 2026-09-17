#include "libqmalloc.hpp"
#include "libqmalloc.h"

void* q_qmalloc_q_malloc_aligned(uintptr_t size, uintptr_t alignment) {
    return qmalloc_QMallocAligned(size, alignment);
}

void* q_qmalloc_q_realloc_aligned(void* ptr, uintptr_t size, uintptr_t oldsize, uintptr_t alignment) {
    return qmalloc_QReallocAligned(ptr, size, oldsize, alignment);
}

void q_qmalloc_q_free_aligned(void* ptr) {
    qmalloc_QFreeAligned(ptr);
}
