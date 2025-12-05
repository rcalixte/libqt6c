#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKJOBWIDGETS_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKJOBWIDGETS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kjobwidgets.html)

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#setWindow)
///
/// @param param1 QObject*
/// @param param2 QWidget*
///
void k_jobwidgets_set_window(void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#setWindowHandle)
///
/// @param param1 QObject*
/// @param param2 QWindow*
///
void k_jobwidgets_set_window_handle(void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#window)
///
/// @param param1 QObject*
///
QWidget* k_jobwidgets_window(void* param1);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#windowHandle)
///
/// @param param1 QObject*
///
QWindow* k_jobwidgets_window_handle(void* param1);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#updateUserTimestamp)
///
/// @param param1 QObject*
/// @param param2 uint64_t
///
void k_jobwidgets_update_user_timestamp(void* param1, uint64_t param2);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#userTimestamp)
///
/// @param param1 QObject*
///
uint64_t k_jobwidgets_user_timestamp(void* param1);
#endif
