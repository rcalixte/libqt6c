#pragma once
#ifndef EXTRAS_KCONFIGWIDGETS_LIBKHAMBURGERMENU_H
#define EXTRAS_KCONFIGWIDGETS_LIBKHAMBURGERMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/khamburgermenu.html)

/// k_hamburgermenu_new constructs a new KHamburgerMenu object.
///
/// @param parent QObject*
///
KHamburgerMenu* k_hamburgermenu_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KHamburgerMenu*
///
const QMetaObject* k_hamburgermenu_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KHamburgerMenu*
/// @param callback const QMetaObject* func(const KHamburgerMenu* self)
///
void k_hamburgermenu_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KHamburgerMenu*
///
const QMetaObject* k_hamburgermenu_super_meta_object(const void* self);

/// @param self KHamburgerMenu*
/// @param param1 const char*
///
void* k_hamburgermenu_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KHamburgerMenu*
/// @param callback void* func(KHamburgerMenu* self, const char* param1)
///
void k_hamburgermenu_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KHamburgerMenu*
/// @param param1 const char*
///
void* k_hamburgermenu_super_metacast(void* self, const char* param1);

/// @param self KHamburgerMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_hamburgermenu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KHamburgerMenu*
/// @param callback int32_t func(KHamburgerMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_hamburgermenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KHamburgerMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_hamburgermenu_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_hamburgermenu_tr(const char* s);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#setMenuBar)
///
/// @param self KHamburgerMenu*
/// @param menuBar QMenuBar*
///
void k_hamburgermenu_set_menu_bar(void* self, void* menuBar);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#menuBar)
///
/// @param self const KHamburgerMenu*
///
QMenuBar* k_hamburgermenu_menu_bar(const void* self);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#setMenuBarAdvertised)
///
/// @param self KHamburgerMenu*
/// @param advertise bool
///
void k_hamburgermenu_set_menu_bar_advertised(void* self, bool advertise);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#menuBarAdvertised)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_menu_bar_advertised(const void* self);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#setShowMenuBarAction)
///
/// @param self KHamburgerMenu*
/// @param showMenuBarAction QAction*
///
void k_hamburgermenu_set_show_menu_bar_action(void* self, void* showMenuBarAction);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#addToMenu)
///
/// @param self KHamburgerMenu*
/// @param menu QMenu*
///
void k_hamburgermenu_add_to_menu(void* self, void* menu);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#insertIntoMenuBefore)
///
/// @param self KHamburgerMenu*
/// @param menu QMenu*
/// @param before QAction*
///
void k_hamburgermenu_insert_into_menu_before(void* self, void* menu, void* before);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#hideActionsOf)
///
/// @param self KHamburgerMenu*
/// @param widget QWidget*
///
void k_hamburgermenu_hide_actions_of(void* self, void* widget);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#showActionsOf)
///
/// @param self KHamburgerMenu*
/// @param widget QWidget*
///
void k_hamburgermenu_show_actions_of(void* self, void* widget);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#aboutToShowMenu)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_about_to_show_menu(void* self);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#aboutToShowMenu)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self)
///
void k_hamburgermenu_on_about_to_show_menu(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#createWidget)
///
/// @param self KHamburgerMenu*
/// @param parent QWidget*
///
QWidget* k_hamburgermenu_create_widget(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self KHamburgerMenu*
/// @param callback QWidget* func(KHamburgerMenu* self, QWidget* parent)
///
void k_hamburgermenu_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#createWidget)
///
/// Base class method implementation
///
/// @param self KHamburgerMenu*
/// @param parent QWidget*
///
QWidget* k_hamburgermenu_super_create_widget(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_hamburgermenu_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_hamburgermenu_tr3(const char* s, const char* c, int n);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KHamburgerMenu*
/// @param w QWidget*
///
void k_hamburgermenu_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self const KHamburgerMenu*
///
QWidget* k_hamburgermenu_default_widget(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KHamburgerMenu*
/// @param parent QWidget*
///
QWidget* k_hamburgermenu_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KHamburgerMenu*
/// @param widget QWidget*
///
void k_hamburgermenu_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self const KHamburgerMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_hamburgermenu_associated_objects(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KHamburgerMenu*
/// @param group QActionGroup*
///
void k_hamburgermenu_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self const KHamburgerMenu*
///
QActionGroup* k_hamburgermenu_action_group(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KHamburgerMenu*
/// @param icon QIcon*
///
void k_hamburgermenu_set_icon(void* self, const void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self const KHamburgerMenu*
///
QIcon* k_hamburgermenu_icon(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KHamburgerMenu*
/// @param text const char*
///
void k_hamburgermenu_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KHamburgerMenu*
///
const char* k_hamburgermenu_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KHamburgerMenu*
/// @param text const char*
///
void k_hamburgermenu_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KHamburgerMenu*
///
const char* k_hamburgermenu_icon_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KHamburgerMenu*
/// @param tip const char*
///
void k_hamburgermenu_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KHamburgerMenu*
///
const char* k_hamburgermenu_tool_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KHamburgerMenu*
/// @param statusTip const char*
///
void k_hamburgermenu_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KHamburgerMenu*
///
const char* k_hamburgermenu_status_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KHamburgerMenu*
/// @param what const char*
///
void k_hamburgermenu_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KHamburgerMenu*
///
const char* k_hamburgermenu_whats_this(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KHamburgerMenu*
/// @param priority enum QAction__Priority
///
void k_hamburgermenu_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self const KHamburgerMenu*
///
/// @return enum QAction__Priority
///
int32_t k_hamburgermenu_priority(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KHamburgerMenu*
/// @param b bool
///
void k_hamburgermenu_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_separator(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KHamburgerMenu*
/// @param shortcut QKeySequence*
///
void k_hamburgermenu_set_shortcut(void* self, const void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self const KHamburgerMenu*
///
QKeySequence* k_hamburgermenu_shortcut(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KHamburgerMenu*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_hamburgermenu_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KHamburgerMenu*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_hamburgermenu_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self const KHamburgerMenu*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_hamburgermenu_shortcuts(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KHamburgerMenu*
/// @param context enum Qt__ShortcutContext
///
void k_hamburgermenu_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self const KHamburgerMenu*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_hamburgermenu_shortcut_context(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KHamburgerMenu*
/// @param autoRepeat bool
///
void k_hamburgermenu_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_auto_repeat(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KHamburgerMenu*
/// @param font QFont*
///
void k_hamburgermenu_set_font(void* self, const void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self const KHamburgerMenu*
///
QFont* k_hamburgermenu_font(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KHamburgerMenu*
/// @param checkable bool
///
void k_hamburgermenu_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_checkable(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self const KHamburgerMenu*
///
QVariant* k_hamburgermenu_data(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KHamburgerMenu*
/// @param var QVariant*
///
void k_hamburgermenu_set_data(void* self, const void* var);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_checked(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_enabled(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_visible(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KHamburgerMenu*
/// @param event enum QAction__ActionEvent
///
void k_hamburgermenu_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KHamburgerMenu*
/// @param menuRole enum QAction__MenuRole
///
void k_hamburgermenu_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self const KHamburgerMenu*
///
/// @return enum QAction__MenuRole
///
int32_t k_hamburgermenu_menu_role(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KHamburgerMenu*
/// @param visible bool
///
void k_hamburgermenu_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_icon_visible_in_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KHamburgerMenu*
/// @param show bool
///
void k_hamburgermenu_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_shortcut_visible_in_context_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KHamburgerMenu*
///
bool k_hamburgermenu_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KHamburgerMenu*
/// @param checked bool
///
void k_hamburgermenu_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KHamburgerMenu*
/// @param enabled bool
///
void k_hamburgermenu_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KHamburgerMenu*
/// @param b bool
///
void k_hamburgermenu_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KHamburgerMenu*
/// @param visible bool
///
void k_hamburgermenu_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self)
///
void k_hamburgermenu_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KHamburgerMenu*
/// @param enabled bool
///
void k_hamburgermenu_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, bool enabled)
///
void k_hamburgermenu_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KHamburgerMenu*
/// @param checkable bool
///
void k_hamburgermenu_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, bool checkable)
///
void k_hamburgermenu_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self)
///
void k_hamburgermenu_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self)
///
void k_hamburgermenu_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self)
///
void k_hamburgermenu_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KHamburgerMenu*
/// @param param1 bool
///
void k_hamburgermenu_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, bool param1)
///
void k_hamburgermenu_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KHamburgerMenu*
/// @param object QObject*
///
bool k_hamburgermenu_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KHamburgerMenu*
/// @param checked bool
///
void k_hamburgermenu_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, bool checked)
///
void k_hamburgermenu_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KHamburgerMenu*
///
const char* k_hamburgermenu_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KHamburgerMenu*
/// @param name const char*
///
void k_hamburgermenu_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KHamburgerMenu*
/// @param b bool
///
bool k_hamburgermenu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KHamburgerMenu*
///
QThread* k_hamburgermenu_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KHamburgerMenu*
/// @param thread QThread*
///
bool k_hamburgermenu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHamburgerMenu*
/// @param interval int
///
int32_t k_hamburgermenu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHamburgerMenu*
/// @param time int64_t of nanoseconds
///
int32_t k_hamburgermenu_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KHamburgerMenu*
/// @param id int
///
void k_hamburgermenu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KHamburgerMenu*
/// @param id enum Qt__TimerId
///
void k_hamburgermenu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KHamburgerMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_hamburgermenu_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KHamburgerMenu*
/// @param parent QObject*
///
void k_hamburgermenu_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KHamburgerMenu*
/// @param filterObj QObject*
///
void k_hamburgermenu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KHamburgerMenu*
/// @param obj QObject*
///
void k_hamburgermenu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_hamburgermenu_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_hamburgermenu_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KHamburgerMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_hamburgermenu_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_hamburgermenu_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_hamburgermenu_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KHamburgerMenu*
///
bool k_hamburgermenu_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KHamburgerMenu*
/// @param receiver QObject*
///
bool k_hamburgermenu_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_hamburgermenu_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KHamburgerMenu*
///
void k_hamburgermenu_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KHamburgerMenu*
///
void k_hamburgermenu_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KHamburgerMenu*
/// @param name const char*
/// @param value QVariant*
///
bool k_hamburgermenu_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KHamburgerMenu*
/// @param name const char*
///
QVariant* k_hamburgermenu_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KHamburgerMenu*
///
const char** k_hamburgermenu_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KHamburgerMenu*
///
QBindingStorage* k_hamburgermenu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KHamburgerMenu*
///
const QBindingStorage* k_hamburgermenu_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self)
///
void k_hamburgermenu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KHamburgerMenu*
///
QObject* k_hamburgermenu_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KHamburgerMenu*
/// @param classname const char*
///
bool k_hamburgermenu_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHamburgerMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_hamburgermenu_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KHamburgerMenu*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_hamburgermenu_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_hamburgermenu_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_hamburgermenu_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KHamburgerMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_hamburgermenu_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KHamburgerMenu*
/// @param signal const char*
///
bool k_hamburgermenu_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KHamburgerMenu*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_hamburgermenu_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KHamburgerMenu*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_hamburgermenu_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KHamburgerMenu*
/// @param receiver QObject*
/// @param member const char*
///
bool k_hamburgermenu_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHamburgerMenu*
/// @param param1 QObject*
///
void k_hamburgermenu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, QObject* param1)
///
void k_hamburgermenu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param param1 QEvent*
///
bool k_hamburgermenu_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param param1 QEvent*
///
bool k_hamburgermenu_super_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param callback bool func(KHamburgerMenu* self, QEvent* param1)
///
void k_hamburgermenu_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_hamburgermenu_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_hamburgermenu_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param callback bool func(KHamburgerMenu* self, QObject* param1, QEvent* param2)
///
void k_hamburgermenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param widget QWidget*
///
void k_hamburgermenu_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param widget QWidget*
///
void k_hamburgermenu_super_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, QWidget* widget)
///
void k_hamburgermenu_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param event QTimerEvent*
///
void k_hamburgermenu_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param event QTimerEvent*
///
void k_hamburgermenu_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, QTimerEvent* event)
///
void k_hamburgermenu_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param event QChildEvent*
///
void k_hamburgermenu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param event QChildEvent*
///
void k_hamburgermenu_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, QChildEvent* event)
///
void k_hamburgermenu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param event QEvent*
///
void k_hamburgermenu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param event QEvent*
///
void k_hamburgermenu_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, QEvent* event)
///
void k_hamburgermenu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param signal QMetaMethod*
///
void k_hamburgermenu_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param signal QMetaMethod*
///
void k_hamburgermenu_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, QMetaMethod* signal)
///
void k_hamburgermenu_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param signal QMetaMethod*
///
void k_hamburgermenu_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param signal QMetaMethod*
///
void k_hamburgermenu_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, QMetaMethod* signal)
///
void k_hamburgermenu_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KHamburgerMenu*
///
/// @return libqt_list of QWidget*
///
libqt_list k_hamburgermenu_created_widgets(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KHamburgerMenu*
///
/// @return libqt_list of QWidget*
///
libqt_list k_hamburgermenu_super_created_widgets(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KHamburgerMenu*
/// @param callback libqt_list of QWidget* func(KHamburgerMenu* self)
///
void k_hamburgermenu_on_created_widgets(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KHamburgerMenu*
///
QObject* k_hamburgermenu_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KHamburgerMenu*
///
QObject* k_hamburgermenu_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KHamburgerMenu*
/// @param callback QObject* func(KHamburgerMenu* self)
///
void k_hamburgermenu_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KHamburgerMenu*
///
int32_t k_hamburgermenu_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KHamburgerMenu*
///
int32_t k_hamburgermenu_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KHamburgerMenu*
/// @param callback int32_t func(KHamburgerMenu* self)
///
void k_hamburgermenu_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KHamburgerMenu*
/// @param signal const char*
///
int32_t k_hamburgermenu_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KHamburgerMenu*
/// @param signal const char*
///
int32_t k_hamburgermenu_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KHamburgerMenu*
/// @param callback int32_t func(KHamburgerMenu* self, const char* signal)
///
void k_hamburgermenu_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KHamburgerMenu*
/// @param signal QMetaMethod*
///
bool k_hamburgermenu_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KHamburgerMenu*
/// @param signal QMetaMethod*
///
bool k_hamburgermenu_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KHamburgerMenu*
/// @param callback bool func(KHamburgerMenu* self, QMetaMethod* signal)
///
void k_hamburgermenu_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KHamburgerMenu*
/// @param callback void func(KHamburgerMenu* self, const char* objectName)
///
void k_hamburgermenu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/khamburgermenu.html#dtor.KHamburgerMenu)
///
/// Delete this object from C++ memory.
///
/// @param self KHamburgerMenu*
///
void k_hamburgermenu_delete(void* self);

#endif
