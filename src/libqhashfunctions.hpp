#pragma once
#ifndef SRCC_LIBQHASHFUNCTIONS_HPP
#define SRCC_LIBQHASHFUNCTIONS_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QHashSeed QHashSeed;
#endif

QHashSeed* QHashSeed_New(const QHashSeed* other);
QHashSeed* QHashSeed_New2(QHashSeed* other);
QHashSeed* QHashSeed_New3();
QHashSeed* QHashSeed_New4(size_t d);
void QHashSeed_CopyAssign(QHashSeed* self, QHashSeed* other);
void QHashSeed_MoveAssign(QHashSeed* self, QHashSeed* other);
size_t QHashSeed_ToUnsignedLong(const QHashSeed* self);
QHashSeed* QHashSeed_GlobalSeed();
void QHashSeed_SetDeterministicGlobalSeed();
void QHashSeed_ResetRandomGlobalSeed();
void QHashSeed_Delete(QHashSeed* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
