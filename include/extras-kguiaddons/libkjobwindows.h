#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKJOBWINDOWS_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKJOBWINDOWS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kjobwindows.html

/// [Qt documentation](https://api.kde.org/kjobwindows.html#setWindow)
///
/// @param param1 QObject*
/// @param param2 QWindow*
void k_jobwindows_set_window(void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/kjobwindows.html#window)
///
/// @param param1 QObject*
QWindow* k_jobwindows_window(void* param1);
#endif
