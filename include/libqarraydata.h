#pragma once
#ifndef SRC_QT6C_LIBQARRAYDATA_H
#define SRC_QT6C_LIBQARRAYDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#public-types)

typedef enum {
    QARRAYDATA_ALLOCATIONOPTION_GROW = 0,
    QARRAYDATA_ALLOCATIONOPTION_KEEPSIZE = 1
} QArrayData__AllocationOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#public-types)

typedef enum {
    QARRAYDATA_GROWTHPOSITION_GROWSATEND = 0,
    QARRAYDATA_GROWTHPOSITION_GROWSATBEGINNING = 1
} QArrayData__GrowthPosition;

/// [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#public-types)

typedef enum {
    QARRAYDATA_ARRAYOPTION_ARRAYOPTIONDEFAULT = 0,
    QARRAYDATA_ARRAYOPTION_CAPACITYRESERVED = 1
} QArrayData__ArrayOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#public-types)

typedef enum {
    QTPRIVATE_QCONTAINERIMPLHELPER_CUTRESULT_NULL = 0,
    QTPRIVATE_QCONTAINERIMPLHELPER_CUTRESULT_EMPTY = 1,
    QTPRIVATE_QCONTAINERIMPLHELPER_CUTRESULT_FULL = 2,
    QTPRIVATE_QCONTAINERIMPLHELPER_CUTRESULT_SUBSET = 3
} QtPrivate__QContainerImplHelper__CutResult;

#endif
