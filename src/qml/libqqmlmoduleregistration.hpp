#pragma once
#ifndef QML_LIBQQMLMODULEREGISTRATION_HPP
#define QML_LIBQQMLMODULEREGISTRATION_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QQmlModuleRegistration QQmlModuleRegistration;
#endif

QQmlModuleRegistration* QQmlModuleRegistration_New(const char* uri, intptr_t registerFunction);
QQmlModuleRegistration* QQmlModuleRegistration_New2(const char* uri, int majorVersion, intptr_t registerFunction);
void QQmlModuleRegistration_Delete(QQmlModuleRegistration* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
