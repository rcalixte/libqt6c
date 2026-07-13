#pragma once
#ifndef SRCC_LIBQDRAWUTIL_HPP
#define SRCC_LIBQDRAWUTIL_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTileRules QTileRules;
#endif

QTileRules* QTileRules_New(const QTileRules* other);
QTileRules* QTileRules_New2(QTileRules* other);
QTileRules* QTileRules_New3(int horizontalRule, int verticalRule);
QTileRules* QTileRules_New4();
QTileRules* QTileRules_New5(const QTileRules* param1);
QTileRules* QTileRules_New6(int rule);
void QTileRules_CopyAssign(QTileRules* self, QTileRules* other);
void QTileRules_MoveAssign(QTileRules* self, QTileRules* other);
int QTileRules_Horizontal(const QTileRules* self);
void QTileRules_SetHorizontal(QTileRules* self, int horizontal);
int QTileRules_Vertical(const QTileRules* self);
void QTileRules_SetVertical(QTileRules* self, int vertical);
void QTileRules_Delete(QTileRules* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
