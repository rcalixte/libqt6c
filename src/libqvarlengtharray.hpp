#pragma once
#ifndef SRCC_LIBQVARLENGTHARRAY_HPP
#define SRCC_LIBQVARLENGTHARRAY_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QVLABaseBase QVLABaseBase;
#endif

ptrdiff_t QVLABaseBase_Capacity(const QVLABaseBase* self);
ptrdiff_t QVLABaseBase_Size(const QVLABaseBase* self);
bool QVLABaseBase_Empty(const QVLABaseBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
