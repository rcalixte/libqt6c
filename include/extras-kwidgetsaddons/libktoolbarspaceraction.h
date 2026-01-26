#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKTOOLBARSPACERACTION_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKTOOLBARSPACERACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktoolbarspaceraction.html)

/// k_toolbarspaceraction_new constructs a new KToolBarSpacerAction object.
///
/// @param parent QObject*
///
KToolBarSpacerAction* k_toolbarspaceraction_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KToolBarSpacerAction*
///
const QMetaObject* k_toolbarspaceraction_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KToolBarSpacerAction*
/// @param callback const QMetaObject* func()
///
void k_toolbarspaceraction_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KToolBarSpacerAction*
///
const QMetaObject* k_toolbarspaceraction_qbase_meta_object(void* self);

/// @param self KToolBarSpacerAction*
/// @param param1 const char*
///
void* k_toolbarspaceraction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KToolBarSpacerAction*
/// @param callback void* func(KToolBarSpacerAction* self, const char* param1)
///
void k_toolbarspaceraction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KToolBarSpacerAction*
/// @param param1 const char*
///
void* k_toolbarspaceraction_qbase_metacast(void* self, const char* param1);

/// @param self KToolBarSpacerAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toolbarspaceraction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KToolBarSpacerAction*
/// @param callback int32_t func(KToolBarSpacerAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_toolbarspaceraction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KToolBarSpacerAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toolbarspaceraction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_toolbarspaceraction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktoolbarspaceraction.html#createWidget)
///
/// @param self KToolBarSpacerAction*
/// @param parent QWidget*
///
QWidget* k_toolbarspaceraction_create_widget(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktoolbarspaceraction.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self KToolBarSpacerAction*
/// @param callback QWidget* func(KToolBarSpacerAction* self, QWidget* parent)
///
void k_toolbarspaceraction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktoolbarspaceraction.html#createWidget)
///
/// Base class method implementation
///
/// @param self KToolBarSpacerAction*
/// @param parent QWidget*
///
QWidget* k_toolbarspaceraction_qbase_create_widget(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_toolbarspaceraction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_toolbarspaceraction_tr3(const char* s, const char* c, int n);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KToolBarSpacerAction*
/// @param w QWidget*
///
void k_toolbarspaceraction_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self KToolBarSpacerAction*
///
QWidget* k_toolbarspaceraction_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KToolBarSpacerAction*
/// @param parent QWidget*
///
QWidget* k_toolbarspaceraction_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KToolBarSpacerAction*
/// @param widget QWidget*
///
void k_toolbarspaceraction_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KToolBarSpacerAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_toolbarspaceraction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KToolBarSpacerAction*
/// @param group QActionGroup*
///
void k_toolbarspaceraction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KToolBarSpacerAction*
///
QActionGroup* k_toolbarspaceraction_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KToolBarSpacerAction*
/// @param icon QIcon*
///
void k_toolbarspaceraction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KToolBarSpacerAction*
///
QIcon* k_toolbarspaceraction_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KToolBarSpacerAction*
/// @param text const char*
///
void k_toolbarspaceraction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarSpacerAction*
///
const char* k_toolbarspaceraction_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KToolBarSpacerAction*
/// @param text const char*
///
void k_toolbarspaceraction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarSpacerAction*
///
const char* k_toolbarspaceraction_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KToolBarSpacerAction*
/// @param tip const char*
///
void k_toolbarspaceraction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarSpacerAction*
///
const char* k_toolbarspaceraction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KToolBarSpacerAction*
/// @param statusTip const char*
///
void k_toolbarspaceraction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarSpacerAction*
///
const char* k_toolbarspaceraction_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KToolBarSpacerAction*
/// @param what const char*
///
void k_toolbarspaceraction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarSpacerAction*
///
const char* k_toolbarspaceraction_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KToolBarSpacerAction*
/// @param priority enum QAction__Priority
///
void k_toolbarspaceraction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KToolBarSpacerAction*
///
/// @return enum QAction__Priority
///
int32_t k_toolbarspaceraction_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KToolBarSpacerAction*
/// @param b bool
///
void k_toolbarspaceraction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KToolBarSpacerAction*
/// @param shortcut QKeySequence*
///
void k_toolbarspaceraction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KToolBarSpacerAction*
///
QKeySequence* k_toolbarspaceraction_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToolBarSpacerAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_toolbarspaceraction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToolBarSpacerAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_toolbarspaceraction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KToolBarSpacerAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_toolbarspaceraction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KToolBarSpacerAction*
/// @param context enum Qt__ShortcutContext
///
void k_toolbarspaceraction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KToolBarSpacerAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_toolbarspaceraction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KToolBarSpacerAction*
/// @param autoRepeat bool
///
void k_toolbarspaceraction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KToolBarSpacerAction*
/// @param font QFont*
///
void k_toolbarspaceraction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KToolBarSpacerAction*
///
QFont* k_toolbarspaceraction_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KToolBarSpacerAction*
/// @param checkable bool
///
void k_toolbarspaceraction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KToolBarSpacerAction*
///
QVariant* k_toolbarspaceraction_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KToolBarSpacerAction*
/// @param varVal QVariant*
///
void k_toolbarspaceraction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KToolBarSpacerAction*
/// @param event enum QAction__ActionEvent
///
void k_toolbarspaceraction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KToolBarSpacerAction*
/// @param menuRole enum QAction__MenuRole
///
void k_toolbarspaceraction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KToolBarSpacerAction*
///
/// @return enum QAction__MenuRole
///
int32_t k_toolbarspaceraction_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KToolBarSpacerAction*
/// @param visible bool
///
void k_toolbarspaceraction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KToolBarSpacerAction*
/// @param show bool
///
void k_toolbarspaceraction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KToolBarSpacerAction*
/// @param checked bool
///
void k_toolbarspaceraction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KToolBarSpacerAction*
/// @param enabled bool
///
void k_toolbarspaceraction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KToolBarSpacerAction*
/// @param b bool
///
void k_toolbarspaceraction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KToolBarSpacerAction*
/// @param visible bool
///
void k_toolbarspaceraction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self)
///
void k_toolbarspaceraction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToolBarSpacerAction*
/// @param enabled bool
///
void k_toolbarspaceraction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, bool enabled)
///
void k_toolbarspaceraction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToolBarSpacerAction*
/// @param checkable bool
///
void k_toolbarspaceraction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, bool checkable)
///
void k_toolbarspaceraction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self)
///
void k_toolbarspaceraction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self)
///
void k_toolbarspaceraction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self)
///
void k_toolbarspaceraction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToolBarSpacerAction*
/// @param param1 bool
///
void k_toolbarspaceraction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, bool param1)
///
void k_toolbarspaceraction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToolBarSpacerAction*
/// @param object QObject*
///
bool k_toolbarspaceraction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarSpacerAction*
/// @param checked bool
///
void k_toolbarspaceraction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, bool checked)
///
void k_toolbarspaceraction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBarSpacerAction*
///
const char* k_toolbarspaceraction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KToolBarSpacerAction*
/// @param name char*
///
void k_toolbarspaceraction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KToolBarSpacerAction*
///
bool k_toolbarspaceraction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KToolBarSpacerAction*
/// @param b bool
///
bool k_toolbarspaceraction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KToolBarSpacerAction*
///
QThread* k_toolbarspaceraction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KToolBarSpacerAction*
/// @param thread QThread*
///
bool k_toolbarspaceraction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarSpacerAction*
/// @param interval int
///
int32_t k_toolbarspaceraction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarSpacerAction*
/// @param time int64_t of nanoseconds
///
int32_t k_toolbarspaceraction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolBarSpacerAction*
/// @param id int
///
void k_toolbarspaceraction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolBarSpacerAction*
/// @param id enum Qt__TimerId
///
void k_toolbarspaceraction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KToolBarSpacerAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_toolbarspaceraction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KToolBarSpacerAction*
/// @param parent QObject*
///
void k_toolbarspaceraction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KToolBarSpacerAction*
/// @param filterObj QObject*
///
void k_toolbarspaceraction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KToolBarSpacerAction*
/// @param obj QObject*
///
void k_toolbarspaceraction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_toolbarspaceraction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToolBarSpacerAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_toolbarspaceraction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_toolbarspaceraction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_toolbarspaceraction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KToolBarSpacerAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_toolbarspaceraction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KToolBarSpacerAction*
/// @param name const char*
///
QVariant* k_toolbarspaceraction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KToolBarSpacerAction*
///
const char** k_toolbarspaceraction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToolBarSpacerAction*
///
QBindingStorage* k_toolbarspaceraction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToolBarSpacerAction*
///
const QBindingStorage* k_toolbarspaceraction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self)
///
void k_toolbarspaceraction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KToolBarSpacerAction*
///
QObject* k_toolbarspaceraction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KToolBarSpacerAction*
/// @param classname const char*
///
bool k_toolbarspaceraction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KToolBarSpacerAction*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_toolbarspaceraction_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarSpacerAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_toolbarspaceraction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarSpacerAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_toolbarspaceraction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_toolbarspaceraction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToolBarSpacerAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_toolbarspaceraction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarSpacerAction*
/// @param param1 QObject*
///
void k_toolbarspaceraction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, QObject* param1)
///
void k_toolbarspaceraction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param param1 QEvent*
///
bool k_toolbarspaceraction_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param param1 QEvent*
///
bool k_toolbarspaceraction_qbase_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback bool func(KToolBarSpacerAction* self, QEvent* param1)
///
void k_toolbarspaceraction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_toolbarspaceraction_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_toolbarspaceraction_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback bool func(KToolBarSpacerAction* self, QObject* param1, QEvent* param2)
///
void k_toolbarspaceraction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param widget QWidget*
///
void k_toolbarspaceraction_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param widget QWidget*
///
void k_toolbarspaceraction_qbase_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, QWidget* widget)
///
void k_toolbarspaceraction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param event QTimerEvent*
///
void k_toolbarspaceraction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param event QTimerEvent*
///
void k_toolbarspaceraction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, QTimerEvent* event)
///
void k_toolbarspaceraction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param event QChildEvent*
///
void k_toolbarspaceraction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param event QChildEvent*
///
void k_toolbarspaceraction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, QChildEvent* event)
///
void k_toolbarspaceraction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param event QEvent*
///
void k_toolbarspaceraction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param event QEvent*
///
void k_toolbarspaceraction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, QEvent* event)
///
void k_toolbarspaceraction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param signal QMetaMethod*
///
void k_toolbarspaceraction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param signal QMetaMethod*
///
void k_toolbarspaceraction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, QMetaMethod* signal)
///
void k_toolbarspaceraction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param signal QMetaMethod*
///
void k_toolbarspaceraction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param signal QMetaMethod*
///
void k_toolbarspaceraction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, QMetaMethod* signal)
///
void k_toolbarspaceraction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_toolbarspaceraction_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_toolbarspaceraction_qbase_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback QWidget** func()
///
void k_toolbarspaceraction_on_created_widgets(void* self, QWidget** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
///
QObject* k_toolbarspaceraction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
///
QObject* k_toolbarspaceraction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback QObject* func()
///
void k_toolbarspaceraction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
///
int32_t k_toolbarspaceraction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
///
int32_t k_toolbarspaceraction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback int32_t func()
///
void k_toolbarspaceraction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param signal const char*
///
int32_t k_toolbarspaceraction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param signal const char*
///
int32_t k_toolbarspaceraction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback int32_t func(KToolBarSpacerAction* self, const char* signal)
///
void k_toolbarspaceraction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param signal QMetaMethod*
///
bool k_toolbarspaceraction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param signal QMetaMethod*
///
bool k_toolbarspaceraction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarSpacerAction*
/// @param callback bool func(KToolBarSpacerAction* self, QMetaMethod* signal)
///
void k_toolbarspaceraction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KToolBarSpacerAction*
/// @param callback void func(KToolBarSpacerAction* self, const char* objectName)
///
void k_toolbarspaceraction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktoolbarspaceraction.html#dtor.KToolBarSpacerAction)
///
/// Delete this object from C++ memory.
///
/// @param self KToolBarSpacerAction*
///
void k_toolbarspaceraction_delete(void* self);

#endif
