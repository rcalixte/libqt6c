#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSQT6C_LIBKWORDWRAP_H
#define SRC_EXTRAS_KGUIADDONSQT6C_LIBKWORDWRAP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kwordwrap.html

/// k_wordwrap_new constructs a new KWordWrap object.
///
/// @param other KWordWrap*
KWordWrap* k_wordwrap_new(void* other);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#formatText)
///
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param str const char*
KWordWrap* k_wordwrap_format_text(void* fm, void* r, int flags, const char* str);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#boundingRect)
///
/// @param self KWordWrap*
QRect* k_wordwrap_bounding_rect(void* self);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#wrappedString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWordWrap*
const char* k_wordwrap_wrapped_string(void* self);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#truncatedString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWordWrap*
const char* k_wordwrap_truncated_string(void* self);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#drawText)
///
/// @param self KWordWrap*
/// @param painter QPainter*
/// @param x int
/// @param y int
void k_wordwrap_draw_text(void* self, void* painter, int x, int y);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#operator-eq)
///
/// @param self KWordWrap*
/// @param other KWordWrap*
void k_wordwrap_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#drawFadeoutText)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param maxW int
/// @param t const char*
void k_wordwrap_draw_fadeout_text(void* p, int x, int y, int maxW, const char* t);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#drawTruncateText)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param maxW int
/// @param t const char*
void k_wordwrap_draw_truncate_text(void* p, int x, int y, int maxW, const char* t);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#formatText)
///
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param str const char*
/// @param lenVal int
KWordWrap* k_wordwrap_format_text5(void* fm, void* r, int flags, const char* str, int lenVal);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#truncatedString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWordWrap*
/// @param dots bool
const char* k_wordwrap_truncated_string1(void* self, bool dots);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#drawText)
///
/// @param self KWordWrap*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param flags int
void k_wordwrap_draw_text4(void* self, void* painter, int x, int y, int flags);

/// [Qt documentation](https://api.kde.org/kwordwrap.html#dtor.KWordWrap)
///
/// Delete this object from C++ memory.
///
/// @param self KWordWrap*
void k_wordwrap_delete(void* self);

/// https://api.kde.org/kwordwrap.html#types

typedef enum {
    KWORDWRAP__FADEOUT = 268435456,
    KWORDWRAP__TRUNCATE = 536870912
} KWordWrap__;

#endif
