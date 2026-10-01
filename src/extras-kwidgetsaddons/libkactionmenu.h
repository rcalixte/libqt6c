#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKACTIONMENU_H
#define EXTRAS_KWIDGETSADDONS_LIBKACTIONMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kactionmenu.html)

/// k_actionmenu_new constructs a new KActionMenu object.
///
/// @param parent QObject*
///
KActionMenu* k_actionmenu_new(void* parent);

/// [Upstream resources](https://api.kde.org/kactionmenu.html)

/// k_actionmenu_new2 constructs a new KActionMenu object.
///
/// @param text const char*
/// @param parent QObject*
///
KActionMenu* k_actionmenu_new2(const char* text, void* parent);

/// [Upstream resources](https://api.kde.org/kactionmenu.html)

/// k_actionmenu_new3 constructs a new KActionMenu object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
///
KActionMenu* k_actionmenu_new3(const void* icon, const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KActionMenu*
///
const QMetaObject* k_actionmenu_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KActionMenu*
/// @param callback const QMetaObject* func(const KActionMenu* self)
///
void k_actionmenu_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KActionMenu*
///
const QMetaObject* k_actionmenu_super_meta_object(const void* self);

/// @param self KActionMenu*
/// @param param1 const char*
///
void* k_actionmenu_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KActionMenu*
/// @param callback void* func(KActionMenu* self, const char* param1)
///
void k_actionmenu_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KActionMenu*
/// @param param1 const char*
///
void* k_actionmenu_super_metacast(void* self, const char* param1);

/// @param self KActionMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_actionmenu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KActionMenu*
/// @param callback int32_t func(KActionMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_actionmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KActionMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_actionmenu_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_actionmenu_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kactionmenu.html#addAction)
///
/// @param self KActionMenu*
/// @param action QAction*
///
void k_actionmenu_add_action(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kactionmenu.html#addSeparator)
///
/// @param self KActionMenu*
///
QAction* k_actionmenu_add_separator(void* self);

/// [Upstream resources](https://api.kde.org/kactionmenu.html#insertAction)
///
/// @param self KActionMenu*
/// @param before QAction*
/// @param action QAction*
///
void k_actionmenu_insert_action(void* self, void* before, void* action);

/// [Upstream resources](https://api.kde.org/kactionmenu.html#insertSeparator)
///
/// @param self KActionMenu*
/// @param before QAction*
///
QAction* k_actionmenu_insert_separator(void* self, void* before);

/// [Upstream resources](https://api.kde.org/kactionmenu.html#removeAction)
///
/// @param self KActionMenu*
/// @param action QAction*
///
void k_actionmenu_remove_action(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kactionmenu.html#popupMode)
///
/// @param self const KActionMenu*
///
/// @return enum QToolButton__ToolButtonPopupMode
///
int32_t k_actionmenu_popup_mode(const void* self);

/// [Upstream resources](https://api.kde.org/kactionmenu.html#setPopupMode)
///
/// @param self KActionMenu*
/// @param popupMode enum QToolButton__ToolButtonPopupMode
///
void k_actionmenu_set_popup_mode(void* self, int32_t popupMode);

/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// @param self KActionMenu*
/// @param parent QWidget*
///
QWidget* k_actionmenu_create_widget(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self KActionMenu*
/// @param callback QWidget* func(KActionMenu* self, QWidget* parent)
///
void k_actionmenu_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Base class method implementation
///
/// @param self KActionMenu*
/// @param parent QWidget*
///
QWidget* k_actionmenu_super_create_widget(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_actionmenu_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_actionmenu_tr3(const char* s, const char* c, int n);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KActionMenu*
/// @param w QWidget*
///
void k_actionmenu_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self const KActionMenu*
///
QWidget* k_actionmenu_default_widget(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KActionMenu*
/// @param parent QWidget*
///
QWidget* k_actionmenu_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KActionMenu*
/// @param widget QWidget*
///
void k_actionmenu_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self const KActionMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_actionmenu_associated_objects(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KActionMenu*
/// @param group QActionGroup*
///
void k_actionmenu_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self const KActionMenu*
///
QActionGroup* k_actionmenu_action_group(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KActionMenu*
/// @param icon QIcon*
///
void k_actionmenu_set_icon(void* self, const void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self const KActionMenu*
///
QIcon* k_actionmenu_icon(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KActionMenu*
/// @param text const char*
///
void k_actionmenu_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KActionMenu*
///
const char* k_actionmenu_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KActionMenu*
/// @param text const char*
///
void k_actionmenu_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KActionMenu*
///
const char* k_actionmenu_icon_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KActionMenu*
/// @param tip const char*
///
void k_actionmenu_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KActionMenu*
///
const char* k_actionmenu_tool_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KActionMenu*
/// @param statusTip const char*
///
void k_actionmenu_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KActionMenu*
///
const char* k_actionmenu_status_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KActionMenu*
/// @param what const char*
///
void k_actionmenu_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KActionMenu*
///
const char* k_actionmenu_whats_this(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KActionMenu*
/// @param priority enum QAction__Priority
///
void k_actionmenu_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self const KActionMenu*
///
/// @return enum QAction__Priority
///
int32_t k_actionmenu_priority(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KActionMenu*
/// @param b bool
///
void k_actionmenu_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_separator(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KActionMenu*
/// @param shortcut QKeySequence*
///
void k_actionmenu_set_shortcut(void* self, const void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self const KActionMenu*
///
QKeySequence* k_actionmenu_shortcut(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KActionMenu*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_actionmenu_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KActionMenu*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_actionmenu_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self const KActionMenu*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_actionmenu_shortcuts(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KActionMenu*
/// @param context enum Qt__ShortcutContext
///
void k_actionmenu_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self const KActionMenu*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_actionmenu_shortcut_context(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KActionMenu*
/// @param autoRepeat bool
///
void k_actionmenu_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_auto_repeat(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KActionMenu*
/// @param font QFont*
///
void k_actionmenu_set_font(void* self, const void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self const KActionMenu*
///
QFont* k_actionmenu_font(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KActionMenu*
/// @param checkable bool
///
void k_actionmenu_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_checkable(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self const KActionMenu*
///
QVariant* k_actionmenu_data(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KActionMenu*
/// @param var QVariant*
///
void k_actionmenu_set_data(void* self, const void* var);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_checked(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_enabled(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_visible(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KActionMenu*
/// @param event enum QAction__ActionEvent
///
void k_actionmenu_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KActionMenu*
/// @param menuRole enum QAction__MenuRole
///
void k_actionmenu_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self const KActionMenu*
///
/// @return enum QAction__MenuRole
///
int32_t k_actionmenu_menu_role(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KActionMenu*
/// @param visible bool
///
void k_actionmenu_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_icon_visible_in_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KActionMenu*
/// @param show bool
///
void k_actionmenu_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_shortcut_visible_in_context_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KActionMenu*
///
bool k_actionmenu_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KActionMenu*
///
void k_actionmenu_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KActionMenu*
///
void k_actionmenu_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KActionMenu*
/// @param checked bool
///
void k_actionmenu_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KActionMenu*
///
void k_actionmenu_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KActionMenu*
/// @param enabled bool
///
void k_actionmenu_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KActionMenu*
///
void k_actionmenu_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KActionMenu*
/// @param b bool
///
void k_actionmenu_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KActionMenu*
/// @param visible bool
///
void k_actionmenu_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KActionMenu*
///
void k_actionmenu_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
///
void k_actionmenu_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KActionMenu*
/// @param enabled bool
///
void k_actionmenu_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, bool enabled)
///
void k_actionmenu_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KActionMenu*
/// @param checkable bool
///
void k_actionmenu_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, bool checkable)
///
void k_actionmenu_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KActionMenu*
///
void k_actionmenu_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
///
void k_actionmenu_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KActionMenu*
///
void k_actionmenu_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
///
void k_actionmenu_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KActionMenu*
///
void k_actionmenu_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
///
void k_actionmenu_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KActionMenu*
/// @param param1 bool
///
void k_actionmenu_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, bool param1)
///
void k_actionmenu_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KActionMenu*
/// @param object QObject*
///
bool k_actionmenu_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KActionMenu*
/// @param checked bool
///
void k_actionmenu_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, bool checked)
///
void k_actionmenu_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KActionMenu*
///
const char* k_actionmenu_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KActionMenu*
/// @param name const char*
///
void k_actionmenu_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KActionMenu*
/// @param b bool
///
bool k_actionmenu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KActionMenu*
///
QThread* k_actionmenu_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KActionMenu*
/// @param thread QThread*
///
bool k_actionmenu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionMenu*
/// @param interval int
///
int32_t k_actionmenu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionMenu*
/// @param time int64_t of nanoseconds
///
int32_t k_actionmenu_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KActionMenu*
/// @param id int
///
void k_actionmenu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KActionMenu*
/// @param id enum Qt__TimerId
///
void k_actionmenu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KActionMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_actionmenu_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KActionMenu*
/// @param parent QObject*
///
void k_actionmenu_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KActionMenu*
/// @param filterObj QObject*
///
void k_actionmenu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KActionMenu*
/// @param obj QObject*
///
void k_actionmenu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_actionmenu_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_actionmenu_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KActionMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_actionmenu_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_actionmenu_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_actionmenu_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionMenu*
///
bool k_actionmenu_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionMenu*
/// @param receiver QObject*
///
bool k_actionmenu_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_actionmenu_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KActionMenu*
///
void k_actionmenu_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KActionMenu*
///
void k_actionmenu_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KActionMenu*
/// @param name const char*
/// @param value QVariant*
///
bool k_actionmenu_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KActionMenu*
/// @param name const char*
///
QVariant* k_actionmenu_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KActionMenu*
///
const char** k_actionmenu_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KActionMenu*
///
QBindingStorage* k_actionmenu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KActionMenu*
///
const QBindingStorage* k_actionmenu_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionMenu*
///
void k_actionmenu_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
///
void k_actionmenu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KActionMenu*
///
QObject* k_actionmenu_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KActionMenu*
/// @param classname const char*
///
bool k_actionmenu_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KActionMenu*
///
void k_actionmenu_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_actionmenu_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionMenu*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_actionmenu_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_actionmenu_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_actionmenu_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KActionMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_actionmenu_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionMenu*
/// @param signal const char*
///
bool k_actionmenu_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionMenu*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_actionmenu_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionMenu*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_actionmenu_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KActionMenu*
/// @param receiver QObject*
/// @param member const char*
///
bool k_actionmenu_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionMenu*
/// @param param1 QObject*
///
void k_actionmenu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QObject* param1)
///
void k_actionmenu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param param1 QEvent*
///
bool k_actionmenu_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param param1 QEvent*
///
bool k_actionmenu_super_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback bool func(KActionMenu* self, QEvent* param1)
///
void k_actionmenu_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_actionmenu_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_actionmenu_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback bool func(KActionMenu* self, QObject* param1, QEvent* param2)
///
void k_actionmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param widget QWidget*
///
void k_actionmenu_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param widget QWidget*
///
void k_actionmenu_super_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QWidget* widget)
///
void k_actionmenu_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param event QTimerEvent*
///
void k_actionmenu_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param event QTimerEvent*
///
void k_actionmenu_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QTimerEvent* event)
///
void k_actionmenu_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param event QChildEvent*
///
void k_actionmenu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param event QChildEvent*
///
void k_actionmenu_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QChildEvent* event)
///
void k_actionmenu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param event QEvent*
///
void k_actionmenu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param event QEvent*
///
void k_actionmenu_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QEvent* event)
///
void k_actionmenu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
///
void k_actionmenu_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
///
void k_actionmenu_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QMetaMethod* signal)
///
void k_actionmenu_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
///
void k_actionmenu_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
///
void k_actionmenu_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QMetaMethod* signal)
///
void k_actionmenu_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KActionMenu*
///
/// @return libqt_list of QWidget*
///
libqt_list k_actionmenu_created_widgets(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KActionMenu*
///
/// @return libqt_list of QWidget*
///
libqt_list k_actionmenu_super_created_widgets(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KActionMenu*
/// @param callback libqt_list of QWidget* func(KActionMenu* self)
///
void k_actionmenu_on_created_widgets(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KActionMenu*
///
QObject* k_actionmenu_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KActionMenu*
///
QObject* k_actionmenu_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KActionMenu*
/// @param callback QObject* func(KActionMenu* self)
///
void k_actionmenu_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KActionMenu*
///
int32_t k_actionmenu_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KActionMenu*
///
int32_t k_actionmenu_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KActionMenu*
/// @param callback int32_t func(KActionMenu* self)
///
void k_actionmenu_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KActionMenu*
/// @param signal const char*
///
int32_t k_actionmenu_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KActionMenu*
/// @param signal const char*
///
int32_t k_actionmenu_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KActionMenu*
/// @param callback int32_t func(KActionMenu* self, const char* signal)
///
void k_actionmenu_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KActionMenu*
/// @param signal QMetaMethod*
///
bool k_actionmenu_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KActionMenu*
/// @param signal QMetaMethod*
///
bool k_actionmenu_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KActionMenu*
/// @param callback bool func(KActionMenu* self, QMetaMethod* signal)
///
void k_actionmenu_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, const char* objectName)
///
void k_actionmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kactionmenu.html#dtor.KActionMenu)
///
/// Delete this object from C++ memory.
///
/// @param self KActionMenu*
///
void k_actionmenu_delete(void* self);

#endif
