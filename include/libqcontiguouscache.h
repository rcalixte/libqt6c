#pragma once
#ifndef SRCQT6C_LIBQCONTIGUOUSCACHE_H
#define SRCQT6C_LIBQCONTIGUOUSCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcontiguouscachedata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#allocateData)
///
/// ``` int64_t size, int64_t alignment ```
QContiguousCacheData* q_contiguouscachedata_allocate_data(int64_t size, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#freeData)
///
/// ``` QContiguousCacheData* data ```
void q_contiguouscachedata_free_data(void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#dtor.QContiguousCacheData)
///
/// Delete this object from C++ memory.
///
/// ``` QContiguousCacheData* self ```
void q_contiguouscachedata_delete(void* self);

#endif
