#pragma once
#ifndef EXTRAS_KIRIGAMI_LIBPLATFORMTHEME_H
#define EXTRAS_KIRIGAMI_LIBPLATFORMTHEME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html)

/// k_kirigami__platform__platformtheme_new constructs a new Kirigami::Platform::PlatformTheme object.
///
Kirigami__Platform__PlatformTheme* k_kirigami__platform__platformtheme_new();

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html)

/// k_kirigami__platform__platformtheme_new2 constructs a new Kirigami::Platform::PlatformTheme object.
///
/// @param parent QObject*
///
Kirigami__Platform__PlatformTheme* k_kirigami__platform__platformtheme_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
const QMetaObject* k_kirigami__platform__platformtheme_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback const QMetaObject* func()
///
void k_kirigami__platform__platformtheme_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
///
const QMetaObject* k_kirigami__platform__platformtheme_super_meta_object(void* self);

/// @param self Kirigami__Platform__PlatformTheme*
/// @param param1 const char*
///
void* k_kirigami__platform__platformtheme_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void* func(Kirigami__Platform__PlatformTheme* self, const char* param1)
///
void k_kirigami__platform__platformtheme_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param param1 const char*
///
void* k_kirigami__platform__platformtheme_super_metacast(void* self, const char* param1);

/// @param self Kirigami__Platform__PlatformTheme*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__platformtheme_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback int32_t func(Kirigami__Platform__PlatformTheme* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_kirigami__platform__platformtheme_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_kirigami__platform__platformtheme_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_kirigami__platform__platformtheme_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setColorSet)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param colorSet enum Kirigami__Platform__PlatformTheme__ColorSet
///
void k_kirigami__platform__platformtheme_set_color_set(void* self, int32_t colorSet);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorSet)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
/// @return enum Kirigami__Platform__PlatformTheme__ColorSet
///
int32_t k_kirigami__platform__platformtheme_color_set(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setColorGroup)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param colorGroup enum Kirigami__Platform__PlatformTheme__ColorGroup
///
void k_kirigami__platform__platformtheme_set_color_group(void* self, int32_t colorGroup);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorGroup)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
/// @return enum Kirigami__Platform__PlatformTheme__ColorGroup
///
int32_t k_kirigami__platform__platformtheme_color_group(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#inherit)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
bool k_kirigami__platform__platformtheme_inherit(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setInherit)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param inherit bool
///
void k_kirigami__platform__platformtheme_set_inherit(void* self, bool inherit);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#textColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#disabledTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_disabled_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#highlightedTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_highlighted_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#activeTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_active_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#linkColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_link_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#visitedLinkColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_visited_link_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#negativeTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_negative_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#neutralTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_neutral_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#positiveTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_positive_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#backgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#alternateBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_alternate_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#highlightColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_highlight_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#activeBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_active_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#linkBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_link_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#visitedLinkBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_visited_link_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#negativeBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_negative_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#neutralBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_neutral_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#positiveBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_positive_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#focusColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_focus_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#hoverColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QColor* k_kirigami__platform__platformtheme_hover_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#defaultFont)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QFont* k_kirigami__platform__platformtheme_default_font(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#smallFont)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QFont* k_kirigami__platform__platformtheme_small_font(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#palette)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QPalette* k_kirigami__platform__platformtheme_palette(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#frameContrast)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
double k_kirigami__platform__platformtheme_frame_contrast(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#lightFrameContrast)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
double k_kirigami__platform__platformtheme_light_frame_contrast(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#iconFromTheme)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param name const char*
/// @param customColor QColor*
///
QIcon* k_kirigami__platform__platformtheme_icon_from_theme(void* self, const char* name, void* customColor);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#iconFromTheme)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback QIcon* func(Kirigami__Platform__PlatformTheme* self, const char* name, QColor* customColor)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_kirigami__platform__platformtheme_on_icon_from_theme(void* self, QIcon* (*callback)(void*, const char*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#iconFromTheme)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param name const char*
/// @param customColor QColor*
///
QIcon* k_kirigami__platform__platformtheme_super_icon_from_theme(void* self, const char* name, void* customColor);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#supportsIconColoring)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
bool k_kirigami__platform__platformtheme_supports_icon_coloring(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomDisabledTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_disabled_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHighlightedTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_highlighted_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomActiveTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_active_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomLinkColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_link_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomVisitedLinkColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_visited_link_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNegativeTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_negative_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNeutralTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_neutral_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomPositiveTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_positive_text_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomAlternateBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_alternate_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHighlightColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_highlight_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomActiveBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_active_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomLinkBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_link_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomVisitedLinkBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_visited_link_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNegativeBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_negative_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNeutralBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_neutral_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomPositiveBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_positive_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomFocusColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_focus_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHoverColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_set_custom_hover_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#useAlternateBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
bool k_kirigami__platform__platformtheme_use_alternate_background_color(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setUseAlternateBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param alternate bool
///
void k_kirigami__platform__platformtheme_set_use_alternate_background_color(void* self, bool alternate);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#qmlAttachedProperties)
///
/// @param object QObject*
///
Kirigami__Platform__PlatformTheme* k_kirigami__platform__platformtheme_qml_attached_properties(void* object);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorsChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_colors_changed(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorsChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self)
///
void k_kirigami__platform__platformtheme_on_colors_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#defaultFontChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param font QFont*
///
void k_kirigami__platform__platformtheme_default_font_changed(void* self, void* font);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#defaultFontChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QFont* font)
///
void k_kirigami__platform__platformtheme_on_default_font_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#smallFontChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param font QFont*
///
void k_kirigami__platform__platformtheme_small_font_changed(void* self, void* font);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#smallFontChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QFont* font)
///
void k_kirigami__platform__platformtheme_on_small_font_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorSetChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param colorSet enum Kirigami__Platform__PlatformTheme__ColorSet
///
void k_kirigami__platform__platformtheme_color_set_changed(void* self, int32_t colorSet);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorSetChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, enum Kirigami__Platform__PlatformTheme__ColorSet colorSet)
///
void k_kirigami__platform__platformtheme_on_color_set_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorGroupChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param colorGroup enum Kirigami__Platform__PlatformTheme__ColorGroup
///
void k_kirigami__platform__platformtheme_color_group_changed(void* self, int32_t colorGroup);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#colorGroupChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, enum Kirigami__Platform__PlatformTheme__ColorGroup colorGroup)
///
void k_kirigami__platform__platformtheme_on_color_group_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#paletteChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param pal QPalette*
///
void k_kirigami__platform__platformtheme_palette_changed(void* self, void* pal);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#paletteChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QPalette* pal)
///
void k_kirigami__platform__platformtheme_on_palette_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#inheritChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param inherit bool
///
void k_kirigami__platform__platformtheme_inherit_changed(void* self, bool inherit);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#inheritChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, bool inherit)
///
void k_kirigami__platform__platformtheme_on_inherit_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#useAlternateBackgroundColorChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param alternate bool
///
void k_kirigami__platform__platformtheme_use_alternate_background_color_changed(void* self, bool alternate);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#useAlternateBackgroundColorChanged)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, bool alternate)
///
void k_kirigami__platform__platformtheme_on_use_alternate_background_color_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSupportsIconColoring)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param support bool
///
void k_kirigami__platform__platformtheme_set_supports_icon_coloring(void* self, bool support);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSupportsIconColoring)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, bool support)
///
void k_kirigami__platform__platformtheme_on_set_supports_icon_coloring(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSupportsIconColoring)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param support bool
///
void k_kirigami__platform__platformtheme_super_set_supports_icon_coloring(void* self, bool support);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setTextColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_text_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setTextColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDisabledTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_disabled_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDisabledTextColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_disabled_text_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDisabledTextColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_disabled_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightedTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_highlighted_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightedTextColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_highlighted_text_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightedTextColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_highlighted_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_active_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveTextColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_active_text_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveTextColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_active_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_link_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_link_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_link_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_visited_link_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_visited_link_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_visited_link_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_negative_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeTextColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_negative_text_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeTextColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_negative_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_neutral_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralTextColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_neutral_text_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralTextColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_neutral_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_positive_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveTextColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_positive_text_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveTextColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_positive_text_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setBackgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setBackgroundColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setAlternateBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_alternate_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setAlternateBackgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_alternate_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setAlternateBackgroundColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_alternate_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_highlight_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_highlight_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHighlightColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_highlight_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_active_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveBackgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_active_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setActiveBackgroundColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_active_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_link_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkBackgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_link_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setLinkBackgroundColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_link_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_visited_link_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkBackgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_visited_link_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setVisitedLinkBackgroundColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_visited_link_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_negative_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeBackgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_negative_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNegativeBackgroundColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_negative_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_neutral_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralBackgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_neutral_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setNeutralBackgroundColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_neutral_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_positive_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveBackgroundColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_positive_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setPositiveBackgroundColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_positive_background_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setFocusColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_focus_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setFocusColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_focus_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setFocusColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_focus_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHoverColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_hover_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHoverColor)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QColor* color)
///
void k_kirigami__platform__platformtheme_on_set_hover_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setHoverColor)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_super_set_hover_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDefaultFont)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param defaultFont QFont*
///
void k_kirigami__platform__platformtheme_set_default_font(void* self, void* defaultFont);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDefaultFont)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QFont* defaultFont)
///
void k_kirigami__platform__platformtheme_on_set_default_font(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setDefaultFont)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param defaultFont QFont*
///
void k_kirigami__platform__platformtheme_super_set_default_font(void* self, void* defaultFont);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSmallFont)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param smallFont QFont*
///
void k_kirigami__platform__platformtheme_set_small_font(void* self, void* smallFont);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSmallFont)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QFont* smallFont)
///
void k_kirigami__platform__platformtheme_on_set_small_font(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setSmallFont)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param smallFont QFont*
///
void k_kirigami__platform__platformtheme_super_set_small_font(void* self, void* smallFont);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#event)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param event QEvent*
///
bool k_kirigami__platform__platformtheme_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#event)
///
/// Allows for overriding the related default method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback bool func(Kirigami__Platform__PlatformTheme* self, QEvent* event)
///
void k_kirigami__platform__platformtheme_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#event)
///
/// Base class method implementation
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param event QEvent*
///
bool k_kirigami__platform__platformtheme_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_kirigami__platform__platformtheme_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_kirigami__platform__platformtheme_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_text_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomDisabledTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_disabled_text_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHighlightedTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_highlighted_text_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomActiveTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_active_text_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomLinkColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_link_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomVisitedLinkColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_visited_link_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNegativeTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_negative_text_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNeutralTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_neutral_text_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomPositiveTextColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_positive_text_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_background_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomAlternateBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_alternate_background_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHighlightColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_highlight_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomActiveBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_active_background_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomLinkBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_link_background_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomVisitedLinkBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_visited_link_background_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNegativeBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_negative_background_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomNeutralBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_neutral_background_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomPositiveBackgroundColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_positive_background_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomFocusColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_focus_color1(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#setCustomHoverColor)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param color QColor*
///
void k_kirigami__platform__platformtheme_set_custom_hover_color1(void* self, void* color);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Kirigami__Platform__PlatformTheme*
///
const char* k_kirigami__platform__platformtheme_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param name const char*
///
void k_kirigami__platform__platformtheme_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
bool k_kirigami__platform__platformtheme_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
bool k_kirigami__platform__platformtheme_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
bool k_kirigami__platform__platformtheme_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
bool k_kirigami__platform__platformtheme_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param b bool
///
bool k_kirigami__platform__platformtheme_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QThread* k_kirigami__platform__platformtheme_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param thread QThread*
///
bool k_kirigami__platform__platformtheme_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param interval int
///
int32_t k_kirigami__platform__platformtheme_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param time int64_t of nanoseconds
///
int32_t k_kirigami__platform__platformtheme_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param id int
///
void k_kirigami__platform__platformtheme_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param id enum Qt__TimerId
///
void k_kirigami__platform__platformtheme_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
/// @return libqt_list of QObject*
///
libqt_list k_kirigami__platform__platformtheme_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param parent QObject*
///
void k_kirigami__platform__platformtheme_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param filterObj QObject*
///
void k_kirigami__platform__platformtheme_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param obj QObject*
///
void k_kirigami__platform__platformtheme_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__platformtheme_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_kirigami__platform__platformtheme_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_kirigami__platform__platformtheme_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__platformtheme_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_kirigami__platform__platformtheme_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
bool k_kirigami__platform__platformtheme_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param receiver QObject*
///
bool k_kirigami__platform__platformtheme_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_kirigami__platform__platformtheme_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param name const char*
/// @param value QVariant*
///
bool k_kirigami__platform__platformtheme_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param name const char*
///
QVariant* k_kirigami__platform__platformtheme_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Kirigami__Platform__PlatformTheme*
///
const char** k_kirigami__platform__platformtheme_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QBindingStorage* k_kirigami__platform__platformtheme_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
const QBindingStorage* k_kirigami__platform__platformtheme_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self)
///
void k_kirigami__platform__platformtheme_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QObject* k_kirigami__platform__platformtheme_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param classname const char*
///
bool k_kirigami__platform__platformtheme_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__platformtheme_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_kirigami__platform__platformtheme_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_kirigami__platform__platformtheme_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_kirigami__platform__platformtheme_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_kirigami__platform__platformtheme_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal const char*
///
bool k_kirigami__platform__platformtheme_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_kirigami__platform__platformtheme_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__platformtheme_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param receiver QObject*
/// @param member const char*
///
bool k_kirigami__platform__platformtheme_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param param1 QObject*
///
void k_kirigami__platform__platformtheme_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QObject* param1)
///
void k_kirigami__platform__platformtheme_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigami__platform__platformtheme_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_kirigami__platform__platformtheme_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback bool func(Kirigami__Platform__PlatformTheme* self, QObject* watched, QEvent* event)
///
void k_kirigami__platform__platformtheme_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param event QTimerEvent*
///
void k_kirigami__platform__platformtheme_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param event QTimerEvent*
///
void k_kirigami__platform__platformtheme_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QTimerEvent* event)
///
void k_kirigami__platform__platformtheme_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param event QChildEvent*
///
void k_kirigami__platform__platformtheme_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param event QChildEvent*
///
void k_kirigami__platform__platformtheme_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QChildEvent* event)
///
void k_kirigami__platform__platformtheme_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param event QEvent*
///
void k_kirigami__platform__platformtheme_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param event QEvent*
///
void k_kirigami__platform__platformtheme_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QEvent* event)
///
void k_kirigami__platform__platformtheme_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__platformtheme_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__platformtheme_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QMetaMethod* signal)
///
void k_kirigami__platform__platformtheme_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__platformtheme_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal QMetaMethod*
///
void k_kirigami__platform__platformtheme_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, QMetaMethod* signal)
///
void k_kirigami__platform__platformtheme_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QObject* k_kirigami__platform__platformtheme_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
///
QObject* k_kirigami__platform__platformtheme_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback QObject* func()
///
void k_kirigami__platform__platformtheme_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
///
int32_t k_kirigami__platform__platformtheme_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
///
int32_t k_kirigami__platform__platformtheme_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback int32_t func()
///
void k_kirigami__platform__platformtheme_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal const char*
///
int32_t k_kirigami__platform__platformtheme_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal const char*
///
int32_t k_kirigami__platform__platformtheme_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback int32_t func(Kirigami__Platform__PlatformTheme* self, const char* signal)
///
void k_kirigami__platform__platformtheme_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal QMetaMethod*
///
bool k_kirigami__platform__platformtheme_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param signal QMetaMethod*
///
bool k_kirigami__platform__platformtheme_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback bool func(Kirigami__Platform__PlatformTheme* self, QMetaMethod* signal)
///
void k_kirigami__platform__platformtheme_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Kirigami__Platform__PlatformTheme*
/// @param callback void func(Kirigami__Platform__PlatformTheme* self, const char* objectName)
///
void k_kirigami__platform__platformtheme_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Kirigami__Platform__PlatformTheme*
///
void k_kirigami__platform__platformtheme_delete(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformthemechangetracker.html)

