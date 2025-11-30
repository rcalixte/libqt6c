#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKCURSOR_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcursor.html

/// k_cursor_new constructs a new KCursor object.
///
/// @param other KCursor*
KCursor* k_cursor_new(void* other);

/// k_cursor_new2 constructs a new KCursor object and invalidates the source KCursor object.
///
/// @param other KCursor*
KCursor* k_cursor_new2(void* other);

/// k_cursor_copy_assign shallow copies `other` into `self`.
///
/// @param self KCursor*
/// @param other KCursor*
void k_cursor_copy_assign(void* self, void* other);

/// k_cursor_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KCursor*
/// @param other KCursor*
void k_cursor_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kcursor.html#setAutoHideCursor)
///
/// @param w QWidget*
/// @param enable bool
void k_cursor_set_auto_hide_cursor(void* w, bool enable);

/// [Upstream resources](https://api.kde.org/kcursor.html#setHideCursorDelay)
///
/// @param ms int
void k_cursor_set_hide_cursor_delay(int ms);

/// [Upstream resources](https://api.kde.org/kcursor.html#hideCursorDelay)
///
int32_t k_cursor_hide_cursor_delay();

/// [Upstream resources](https://api.kde.org/kcursor.html#autoHideEventFilter)
///
/// @param param1 QObject*
/// @param param2 QEvent*
void k_cursor_auto_hide_event_filter(void* param1, void* param2);

/// [Upstream resources](https://api.kde.org/kcursor.html#setAutoHideCursor)
///
/// @param w QWidget*
/// @param enable bool
/// @param customEventFilter bool
void k_cursor_set_auto_hide_cursor3(void* w, bool enable, bool customEventFilter);

/// [Upstream resources](https://api.kde.org/kcursor.html#dtor.KCursor)
///
/// Delete this object from C++ memory.
///
/// @param self KCursor*
void k_cursor_delete(void* self);

#endif
