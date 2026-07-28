#pragma once
#ifndef MULTIMEDIA_LIBQTVIDEO_HPP
#define MULTIMEDIA_LIBQTVIDEO_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaObject QMetaObject;
typedef struct QtVideo QtVideo;
#endif

QMetaObject* QtVideo_GetEnumMetaObject(int param1);
const char* QtVideo_GetEnumName(int param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
