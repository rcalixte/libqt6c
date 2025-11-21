#pragma once
#ifndef SRC_QT6C_LIBQCONTIGUOUSCACHE_H
#define SRC_QT6C_LIBQCONTIGUOUSCACHE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcontiguouscachedata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#alloc-var)
///
/// @param self QContiguousCacheData*
int64_t q_contiguouscachedata_alloc(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#alloc-var)
///
/// @param self QContiguousCacheData*
/// @param alloc int64_t
void q_contiguouscachedata_set_alloc(void* self, int64_t alloc);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#count-var)
///
/// @param self QContiguousCacheData*
int64_t q_contiguouscachedata_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#count-var)
///
/// @param self QContiguousCacheData*
/// @param count int64_t
void q_contiguouscachedata_set_count(void* self, int64_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#start-var)
///
/// @param self QContiguousCacheData*
int64_t q_contiguouscachedata_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#start-var)
///
/// @param self QContiguousCacheData*
/// @param start int64_t
void q_contiguouscachedata_set_start(void* self, int64_t start);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#offset-var)
///
/// @param self QContiguousCacheData*
int64_t q_contiguouscachedata_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#offset-var)
///
/// @param self QContiguousCacheData*
/// @param offset int64_t
void q_contiguouscachedata_set_offset(void* self, int64_t offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#allocateData)
///
/// @param size int64_t
/// @param alignment int64_t
QContiguousCacheData* q_contiguouscachedata_allocate_data(int64_t size, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#freeData)
///
/// @param data QContiguousCacheData*
void q_contiguouscachedata_free_data(void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#dtor.QContiguousCacheData)
///
/// Delete this object from C++ memory.
///
/// @param self QContiguousCacheData*
void q_contiguouscachedata_delete(void* self);

#endif
