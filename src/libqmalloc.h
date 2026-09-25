#pragma once
#ifndef LIBQMALLOC_H
#define LIBQMALLOC_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html#qMallocAligned)
///
/// @param size size_t
/// @param alignment size_t
///
void* q_qmalloc_q_malloc_aligned(size_t size, size_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html#qReallocAligned)
///
/// @param ptr void*
/// @param size size_t
/// @param oldsize size_t
/// @param alignment size_t
///
void* q_qmalloc_q_realloc_aligned(void* ptr, size_t size, size_t oldsize, size_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html#qFreeAligned)
///
/// @param ptr void*
///
void q_qmalloc_q_free_aligned(void* ptr);
#endif
