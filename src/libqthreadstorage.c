#include "libqthreadstorage.hpp"
#include "libqthreadstorage.h"

QThreadStorageData* q_threadstoragedata_new(void* param1) {
    return QThreadStorageData_new((QThreadStorageData*)param1);
}

void* q_threadstoragedata_get(void* self) {
    return QThreadStorageData_Get((QThreadStorageData*)self);
}

void* q_threadstoragedata_set(void* self, void* p) {
    return QThreadStorageData_Set((QThreadStorageData*)self, p);
}

int32_t q_threadstoragedata_id(void* self) {
    return QThreadStorageData_Id((QThreadStorageData*)self);
}

void q_threadstoragedata_set_id(void* self, int id) {
    QThreadStorageData_SetId((QThreadStorageData*)self, id);
}

void q_threadstoragedata_delete(void* self) {
    QThreadStorageData_Delete((QThreadStorageData*)(self));
}
