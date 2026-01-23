#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKDUALACTION_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKDUALACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdualaction.html)

/// k_dualaction_new constructs a new KDualAction object.
///
/// @param parent QObject*
///
KDualAction* k_dualaction_new(void* parent);

/// [Upstream resources](https://api.kde.org/kdualaction.html)

/// k_dualaction_new2 constructs a new KDualAction object.
///
/// @param inactiveText const char*
/// @param activeText const char*
/// @param parent QObject*
///
KDualAction* k_dualaction_new2(const char* inactiveText, const char* activeText, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KDualAction*
///
const QMetaObject* k_dualaction_meta_object(void* self);

/// @param self KDualAction*
/// @param param1 const char*
///
void* k_dualaction_metacast(void* self, const char* param1);

/// @param self KDualAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dualaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDualAction*
/// @param callback int32_t func(KDualAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_dualaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDualAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_dualaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_dualaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setActiveGuiItem)
///
/// @param self KDualAction*
/// @param activeGuiItem KGuiItem*
///
void k_dualaction_set_active_gui_item(void* self, void* activeGuiItem);

/// [Upstream resources](https://api.kde.org/kdualaction.html#activeGuiItem)
///
/// @param self KDualAction*
///
KGuiItem* k_dualaction_active_gui_item(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setInactiveGuiItem)
///
/// @param self KDualAction*
/// @param inactiveGuiItem KGuiItem*
///
void k_dualaction_set_inactive_gui_item(void* self, void* inactiveGuiItem);

/// [Upstream resources](https://api.kde.org/kdualaction.html#inactiveGuiItem)
///
/// @param self KDualAction*
///
KGuiItem* k_dualaction_inactive_gui_item(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setActiveIcon)
///
/// @param self KDualAction*
/// @param activeIcon QIcon*
///
void k_dualaction_set_active_icon(void* self, void* activeIcon);

/// [Upstream resources](https://api.kde.org/kdualaction.html#activeIcon)
///
/// @param self KDualAction*
///
QIcon* k_dualaction_active_icon(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setInactiveIcon)
///
/// @param self KDualAction*
/// @param inactiveIcon QIcon*
///
void k_dualaction_set_inactive_icon(void* self, void* inactiveIcon);

/// [Upstream resources](https://api.kde.org/kdualaction.html#inactiveIcon)
///
/// @param self KDualAction*
///
QIcon* k_dualaction_inactive_icon(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setActiveText)
///
/// @param self KDualAction*
/// @param activeText const char*
///
void k_dualaction_set_active_text(void* self, const char* activeText);

/// [Upstream resources](https://api.kde.org/kdualaction.html#activeText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_active_text(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setInactiveText)
///
/// @param self KDualAction*
/// @param inactiveText const char*
///
void k_dualaction_set_inactive_text(void* self, const char* inactiveText);

/// [Upstream resources](https://api.kde.org/kdualaction.html#inactiveText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_inactive_text(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setActiveToolTip)
///
/// @param self KDualAction*
/// @param activeToolTip const char*
///
void k_dualaction_set_active_tool_tip(void* self, const char* activeToolTip);

/// [Upstream resources](https://api.kde.org/kdualaction.html#activeToolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_active_tool_tip(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setInactiveToolTip)
///
/// @param self KDualAction*
/// @param inactiveToolTip const char*
///
void k_dualaction_set_inactive_tool_tip(void* self, const char* inactiveToolTip);

/// [Upstream resources](https://api.kde.org/kdualaction.html#inactiveToolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_inactive_tool_tip(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setIconForStates)
///
/// @param self KDualAction*
/// @param icon QIcon*
///
void k_dualaction_set_icon_for_states(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/kdualaction.html#isActive)
///
/// @param self KDualAction*
///
bool k_dualaction_is_active(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setAutoToggle)
///
/// @param self KDualAction*
/// @param autoToggle bool
///
void k_dualaction_set_auto_toggle(void* self, bool autoToggle);

/// [Upstream resources](https://api.kde.org/kdualaction.html#autoToggle)
///
/// @param self KDualAction*
///
bool k_dualaction_auto_toggle(void* self);

/// [Upstream resources](https://api.kde.org/kdualaction.html#setActive)
///
/// @param self KDualAction*
/// @param state bool
///
void k_dualaction_set_active(void* self, bool state);

/// [Upstream resources](https://api.kde.org/kdualaction.html#activeChanged)
///
/// @param self KDualAction*
/// @param param1 bool
///
void k_dualaction_active_changed(void* self, bool param1);

/// [Upstream resources](https://api.kde.org/kdualaction.html#activeChanged)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, bool param1)
///
void k_dualaction_on_active_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kdualaction.html#activeChangedByUser)
///
/// @param self KDualAction*
/// @param param1 bool
///
void k_dualaction_active_changed_by_user(void* self, bool param1);

/// [Upstream resources](https://api.kde.org/kdualaction.html#activeChangedByUser)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, bool param1)
///
void k_dualaction_on_active_changed_by_user(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_dualaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_dualaction_tr3(const char* s, const char* c, int n);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KDualAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_dualaction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KDualAction*
/// @param group QActionGroup*
///
void k_dualaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KDualAction*
///
QActionGroup* k_dualaction_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KDualAction*
/// @param icon QIcon*
///
void k_dualaction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KDualAction*
///
QIcon* k_dualaction_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KDualAction*
/// @param text const char*
///
void k_dualaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KDualAction*
/// @param text const char*
///
void k_dualaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KDualAction*
/// @param tip const char*
///
void k_dualaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KDualAction*
/// @param statusTip const char*
///
void k_dualaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KDualAction*
/// @param what const char*
///
void k_dualaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KDualAction*
/// @param priority enum QAction__Priority
///
void k_dualaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KDualAction*
///
/// @return enum QAction__Priority
///
int32_t k_dualaction_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KDualAction*
/// @param b bool
///
void k_dualaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KDualAction*
///
bool k_dualaction_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KDualAction*
/// @param shortcut QKeySequence*
///
void k_dualaction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KDualAction*
///
QKeySequence* k_dualaction_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KDualAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_dualaction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KDualAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_dualaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KDualAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_dualaction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KDualAction*
/// @param context enum Qt__ShortcutContext
///
void k_dualaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KDualAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_dualaction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KDualAction*
/// @param autoRepeat bool
///
void k_dualaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KDualAction*
///
bool k_dualaction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KDualAction*
/// @param font QFont*
///
void k_dualaction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KDualAction*
///
QFont* k_dualaction_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KDualAction*
/// @param checkable bool
///
void k_dualaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KDualAction*
///
bool k_dualaction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KDualAction*
///
QVariant* k_dualaction_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KDualAction*
/// @param varVal QVariant*
///
void k_dualaction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KDualAction*
///
bool k_dualaction_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KDualAction*
///
bool k_dualaction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KDualAction*
///
bool k_dualaction_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KDualAction*
/// @param event enum QAction__ActionEvent
///
void k_dualaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KDualAction*
/// @param menuRole enum QAction__MenuRole
///
void k_dualaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KDualAction*
///
/// @return enum QAction__MenuRole
///
int32_t k_dualaction_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KDualAction*
/// @param visible bool
///
void k_dualaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KDualAction*
///
bool k_dualaction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KDualAction*
/// @param show bool
///
void k_dualaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KDualAction*
///
bool k_dualaction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KDualAction*
///
bool k_dualaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KDualAction*
///
void k_dualaction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KDualAction*
///
void k_dualaction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KDualAction*
/// @param checked bool
///
void k_dualaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KDualAction*
///
void k_dualaction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KDualAction*
/// @param enabled bool
///
void k_dualaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KDualAction*
///
void k_dualaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KDualAction*
/// @param b bool
///
void k_dualaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KDualAction*
/// @param visible bool
///
void k_dualaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KDualAction*
///
void k_dualaction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self)
///
void k_dualaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KDualAction*
/// @param enabled bool
///
void k_dualaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, bool enabled)
///
void k_dualaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KDualAction*
/// @param checkable bool
///
void k_dualaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, bool checkable)
///
void k_dualaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KDualAction*
///
void k_dualaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self)
///
void k_dualaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KDualAction*
///
void k_dualaction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self)
///
void k_dualaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KDualAction*
///
void k_dualaction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self)
///
void k_dualaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KDualAction*
/// @param param1 bool
///
void k_dualaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, bool param1)
///
void k_dualaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KDualAction*
/// @param object QObject*
///
bool k_dualaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KDualAction*
/// @param checked bool
///
void k_dualaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, bool checked)
///
void k_dualaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KDualAction*
///
const char* k_dualaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDualAction*
/// @param name char*
///
void k_dualaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDualAction*
///
bool k_dualaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDualAction*
///
bool k_dualaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDualAction*
///
bool k_dualaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDualAction*
///
bool k_dualaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDualAction*
/// @param b bool
///
bool k_dualaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDualAction*
///
QThread* k_dualaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDualAction*
/// @param thread QThread*
///
bool k_dualaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDualAction*
/// @param interval int
///
int32_t k_dualaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDualAction*
/// @param time int64_t of nanoseconds
///
int32_t k_dualaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDualAction*
/// @param id int
///
void k_dualaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDualAction*
/// @param id enum Qt__TimerId
///
void k_dualaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDualAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_dualaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KDualAction*
/// @param parent QObject*
///
void k_dualaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDualAction*
/// @param filterObj QObject*
///
void k_dualaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDualAction*
/// @param obj QObject*
///
void k_dualaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_dualaction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDualAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_dualaction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_dualaction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_dualaction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDualAction*
///
void k_dualaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDualAction*
///
void k_dualaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDualAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_dualaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDualAction*
/// @param name const char*
///
QVariant* k_dualaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KDualAction*
///
const char** k_dualaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDualAction*
///
QBindingStorage* k_dualaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDualAction*
///
const QBindingStorage* k_dualaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDualAction*
///
void k_dualaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self)
///
void k_dualaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KDualAction*
///
QObject* k_dualaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDualAction*
/// @param classname const char*
///
bool k_dualaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDualAction*
///
void k_dualaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDualAction*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_dualaction_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDualAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_dualaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDualAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_dualaction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_dualaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDualAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_dualaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDualAction*
/// @param param1 QObject*
///
void k_dualaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, QObject* param1)
///
void k_dualaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
/// @param param1 QEvent*
///
bool k_dualaction_event(void* self, void* param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
/// @param param1 QEvent*
///
bool k_dualaction_qbase_event(void* self, void* param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback bool func(KDualAction* self, QEvent* param1)
///
void k_dualaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dualaction_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_dualaction_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback bool func(KDualAction* self, QObject* watched, QEvent* event)
///
void k_dualaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
/// @param event QTimerEvent*
///
void k_dualaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
/// @param event QTimerEvent*
///
void k_dualaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, QTimerEvent* event)
///
void k_dualaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
/// @param event QChildEvent*
///
void k_dualaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
/// @param event QChildEvent*
///
void k_dualaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, QChildEvent* event)
///
void k_dualaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
/// @param event QEvent*
///
void k_dualaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
/// @param event QEvent*
///
void k_dualaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, QEvent* event)
///
void k_dualaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
/// @param signal QMetaMethod*
///
void k_dualaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
/// @param signal QMetaMethod*
///
void k_dualaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, QMetaMethod* signal)
///
void k_dualaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
/// @param signal QMetaMethod*
///
void k_dualaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
/// @param signal QMetaMethod*
///
void k_dualaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, QMetaMethod* signal)
///
void k_dualaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
///
QObject* k_dualaction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
///
QObject* k_dualaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback QObject* func()
///
void k_dualaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
///
int32_t k_dualaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
///
int32_t k_dualaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback int32_t func()
///
void k_dualaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
/// @param signal const char*
///
int32_t k_dualaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
/// @param signal const char*
///
int32_t k_dualaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback int32_t func(KDualAction* self, const char* signal)
///
void k_dualaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDualAction*
/// @param signal QMetaMethod*
///
bool k_dualaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDualAction*
/// @param signal QMetaMethod*
///
bool k_dualaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDualAction*
/// @param callback bool func(KDualAction* self, QMetaMethod* signal)
///
void k_dualaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDualAction*
/// @param callback void func(KDualAction* self, const char* objectName)
///
void k_dualaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kdualaction.html#dtor.KDualAction)
///
/// Delete this object from C++ memory.
///
/// @param self KDualAction*
///
void k_dualaction_delete(void* self);

#endif
