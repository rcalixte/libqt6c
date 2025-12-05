#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKGUIITEM_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKGUIITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kguiitem.html)

/// k_guiitem_new constructs a new KGuiItem object.
///
KGuiItem* k_guiitem_new();

/// [Upstream resources](https://api.kde.org/kguiitem.html)

/// k_guiitem_new2 constructs a new KGuiItem object.
///
/// @param text const char*
///
KGuiItem* k_guiitem_new2(const char* text);

/// [Upstream resources](https://api.kde.org/kguiitem.html)

/// k_guiitem_new3 constructs a new KGuiItem object.
///
/// @param text const char*
/// @param icon QIcon*
///
KGuiItem* k_guiitem_new3(const char* text, void* icon);

/// [Upstream resources](https://api.kde.org/kguiitem.html)

/// k_guiitem_new4 constructs a new KGuiItem object.
///
/// @param other KGuiItem*
///
KGuiItem* k_guiitem_new4(void* other);

/// [Upstream resources](https://api.kde.org/kguiitem.html)

/// k_guiitem_new5 constructs a new KGuiItem object.
///
/// @param text const char*
/// @param iconName const char*
///
KGuiItem* k_guiitem_new5(const char* text, const char* iconName);

/// [Upstream resources](https://api.kde.org/kguiitem.html)

/// k_guiitem_new6 constructs a new KGuiItem object.
///
/// @param text const char*
/// @param iconName const char*
/// @param toolTip const char*
///
KGuiItem* k_guiitem_new6(const char* text, const char* iconName, const char* toolTip);

/// [Upstream resources](https://api.kde.org/kguiitem.html)

/// k_guiitem_new7 constructs a new KGuiItem object.
///
/// @param text const char*
/// @param iconName const char*
/// @param toolTip const char*
/// @param whatsThis const char*
///
KGuiItem* k_guiitem_new7(const char* text, const char* iconName, const char* toolTip, const char* whatsThis);

/// [Upstream resources](https://api.kde.org/kguiitem.html)

/// k_guiitem_new8 constructs a new KGuiItem object.
///
/// @param text const char*
/// @param icon QIcon*
/// @param toolTip const char*
///
KGuiItem* k_guiitem_new8(const char* text, void* icon, const char* toolTip);

/// [Upstream resources](https://api.kde.org/kguiitem.html)

/// k_guiitem_new9 constructs a new KGuiItem object.
///
/// @param text const char*
/// @param icon QIcon*
/// @param toolTip const char*
/// @param whatsThis const char*
///
KGuiItem* k_guiitem_new9(const char* text, void* icon, const char* toolTip, const char* whatsThis);

/// [Upstream resources](https://api.kde.org/kguiitem.html#operator-eq)
///
/// @param self KGuiItem*
/// @param other KGuiItem*
///
void k_guiitem_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kguiitem.html#setText)
///
/// @param self KGuiItem*
/// @param text const char*
///
void k_guiitem_set_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kguiitem.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KGuiItem*
///
const char* k_guiitem_text(void* self);

/// [Upstream resources](https://api.kde.org/kguiitem.html#plainText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KGuiItem*
///
const char* k_guiitem_plain_text(void* self);

/// [Upstream resources](https://api.kde.org/kguiitem.html#setIcon)
///
/// @param self KGuiItem*
/// @param iconset QIcon*
///
void k_guiitem_set_icon(void* self, void* iconset);

/// [Upstream resources](https://api.kde.org/kguiitem.html#icon)
///
/// @param self KGuiItem*
///
QIcon* k_guiitem_icon(void* self);

/// [Upstream resources](https://api.kde.org/kguiitem.html#setIconName)
///
/// @param self KGuiItem*
/// @param iconName const char*
///
void k_guiitem_set_icon_name(void* self, const char* iconName);

/// [Upstream resources](https://api.kde.org/kguiitem.html#iconName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KGuiItem*
///
const char* k_guiitem_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kguiitem.html#hasIcon)
///
/// @param self KGuiItem*
///
bool k_guiitem_has_icon(void* self);

/// [Upstream resources](https://api.kde.org/kguiitem.html#setToolTip)
///
/// @param self KGuiItem*
/// @param tooltip const char*
///
void k_guiitem_set_tool_tip(void* self, const char* tooltip);

/// [Upstream resources](https://api.kde.org/kguiitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KGuiItem*
///
const char* k_guiitem_tool_tip(void* self);

/// [Upstream resources](https://api.kde.org/kguiitem.html#setWhatsThis)
///
/// @param self KGuiItem*
/// @param whatsThis const char*
///
void k_guiitem_set_whats_this(void* self, const char* whatsThis);

/// [Upstream resources](https://api.kde.org/kguiitem.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KGuiItem*
///
const char* k_guiitem_whats_this(void* self);

/// [Upstream resources](https://api.kde.org/kguiitem.html#setEnabled)
///
/// @param self KGuiItem*
/// @param enable bool
///
void k_guiitem_set_enabled(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kguiitem.html#isEnabled)
///
/// @param self KGuiItem*
///
bool k_guiitem_is_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kguiitem.html#assign)
///
/// @param button QPushButton*
/// @param item KGuiItem*
///
void k_guiitem_assign(void* button, void* item);

/// [Upstream resources](https://api.kde.org/kguiitem.html#dtor.KGuiItem)
///
/// Delete this object from C++ memory.
///
/// @param self KGuiItem*
///
void k_guiitem_delete(void* self);

#endif
