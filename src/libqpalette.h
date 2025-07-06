#pragma once
#ifndef SRCQT6C_LIBQPALETTE_H
#define SRCQT6C_LIBQPALETTE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpalette.html

/// q_palette_new constructs a new QPalette object.
///
///
QPalette* q_palette_new();

/// q_palette_new2 constructs a new QPalette object.
///
/// ``` QColor* button ```
QPalette* q_palette_new2(void* button);

/// q_palette_new3 constructs a new QPalette object.
///
/// ``` enum Qt__GlobalColor button ```
QPalette* q_palette_new3(int64_t button);

/// q_palette_new4 constructs a new QPalette object.
///
/// ``` QColor* button, QColor* window ```
QPalette* q_palette_new4(void* button, void* window);

/// q_palette_new5 constructs a new QPalette object.
///
/// ``` QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window ```
QPalette* q_palette_new5(void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window);

/// q_palette_new6 constructs a new QPalette object.
///
/// ``` QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base ```
QPalette* q_palette_new6(void* windowText, void* window, void* light, void* dark, void* mid, void* text, void* base);

/// q_palette_new7 constructs a new QPalette object.
///
/// ``` QPalette* palette ```
QPalette* q_palette_new7(void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator=)
///
/// ``` QPalette* self, QPalette* palette ```
void q_palette_operator_assign(void* self, void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#swap)
///
/// ``` QPalette* self, QPalette* other ```
void q_palette_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator QVariant)
///
/// ``` QPalette* self ```
QVariant* q_palette_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#currentColorGroup)
///
/// ``` QPalette* self ```
int64_t q_palette_current_color_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setCurrentColorGroup)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg ```
void q_palette_set_current_color_group(void* self, int64_t cg);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#color)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr ```
const QColor* q_palette_color(void* self, int64_t cg, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brush)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr ```
const QBrush* q_palette_brush(void* self, int64_t cg, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColor)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr, QColor* color ```
void q_palette_set_color(void* self, int64_t cg, int64_t cr, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColor)
///
/// ``` QPalette* self, enum QPalette__ColorRole cr, QColor* color ```
void q_palette_set_color2(void* self, int64_t cr, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setBrush)
///
/// ``` QPalette* self, enum QPalette__ColorRole cr, QBrush* brush ```
void q_palette_set_brush(void* self, int64_t cr, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isBrushSet)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr ```
bool q_palette_is_brush_set(void* self, int64_t cg, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setBrush)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr, QBrush* brush ```
void q_palette_set_brush2(void* self, int64_t cg, int64_t cr, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColorGroup)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cr, QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window ```
void q_palette_set_color_group(void* self, int64_t cr, void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isEqual)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cr1, enum QPalette__ColorGroup cr2 ```
bool q_palette_is_equal(void* self, int64_t cr1, int64_t cr2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#color)
///
/// ``` QPalette* self, enum QPalette__ColorRole cr ```
const QColor* q_palette_color_with_cr(void* self, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brush)
///
/// ``` QPalette* self, enum QPalette__ColorRole cr ```
const QBrush* q_palette_brush_with_cr(void* self, int64_t cr);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#windowText)
///
/// ``` QPalette* self ```
const QBrush* q_palette_window_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#button)
///
/// ``` QPalette* self ```
const QBrush* q_palette_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#light)
///
/// ``` QPalette* self ```
const QBrush* q_palette_light(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#dark)
///
/// ``` QPalette* self ```
const QBrush* q_palette_dark(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#mid)
///
/// ``` QPalette* self ```
const QBrush* q_palette_mid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#text)
///
/// ``` QPalette* self ```
const QBrush* q_palette_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#base)
///
/// ``` QPalette* self ```
const QBrush* q_palette_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#alternateBase)
///
/// ``` QPalette* self ```
const QBrush* q_palette_alternate_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#toolTipBase)
///
/// ``` QPalette* self ```
const QBrush* q_palette_tool_tip_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#toolTipText)
///
/// ``` QPalette* self ```
const QBrush* q_palette_tool_tip_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#window)
///
/// ``` QPalette* self ```
const QBrush* q_palette_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#midlight)
///
/// ``` QPalette* self ```
const QBrush* q_palette_midlight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brightText)
///
/// ``` QPalette* self ```
const QBrush* q_palette_bright_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#buttonText)
///
/// ``` QPalette* self ```
const QBrush* q_palette_button_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#shadow)
///
/// ``` QPalette* self ```
const QBrush* q_palette_shadow(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#highlight)
///
/// ``` QPalette* self ```
const QBrush* q_palette_highlight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#highlightedText)
///
/// ``` QPalette* self ```
const QBrush* q_palette_highlighted_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#link)
///
/// ``` QPalette* self ```
const QBrush* q_palette_link(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#linkVisited)
///
/// ``` QPalette* self ```
const QBrush* q_palette_link_visited(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#placeholderText)
///
/// ``` QPalette* self ```
const QBrush* q_palette_placeholder_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#accent)
///
/// ``` QPalette* self ```
const QBrush* q_palette_accent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator==)
///
/// ``` QPalette* self, QPalette* p ```
bool q_palette_operator_equal(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator!=)
///
/// ``` QPalette* self, QPalette* p ```
bool q_palette_operator_not_equal(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isCopyOf)
///
/// ``` QPalette* self, QPalette* p ```
bool q_palette_is_copy_of(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#cacheKey)
///
/// ``` QPalette* self ```
long long q_palette_cache_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#resolve)
///
/// ``` QPalette* self, QPalette* other ```
QPalette* q_palette_resolve(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#resolveMask)
///
/// ``` QPalette* self ```
uint64_t q_palette_resolve_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setResolveMask)
///
/// ``` QPalette* self, uint64_t mask ```
void q_palette_set_resolve_mask(void* self, uint64_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#dtor.QPalette)
///
/// Delete this object from C++ memory.
///
/// ``` QPalette* self ```
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
