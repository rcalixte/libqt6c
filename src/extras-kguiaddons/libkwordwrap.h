#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKWORDWRAP_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKWORDWRAP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kwordwrap.html)

/// k_wordwrap_new constructs a new KWordWrap object.
///
/// @param other KWordWrap*
///
KWordWrap* k_wordwrap_new(void* other);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#formatText)
///
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param str const char*
///
KWordWrap* k_wordwrap_format_text(void* fm, void* r, int flags, const char* str);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#boundingRect)
///
/// @param self KWordWrap*
///
QRect* k_wordwrap_bounding_rect(void* self);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#wrappedString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KWordWrap*
///
const char* k_wordwrap_wrapped_string(void* self);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#truncatedString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KWordWrap*
///
const char* k_wordwrap_truncated_string(void* self);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#drawText)
///
/// @param self KWordWrap*
/// @param painter QPainter*
/// @param x int
/// @param y int
///
void k_wordwrap_draw_text(void* self, void* painter, int x, int y);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#operator-eq)
///
/// @param self KWordWrap*
/// @param other KWordWrap*
///
void k_wordwrap_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#drawFadeoutText)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param maxW int
/// @param t const char*
///
void k_wordwrap_draw_fadeout_text(void* p, int x, int y, int maxW, const char* t);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#drawTruncateText)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param maxW int
/// @param t const char*
///
void k_wordwrap_draw_truncate_text(void* p, int x, int y, int maxW, const char* t);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#formatText)
///
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param str const char*
/// @param lenVal int
///
KWordWrap* k_wordwrap_format_text5(void* fm, void* r, int flags, const char* str, int lenVal);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#truncatedString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KWordWrap*
/// @param dots bool
///
const char* k_wordwrap_truncated_string1(void* self, bool dots);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#drawText)
///
/// @param self KWordWrap*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param flags int
///
void k_wordwrap_draw_text4(void* self, void* painter, int x, int y, int flags);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#dtor.KWordWrap)
///
/// Delete this object from C++ memory.
///
/// @param self KWordWrap*
///
void k_wordwrap_delete(void* self);

/// [Upstream resources](https://api.kde.org/kwordwrap.html#public-types)

typedef enum {
    KWORDWRAP__FADEOUT = 268435456,
    KWORDWRAP__TRUNCATE = 536870912
} KWordWrap__;

#endif
