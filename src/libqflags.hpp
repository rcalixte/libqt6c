#pragma once
#ifndef SRCC_LIBQFLAGS_HPP
#define SRCC_LIBQFLAGS_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFlag QFlag;
typedef struct QIncompatibleFlag QIncompatibleFlag;
#endif

QFlag* QFlag_New(const QFlag* other);
QFlag* QFlag_New2(QFlag* other);
QFlag* QFlag_New3(int value);
QFlag* QFlag_New4(unsigned int value);
QFlag* QFlag_New5(int16_t value);
QFlag* QFlag_New6(uint16_t value);
QFlag* QFlag_New7(const QFlag* param1);
void QFlag_CopyAssign(QFlag* self, QFlag* other);
void QFlag_MoveAssign(QFlag* self, QFlag* other);
int QFlag_ToInt(const QFlag* self);
unsigned int QFlag_ToUnsignedInt(const QFlag* self);
void QFlag_Delete(QFlag* self);

QIncompatibleFlag* QIncompatibleFlag_New(const QIncompatibleFlag* other);
QIncompatibleFlag* QIncompatibleFlag_New2(QIncompatibleFlag* other);
QIncompatibleFlag* QIncompatibleFlag_New3(int i);
QIncompatibleFlag* QIncompatibleFlag_New4(const QIncompatibleFlag* param1);
void QIncompatibleFlag_CopyAssign(QIncompatibleFlag* self, QIncompatibleFlag* other);
void QIncompatibleFlag_MoveAssign(QIncompatibleFlag* self, QIncompatibleFlag* other);
int QIncompatibleFlag_ToInt(const QIncompatibleFlag* self);
void QIncompatibleFlag_Delete(QIncompatibleFlag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
