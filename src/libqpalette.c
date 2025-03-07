#include "libqbrush.hpp"
#include "libqcolor.hpp"
#include "libqvariant.hpp"
#include "libqpalette.hpp"
#include "libqpalette.h"

/// https://doc.qt.io/qt-6/qpalette.html

/// q_palette_new constructs a new QPalette object.
///
///
QPalette* q_palette_new() {
    return QPalette_new();
}

/// q_palette_new2 constructs a new QPalette object.
///
/// ``` QColor* button ```
QPalette* q_palette_new2(void* button) {
    return QPalette_new2((QColor*)button);
}

/// q_palette_new3 constructs a new QPalette object.
///
/// ``` enum Qt__GlobalColor button ```
QPalette* q_palette_new3(int64_t button) {
    return QPalette_new3(button);
}

/// q_palette_new4 constructs a new QPalette object.
///
/// ``` QColor* button, QColor* window ```
QPalette* q_palette_new4(void* button, void* window) {
    return QPalette_new4((QColor*)button, (QColor*)window);
}

/// q_palette_new5 constructs a new QPalette object.
///
/// ``` QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window ```
QPalette* q_palette_new5(void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window) {
    return QPalette_new5((QBrush*)windowText, (QBrush*)button, (QBrush*)light, (QBrush*)dark, (QBrush*)mid, (QBrush*)text, (QBrush*)bright_text, (QBrush*)base, (QBrush*)window);
}

/// q_palette_new6 constructs a new QPalette object.
///
/// ``` QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base ```
QPalette* q_palette_new6(void* windowText, void* window, void* light, void* dark, void* mid, void* text, void* base) {
    return QPalette_new6((QColor*)windowText, (QColor*)window, (QColor*)light, (QColor*)dark, (QColor*)mid, (QColor*)text, (QColor*)base);
}

/// q_palette_new7 constructs a new QPalette object.
///
/// ``` QPalette* palette ```
QPalette* q_palette_new7(void* palette) {
    return QPalette_new7((QPalette*)palette);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator=)