/// k_kirigami__platform__platformthemechangetracker_new constructs a new Kirigami::Platform::PlatformThemeChangeTracker object.
///
/// @param theme Kirigami__Platform__PlatformTheme*
///
Kirigami__Platform__PlatformThemeChangeTracker* k_kirigami__platform__platformthemechangetracker_new(void* theme);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformthemechangetracker.html)

/// k_kirigami__platform__platformthemechangetracker_new2 constructs a new Kirigami::Platform::PlatformThemeChangeTracker object.
///
/// @param param1 Kirigami__Platform__PlatformThemeChangeTracker*
///
Kirigami__Platform__PlatformThemeChangeTracker* k_kirigami__platform__platformthemechangetracker_new2(void* param1);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformthemechangetracker.html)

/// k_kirigami__platform__platformthemechangetracker_new3 constructs a new Kirigami::Platform::PlatformThemeChangeTracker object.
///
/// @param theme Kirigami__Platform__PlatformTheme*
/// @param changes flag of enum Kirigami__Platform__PlatformThemeChangeTracker__PropertyChange
///
Kirigami__Platform__PlatformThemeChangeTracker* k_kirigami__platform__platformthemechangetracker_new3(void* theme, uint8_t changes);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformthemechangetracker.html#markDirty)
///
/// @param self Kirigami__Platform__PlatformThemeChangeTracker*
/// @param changes flag of enum Kirigami__Platform__PlatformThemeChangeTracker__PropertyChange
///
void k_kirigami__platform__platformthemechangetracker_mark_dirty(void* self, uint8_t changes);

