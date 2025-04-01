#include "libqcontiguouscache.hpp"
#include "libqcontiguouscache.h"

QContiguousCacheData* q_contiguouscachedata_allocate_data(int64_t size, int64_t alignment) {
    return QContiguousCacheData_AllocateData(size, alignment);
}

void q_contiguouscachedata_free_data(void* data) {
    QContiguousCacheData_FreeData((QContiguousCacheData*)data);
}

void q_contiguouscachedata_delete(void* self) {
    QContiguousCacheData_Delete((QContiguousCacheData*)(self));
}
