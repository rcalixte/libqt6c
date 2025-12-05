#pragma once
#ifndef SRC_EXTRAS_KCOLORSCHEME_QT6C_LIBKSTATEFULBRUSH_H
#define SRC_EXTRAS_KCOLORSCHEME_QT6C_LIBKSTATEFULBRUSH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html)

/// k_statefulbrush_new constructs a new KStatefulBrush object.
///
KStatefulBrush* k_statefulbrush_new();

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html)

/// k_statefulbrush_new2 constructs a new KStatefulBrush object.
///
/// @param param1 enum KColorScheme__ColorSet
/// @param param2 enum KColorScheme__ForegroundRole
///
KStatefulBrush* k_statefulbrush_new2(int32_t param1, int32_t param2);

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html)

/// k_statefulbrush_new3 constructs a new KStatefulBrush object.
///
/// @param param1 enum KColorScheme__ColorSet
/// @param param2 enum KColorScheme__BackgroundRole
///
KStatefulBrush* k_statefulbrush_new3(int32_t param1, int32_t param2);

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html)

/// k_statefulbrush_new4 constructs a new KStatefulBrush object.
///
/// @param param1 enum KColorScheme__ColorSet
/// @param param2 enum KColorScheme__DecorationRole
///
KStatefulBrush* k_statefulbrush_new4(int32_t param1, int32_t param2);

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html)

/// k_statefulbrush_new5 constructs a new KStatefulBrush object.
///
/// @param param1 QBrush*
///
KStatefulBrush* k_statefulbrush_new5(void* param1);

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html)

/// k_statefulbrush_new6 constructs a new KStatefulBrush object.
///
/// @param param1 QBrush*
/// @param background QBrush*
///
KStatefulBrush* k_statefulbrush_new6(void* param1, void* background);

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html)

/// k_statefulbrush_new7 constructs a new KStatefulBrush object.
///
/// @param param1 KStatefulBrush*
///
KStatefulBrush* k_statefulbrush_new7(void* param1);

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html#operator-eq)
///
/// @param self KStatefulBrush*
/// @param param1 KStatefulBrush*
///
void k_statefulbrush_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html#brush)
///
/// @param self KStatefulBrush*
/// @param param1 enum QPalette__ColorGroup
///
QBrush* k_statefulbrush_brush(void* self, int32_t param1);

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html#brush)
///
/// @param self KStatefulBrush*
/// @param param1 QPalette*
///
QBrush* k_statefulbrush_brush2(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kstatefulbrush.html#dtor.KStatefulBrush)
///
/// Delete this object from C++ memory.
///
/// @param self KStatefulBrush*
///
void k_statefulbrush_delete(void* self);

#endif