/// Delete this object from C++ memory.
///
/// @param self Kirigami__Platform__PlatformThemeChangeTracker*
///
void k_kirigami__platform__platformthemechangetracker_delete(void* self);

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#public-types)

typedef enum {
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORSET_VIEW = 0,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORSET_WINDOW = 1,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORSET_BUTTON = 2,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORSET_SELECTION = 3,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORSET_TOOLTIP = 4,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORSET_COMPLEMENTARY = 5,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORSET_HEADER = 6,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORSET_COLORSETCOUNT = 7
} Kirigami__Platform__PlatformTheme__ColorSet;

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#public-types)

typedef enum {
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORGROUP_DISABLED = 1,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORGROUP_ACTIVE = 0,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORGROUP_INACTIVE = 2,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORGROUP_NORMAL = 0,
    KIRIGAMI_PLATFORM_PLATFORMTHEME_COLORGROUP_COLORGROUPCOUNT = 1
} Kirigami__Platform__PlatformTheme__ColorGroup;

/// [Upstream resources](https://api.kde.org/kirigami-platform-platformtheme.html#public-types)

typedef enum {
    KIRIGAMI_PLATFORM_PLATFORMTHEMECHANGETRACKER_PROPERTYCHANGE_NONE = 0,
    KIRIGAMI_PLATFORM_PLATFORMTHEMECHANGETRACKER_PROPERTYCHANGE_COLORSET = 1,
    KIRIGAMI_PLATFORM_PLATFORMTHEMECHANGETRACKER_PROPERTYCHANGE_COLORGROUP = 2,
    KIRIGAMI_PLATFORM_PLATFORMTHEMECHANGETRACKER_PROPERTYCHANGE_COLOR = 4,
    KIRIGAMI_PLATFORM_PLATFORMTHEMECHANGETRACKER_PROPERTYCHANGE_PALETTE = 8,
    KIRIGAMI_PLATFORM_PLATFORMTHEMECHANGETRACKER_PROPERTYCHANGE_FONT = 16,
    KIRIGAMI_PLATFORM_PLATFORMTHEMECHANGETRACKER_PROPERTYCHANGE_DATA = 32,
    KIRIGAMI_PLATFORM_PLATFORMTHEMECHANGETRACKER_PROPERTYCHANGE_ALL = 63
} Kirigami__Platform__PlatformThemeChangeTracker__PropertyChange;

#endif
