#pragma once
#ifndef QML_LIBQJSPRIMITIVEVALUE_HPP
#define QML_LIBQJSPRIMITIVEVALUE_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QJSPrimitiveNull QJSPrimitiveNull;
typedef struct QJSPrimitiveUndefined QJSPrimitiveUndefined;
typedef struct QJSPrimitiveValue QJSPrimitiveValue;
typedef struct QMetaType QMetaType;
typedef struct QVariant QVariant;
#endif

QJSPrimitiveUndefined* QJSPrimitiveUndefined_New(const QJSPrimitiveUndefined* other);
QJSPrimitiveUndefined* QJSPrimitiveUndefined_New2(QJSPrimitiveUndefined* other);
QJSPrimitiveUndefined* QJSPrimitiveUndefined_New3();
QJSPrimitiveUndefined* QJSPrimitiveUndefined_New4(const QJSPrimitiveUndefined* param1);
void QJSPrimitiveUndefined_CopyAssign(QJSPrimitiveUndefined* self, QJSPrimitiveUndefined* other);
void QJSPrimitiveUndefined_MoveAssign(QJSPrimitiveUndefined* self, QJSPrimitiveUndefined* other);
void QJSPrimitiveUndefined_Delete(QJSPrimitiveUndefined* self);

QJSPrimitiveNull* QJSPrimitiveNull_New(const QJSPrimitiveNull* other);
QJSPrimitiveNull* QJSPrimitiveNull_New2(QJSPrimitiveNull* other);
QJSPrimitiveNull* QJSPrimitiveNull_New3();
QJSPrimitiveNull* QJSPrimitiveNull_New4(const QJSPrimitiveNull* param1);
void QJSPrimitiveNull_CopyAssign(QJSPrimitiveNull* self, QJSPrimitiveNull* other);
void QJSPrimitiveNull_MoveAssign(QJSPrimitiveNull* self, QJSPrimitiveNull* other);
void QJSPrimitiveNull_Delete(QJSPrimitiveNull* self);

QJSPrimitiveValue* QJSPrimitiveValue_New();
QJSPrimitiveValue* QJSPrimitiveValue_New2(QJSPrimitiveUndefined* undefined);
QJSPrimitiveValue* QJSPrimitiveValue_New3(QJSPrimitiveNull* nullVal);
QJSPrimitiveValue* QJSPrimitiveValue_New4(bool value);
QJSPrimitiveValue* QJSPrimitiveValue_New5(int value);
QJSPrimitiveValue* QJSPrimitiveValue_New6(double value);
QJSPrimitiveValue* QJSPrimitiveValue_New7(libqt_string string);
QJSPrimitiveValue* QJSPrimitiveValue_New8(const QMetaType* type, const void* value);
QJSPrimitiveValue* QJSPrimitiveValue_New9(QMetaType* type);
QJSPrimitiveValue* QJSPrimitiveValue_New10(const QVariant* variant);
QJSPrimitiveValue* QJSPrimitiveValue_New11(const QJSPrimitiveValue* param1);
uint8_t QJSPrimitiveValue_Type(const QJSPrimitiveValue* self);
QMetaType* QJSPrimitiveValue_MetaType(const QJSPrimitiveValue* self);
void* QJSPrimitiveValue_Data(QJSPrimitiveValue* self);
const void* QJSPrimitiveValue_Data2(const QJSPrimitiveValue* self);
const void* QJSPrimitiveValue_ConstData(const QJSPrimitiveValue* self);
bool QJSPrimitiveValue_ToBoolean(const QJSPrimitiveValue* self);
int QJSPrimitiveValue_ToInteger(const QJSPrimitiveValue* self);
double QJSPrimitiveValue_ToDouble(const QJSPrimitiveValue* self);
libqt_string QJSPrimitiveValue_ToString(const QJSPrimitiveValue* self);
QVariant* QJSPrimitiveValue_ToVariant(const QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorPlusPlus(QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorPlusPlus2(QJSPrimitiveValue* self, int param1);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorMinusMinus(QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorMinusMinus2(QJSPrimitiveValue* self, int param1);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorPlus(QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_OperatorMinus(QJSPrimitiveValue* self);
bool QJSPrimitiveValue_StrictlyEquals(const QJSPrimitiveValue* self, const QJSPrimitiveValue* other);
bool QJSPrimitiveValue_Equals(const QJSPrimitiveValue* self, const QJSPrimitiveValue* other);
void QJSPrimitiveValue_Delete(QJSPrimitiveValue* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
