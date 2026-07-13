#pragma once
#ifndef SRCC_LIBQSHAREDDATA_HPP
#define SRCC_LIBQSHAREDDATA_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAdoptSharedDataTag QAdoptSharedDataTag;
typedef struct QSharedData QSharedData;
#endif

QSharedData* QSharedData_New();
QSharedData* QSharedData_New2(const QSharedData* param1);
void QSharedData_Delete(QSharedData* self);

QAdoptSharedDataTag* QAdoptSharedDataTag_New(const QAdoptSharedDataTag* other);
QAdoptSharedDataTag* QAdoptSharedDataTag_New2(QAdoptSharedDataTag* other);
QAdoptSharedDataTag* QAdoptSharedDataTag_New3();
void QAdoptSharedDataTag_CopyAssign(QAdoptSharedDataTag* self, QAdoptSharedDataTag* other);
void QAdoptSharedDataTag_MoveAssign(QAdoptSharedDataTag* self, QAdoptSharedDataTag* other);
void QAdoptSharedDataTag_Delete(QAdoptSharedDataTag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
