#pragma once
#ifndef QML_LIBQQMLABSTRACTURLINTERCEPTOR_HPP
#define QML_LIBQQMLABSTRACTURLINTERCEPTOR_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQmlAbstractUrlInterceptor QQmlAbstractUrlInterceptor;
typedef struct QUrl QUrl;
#endif

QQmlAbstractUrlInterceptor* QQmlAbstractUrlInterceptor_New();
QUrl* QQmlAbstractUrlInterceptor_Intercept(QQmlAbstractUrlInterceptor* self, const QUrl* path, int type);
void QQmlAbstractUrlInterceptor_OperatorAssign(QQmlAbstractUrlInterceptor* self, const QQmlAbstractUrlInterceptor* param1);
void QQmlAbstractUrlInterceptor_OnIntercept(QQmlAbstractUrlInterceptor* self, intptr_t slot);
QUrl* QQmlAbstractUrlInterceptor_SuperIntercept(QQmlAbstractUrlInterceptor* self, const QUrl* path, int type);
void QQmlAbstractUrlInterceptor_Delete(QQmlAbstractUrlInterceptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
