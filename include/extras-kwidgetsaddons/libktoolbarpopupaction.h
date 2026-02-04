#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKTOOLBARPOPUPACTION_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKTOOLBARPOPUPACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktoolbarpopupaction.html)

/// k_toolbarpopupaction_new constructs a new KToolBarPopupAction object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
///
KToolBarPopupAction* k_toolbarpopupaction_new(void* icon, const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KToolBarPopupAction*
///
const QMetaObject* k_toolbarpopupaction_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KToolBarPopupAction*
/// @param callback const QMetaObject* func()
///
void k_toolbarpopupaction_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KToolBarPopupAction*
///
const QMetaObject* k_toolbarpopupaction_qbase_meta_object(void* self);

/// @param self KToolBarPopupAction*
/// @param param1 const char*
///
void* k_toolbarpopupaction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KToolBarPopupAction*
/// @param callback void* func(KToolBarPopupAction* self, const char* param1)
///
void k_toolbarpopupaction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KToolBarPopupAction*
/// @param param1 const char*
///
void* k_toolbarpopupaction_qbase_metacast(void* self, const char* param1);

/// @param self KToolBarPopupAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toolbarpopupaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KToolBarPopupAction*
/// @param callback int32_t func(KToolBarPopupAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_toolbarpopupaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KToolBarPopupAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toolbarpopupaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_toolbarpopupaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktoolbarpopupaction.html#popupMenu)
///
/// @param self KToolBarPopupAction*
///
QMenu* k_toolbarpopupaction_popup_menu(void* self);

/// [Upstream resources](https://api.kde.org/ktoolbarpopupaction.html#popupMode)
///
/// @param self KToolBarPopupAction*
///
/// @return enum KToolBarPopupAction__PopupMode
///
int32_t k_toolbarpopupaction_popup_mode(void* self);

/// [Upstream resources](https://api.kde.org/ktoolbarpopupaction.html#setPopupMode)
///
/// @param self KToolBarPopupAction*
/// @param popupMode enum KToolBarPopupAction__PopupMode
///
void k_toolbarpopupaction_set_popup_mode(void* self, int32_t popupMode);

/// [Upstream resources](https://api.kde.org/ktoolbarpopupaction.html#createWidget)
///
/// @param self KToolBarPopupAction*
/// @param parent QWidget*
///
QWidget* k_toolbarpopupaction_create_widget(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktoolbarpopupaction.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self KToolBarPopupAction*
/// @param callback QWidget* func(KToolBarPopupAction* self, QWidget* parent)
///
void k_toolbarpopupaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktoolbarpopupaction.html#createWidget)
///
/// Base class method implementation
///
/// @param self KToolBarPopupAction*
/// @param parent QWidget*
///
QWidget* k_toolbarpopupaction_qbase_create_widget(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_toolbarpopupaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_toolbarpopupaction_tr3(const char* s, const char* c, int n);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KToolBarPopupAction*
/// @param w QWidget*
///
void k_toolbarpopupaction_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self KToolBarPopupAction*
///
QWidget* k_toolbarpopupaction_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KToolBarPopupAction*
/// @param parent QWidget*
///
QWidget* k_toolbarpopupaction_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KToolBarPopupAction*
/// @param widget QWidget*
///
void k_toolbarpopupaction_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KToolBarPopupAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_toolbarpopupaction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KToolBarPopupAction*
/// @param group QActionGroup*
///
void k_toolbarpopupaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KToolBarPopupAction*
///
QActionGroup* k_toolbarpopupaction_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KToolBarPopupAction*
/// @param icon QIcon*
///
void k_toolbarpopupaction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KToolBarPopupAction*
///
QIcon* k_toolbarpopupaction_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KToolBarPopupAction*
/// @param text const char*
///
void k_toolbarpopupaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarPopupAction*
///
const char* k_toolbarpopupaction_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KToolBarPopupAction*
/// @param text const char*
///
void k_toolbarpopupaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarPopupAction*
///
const char* k_toolbarpopupaction_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KToolBarPopupAction*
/// @param tip const char*
///
void k_toolbarpopupaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarPopupAction*
///
const char* k_toolbarpopupaction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KToolBarPopupAction*
/// @param statusTip const char*
///
void k_toolbarpopupaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarPopupAction*
///
const char* k_toolbarpopupaction_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KToolBarPopupAction*
/// @param what const char*
///
void k_toolbarpopupaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarPopupAction*
///
const char* k_toolbarpopupaction_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KToolBarPopupAction*
/// @param priority enum QAction__Priority
///
void k_toolbarpopupaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KToolBarPopupAction*
///
/// @return enum QAction__Priority
///
int32_t k_toolbarpopupaction_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KToolBarPopupAction*
/// @param b bool
///
void k_toolbarpopupaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KToolBarPopupAction*
/// @param shortcut QKeySequence*
///
void k_toolbarpopupaction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KToolBarPopupAction*
///
QKeySequence* k_toolbarpopupaction_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToolBarPopupAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_toolbarpopupaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToolBarPopupAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_toolbarpopupaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KToolBarPopupAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_toolbarpopupaction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KToolBarPopupAction*
/// @param context enum Qt__ShortcutContext
///
void k_toolbarpopupaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KToolBarPopupAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_toolbarpopupaction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KToolBarPopupAction*
/// @param autoRepeat bool
///
void k_toolbarpopupaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KToolBarPopupAction*
/// @param font QFont*
///
void k_toolbarpopupaction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KToolBarPopupAction*
///
QFont* k_toolbarpopupaction_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KToolBarPopupAction*
/// @param checkable bool
///
void k_toolbarpopupaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KToolBarPopupAction*
///
QVariant* k_toolbarpopupaction_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KToolBarPopupAction*
/// @param varVal QVariant*
///
void k_toolbarpopupaction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KToolBarPopupAction*
/// @param event enum QAction__ActionEvent
///
void k_toolbarpopupaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KToolBarPopupAction*
/// @param menuRole enum QAction__MenuRole
///
void k_toolbarpopupaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KToolBarPopupAction*
///
/// @return enum QAction__MenuRole
///
int32_t k_toolbarpopupaction_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KToolBarPopupAction*
/// @param visible bool
///
void k_toolbarpopupaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KToolBarPopupAction*
/// @param show bool
///
void k_toolbarpopupaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KToolBarPopupAction*
/// @param checked bool
///
void k_toolbarpopupaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KToolBarPopupAction*
/// @param enabled bool
///
void k_toolbarpopupaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KToolBarPopupAction*
/// @param b bool
///
void k_toolbarpopupaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KToolBarPopupAction*
/// @param visible bool
///
void k_toolbarpopupaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self)
///
void k_toolbarpopupaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToolBarPopupAction*
/// @param enabled bool
///
void k_toolbarpopupaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, bool enabled)
///
void k_toolbarpopupaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToolBarPopupAction*
/// @param checkable bool
///
void k_toolbarpopupaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, bool checkable)
///
void k_toolbarpopupaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self)
///
void k_toolbarpopupaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self)
///
void k_toolbarpopupaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self)
///
void k_toolbarpopupaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToolBarPopupAction*
/// @param param1 bool
///
void k_toolbarpopupaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, bool param1)
///
void k_toolbarpopupaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToolBarPopupAction*
/// @param object QObject*
///
bool k_toolbarpopupaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarPopupAction*
/// @param checked bool
///
void k_toolbarpopupaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, bool checked)
///
void k_toolbarpopupaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarPopupAction*
///
const char* k_toolbarpopupaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KToolBarPopupAction*
/// @param name char*
///
void k_toolbarpopupaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KToolBarPopupAction*
/// @param b bool
///
bool k_toolbarpopupaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KToolBarPopupAction*
///
QThread* k_toolbarpopupaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KToolBarPopupAction*
/// @param thread QThread*
///
bool k_toolbarpopupaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarPopupAction*
/// @param interval int
///
int32_t k_toolbarpopupaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarPopupAction*
/// @param time int64_t of nanoseconds
///
int32_t k_toolbarpopupaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolBarPopupAction*
/// @param id int
///
void k_toolbarpopupaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolBarPopupAction*
/// @param id enum Qt__TimerId
///
void k_toolbarpopupaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KToolBarPopupAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_toolbarpopupaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KToolBarPopupAction*
/// @param parent QObject*
///
void k_toolbarpopupaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KToolBarPopupAction*
/// @param filterObj QObject*
///
void k_toolbarpopupaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KToolBarPopupAction*
/// @param obj QObject*
///
void k_toolbarpopupaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_toolbarpopupaction_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_toolbarpopupaction_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToolBarPopupAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_toolbarpopupaction_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_toolbarpopupaction_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_toolbarpopupaction_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBarPopupAction*
///
bool k_toolbarpopupaction_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBarPopupAction*
/// @param receiver QObject*
///
bool k_toolbarpopupaction_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_toolbarpopupaction_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KToolBarPopupAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_toolbarpopupaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KToolBarPopupAction*
/// @param name const char*
///
QVariant* k_toolbarpopupaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KToolBarPopupAction*
///
const char** k_toolbarpopupaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToolBarPopupAction*
///
QBindingStorage* k_toolbarpopupaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToolBarPopupAction*
///
const QBindingStorage* k_toolbarpopupaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self)
///
void k_toolbarpopupaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KToolBarPopupAction*
///
QObject* k_toolbarpopupaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KToolBarPopupAction*
/// @param classname const char*
///
bool k_toolbarpopupaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarPopupAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_toolbarpopupaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarPopupAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_toolbarpopupaction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_toolbarpopupaction_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_toolbarpopupaction_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToolBarPopupAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_toolbarpopupaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBarPopupAction*
/// @param signal const char*
///
bool k_toolbarpopupaction_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBarPopupAction*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_toolbarpopupaction_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBarPopupAction*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_toolbarpopupaction_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBarPopupAction*
/// @param receiver QObject*
/// @param member const char*
///
bool k_toolbarpopupaction_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarPopupAction*
/// @param param1 QObject*
///
void k_toolbarpopupaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, QObject* param1)
///
void k_toolbarpopupaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param param1 QEvent*
///
bool k_toolbarpopupaction_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param param1 QEvent*
///
bool k_toolbarpopupaction_qbase_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback bool func(KToolBarPopupAction* self, QEvent* param1)
///
void k_toolbarpopupaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_toolbarpopupaction_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_toolbarpopupaction_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback bool func(KToolBarPopupAction* self, QObject* param1, QEvent* param2)
///
void k_toolbarpopupaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param widget QWidget*
///
void k_toolbarpopupaction_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param widget QWidget*
///
void k_toolbarpopupaction_qbase_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, QWidget* widget)
///
void k_toolbarpopupaction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param event QTimerEvent*
///
void k_toolbarpopupaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param event QTimerEvent*
///
void k_toolbarpopupaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, QTimerEvent* event)
///
void k_toolbarpopupaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param event QChildEvent*
///
void k_toolbarpopupaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param event QChildEvent*
///
void k_toolbarpopupaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, QChildEvent* event)
///
void k_toolbarpopupaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param event QEvent*
///
void k_toolbarpopupaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param event QEvent*
///
void k_toolbarpopupaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, QEvent* event)
///
void k_toolbarpopupaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param signal QMetaMethod*
///
void k_toolbarpopupaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param signal QMetaMethod*
///
void k_toolbarpopupaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, QMetaMethod* signal)
///
void k_toolbarpopupaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param signal QMetaMethod*
///
void k_toolbarpopupaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param signal QMetaMethod*
///
void k_toolbarpopupaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, QMetaMethod* signal)
///
void k_toolbarpopupaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_toolbarpopupaction_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_toolbarpopupaction_qbase_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback libqt_list of QWidget* func()
///
void k_toolbarpopupaction_on_created_widgets(void* self, libqt_list (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
///
QObject* k_toolbarpopupaction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
///
QObject* k_toolbarpopupaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback QObject* func()
///
void k_toolbarpopupaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
///
int32_t k_toolbarpopupaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
///
int32_t k_toolbarpopupaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback int32_t func()
///
void k_toolbarpopupaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param signal const char*
///
int32_t k_toolbarpopupaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param signal const char*
///
int32_t k_toolbarpopupaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback int32_t func(KToolBarPopupAction* self, const char* signal)
///
void k_toolbarpopupaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param signal QMetaMethod*
///
bool k_toolbarpopupaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param signal QMetaMethod*
///
bool k_toolbarpopupaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarPopupAction*
/// @param callback bool func(KToolBarPopupAction* self, QMetaMethod* signal)
///
void k_toolbarpopupaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KToolBarPopupAction*
/// @param callback void func(KToolBarPopupAction* self, const char* objectName)
///
void k_toolbarpopupaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktoolbarpopupaction.html#dtor.KToolBarPopupAction)
///
/// Delete this object from C++ memory.
///
/// @param self KToolBarPopupAction*
///
void k_toolbarpopupaction_delete(void* self);

/// [Upstream resources](https://api.kde.org/ktoolbarpopupaction.html#public-types)

typedef enum {
    KTOOLBARPOPUPACTION_POPUPMODE_NOPOPUP = -1,
    KTOOLBARPOPUPACTION_POPUPMODE_DELAYEDPOPUP = 0,
    KTOOLBARPOPUPACTION_POPUPMODE_MENUBUTTONPOPUP = 1,
    KTOOLBARPOPUPACTION_POPUPMODE_INSTANTPOPUP = 2
} KToolBarPopupAction__PopupMode;

#endif
