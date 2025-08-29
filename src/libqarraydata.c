#include "libqarraydata.hpp"
#include "libqarraydata.h"

int32_t q_arraydata_flags(void* self) {
    return QArrayData_Flags((QArrayData*)self);
}

void q_arraydata_set_flags(void* self, int32_t flags) {
    QArrayData_SetFlags((QArrayData*)self, flags);
}

int64_t q_arraydata_alloc(void* self) {
    return QArrayData_Alloc((QArrayData*)self);
}

void q_arraydata_set_alloc(void* self, int64_t alloc) {
    QArrayData_SetAlloc((QArrayData*)self, alloc);
}

int64_t q_arraydata_allocated_capacity(void* self) {
    return QArrayData_AllocatedCapacity((QArrayData*)self);
}

int64_t q_arraydata_const_allocated_capacity(void* self) {
    return QArrayData_ConstAllocatedCapacity((QArrayData*)self);
}

bool q_arraydata_ref(void* self) {
    return QArrayData_Ref((QArrayData*)self);
}

bool q_arraydata_deref(void* self) {
    return QArrayData_Deref((QArrayData*)self);
}

bool q_arraydata_is_shared(void* self) {
    return QArrayData_IsShared((QArrayData*)self);
}

bool q_arraydata_needs_detach(void* self) {
    return QArrayData_NeedsDetach((QArrayData*)self);
}

int64_t q_arraydata_detach_capacity(void* self, int64_t newSize) {
    return QArrayData_DetachCapacity((QArrayData*)self, newSize);
}

libqt_pair /* tuple of QArrayData* and void* */ q_arraydata_reallocate_unaligned(void* data, void* dataPointer, int64_t objectSize, int64_t newCapacity, int32_t option) {
    return QArrayData_ReallocateUnaligned((QArrayData*)data, dataPointer, objectSize, newCapacity, option);
}

void q_arraydata_deallocate(void* data, int64_t objectSize, int64_t alignment) {
    QArrayData_Deallocate((QArrayData*)data, objectSize, alignment);
}

void q_arraydata_delete(void* self) {
    QArrayData_Delete((QArrayData*)(self));
}
