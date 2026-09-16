#pragma once
#ifndef QUICK_LIBQQUICKITEMGRABRESULT_HPP
#define QUICK_LIBQQUICKITEMGRABRESULT_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQuickItemGrabResult QQuickItemGrabResult;
typedef struct QUrl QUrl;
#endif

QMetaObject* QQuickItemGrabResult_MetaObject(const QQuickItemGrabResult* self);
void* QQuickItemGrabResult_Metacast(QQuickItemGrabResult* self, const char* param1);
int QQuickItemGrabResult_Metacall(QQuickItemGrabResult* self, int param1, int param2, void** param3);
QImage* QQuickItemGrabResult_Image(const QQuickItemGrabResult* self);
QUrl* QQuickItemGrabResult_Url(const QQuickItemGrabResult* self);
bool QQuickItemGrabResult_SaveToFile(const QQuickItemGrabResult* self, const libqt_string fileName);
bool QQuickItemGrabResult_SaveToFile2(const QQuickItemGrabResult* self, const QUrl* fileName);
void QQuickItemGrabResult_Ready(QQuickItemGrabResult* self);
void QQuickItemGrabResult_Connect_Ready(QQuickItemGrabResult* self, intptr_t slot);
void QQuickItemGrabResult_Delete(QQuickItemGrabResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
