#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKJOBWIDGETS_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKJOBWIDGETS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kjobwidgets.html)

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#setWindow)
///
/// @param job QObject*
/// @param widget QWidget*
///
void k_jobwidgets_set_window(void* job, void* widget);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#setWindowHandle)
///
/// @param job QObject*
/// @param window QWindow*
///
void k_jobwidgets_set_window_handle(void* job, void* window);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#window)
///
/// @param job QObject*
///
QWidget* k_jobwidgets_window(void* job);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#windowHandle)
///
/// @param job QObject*
///
QWindow* k_jobwidgets_window_handle(void* job);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#updateUserTimestamp)
///
/// @param job QObject*
/// @param time uintptr_t
///
void k_jobwidgets_update_user_timestamp(void* job, uintptr_t time);

/// [Upstream resources](https://api.kde.org/kjobwidgets.html#userTimestamp)
///
/// @param job QObject*
///
uintptr_t k_jobwidgets_user_timestamp(void* job);
#endif
