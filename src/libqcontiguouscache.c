#include "libqcontiguouscache.hpp"
#include "libqcontiguouscache.h"

int64_t q_contiguouscachedata_alloc(void* self) {
    return QContiguousCacheData_Alloc((QContiguousCacheData*)self);
}

void q_contiguouscachedata_set_alloc(void* self, int64_t alloc) {
    QContiguousCacheData_SetAlloc((QContiguousCacheData*)self, alloc);
}

int64_t q_contiguouscachedata_count(void* self) {
    return QContiguousCacheData_Count((QContiguousCacheData*)self);
}

void q_contiguouscachedata_set_count(void* self, int64_t count) {
    QContiguousCacheData_SetCount((QContiguousCacheData*)self, count);
}

int64_t q_contiguouscachedata_start(void* self) {
    return QContiguousCacheData_Start((QContiguousCacheData*)self);
}

void q_contiguouscachedata_set_start(void* self, int64_t start) {
    QContiguousCacheData_SetStart((QContiguousCacheData*)self, start);
}

int64_t q_contiguouscachedata_offset(void* self) {
    return QContiguousCacheData_Offset((QContiguousCacheData*)self);
}

void q_contiguouscachedata_set_offset(void* self, int64_t offset) {
    QContiguousCacheData_SetOffset((QContiguousCacheData*)self, offset);
}

QContiguousCacheData* q_contiguouscachedata_allocate_data(int64_t size, int64_t alignment) {
    return QContiguousCacheData_AllocateData(size, alignment);
}

void q_contiguouscachedata_free_data(void* data) {
    QContiguousCacheData_FreeData((QContiguousCacheData*)data);
}

void q_contiguouscachedata_delete(void* self) {
    QContiguousCacheData_Delete((QContiguousCacheData*)(self));
}
