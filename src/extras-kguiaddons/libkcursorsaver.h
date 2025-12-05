#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCURSORSAVER_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCURSORSAVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcursorsaver.html)

/// k_cursorsaver_new constructs a new KCursorSaver object.
///
/// @param shape enum Qt__CursorShape
///
KCursorSaver* k_cursorsaver_new(int32_t shape);

/// [Upstream resources](https://api.kde.org/kcursorsaver.html#restoreCursor)
///
/// @param self KCursorSaver*
///
void k_cursorsaver_restore_cursor(void* self);

/// [Upstream resources](https://api.kde.org/kcursorsaver.html#dtor.KCursorSaver)
///
/// Delete this object from C++ memory.
///
/// @param self KCursorSaver*
///
void k_cursorsaver_delete(void* self);

#endif
