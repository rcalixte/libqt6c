#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpalette.hpp"
#include "libplatformtheme.hpp"
#include "libplatformtheme.h"

Kirigami__Platform__PlatformTheme* k_irigami__platform__platformtheme_new() {
    return Kirigami__Platform__PlatformTheme_New();
}

Kirigami__Platform__PlatformTheme* k_irigami__platform__platformtheme_new2(void* parent) {
    return Kirigami__Platform__PlatformTheme_New2((QObject*)parent);
}

const QMetaObject* k_irigami__platform__platformtheme_meta_object(void* self) {
    return Kirigami__Platform__PlatformTheme_MetaObject((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Kirigami__Platform__PlatformTheme_OnMetaObject((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

const QMetaObject* k_irigami__platform__platformtheme_super_meta_object(void* self) {
    return Kirigami__Platform__PlatformTheme_SuperMetaObject((Kirigami__Platform__PlatformTheme*)self);
}

void* k_irigami__platform__platformtheme_metacast(void* self, const char* param1) {
    return Kirigami__Platform__PlatformTheme_Metacast((Kirigami__Platform__PlatformTheme*)self, param1);
}

void k_irigami__platform__platformtheme_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Kirigami__Platform__PlatformTheme_OnMetacast((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void* k_irigami__platform__platformtheme_super_metacast(void* self, const char* param1) {
    return Kirigami__Platform__PlatformTheme_SuperMetacast((Kirigami__Platform__PlatformTheme*)self, param1);
}

int32_t k_irigami__platform__platformtheme_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__PlatformTheme_Metacall((Kirigami__Platform__PlatformTheme*)self, param1, param2, param3);
}

void k_irigami__platform__platformtheme_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Kirigami__Platform__PlatformTheme_OnMetacall((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__platformtheme_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__PlatformTheme_SuperMetacall((Kirigami__Platform__PlatformTheme*)self, param1, param2, param3);
}

const char* k_irigami__platform__platformtheme_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigami__platform__platformtheme_set_color_set(void* self, int32_t colorSet) {
    Kirigami__Platform__PlatformTheme_SetColorSet((Kirigami__Platform__PlatformTheme*)self, colorSet);
}

int32_t k_irigami__platform__platformtheme_color_set(void* self) {
    return Kirigami__Platform__PlatformTheme_ColorSet((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_color_group(void* self, int32_t colorGroup) {
    Kirigami__Platform__PlatformTheme_SetColorGroup((Kirigami__Platform__PlatformTheme*)self, colorGroup);
}

int32_t k_irigami__platform__platformtheme_color_group(void* self) {
    return Kirigami__Platform__PlatformTheme_ColorGroup((Kirigami__Platform__PlatformTheme*)self);
}

bool k_irigami__platform__platformtheme_inherit(void* self) {
    return Kirigami__Platform__PlatformTheme_Inherit((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_inherit(void* self, bool inherit) {
    Kirigami__Platform__PlatformTheme_SetInherit((Kirigami__Platform__PlatformTheme*)self, inherit);
}

QColor* k_irigami__platform__platformtheme_text_color(void* self) {
    return Kirigami__Platform__PlatformTheme_TextColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_disabled_text_color(void* self) {
    return Kirigami__Platform__PlatformTheme_DisabledTextColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_highlighted_text_color(void* self) {
    return Kirigami__Platform__PlatformTheme_HighlightedTextColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_active_text_color(void* self) {
    return Kirigami__Platform__PlatformTheme_ActiveTextColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_link_color(void* self) {
    return Kirigami__Platform__PlatformTheme_LinkColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_visited_link_color(void* self) {
    return Kirigami__Platform__PlatformTheme_VisitedLinkColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_negative_text_color(void* self) {
    return Kirigami__Platform__PlatformTheme_NegativeTextColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_neutral_text_color(void* self) {
    return Kirigami__Platform__PlatformTheme_NeutralTextColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_positive_text_color(void* self) {
    return Kirigami__Platform__PlatformTheme_PositiveTextColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_background_color(void* self) {
    return Kirigami__Platform__PlatformTheme_BackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_alternate_background_color(void* self) {
    return Kirigami__Platform__PlatformTheme_AlternateBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_highlight_color(void* self) {
    return Kirigami__Platform__PlatformTheme_HighlightColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_active_background_color(void* self) {
    return Kirigami__Platform__PlatformTheme_ActiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_link_background_color(void* self) {
    return Kirigami__Platform__PlatformTheme_LinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_visited_link_background_color(void* self) {
    return Kirigami__Platform__PlatformTheme_VisitedLinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_negative_background_color(void* self) {
    return Kirigami__Platform__PlatformTheme_NegativeBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_neutral_background_color(void* self) {
    return Kirigami__Platform__PlatformTheme_NeutralBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_positive_background_color(void* self) {
    return Kirigami__Platform__PlatformTheme_PositiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_focus_color(void* self) {
    return Kirigami__Platform__PlatformTheme_FocusColor((Kirigami__Platform__PlatformTheme*)self);
}

QColor* k_irigami__platform__platformtheme_hover_color(void* self) {
    return Kirigami__Platform__PlatformTheme_HoverColor((Kirigami__Platform__PlatformTheme*)self);
}

QFont* k_irigami__platform__platformtheme_default_font(void* self) {
    return Kirigami__Platform__PlatformTheme_DefaultFont((Kirigami__Platform__PlatformTheme*)self);
}

QFont* k_irigami__platform__platformtheme_small_font(void* self) {
    return Kirigami__Platform__PlatformTheme_SmallFont((Kirigami__Platform__PlatformTheme*)self);
}

QPalette* k_irigami__platform__platformtheme_palette(void* self) {
    return Kirigami__Platform__PlatformTheme_Palette((Kirigami__Platform__PlatformTheme*)self);
}

double k_irigami__platform__platformtheme_frame_contrast(void* self) {
    return Kirigami__Platform__PlatformTheme_FrameContrast((Kirigami__Platform__PlatformTheme*)self);
}

double k_irigami__platform__platformtheme_light_frame_contrast(void* self) {
    return Kirigami__Platform__PlatformTheme_LightFrameContrast((Kirigami__Platform__PlatformTheme*)self);
}

QIcon* k_irigami__platform__platformtheme_icon_from_theme(void* self, const char* name, void* customColor) {
    return Kirigami__Platform__PlatformTheme_IconFromTheme((Kirigami__Platform__PlatformTheme*)self, qstring(name), (QColor*)customColor);
}

void k_irigami__platform__platformtheme_on_icon_from_theme(void* self, QIcon* (*callback)(void*, const char*, void*)) {
    Kirigami__Platform__PlatformTheme_OnIconFromTheme((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

QIcon* k_irigami__platform__platformtheme_super_icon_from_theme(void* self, const char* name, void* customColor) {
    return Kirigami__Platform__PlatformTheme_SuperIconFromTheme((Kirigami__Platform__PlatformTheme*)self, qstring(name), (QColor*)customColor);
}

bool k_irigami__platform__platformtheme_supports_icon_coloring(void* self) {
    return Kirigami__Platform__PlatformTheme_SupportsIconColoring((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_text_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomTextColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_disabled_text_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomDisabledTextColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_highlighted_text_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomHighlightedTextColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_active_text_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomActiveTextColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_link_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomLinkColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_visited_link_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_negative_text_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomNegativeTextColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_neutral_text_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomNeutralTextColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_positive_text_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomPositiveTextColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_background_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_alternate_background_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomAlternateBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_highlight_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomHighlightColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_active_background_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomActiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_link_background_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomLinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_visited_link_background_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_negative_background_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomNegativeBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_neutral_background_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomNeutralBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_positive_background_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomPositiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_focus_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomFocusColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_custom_hover_color(void* self) {
    Kirigami__Platform__PlatformTheme_SetCustomHoverColor((Kirigami__Platform__PlatformTheme*)self);
}

bool k_irigami__platform__platformtheme_use_alternate_background_color(void* self) {
    return Kirigami__Platform__PlatformTheme_UseAlternateBackgroundColor((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_set_use_alternate_background_color(void* self, bool alternate) {
    Kirigami__Platform__PlatformTheme_SetUseAlternateBackgroundColor((Kirigami__Platform__PlatformTheme*)self, alternate);
}

Kirigami__Platform__PlatformTheme* k_irigami__platform__platformtheme_qml_attached_properties(void* object) {
    return Kirigami__Platform__PlatformTheme_QmlAttachedProperties((QObject*)object);
}

void k_irigami__platform__platformtheme_colors_changed(void* self) {
    Kirigami__Platform__PlatformTheme_ColorsChanged((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_on_colors_changed(void* self, void (*callback)(void*)) {
    Kirigami__Platform__PlatformTheme_Connect_ColorsChanged((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_default_font_changed(void* self, void* font) {
    Kirigami__Platform__PlatformTheme_DefaultFontChanged((Kirigami__Platform__PlatformTheme*)self, (QFont*)font);
}

void k_irigami__platform__platformtheme_on_default_font_changed(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_Connect_DefaultFontChanged((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_small_font_changed(void* self, void* font) {
    Kirigami__Platform__PlatformTheme_SmallFontChanged((Kirigami__Platform__PlatformTheme*)self, (QFont*)font);
}

void k_irigami__platform__platformtheme_on_small_font_changed(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_Connect_SmallFontChanged((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_color_set_changed(void* self, int32_t colorSet) {
    Kirigami__Platform__PlatformTheme_ColorSetChanged((Kirigami__Platform__PlatformTheme*)self, colorSet);
}

void k_irigami__platform__platformtheme_on_color_set_changed(void* self, void (*callback)(void*, int32_t)) {
    Kirigami__Platform__PlatformTheme_Connect_ColorSetChanged((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_color_group_changed(void* self, int32_t colorGroup) {
    Kirigami__Platform__PlatformTheme_ColorGroupChanged((Kirigami__Platform__PlatformTheme*)self, colorGroup);
}

void k_irigami__platform__platformtheme_on_color_group_changed(void* self, void (*callback)(void*, int32_t)) {
    Kirigami__Platform__PlatformTheme_Connect_ColorGroupChanged((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_palette_changed(void* self, void* pal) {
    Kirigami__Platform__PlatformTheme_PaletteChanged((Kirigami__Platform__PlatformTheme*)self, (QPalette*)pal);
}

void k_irigami__platform__platformtheme_on_palette_changed(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_Connect_PaletteChanged((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_inherit_changed(void* self, bool inherit) {
    Kirigami__Platform__PlatformTheme_InheritChanged((Kirigami__Platform__PlatformTheme*)self, inherit);
}

void k_irigami__platform__platformtheme_on_inherit_changed(void* self, void (*callback)(void*, bool)) {
    Kirigami__Platform__PlatformTheme_Connect_InheritChanged((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_use_alternate_background_color_changed(void* self, bool alternate) {
    Kirigami__Platform__PlatformTheme_UseAlternateBackgroundColorChanged((Kirigami__Platform__PlatformTheme*)self, alternate);
}

void k_irigami__platform__platformtheme_on_use_alternate_background_color_changed(void* self, void (*callback)(void*, bool)) {
    Kirigami__Platform__PlatformTheme_Connect_UseAlternateBackgroundColorChanged((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_set_supports_icon_coloring(void* self, bool support) {
    Kirigami__Platform__PlatformTheme_SetSupportsIconColoring((Kirigami__Platform__PlatformTheme*)self, support);
}

void k_irigami__platform__platformtheme_on_set_supports_icon_coloring(void* self, void (*callback)(void*, bool)) {
    Kirigami__Platform__PlatformTheme_OnSetSupportsIconColoring((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_supports_icon_coloring(void* self, bool support) {
    Kirigami__Platform__PlatformTheme_SuperSetSupportsIconColoring((Kirigami__Platform__PlatformTheme*)self, support);
}

void k_irigami__platform__platformtheme_set_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_text_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetTextColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_disabled_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetDisabledTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_disabled_text_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetDisabledTextColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_disabled_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetDisabledTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_highlighted_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetHighlightedTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_highlighted_text_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetHighlightedTextColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_highlighted_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetHighlightedTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_active_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetActiveTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_active_text_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetActiveTextColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_active_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetActiveTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_link_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetLinkColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_link_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetLinkColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_link_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetLinkColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_visited_link_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetVisitedLinkColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_visited_link_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetVisitedLinkColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_visited_link_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetVisitedLinkColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_negative_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetNegativeTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_negative_text_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetNegativeTextColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_negative_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetNegativeTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_neutral_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetNeutralTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_neutral_text_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetNeutralTextColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_neutral_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetNeutralTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_positive_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetPositiveTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_positive_text_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetPositiveTextColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_positive_text_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetPositiveTextColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_background_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_alternate_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetAlternateBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_alternate_background_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetAlternateBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_alternate_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetAlternateBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_highlight_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetHighlightColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_highlight_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetHighlightColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_highlight_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetHighlightColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_active_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetActiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_active_background_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetActiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_active_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetActiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_link_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetLinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_link_background_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetLinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_link_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetLinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_visited_link_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetVisitedLinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_visited_link_background_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetVisitedLinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_visited_link_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetVisitedLinkBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_negative_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetNegativeBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_negative_background_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetNegativeBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_negative_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetNegativeBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_neutral_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetNeutralBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_neutral_background_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetNeutralBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_neutral_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetNeutralBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_positive_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetPositiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_positive_background_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetPositiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_positive_background_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetPositiveBackgroundColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_focus_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetFocusColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_focus_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetFocusColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_focus_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetFocusColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_hover_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetHoverColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_on_set_hover_color(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetHoverColor((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_hover_color(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SuperSetHoverColor((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_default_font(void* self, void* defaultFont) {
    Kirigami__Platform__PlatformTheme_SetDefaultFont((Kirigami__Platform__PlatformTheme*)self, (QFont*)defaultFont);
}

void k_irigami__platform__platformtheme_on_set_default_font(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetDefaultFont((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_default_font(void* self, void* defaultFont) {
    Kirigami__Platform__PlatformTheme_SuperSetDefaultFont((Kirigami__Platform__PlatformTheme*)self, (QFont*)defaultFont);
}

void k_irigami__platform__platformtheme_set_small_font(void* self, void* smallFont) {
    Kirigami__Platform__PlatformTheme_SetSmallFont((Kirigami__Platform__PlatformTheme*)self, (QFont*)smallFont);
}

void k_irigami__platform__platformtheme_on_set_small_font(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnSetSmallFont((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_super_set_small_font(void* self, void* smallFont) {
    Kirigami__Platform__PlatformTheme_SuperSetSmallFont((Kirigami__Platform__PlatformTheme*)self, (QFont*)smallFont);
}

bool k_irigami__platform__platformtheme_event(void* self, void* event) {
    return Kirigami__Platform__PlatformTheme_Event((Kirigami__Platform__PlatformTheme*)self, (QEvent*)event);
}

void k_irigami__platform__platformtheme_on_event(void* self, bool (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnEvent((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

bool k_irigami__platform__platformtheme_super_event(void* self, void* event) {
    return Kirigami__Platform__PlatformTheme_SuperEvent((Kirigami__Platform__PlatformTheme*)self, (QEvent*)event);
}

const char* k_irigami__platform__platformtheme_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigami__platform__platformtheme_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigami__platform__platformtheme_set_custom_text_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomTextColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_disabled_text_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomDisabledTextColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_highlighted_text_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomHighlightedTextColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_active_text_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomActiveTextColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_link_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomLinkColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_visited_link_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_negative_text_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomNegativeTextColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_neutral_text_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomNeutralTextColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_positive_text_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomPositiveTextColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_background_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomBackgroundColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_alternate_background_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomAlternateBackgroundColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_highlight_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomHighlightColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_active_background_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomActiveBackgroundColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_link_background_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomLinkBackgroundColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_visited_link_background_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkBackgroundColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_negative_background_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomNegativeBackgroundColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_neutral_background_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomNeutralBackgroundColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_positive_background_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomPositiveBackgroundColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_focus_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomFocusColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

void k_irigami__platform__platformtheme_set_custom_hover_color1(void* self, void* color) {
    Kirigami__Platform__PlatformTheme_SetCustomHoverColor1((Kirigami__Platform__PlatformTheme*)self, (QColor*)color);
}

const char* k_irigami__platform__platformtheme_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigami__platform__platformtheme_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_irigami__platform__platformtheme_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_irigami__platform__platformtheme_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_irigami__platform__platformtheme_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_irigami__platform__platformtheme_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_irigami__platform__platformtheme_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_irigami__platform__platformtheme_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_irigami__platform__platformtheme_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_irigami__platform__platformtheme_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_irigami__platform__platformtheme_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_irigami__platform__platformtheme_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_irigami__platform__platformtheme_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_irigami__platform__platformtheme_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_irigami__platform__platformtheme_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_irigami__platform__platformtheme_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_irigami__platform__platformtheme_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_irigami__platform__platformtheme_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_irigami__platform__platformtheme_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_irigami__platform__platformtheme_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_irigami__platform__platformtheme_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__platformtheme_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_irigami__platform__platformtheme_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_irigami__platform__platformtheme_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_irigami__platform__platformtheme_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_irigami__platform__platformtheme_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_irigami__platform__platformtheme_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_irigami__platform__platformtheme_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_irigami__platform__platformtheme_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_irigami__platform__platformtheme_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_irigami__platform__platformtheme_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_irigami__platform__platformtheme_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_irigami__platform__platformtheme_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_irigami__platform__platformtheme_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_irigami__platform__platformtheme_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__platformtheme_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_irigami__platform__platformtheme_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_irigami__platform__platformtheme_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_irigami__platform__platformtheme_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_irigami__platform__platformtheme_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_irigami__platform__platformtheme_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_irigami__platform__platformtheme_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_irigami__platform__platformtheme_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_irigami__platform__platformtheme_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_irigami__platform__platformtheme_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_irigami__platform__platformtheme_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__platformtheme_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_irigami__platform__platformtheme_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_irigami__platform__platformtheme_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_irigami__platform__platformtheme_event_filter(void* self, void* watched, void* event) {
    return Kirigami__Platform__PlatformTheme_EventFilter((Kirigami__Platform__PlatformTheme*)self, (QObject*)watched, (QEvent*)event);
}

bool k_irigami__platform__platformtheme_super_event_filter(void* self, void* watched, void* event) {
    return Kirigami__Platform__PlatformTheme_SuperEventFilter((Kirigami__Platform__PlatformTheme*)self, (QObject*)watched, (QEvent*)event);
}

void k_irigami__platform__platformtheme_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnEventFilter((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_timer_event(void* self, void* event) {
    Kirigami__Platform__PlatformTheme_TimerEvent((Kirigami__Platform__PlatformTheme*)self, (QTimerEvent*)event);
}

void k_irigami__platform__platformtheme_super_timer_event(void* self, void* event) {
    Kirigami__Platform__PlatformTheme_SuperTimerEvent((Kirigami__Platform__PlatformTheme*)self, (QTimerEvent*)event);
}

void k_irigami__platform__platformtheme_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnTimerEvent((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_child_event(void* self, void* event) {
    Kirigami__Platform__PlatformTheme_ChildEvent((Kirigami__Platform__PlatformTheme*)self, (QChildEvent*)event);
}

void k_irigami__platform__platformtheme_super_child_event(void* self, void* event) {
    Kirigami__Platform__PlatformTheme_SuperChildEvent((Kirigami__Platform__PlatformTheme*)self, (QChildEvent*)event);
}

void k_irigami__platform__platformtheme_on_child_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnChildEvent((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_custom_event(void* self, void* event) {
    Kirigami__Platform__PlatformTheme_CustomEvent((Kirigami__Platform__PlatformTheme*)self, (QEvent*)event);
}

void k_irigami__platform__platformtheme_super_custom_event(void* self, void* event) {
    Kirigami__Platform__PlatformTheme_SuperCustomEvent((Kirigami__Platform__PlatformTheme*)self, (QEvent*)event);
}

void k_irigami__platform__platformtheme_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnCustomEvent((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_connect_notify(void* self, void* signal) {
    Kirigami__Platform__PlatformTheme_ConnectNotify((Kirigami__Platform__PlatformTheme*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformtheme_super_connect_notify(void* self, void* signal) {
    Kirigami__Platform__PlatformTheme_SuperConnectNotify((Kirigami__Platform__PlatformTheme*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformtheme_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnConnectNotify((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_disconnect_notify(void* self, void* signal) {
    Kirigami__Platform__PlatformTheme_DisconnectNotify((Kirigami__Platform__PlatformTheme*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformtheme_super_disconnect_notify(void* self, void* signal) {
    Kirigami__Platform__PlatformTheme_SuperDisconnectNotify((Kirigami__Platform__PlatformTheme*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformtheme_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnDisconnectNotify((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__platformtheme_sender(void* self) {
    return Kirigami__Platform__PlatformTheme_Sender((Kirigami__Platform__PlatformTheme*)self);
}

QObject* k_irigami__platform__platformtheme_super_sender(void* self) {
    return Kirigami__Platform__PlatformTheme_SuperSender((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_on_sender(void* self, QObject* (*callback)()) {
    Kirigami__Platform__PlatformTheme_OnSender((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__platformtheme_sender_signal_index(void* self) {
    return Kirigami__Platform__PlatformTheme_SenderSignalIndex((Kirigami__Platform__PlatformTheme*)self);
}

int32_t k_irigami__platform__platformtheme_super_sender_signal_index(void* self) {
    return Kirigami__Platform__PlatformTheme_SuperSenderSignalIndex((Kirigami__Platform__PlatformTheme*)self);
}

void k_irigami__platform__platformtheme_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Kirigami__Platform__PlatformTheme_OnSenderSignalIndex((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__platformtheme_receivers(void* self, const char* signal) {
    return Kirigami__Platform__PlatformTheme_Receivers((Kirigami__Platform__PlatformTheme*)self, signal);
}

int32_t k_irigami__platform__platformtheme_super_receivers(void* self, const char* signal) {
    return Kirigami__Platform__PlatformTheme_SuperReceivers((Kirigami__Platform__PlatformTheme*)self, signal);
}

void k_irigami__platform__platformtheme_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Kirigami__Platform__PlatformTheme_OnReceivers((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

bool k_irigami__platform__platformtheme_is_signal_connected(void* self, void* signal) {
    return Kirigami__Platform__PlatformTheme_IsSignalConnected((Kirigami__Platform__PlatformTheme*)self, (QMetaMethod*)signal);
}

bool k_irigami__platform__platformtheme_super_is_signal_connected(void* self, void* signal) {
    return Kirigami__Platform__PlatformTheme_SuperIsSignalConnected((Kirigami__Platform__PlatformTheme*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformtheme_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformTheme_OnIsSignalConnected((Kirigami__Platform__PlatformTheme*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_irigami__platform__platformtheme_delete(void* self) {
    Kirigami__Platform__PlatformTheme_Delete((Kirigami__Platform__PlatformTheme*)(self));
}

Kirigami__Platform__PlatformThemeChangeTracker* k_irigami__platform__platformthemechangetracker_new(void* theme) {
    return Kirigami__Platform__PlatformThemeChangeTracker_New((Kirigami__Platform__PlatformTheme*)theme);
}

Kirigami__Platform__PlatformThemeChangeTracker* k_irigami__platform__platformthemechangetracker_new2(void* param1) {
    return Kirigami__Platform__PlatformThemeChangeTracker_New2((Kirigami__Platform__PlatformThemeChangeTracker*)param1);
}

Kirigami__Platform__PlatformThemeChangeTracker* k_irigami__platform__platformthemechangetracker_new3(void* theme, uint8_t changes) {
    return Kirigami__Platform__PlatformThemeChangeTracker_New3((Kirigami__Platform__PlatformTheme*)theme, changes);
}

void k_irigami__platform__platformthemechangetracker_mark_dirty(void* self, uint8_t changes) {
    Kirigami__Platform__PlatformThemeChangeTracker_MarkDirty((Kirigami__Platform__PlatformThemeChangeTracker*)self, changes);
}

void k_irigami__platform__platformthemechangetracker_delete(void* self) {
    Kirigami__Platform__PlatformThemeChangeTracker_Delete((Kirigami__Platform__PlatformThemeChangeTracker*)(self));
}
