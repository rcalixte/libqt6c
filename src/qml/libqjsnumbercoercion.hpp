#pragma once
#ifndef QML_LIBQJSNUMBERCOERCION_HPP
#define QML_LIBQJSNUMBERCOERCION_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QJSNumberCoercion QJSNumberCoercion;
#endif

QJSNumberCoercion* QJSNumberCoercion_New(const QJSNumberCoercion* other);
QJSNumberCoercion* QJSNumberCoercion_New2(QJSNumberCoercion* other);
QJSNumberCoercion* QJSNumberCoercion_New3(const QJSNumberCoercion* param1);
void QJSNumberCoercion_CopyAssign(QJSNumberCoercion* self, QJSNumberCoercion* other);
void QJSNumberCoercion_MoveAssign(QJSNumberCoercion* self, QJSNumberCoercion* other);
bool QJSNumberCoercion_IsInteger(double d);
bool QJSNumberCoercion_IsArrayIndex(double d);
bool QJSNumberCoercion_IsArrayIndex2(long long i);
bool QJSNumberCoercion_IsArrayIndex3(unsigned long long i);
int QJSNumberCoercion_ToInteger(double d);
bool QJSNumberCoercion_Equals(double lhs, double rhs);
double QJSNumberCoercion_RoundTowards0(double d);
void QJSNumberCoercion_Delete(QJSNumberCoercion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
