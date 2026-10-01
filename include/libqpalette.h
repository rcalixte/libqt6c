#pragma once
#ifndef LIBQPALETTE_H
#define LIBQPALETTE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)

/// q_palette_new constructs a new QPalette object.
///
QPalette* q_palette_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)

/// q_palette_new2 constructs a new QPalette object.
///
/// @param button QColor*
///
QPalette* q_palette_new2(const void* button);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)

/// q_palette_new3 constructs a new QPalette object.
///
/// @param button enum Qt__GlobalColor
///
QPalette* q_palette_new3(int32_t button);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)

/// q_palette_new4 constructs a new QPalette object.
///
/// @param button QColor*
/// @param window QColor*
///
QPalette* q_palette_new4(const void* button, const void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)

/// q_palette_new5 constructs a new QPalette object.
///
/// @param windowText QBrush*
/// @param button QBrush*
/// @param light QBrush*
/// @param dark QBrush*
/// @param mid QBrush*
/// @param text QBrush*
/// @param bright_text QBrush*
/// @param base QBrush*
/// @param window QBrush*
///
QPalette* q_palette_new5(const void* windowText, const void* button, const void* light, const void* dark, const void* mid, const void* text, const void* bright_text, const void* base, const void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)

/// q_palette_new6 constructs a new QPalette object.
///
/// @param windowText QColor*
/// @param window QColor*
/// @param light QColor*
/// @param dark QColor*
/// @param mid QColor*
/// @param text QColor*
/// @param base QColor*
///
QPalette* q_palette_new6(const void* windowText, const void* window, const void* light, const void* dark, const void* mid, const void* text, const void* base);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html)

