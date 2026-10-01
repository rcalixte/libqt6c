#include "libqbrush.hpp"
#include "libqcolor.hpp"
#include "libqvariant.hpp"
#include "libqpalette.hpp"
#include "libqpalette.h"

QPalette* q_palette_new() {
    return QPalette_New();
}

QPalette* q_palette_new2(const void* button) {
    return QPalette_New2((QColor*)button);
}

QPalette* q_palette_new3(int32_t button) {
    return QPalette_New3(button);
}

QPalette* q_palette_new4(const void* button, const void* window) {
    return QPalette_New4((QColor*)button, (QColor*)window);
}

QPalette* q_palette_new5(const void* windowText, const void* button, const void* light, const void* dark, const void* mid, const void* text, const void* bright_text, const void* base, const void* window) {
    return QPalette_New5((QBrush*)windowText, (QBrush*)button, (QBrush*)light, (QBrush*)dark, (QBrush*)mid, (QBrush*)text, (QBrush*)bright_text, (QBrush*)base, (QBrush*)window);
}

QPalette* q_palette_new6(const void* windowText, const void* window, const void* light, const void* dark, const void* mid, const void* text, const void* base) {
    return QPalette_New6((QColor*)windowText, (QColor*)window, (QColor*)light, (QColor*)dark, (QColor*)mid, (QColor*)text, (QColor*)base);
}

QPalette* q_palette_new7(const void* palette) {
    return QPalette_New7((QPalette*)palette);
}

void q_palette_operator_assign(void* self, const void* palette) {
    QPalette_OperatorAssign((QPalette*)self, (QPalette*)palette);
}

void q_palette_swap(void* self, void* other) {
    QPalette_Swap((QPalette*)self, (QPalette*)other);
}

QVariant* q_palette_to_q_variant(const void* self) {
    return QPalette_ToQVariant((QPalette*)self);
}

int32_t q_palette_current_color_group(const void* self) {
    return QPalette_CurrentColorGroup((QPalette*)self);
}

void q_palette_set_current_color_group(void* self, int32_t cg) {
    QPalette_SetCurrentColorGroup((QPalette*)self, cg);
}

const QColor* q_palette_color(const void* self, int32_t cg, int32_t cr) {
    return QPalette_Color((QPalette*)self, cg, cr);
}

const QBrush* q_palette_brush(const void* self, int32_t cg, int32_t cr) {
    return QPalette_Brush((QPalette*)self, cg, cr);
}

void q_palette_set_color(void* self, int32_t cg, int32_t cr, const void* color) {
    QPalette_SetColor((QPalette*)self, cg, cr, (QColor*)color);
}

void q_palette_set_color2(void* self, int32_t cr, const void* color) {
    QPalette_SetColor2((QPalette*)self, cr, (QColor*)color);
}

void q_palette_set_brush(void* self, int32_t cr, const void* brush) {
    QPalette_SetBrush((QPalette*)self, cr, (QBrush*)brush);
}

bool q_palette_is_brush_set(const void* self, int32_t cg, int32_t cr) {
    return QPalette_IsBrushSet((QPalette*)self, cg, cr);
}

void q_palette_set_brush2(void* self, int32_t cg, int32_t cr, const void* brush) {
    QPalette_SetBrush2((QPalette*)self, cg, cr, (QBrush*)brush);
}

void q_palette_set_color_group(void* self, int32_t cr, const void* windowText, const void* button, const void* light, const void* dark, const void* mid, const void* text, const void* bright_text, const void* base, const void* window) {
    QPalette_SetColorGroup((QPalette*)self, cr, (QBrush*)windowText, (QBrush*)button, (QBrush*)light, (QBrush*)dark, (QBrush*)mid, (QBrush*)text, (QBrush*)bright_text, (QBrush*)base, (QBrush*)window);
}

bool q_palette_is_equal(const void* self, int32_t cr1, int32_t cr2) {
    return QPalette_IsEqual((QPalette*)self, cr1, cr2);
}

const QColor* q_palette_color2(const void* self, int32_t cr) {
    return QPalette_Color2((QPalette*)self, cr);
}

const QBrush* q_palette_brush2(const void* self, int32_t cr) {
    return QPalette_Brush2((QPalette*)self, cr);
}

const QBrush* q_palette_window_text(const void* self) {
    return QPalette_WindowText((QPalette*)self);
}

const QBrush* q_palette_button(const void* self) {
    return QPalette_Button((QPalette*)self);
}

const QBrush* q_palette_light(const void* self) {
    return QPalette_Light((QPalette*)self);
}

const QBrush* q_palette_dark(const void* self) {
    return QPalette_Dark((QPalette*)self);
}

const QBrush* q_palette_mid(const void* self) {
    return QPalette_Mid((QPalette*)self);
}

const QBrush* q_palette_text(const void* self) {
    return QPalette_Text((QPalette*)self);
}

const QBrush* q_palette_base(const void* self) {
    return QPalette_Base((QPalette*)self);
}

const QBrush* q_palette_alternate_base(const void* self) {
    return QPalette_AlternateBase((QPalette*)self);
}

const QBrush* q_palette_tool_tip_base(const void* self) {
    return QPalette_ToolTipBase((QPalette*)self);
}

const QBrush* q_palette_tool_tip_text(const void* self) {
    return QPalette_ToolTipText((QPalette*)self);
}

const QBrush* q_palette_window(const void* self) {
    return QPalette_Window((QPalette*)self);
}

const QBrush* q_palette_midlight(const void* self) {
    return QPalette_Midlight((QPalette*)self);
}

const QBrush* q_palette_bright_text(const void* self) {
    return QPalette_BrightText((QPalette*)self);
}

const QBrush* q_palette_button_text(const void* self) {
    return QPalette_ButtonText((QPalette*)self);
}

const QBrush* q_palette_shadow(const void* self) {
    return QPalette_Shadow((QPalette*)self);
}

const QBrush* q_palette_highlight(const void* self) {
    return QPalette_Highlight((QPalette*)self);
}

const QBrush* q_palette_highlighted_text(const void* self) {
    return QPalette_HighlightedText((QPalette*)self);
}

const QBrush* q_palette_link(const void* self) {
    return QPalette_Link((QPalette*)self);
}

const QBrush* q_palette_link_visited(const void* self) {
    return QPalette_LinkVisited((QPalette*)self);
}

const QBrush* q_palette_placeholder_text(const void* self) {
    return QPalette_PlaceholderText((QPalette*)self);
}

const QBrush* q_palette_accent(const void* self) {
    return QPalette_Accent((QPalette*)self);
}

bool q_palette_operator_equal(const void* self, const void* p) {
    return QPalette_OperatorEqual((QPalette*)self, (QPalette*)p);
}

bool q_palette_operator_not_equal(const void* self, const void* p) {
    return QPalette_OperatorNotEqual((QPalette*)self, (QPalette*)p);
}

bool q_palette_is_copy_of(const void* self, const void* p) {
    return QPalette_IsCopyOf((QPalette*)self, (QPalette*)p);
}

int64_t q_palette_cache_key(const void* self) {
    return QPalette_CacheKey((QPalette*)self);
}

QPalette* q_palette_resolve(const void* self, const void* other) {
    return QPalette_Resolve((QPalette*)self, (QPalette*)other);
}

uintptr_t q_palette_resolve_mask(const void* self) {
    return QPalette_ResolveMask((QPalette*)self);
}

void q_palette_set_resolve_mask(void* self, uintptr_t mask) {
    QPalette_SetResolveMask((QPalette*)self, mask);
}

void q_palette_delete(void* self) {
    QPalette_Delete((QPalette*)(self));
}
