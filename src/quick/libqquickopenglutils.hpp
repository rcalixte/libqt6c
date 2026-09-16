#pragma once
#ifndef QUICK_LIBQQUICKOPENGLUTILS_HPP
#define QUICK_LIBQQUICKOPENGLUTILS_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQuickOpenGLUtils QQuickOpenGLUtils;
#endif

void QQuickOpenGLUtils_ResetOpenGLState();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
