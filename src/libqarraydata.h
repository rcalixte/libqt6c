#pragma once
#ifndef SRCQT6C_LIBQARRAYDATA_H
#define SRCQT6C_LIBQARRAYDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qarraydata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#allocatedCapacity)
///
/// @param self QArrayData*
int64_t q_arraydata_allocated_capacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#constAllocatedCapacity)
///
/// @param self QArrayData*
int64_t q_arraydata_const_allocated_capacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#ref)
///
/// @param self QArrayData*
bool q_arraydata_ref(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#deref)
///
/// @param self QArrayData*
bool q_arraydata_deref(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#isShared)
///
/// @param self QArrayData*
bool q_arraydata_is_shared(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#needsDetach)
///
/// @param self QArrayData*
bool q_arraydata_needs_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#detachCapacity)
///
/// @param self QArrayData*
/// @param newSize int64_t
int64_t q_arraydata_detach_capacity(void* self, int64_t newSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#reallocateUnaligned)
///
/// @param data QArrayData*
/// @param dataPointer void*
/// @param objectSize int64_t
/// @param newCapacity int64_t
/// @param option enum QArrayData__AllocationOption
libqt_pair /* tuple of QArrayData* and void* */ q_arraydata_reallocate_unaligned(void* data, void* dataPointer, int64_t objectSize, int64_t newCapacity, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#deallocate)
///
/// @param data QArrayData*
/// @param objectSize int64_t
/// @param alignment int64_t
void q_arraydata_deallocate(void* data, int64_t objectSize, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qarraydata.html#dtor.QArrayData)
///
/// Delete this object from C++ memory.
///
/// @param self QArrayData*
void q_arraydata_delete(void* self);

/// https://doc.qt.io/qt-6/qarraydata.html#types

typedef enum {
    QARRAYDATA_ALLOCATIONOPTION_GROW = 0,
    QARRAYDATA_ALLOCATIONOPTION_KEEPSIZE = 1
} QArrayData__AllocationOption;

typedef enum {
    QARRAYDATA_GROWTHPOSITION_GROWSATEND = 0,
    QARRAYDATA_GROWTHPOSITION_GROWSATBEGINNING = 1
} QArrayData__GrowthPosition;

typedef enum {
    QARRAYDATA_ARRAYOPTION_ARRAYOPTIONDEFAULT = 0,
    QARRAYDATA_ARRAYOPTION_CAPACITYRESERVED = 1
} QArrayData__ArrayOption;

typedef enum {
    QTPRIVATE_QCONTAINERIMPLHELPER_CUTRESULT_NULL = 0,
    QTPRIVATE_QCONTAINERIMPLHELPER_CUTRESULT_EMPTY = 1,
    QTPRIVATE_QCONTAINERIMPLHELPER_CUTRESULT_FULL = 2,
    QTPRIVATE_QCONTAINERIMPLHELPER_CUTRESULT_SUBSET = 3
} QtPrivate__QContainerImplHelper__CutResult;

#endif
