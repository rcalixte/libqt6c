#pragma once
#ifndef QUICK_LIBQQUICKGRAPHICSDEVICE_HPP
#define QUICK_LIBQQUICKGRAPHICSDEVICE_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QQuickGraphicsDevice QQuickGraphicsDevice;
#endif

QQuickGraphicsDevice* QQuickGraphicsDevice_New();
QQuickGraphicsDevice* QQuickGraphicsDevice_New2(const QQuickGraphicsDevice* other);
void QQuickGraphicsDevice_OperatorAssign(QQuickGraphicsDevice* self, const QQuickGraphicsDevice* other);
bool QQuickGraphicsDevice_IsNull(const QQuickGraphicsDevice* self);
QQuickGraphicsDevice* QQuickGraphicsDevice_FromOpenGLContext(QOpenGLContext* context);
void QQuickGraphicsDevice_Delete(QQuickGraphicsDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
