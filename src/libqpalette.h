#pragma once
#ifndef SRCQT6C_LIBQPALETTE_H
#define SRCQT6C_LIBQPALETTE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpalette.html

/// q_palette_new constructs a new QPalette object.
///
QPalette* q_palette_new();

/// q_palette_new2 constructs a new QPalette object.
///
/// @param button QColor*
QPalette* q_palette_new2(void* button);

/// q_palette_new3 constructs a new QPalette object.
///
/// @param button enum Qt__GlobalColor
QPalette* q_palette_new3(int64_t button);

/// q_palette_new4 constructs a new QPalette object.
///
/// @param button QColor*
/// @param window QColor*
QPalette* q_palette_new4(void* button, void* window);

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
QPalette* q_palette_new5(void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window);

/// q_palette_new6 constructs a new QPalette object.
///
/// @param windowText QColor*
/// @param window QColor*
/// @param light QColor*
/// @param dark QColor*
/// @param mid QColor*
/// @param text QColor*
/// @param base QColor*
QPalette* q_palette_new6(void* windowText, void* window, void* light, void* dark, void* mid, void* text, void* base);

/// q_palette_new7 constructs a new QPalette object.
///
/// @param palette QPalette*
QPalette* q_palette_new7(void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator-eq)
///
/// @param self QPalette*
/// @param palette QPalette*
void q_palette_operator_assign(void* self, void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#swap)
///
/// @param self QPalette*
/// @param other QPalette*
void q_palette_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator)
///
/// @param self QPalette*
QVariant* q_palette_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#currentColorGroup)
///
/// @param self QPalette*
///
/// @return enum QPalette__ColorGroup
int64_t q_palette_current_color_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setCurrentColorGroup)
///
/// @param self QPalette*
/// @param cg enum QPalette__ColorGroup
void q_palette_set_current_color_group(void* self, int64_t cg);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#color)
///
/// @param self QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
const QColor* q_palette_color(void* self, int64_t cg, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brush)
///
/// @param self QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
const QBrush* q_palette_brush(void* self, int64_t cg, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColor)
///
/// @param self QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
/// @param color QColor*
void q_palette_set_color(void* self, int64_t cg, int64_t cr, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColor)
///
/// @param self QPalette*
/// @param cr enum QPalette__ColorRole
/// @param color QColor*
void q_palette_set_color2(void* self, int64_t cr, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setBrush)
///
/// @param self QPalette*
/// @param cr enum QPalette__ColorRole
/// @param brush QBrush*
void q_palette_set_brush(void* self, int64_t cr, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isBrushSet)
///
/// @param self QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
bool q_palette_is_brush_set(void* self, int64_t cg, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setBrush)
///
/// @param self QPalette*
/// @param cg enum QPalette__ColorGroup
/// @param cr enum QPalette__ColorRole
/// @param brush QBrush*
void q_palette_set_brush2(void* self, int64_t cg, int64_t cr, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColorGroup)
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
void q_palette_set_color_group(void* self, int64_t cr, void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isEqual)
///
/// @param self QPalette*
/// @param cr1 enum QPalette__ColorGroup
/// @param cr2 enum QPalette__ColorGroup
bool q_palette_is_equal(void* self, int64_t cr1, int64_t cr2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#color)
///
/// @param self QPalette*
/// @param cr enum QPalette__ColorRole
const QColor* q_palette_color2(void* self, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brush)
///
/// @param self QPalette*
/// @param cr enum QPalette__ColorRole
const QBrush* q_palette_brush2(void* self, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#windowText)
///
/// @param self QPalette*
const QBrush* q_palette_window_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#button)
///
/// @param self QPalette*
const QBrush* q_palette_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#light)
///
/// @param self QPalette*
const QBrush* q_palette_light(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#dark)
///
/// @param self QPalette*
const QBrush* q_palette_dark(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#mid)
///
/// @param self QPalette*
const QBrush* q_palette_mid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#text)
///
/// @param self QPalette*
const QBrush* q_palette_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#base)
///
/// @param self QPalette*
const QBrush* q_palette_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#alternateBase)
///
/// @param self QPalette*
const QBrush* q_palette_alternate_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#toolTipBase)
///
/// @param self QPalette*
const QBrush* q_palette_tool_tip_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#toolTipText)
///
/// @param self QPalette*
const QBrush* q_palette_tool_tip_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#window)
///
/// @param self QPalette*
const QBrush* q_palette_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#midlight)
///
/// @param self QPalette*
const QBrush* q_palette_midlight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brightText)
///
/// @param self QPalette*
const QBrush* q_palette_bright_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#buttonText)
///
/// @param self QPalette*
const QBrush* q_palette_button_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#shadow)
///
/// @param self QPalette*
const QBrush* q_palette_shadow(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#highlight)
///
/// @param self QPalette*
const QBrush* q_palette_highlight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#highlightedText)
///
/// @param self QPalette*
const QBrush* q_palette_highlighted_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#link)
///
/// @param self QPalette*
const QBrush* q_palette_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#linkVisited)
///
/// @param self QPalette*
const QBrush* q_palette_link_visited(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#placeholderText)
///
/// @param self QPalette*
const QBrush* q_palette_placeholder_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#accent)
///
/// @param self QPalette*
const QBrush* q_palette_accent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator-eq-eq)
///
/// @param self QPalette*
/// @param p QPalette*
bool q_palette_operator_equal(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator-not-eq)
///
/// @param self QPalette*
/// @param p QPalette*
bool q_palette_operator_not_equal(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isCopyOf)
///
/// @param self QPalette*
/// @param p QPalette*
bool q_palette_is_copy_of(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#cacheKey)
///
/// @param self QPalette*
long long q_palette_cache_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#resolve)
///
/// @param self QPalette*
/// @param other QPalette*
QPalette* q_palette_resolve(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#resolveMask)
///
/// @param self QPalette*
uint64_t q_palette_resolve_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setResolveMask)
///
/// @param self QPalette*
/// @param mask uint64_t
void q_palette_set_resolve_mask(void* self, uint64_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#dtor.QPalette)
///
/// Delete this object from C++ memory.
///
/// @param self QPalette*
void q_palette_delete(void* self);

/// https://doc.qt.io/qt-6/qpalette.html#types

typedef enum {
    QPALETTE_COLORGROUP_ACTIVE = 0,
    QPALETTE_COLORGROUP_DISABLED = 1,
    QPALETTE_COLORGROUP_INACTIVE = 2,
    QPALETTE_COLORGROUP_NCOLORGROUPS = 3,
    QPALETTE_COLORGROUP_CURRENT = 4,
    QPALETTE_COLORGROUP_ALL = 5,
    QPALETTE_COLORGROUP_NORMAL = 0
} QPalette__ColorGroup;

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
