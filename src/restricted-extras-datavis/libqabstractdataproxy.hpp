#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACTDATAPROXY_HPP
#define RESTRICTED_EXTRAS_DATAVIS_LIBQABSTRACTDATAPROXY_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractDataProxy QAbstractDataProxy;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QAbstractDataProxy_MetaObject(const QAbstractDataProxy* self);
void* QAbstractDataProxy_Metacast(QAbstractDataProxy* self, const char* param1);
int QAbstractDataProxy_Metacall(QAbstractDataProxy* self, int param1, int param2, void** param3);
int QAbstractDataProxy_Type(const QAbstractDataProxy* self);
void QAbstractDataProxy_Delete(QAbstractDataProxy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
