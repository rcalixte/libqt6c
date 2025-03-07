#include "libqcontiguouscache.hpp"
#include "libqcontiguouscache.h"

/// https://doc.qt.io/qt-6/qcontiguouscachedata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#allocateData)
///
/// ``` int64_t size, int64_t alignment ```
QContiguousCacheData* q_contiguouscachedata_allocate_data(int64_t size, int64_t alignment) {
    return QContiguousCacheData_AllocateData(size, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#freeData)
///
/// ``` QContiguousCacheData* data ```
void q_contiguouscachedata_free_data(void* data) {
    QContiguousCacheData_FreeData((QContiguousCacheData*)data);
}

/// Delete this object from C++ memory.
///
/// ``` QContiguousCacheData* self ```
void q_contiguouscachedata_delete(void* self) {
    QContiguousCacheData_Delete((QContiguousCacheData*)(self));
}