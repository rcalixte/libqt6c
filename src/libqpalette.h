#pragma once
#ifndef SRCQT6C_LIBQPALETTE_H
#define SRCQT6C_LIBQPALETTE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbrush.h"
#include "libqcolor.h"
#include "libqvariant.h"

QPalette* q_palette_new();
QPalette* q_palette_new2(void* button);
QPalette* q_palette_new3(int64_t button);
QPalette* q_palette_new4(void* button, void* window);
QPalette* q_palette_new5(void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window);
QPalette* q_palette_new6(void* windowText, void* window, void* light, void* dark, void* mid, void* text, void* base);
QPalette* q_palette_new7(void* palette);
void q_palette_operator_assign(void* self, void* palette);
void q_palette_swap(void* self, void* other);
QVariant* q_palette_to_q_variant(void* self);
int64_t q_palette_current_color_group(void* self);
void q_palette_set_current_color_group(void* self, int64_t cg);
QColor* q_palette_color(void* self, int64_t cg, int64_t cr);
QBrush* q_palette_brush(void* self, int64_t cg, int64_t cr);
void q_palette_set_color(void* self, int64_t cg, int64_t cr, void* color);
void q_palette_set_color2(void* self, int64_t cr, void* color);
void q_palette_set_brush(void* self, int64_t cr, void* brush);
bool q_palette_is_brush_set(void* self, int64_t cg, int64_t cr);
void q_palette_set_brush2(void* self, int64_t cg, int64_t cr, void* brush);
void q_palette_set_color_group(void* self, int64_t cr, void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window);
bool q_palette_is_equal(void* self, int64_t cr1, int64_t cr2);
QColor* q_palette_color_with_cr(void* self, int64_t cr);
QBrush* q_palette_brush_with_cr(void* self, int64_t cr);
QBrush* q_palette_window_text(void* self);
QBrush* q_palette_button(void* self);
QBrush* q_palette_light(void* self);
QBrush* q_palette_dark(void* self);
QBrush* q_palette_mid(void* self);
QBrush* q_palette_text(void* self);
QBrush* q_palette_base(void* self);
QBrush* q_palette_alternate_base(void* self);
QBrush* q_palette_tool_tip_base(void* self);
QBrush* q_palette_tool_tip_text(void* self);
QBrush* q_palette_window(void* self);
QBrush* q_palette_midlight(void* self);
QBrush* q_palette_bright_text(void* self);
QBrush* q_palette_button_text(void* self);
QBrush* q_palette_shadow(void* self);
QBrush* q_palette_highlight(void* self);
QBrush* q_palette_highlighted_text(void* self);
QBrush* q_palette_link(void* self);
QBrush* q_palette_link_visited(void* self);
QBrush* q_palette_placeholder_text(void* self);
bool q_palette_operator_equal(void* self, void* p);
bool q_palette_operator_not_equal(void* self, void* p);
bool q_palette_is_copy_of(void* self, void* p);
long long q_palette_cache_key(void* self);
QPalette* q_palette_resolve(void* self, void* other);
uint64_t q_palette_resolve_mask(void* self);
void q_palette_set_resolve_mask(void* self, uint64_t mask);
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
    QPALETTE_COLORROLE_NCOLORROLES = 21
} QPalette__ColorRole;

#endif