/// q_palette_new7 constructs a new QPalette object.
///
/// @param palette QPalette*
///
QPalette* q_palette_new7(const void* palette);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-eq)
///
/// @param self QPalette*
/// @param palette QPalette*
///
void q_palette_operator_assign(void* self, const void* palette);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#swap)
///
/// @param self QPalette*
/// @param other QPalette*
///
void q_palette_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-QVariant)
///
/// @param self const QPalette*
///
QVariant* q_palette_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#currentColorGroup)
///
/// @param self const QPalette*
///
/// @return enum QPalette__ColorGroup
///
int32_t q_palette_current_color_group(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setCurrentColorGroup)
///
/// @param self QPalette*
/// @param cg enum QPalette__ColorGroup
///
void q_palette_set_current_color_group(void* self, int32_t cg);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#color)
///
/// @param self const QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
///
const QColor* q_palette_color(const void* self, int32_t cg, int32_t cr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brush)
///
/// @param self const QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
///
const QBrush* q_palette_brush(const void* self, int32_t cg, int32_t cr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColor)
///
/// @param self QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
/// @param color QColor*
///
void q_palette_set_color(void* self, int32_t cg, int32_t cr, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColor)
///
/// @param self QPalette*
/// @param cr enum QPalette__ColorRole
/// @param color QColor*
///
void q_palette_set_color2(void* self, int32_t cr, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setBrush)
///
/// @param self QPalette*
/// @param cr enum QPalette__ColorRole
/// @param brush QBrush*
///
void q_palette_set_brush(void* self, int32_t cr, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isBrushSet)
///
/// @param self const QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
///
bool q_palette_is_brush_set(const void* self, int32_t cg, int32_t cr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setBrush)
///
/// @param self QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
/// @param brush QBrush*
///
void q_palette_set_brush2(void* self, int32_t cg, int32_t cr, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setColorGroup)
///
/// @param self QPalette*
/// @param cr enum QPalette__ColorGroup
/// @param windowText QBrush*
/// @param button QBrush*
/// @param light QBrush*
/// @param dark QBrush*
/// @param mid QBrush*
/// @param text QBrush*
/// @param bright_text QBrush*
/// @param base QBrush*
/// @param window QBrush*
///
void q_palette_set_color_group(void* self, int32_t cr, const void* windowText, const void* button, const void* light, const void* dark, const void* mid, const void* text, const void* bright_text, const void* base, const void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isEqual)
///
/// @param self const QPalette*
/// @param cr1 enum QPalette__ColorGroup
/// @param cr2 enum QPalette__ColorGroup
///
bool q_palette_is_equal(const void* self, int32_t cr1, int32_t cr2);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#color)
///
/// @param self const QPalette*
/// @param cr enum QPalette__ColorRole
///
const QColor* q_palette_color2(const void* self, int32_t cr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brush)
///
/// @param self const QPalette*
/// @param cr enum QPalette__ColorRole
///
const QBrush* q_palette_brush2(const void* self, int32_t cr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#windowText)
///
/// @param self const QPalette*
///
const QBrush* q_palette_window_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#button)
///
/// @param self const QPalette*
///
const QBrush* q_palette_button(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#light)
///
/// @param self const QPalette*
///
const QBrush* q_palette_light(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#dark)
///
/// @param self const QPalette*
///
const QBrush* q_palette_dark(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#mid)
///
/// @param self const QPalette*
///
const QBrush* q_palette_mid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#text)
///
/// @param self const QPalette*
///
const QBrush* q_palette_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#base)
///
/// @param self const QPalette*
///
const QBrush* q_palette_base(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#alternateBase)
///
/// @param self const QPalette*
///
const QBrush* q_palette_alternate_base(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#toolTipBase)
///
/// @param self const QPalette*
///
const QBrush* q_palette_tool_tip_base(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#toolTipText)
///
/// @param self const QPalette*
///
const QBrush* q_palette_tool_tip_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#window)
///
/// @param self const QPalette*
///
const QBrush* q_palette_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#midlight)
///
/// @param self const QPalette*
///
const QBrush* q_palette_midlight(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#brightText)
///
/// @param self const QPalette*
///
const QBrush* q_palette_bright_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#buttonText)
///
/// @param self const QPalette*
///
const QBrush* q_palette_button_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#shadow)
///
/// @param self const QPalette*
///
const QBrush* q_palette_shadow(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#highlight)
///
/// @param self const QPalette*
///
const QBrush* q_palette_highlight(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#highlightedText)
///
/// @param self const QPalette*
///
const QBrush* q_palette_highlighted_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#link)
///
/// @param self const QPalette*
///
const QBrush* q_palette_link(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#linkVisited)
///
/// @param self const QPalette*
///
const QBrush* q_palette_link_visited(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#placeholderText)
///
/// @param self const QPalette*
///
const QBrush* q_palette_placeholder_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#accent)
///
/// @param self const QPalette*
///
const QBrush* q_palette_accent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-eq-eq)
///
/// @param self const QPalette*
/// @param p QPalette*
///
bool q_palette_operator_equal(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#operator-not-eq)
///
/// @param self const QPalette*
/// @param p QPalette*
///
bool q_palette_operator_not_equal(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#isCopyOf)
///
/// @param self const QPalette*
/// @param p QPalette*
///
bool q_palette_is_copy_of(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#cacheKey)
///
/// @param self const QPalette*
///
int64_t q_palette_cache_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#resolve)
///
/// @param self const QPalette*
/// @param other QPalette*
///
QPalette* q_palette_resolve(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#resolveMask)
///
/// @param self const QPalette*
///
uintptr_t q_palette_resolve_mask(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#setResolveMask)
///
/// @param self QPalette*
/// @param mask uintptr_t
///
void q_palette_set_resolve_mask(void* self, uintptr_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#dtor.QPalette)
///
/// Delete this object from C++ memory.
///
/// @param self QPalette*
///
void q_palette_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#public-types)

typedef enum {
    QPALETTE_COLORGROUP_ACTIVE = 0,
    QPALETTE_COLORGROUP_DISABLED = 1,
    QPALETTE_COLORGROUP_INACTIVE = 2,
    QPALETTE_COLORGROUP_NCOLORGROUPS = 3,
    QPALETTE_COLORGROUP_CURRENT = 4,
    QPALETTE_COLORGROUP_ALL = 5,
    QPALETTE_COLORGROUP_NORMAL = 0
} QPalette__ColorGroup;

/// [Upstream resources](https://doc.qt.io/qt-6/qpalette.html#public-types)

typedef enum {
    QPALETTE_COLORROLE_WINDOWTEXT = 0,
    QPALETTE_COLORROLE_BUTTON = 1,
    QPALETTE_COLORROLE_LIGHT = 2,
    QPALETTE_COLORROLE_MIDLIGHT = 3,
    QPALETTE_COLORROLE_DARK = 4,
    QPALETTE_COLORROLE_MID = 5,
    QPALETTE_COLORROLE_TEXT = 6,
    QPALETTE_COLORROLE_BRIGHTTEXT = 7,
    QPALETTE_COLORROLE_BUTTONTEXT = 8,
    QPALETTE_COLORROLE_BASE = 9,
    QPALETTE_COLORROLE_WINDOW = 10,
    QPALETTE_COLORROLE_SHADOW = 11,
    QPALETTE_COLORROLE_HIGHLIGHT = 12,
    QPALETTE_COLORROLE_HIGHLIGHTEDTEXT = 13,
    QPALETTE_COLORROLE_LINK = 14,
    QPALETTE_COLORROLE_LINKVISITED = 15,
    QPALETTE_COLORROLE_ALTERNATEBASE = 16,
    QPALETTE_COLORROLE_NOROLE = 17,
    QPALETTE_COLORROLE_TOOLTIPBASE = 18,
    QPALETTE_COLORROLE_TOOLTIPTEXT = 19,
    QPALETTE_COLORROLE_PLACEHOLDERTEXT = 20,
    QPALETTE_COLORROLE_ACCENT = 21,
    QPALETTE_COLORROLE_NCOLORROLES = 22
} QPalette__ColorRole;

#endif