///
/// ``` QPalette* self, QPalette* palette ```
void q_palette_operator_assign(void* self, void* palette) {
    QPalette_OperatorAssign((QPalette*)self, (QPalette*)palette);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#swap)
///
/// ``` QPalette* self, QPalette* other ```
void q_palette_swap(void* self, void* other) {
    QPalette_Swap((QPalette*)self, (QPalette*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator QVariant)
///
/// ``` QPalette* self ```
QVariant* q_palette_to_q_variant(void* self) {
    return QPalette_ToQVariant((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#currentColorGroup)
///
/// ``` QPalette* self ```
int64_t q_palette_current_color_group(void* self) {
    return QPalette_CurrentColorGroup((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setCurrentColorGroup)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg ```
void q_palette_set_current_color_group(void* self, int64_t cg) {
    QPalette_SetCurrentColorGroup((QPalette*)self, cg);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#color)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr ```
QColor* q_palette_color(void* self, int64_t cg, int64_t cr) {
    return QPalette_Color((QPalette*)self, cg, cr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brush)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr ```
QBrush* q_palette_brush(void* self, int64_t cg, int64_t cr) {
    return QPalette_Brush((QPalette*)self, cg, cr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColor)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr, QColor* color ```
void q_palette_set_color(void* self, int64_t cg, int64_t cr, void* color) {
    QPalette_SetColor((QPalette*)self, cg, cr, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColor)
///
/// ``` QPalette* self, enum QPalette__ColorRole cr, QColor* color ```
void q_palette_set_color2(void* self, int64_t cr, void* color) {
    QPalette_SetColor2((QPalette*)self, cr, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setBrush)
///
/// ``` QPalette* self, enum QPalette__ColorRole cr, QBrush* brush ```
void q_palette_set_brush(void* self, int64_t cr, void* brush) {
    QPalette_SetBrush((QPalette*)self, cr, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isBrushSet)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr ```
bool q_palette_is_brush_set(void* self, int64_t cg, int64_t cr) {
    return QPalette_IsBrushSet((QPalette*)self, cg, cr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setBrush)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cg, enum QPalette__ColorRole cr, QBrush* brush ```
void q_palette_set_brush2(void* self, int64_t cg, int64_t cr, void* brush) {
    QPalette_SetBrush2((QPalette*)self, cg, cr, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setColorGroup)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cr, QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window ```
void q_palette_set_color_group(void* self, int64_t cr, void* windowText, void* button, void* light, void* dark, void* mid, void* text, void* bright_text, void* base, void* window) {
    QPalette_SetColorGroup((QPalette*)self, cr, (QBrush*)windowText, (QBrush*)button, (QBrush*)light, (QBrush*)dark, (QBrush*)mid, (QBrush*)text, (QBrush*)bright_text, (QBrush*)base, (QBrush*)window);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isEqual)
///
/// ``` QPalette* self, enum QPalette__ColorGroup cr1, enum QPalette__ColorGroup cr2 ```
bool q_palette_is_equal(void* self, int64_t cr1, int64_t cr2) {
    return QPalette_IsEqual((QPalette*)self, cr1, cr2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#color)
///
/// ``` QPalette* self, enum QPalette__ColorRole cr ```
QColor* q_palette_color_with_cr(void* self, int64_t cr) {
    return QPalette_ColorWithCr((QPalette*)self, cr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brush)
///
/// ``` QPalette* self, enum QPalette__ColorRole cr ```
QBrush* q_palette_brush_with_cr(void* self, int64_t cr) {
    return QPalette_BrushWithCr((QPalette*)self, cr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#windowText)
///
/// ``` QPalette* self ```
QBrush* q_palette_window_text(void* self) {
    return QPalette_WindowText((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#button)
///
/// ``` QPalette* self ```
QBrush* q_palette_button(void* self) {
    return QPalette_Button((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#light)
///
/// ``` QPalette* self ```
QBrush* q_palette_light(void* self) {
    return QPalette_Light((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#dark)
///
/// ``` QPalette* self ```
QBrush* q_palette_dark(void* self) {
    return QPalette_Dark((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#mid)
///
/// ``` QPalette* self ```
QBrush* q_palette_mid(void* self) {
    return QPalette_Mid((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#text)
///
/// ``` QPalette* self ```
QBrush* q_palette_text(void* self) {
    return QPalette_Text((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#base)
///
/// ``` QPalette* self ```
QBrush* q_palette_base(void* self) {
    return QPalette_Base((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#alternateBase)
///
/// ``` QPalette* self ```
QBrush* q_palette_alternate_base(void* self) {
    return QPalette_AlternateBase((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#toolTipBase)
///
/// ``` QPalette* self ```
QBrush* q_palette_tool_tip_base(void* self) {
    return QPalette_ToolTipBase((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#toolTipText)
///
/// ``` QPalette* self ```
QBrush* q_palette_tool_tip_text(void* self) {
    return QPalette_ToolTipText((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#window)
///
/// ``` QPalette* self ```
QBrush* q_palette_window(void* self) {
    return QPalette_Window((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#midlight)
///
/// ``` QPalette* self ```
QBrush* q_palette_midlight(void* self) {
    return QPalette_Midlight((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#brightText)
///
/// ``` QPalette* self ```
QBrush* q_palette_bright_text(void* self) {
    return QPalette_BrightText((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#buttonText)
///
/// ``` QPalette* self ```
QBrush* q_palette_button_text(void* self) {
    return QPalette_ButtonText((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#shadow)
///
/// ``` QPalette* self ```
QBrush* q_palette_shadow(void* self) {
    return QPalette_Shadow((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#highlight)
///
/// ``` QPalette* self ```
QBrush* q_palette_highlight(void* self) {
    return QPalette_Highlight((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#highlightedText)
///
/// ``` QPalette* self ```
QBrush* q_palette_highlighted_text(void* self) {
    return QPalette_HighlightedText((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#link)
///
/// ``` QPalette* self ```
QBrush* q_palette_link(void* self) {
    return QPalette_Link((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#linkVisited)
///
/// ``` QPalette* self ```
QBrush* q_palette_link_visited(void* self) {
    return QPalette_LinkVisited((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#placeholderText)
///
/// ``` QPalette* self ```
QBrush* q_palette_placeholder_text(void* self) {
    return QPalette_PlaceholderText((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator==)
///
/// ``` QPalette* self, QPalette* p ```
bool q_palette_operator_equal(void* self, void* p) {
    return QPalette_OperatorEqual((QPalette*)self, (QPalette*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#operator!=)
///
/// ``` QPalette* self, QPalette* p ```
bool q_palette_operator_not_equal(void* self, void* p) {
    return QPalette_OperatorNotEqual((QPalette*)self, (QPalette*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#isCopyOf)
///
/// ``` QPalette* self, QPalette* p ```
bool q_palette_is_copy_of(void* self, void* p) {
    return QPalette_IsCopyOf((QPalette*)self, (QPalette*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#cacheKey)
///
/// ``` QPalette* self ```
long long q_palette_cache_key(void* self) {
    return QPalette_CacheKey((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#resolve)
///
/// ``` QPalette* self, QPalette* other ```
QPalette* q_palette_resolve(void* self, void* other) {
    return QPalette_Resolve((QPalette*)self, (QPalette*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#resolveMask)
///
/// ``` QPalette* self ```
uint64_t q_palette_resolve_mask(void* self) {
    return QPalette_ResolveMask((QPalette*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpalette.html#setResolveMask)
///
/// ``` QPalette* self, uint64_t mask ```
void q_palette_set_resolve_mask(void* self, uint64_t mask) {
    QPalette_SetResolveMask((QPalette*)self, mask);
}

/// Delete this object from C++ memory.
///
/// ``` QPalette* self ```
void q_palette_delete(void* self) {
    QPalette_Delete((QPalette*)(self));
}