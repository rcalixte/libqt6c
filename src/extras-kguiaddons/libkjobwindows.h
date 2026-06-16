#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKJOBWINDOWS_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKJOBWINDOWS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kjobwindows.html)

/// [Upstream resources](https://api.kde.org/kjobwindows.html#setWindow)
///
/// @param job QObject*
/// @param window QWindow*
///
void k_jobwindows_set_window(void* job, void* window);

/// [Upstream resources](https://api.kde.org/kjobwindows.html#window)
///
/// @param job QObject*
///
QWindow* k_jobwindows_window(void* job);
#endif
