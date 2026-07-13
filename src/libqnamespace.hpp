#pragma once
#ifndef SRCC_LIBQNAMESPACE_HPP
#define SRCC_LIBQNAMESPACE_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QKeyCombination QKeyCombination;
#endif

QKeyCombination* QKeyCombination_New(const QKeyCombination* other);
QKeyCombination* QKeyCombination_New2(QKeyCombination* other);
QKeyCombination* QKeyCombination_New3();
QKeyCombination* QKeyCombination_New4(int modifiers);
QKeyCombination* QKeyCombination_New5(int modifiers);
QKeyCombination* QKeyCombination_New6(const QKeyCombination* param1);
QKeyCombination* QKeyCombination_New7(int key);
QKeyCombination* QKeyCombination_New8(int modifiers, int key);
QKeyCombination* QKeyCombination_New9(int modifiers, int key);
void QKeyCombination_CopyAssign(QKeyCombination* self, QKeyCombination* other);
void QKeyCombination_MoveAssign(QKeyCombination* self, QKeyCombination* other);
int QKeyCombination_KeyboardModifiers(const QKeyCombination* self);
int QKeyCombination_Key(const QKeyCombination* self);
QKeyCombination* QKeyCombination_FromCombined(int combined);
int QKeyCombination_ToCombined(const QKeyCombination* self);
int QKeyCombination_ToInt(const QKeyCombination* self);
void QKeyCombination_Delete(QKeyCombination* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
