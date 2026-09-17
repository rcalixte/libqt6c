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
/// @param size uintptr_t
/// @param alignment uintptr_t
///
void* q_qmalloc_q_malloc_aligned(uintptr_t size, uintptr_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html#qReallocAligned)
///
/// @param ptr void*
/// @param size uintptr_t
/// @param oldsize uintptr_t
/// @param alignment uintptr_t
///
void* q_qmalloc_q_realloc_aligned(void* ptr, uintptr_t size, uintptr_t oldsize, uintptr_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qmalloc.html#qFreeAligned)
///
/// @param ptr void*
///
void q_qmalloc_q_free_aligned(void* ptr);
#endif
