#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBKSTYLEMANAGER_HPP
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBKSTYLEMANAGER_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KStyleManager KStyleManager;
typedef struct QAction QAction;
typedef struct QObject QObject;
#endif

void KStyleManager_InitStyle();
QAction* KStyleManager_CreateConfigureAction(QObject* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
