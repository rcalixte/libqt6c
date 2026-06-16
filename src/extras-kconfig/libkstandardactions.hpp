#pragma once
#ifndef SRC_EXTRAS_KCONFIGC_LIBKSTANDARDACTIONS_HPP
#define SRC_EXTRAS_KCONFIGC_LIBKSTANDARDACTIONS_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KStandardActions KStandardActions;
typedef struct QAction QAction;
typedef struct QObject QObject;
#endif

QAction* KStandardActions_KguiCreateInternal(int id, QObject* parent);
libqt_string KStandardActions_Name(int id);
libqt_list /* of int */ KStandardActions_ActionIds();
int KStandardActions_ShortcutForActionId(int id);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
