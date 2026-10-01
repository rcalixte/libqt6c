#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTOOLBARLABELACTION_H
#define EXTRAS_KWIDGETSADDONS_LIBKTOOLBARLABELACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html)

/// k_toolbarlabelaction_new constructs a new KToolBarLabelAction object.
///
/// @param text const char*
/// @param parent QObject*
///
KToolBarLabelAction* k_toolbarlabelaction_new(const char* text, void* parent);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html)

/// k_toolbarlabelaction_new2 constructs a new KToolBarLabelAction object.
///
/// @param buddy QAction*
/// @param text const char*
/// @param parent QObject*
///
KToolBarLabelAction* k_toolbarlabelaction_new2(void* buddy, const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KToolBarLabelAction*
///
const QMetaObject* k_toolbarlabelaction_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KToolBarLabelAction*
/// @param callback const QMetaObject* func(const KToolBarLabelAction* self)
///
void k_toolbarlabelaction_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KToolBarLabelAction*
///
const QMetaObject* k_toolbarlabelaction_super_meta_object(const void* self);

/// @param self KToolBarLabelAction*
/// @param param1 const char*
///
void* k_toolbarlabelaction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KToolBarLabelAction*
/// @param callback void* func(KToolBarLabelAction* self, const char* param1)
///
void k_toolbarlabelaction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KToolBarLabelAction*
/// @param param1 const char*
///
void* k_toolbarlabelaction_super_metacast(void* self, const char* param1);

/// @param self KToolBarLabelAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toolbarlabelaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KToolBarLabelAction*
/// @param callback int32_t func(KToolBarLabelAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_toolbarlabelaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KToolBarLabelAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toolbarlabelaction_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_toolbarlabelaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#setBuddy)
///
/// @param self KToolBarLabelAction*
/// @param buddy QAction*
///
void k_toolbarlabelaction_set_buddy(void* self, void* buddy);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#buddy)
///
/// @param self const KToolBarLabelAction*
///
QAction* k_toolbarlabelaction_buddy(const void* self);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#createWidget)
///
/// @param self KToolBarLabelAction*
/// @param parent QWidget*
///
QWidget* k_toolbarlabelaction_create_widget(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self KToolBarLabelAction*
/// @param callback QWidget* func(KToolBarLabelAction* self, QWidget* parent)
///
void k_toolbarlabelaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#createWidget)
///
/// Base class method implementation
///
/// @param self KToolBarLabelAction*
/// @param parent QWidget*
///
QWidget* k_toolbarlabelaction_super_create_widget(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#textChanged)
///
/// @param self KToolBarLabelAction*
/// @param newText const char*
///
void k_toolbarlabelaction_text_changed(void* self, const char* newText);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#textChanged)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, const char* newText)
///
void k_toolbarlabelaction_on_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#event)
///
/// @param self KToolBarLabelAction*
/// @param param1 QEvent*
///
bool k_toolbarlabelaction_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KToolBarLabelAction*
/// @param callback bool func(KToolBarLabelAction* self, QEvent* param1)
///
void k_toolbarlabelaction_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#event)
///
/// Base class method implementation
///
/// @param self KToolBarLabelAction*
/// @param param1 QEvent*
///
bool k_toolbarlabelaction_super_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#eventFilter)
///
/// @param self KToolBarLabelAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_toolbarlabelaction_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KToolBarLabelAction*
/// @param callback bool func(KToolBarLabelAction* self, QObject* watched, QEvent* event)
///
void k_toolbarlabelaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KToolBarLabelAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_toolbarlabelaction_super_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_toolbarlabelaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_toolbarlabelaction_tr3(const char* s, const char* c, int n);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KToolBarLabelAction*
/// @param w QWidget*
///
void k_toolbarlabelaction_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self const KToolBarLabelAction*
///
QWidget* k_toolbarlabelaction_default_widget(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KToolBarLabelAction*
/// @param parent QWidget*
///
QWidget* k_toolbarlabelaction_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KToolBarLabelAction*
/// @param widget QWidget*
///
void k_toolbarlabelaction_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self const KToolBarLabelAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_toolbarlabelaction_associated_objects(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KToolBarLabelAction*
/// @param group QActionGroup*
///
void k_toolbarlabelaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self const KToolBarLabelAction*
///
QActionGroup* k_toolbarlabelaction_action_group(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KToolBarLabelAction*
/// @param icon QIcon*
///
void k_toolbarlabelaction_set_icon(void* self, const void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self const KToolBarLabelAction*
///
QIcon* k_toolbarlabelaction_icon(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KToolBarLabelAction*
/// @param text const char*
///
void k_toolbarlabelaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToolBarLabelAction*
///
const char* k_toolbarlabelaction_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KToolBarLabelAction*
/// @param text const char*
///
void k_toolbarlabelaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToolBarLabelAction*
///
const char* k_toolbarlabelaction_icon_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KToolBarLabelAction*
/// @param tip const char*
///
void k_toolbarlabelaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToolBarLabelAction*
///
const char* k_toolbarlabelaction_tool_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KToolBarLabelAction*
/// @param statusTip const char*
///
void k_toolbarlabelaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToolBarLabelAction*
///
const char* k_toolbarlabelaction_status_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KToolBarLabelAction*
/// @param what const char*
///
void k_toolbarlabelaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToolBarLabelAction*
///
const char* k_toolbarlabelaction_whats_this(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KToolBarLabelAction*
/// @param priority enum QAction__Priority
///
void k_toolbarlabelaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self const KToolBarLabelAction*
///
/// @return enum QAction__Priority
///
int32_t k_toolbarlabelaction_priority(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KToolBarLabelAction*
/// @param b bool
///
void k_toolbarlabelaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_separator(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KToolBarLabelAction*
/// @param shortcut QKeySequence*
///
void k_toolbarlabelaction_set_shortcut(void* self, const void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self const KToolBarLabelAction*
///
QKeySequence* k_toolbarlabelaction_shortcut(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToolBarLabelAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_toolbarlabelaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToolBarLabelAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_toolbarlabelaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self const KToolBarLabelAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_toolbarlabelaction_shortcuts(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KToolBarLabelAction*
/// @param context enum Qt__ShortcutContext
///
void k_toolbarlabelaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self const KToolBarLabelAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_toolbarlabelaction_shortcut_context(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KToolBarLabelAction*
/// @param autoRepeat bool
///
void k_toolbarlabelaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_auto_repeat(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KToolBarLabelAction*
/// @param font QFont*
///
void k_toolbarlabelaction_set_font(void* self, const void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self const KToolBarLabelAction*
///
QFont* k_toolbarlabelaction_font(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KToolBarLabelAction*
/// @param checkable bool
///
void k_toolbarlabelaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_checkable(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self const KToolBarLabelAction*
///
QVariant* k_toolbarlabelaction_data(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KToolBarLabelAction*
/// @param var QVariant*
///
void k_toolbarlabelaction_set_data(void* self, const void* var);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_checked(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_enabled(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_visible(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KToolBarLabelAction*
/// @param event enum QAction__ActionEvent
///
void k_toolbarlabelaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KToolBarLabelAction*
/// @param menuRole enum QAction__MenuRole
///
void k_toolbarlabelaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self const KToolBarLabelAction*
///
/// @return enum QAction__MenuRole
///
int32_t k_toolbarlabelaction_menu_role(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KToolBarLabelAction*
/// @param visible bool
///
void k_toolbarlabelaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_icon_visible_in_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KToolBarLabelAction*
/// @param show bool
///
void k_toolbarlabelaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_shortcut_visible_in_context_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToolBarLabelAction*
///
bool k_toolbarlabelaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KToolBarLabelAction*
/// @param checked bool
///
void k_toolbarlabelaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KToolBarLabelAction*
/// @param enabled bool
///
void k_toolbarlabelaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KToolBarLabelAction*
/// @param b bool
///
void k_toolbarlabelaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KToolBarLabelAction*
/// @param visible bool
///
void k_toolbarlabelaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self)
///
void k_toolbarlabelaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToolBarLabelAction*
/// @param enabled bool
///
void k_toolbarlabelaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, bool enabled)
///
void k_toolbarlabelaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToolBarLabelAction*
/// @param checkable bool
///
void k_toolbarlabelaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, bool checkable)
///
void k_toolbarlabelaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self)
///
void k_toolbarlabelaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self)
///
void k_toolbarlabelaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self)
///
void k_toolbarlabelaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToolBarLabelAction*
/// @param param1 bool
///
void k_toolbarlabelaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, bool param1)
///
void k_toolbarlabelaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToolBarLabelAction*
/// @param object QObject*
///
bool k_toolbarlabelaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarLabelAction*
/// @param checked bool
///
void k_toolbarlabelaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, bool checked)
///
void k_toolbarlabelaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToolBarLabelAction*
///
const char* k_toolbarlabelaction_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KToolBarLabelAction*
/// @param name const char*
///
void k_toolbarlabelaction_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KToolBarLabelAction*
/// @param b bool
///
bool k_toolbarlabelaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KToolBarLabelAction*
///
QThread* k_toolbarlabelaction_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KToolBarLabelAction*
/// @param thread QThread*
///
bool k_toolbarlabelaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarLabelAction*
/// @param interval int
///
int32_t k_toolbarlabelaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarLabelAction*
/// @param time int64_t of nanoseconds
///
int32_t k_toolbarlabelaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolBarLabelAction*
/// @param id int
///
void k_toolbarlabelaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolBarLabelAction*
/// @param id enum Qt__TimerId
///
void k_toolbarlabelaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KToolBarLabelAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_toolbarlabelaction_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KToolBarLabelAction*
/// @param parent QObject*
///
void k_toolbarlabelaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KToolBarLabelAction*
/// @param filterObj QObject*
///
void k_toolbarlabelaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KToolBarLabelAction*
/// @param obj QObject*
///
void k_toolbarlabelaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_toolbarlabelaction_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_toolbarlabelaction_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KToolBarLabelAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_toolbarlabelaction_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_toolbarlabelaction_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_toolbarlabelaction_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToolBarLabelAction*
///
bool k_toolbarlabelaction_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToolBarLabelAction*
/// @param receiver QObject*
///
bool k_toolbarlabelaction_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_toolbarlabelaction_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KToolBarLabelAction*
///
void k_toolbarlabelaction_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KToolBarLabelAction*
///
void k_toolbarlabelaction_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KToolBarLabelAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_toolbarlabelaction_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KToolBarLabelAction*
/// @param name const char*
///
QVariant* k_toolbarlabelaction_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KToolBarLabelAction*
///
const char** k_toolbarlabelaction_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToolBarLabelAction*
///
QBindingStorage* k_toolbarlabelaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KToolBarLabelAction*
///
const QBindingStorage* k_toolbarlabelaction_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self)
///
void k_toolbarlabelaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KToolBarLabelAction*
///
QObject* k_toolbarlabelaction_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KToolBarLabelAction*
/// @param classname const char*
///
bool k_toolbarlabelaction_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarLabelAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_toolbarlabelaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBarLabelAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_toolbarlabelaction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_toolbarlabelaction_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_toolbarlabelaction_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KToolBarLabelAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_toolbarlabelaction_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToolBarLabelAction*
/// @param signal const char*
///
bool k_toolbarlabelaction_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToolBarLabelAction*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_toolbarlabelaction_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToolBarLabelAction*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_toolbarlabelaction_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToolBarLabelAction*
/// @param receiver QObject*
/// @param member const char*
///
bool k_toolbarlabelaction_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarLabelAction*
/// @param param1 QObject*
///
void k_toolbarlabelaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, QObject* param1)
///
void k_toolbarlabelaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param widget QWidget*
///
void k_toolbarlabelaction_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param widget QWidget*
///
void k_toolbarlabelaction_super_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, QWidget* widget)
///
void k_toolbarlabelaction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param event QTimerEvent*
///
void k_toolbarlabelaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param event QTimerEvent*
///
void k_toolbarlabelaction_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, QTimerEvent* event)
///
void k_toolbarlabelaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param event QChildEvent*
///
void k_toolbarlabelaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param event QChildEvent*
///
void k_toolbarlabelaction_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, QChildEvent* event)
///
void k_toolbarlabelaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param event QEvent*
///
void k_toolbarlabelaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param event QEvent*
///
void k_toolbarlabelaction_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, QEvent* event)
///
void k_toolbarlabelaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param signal QMetaMethod*
///
void k_toolbarlabelaction_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param signal QMetaMethod*
///
void k_toolbarlabelaction_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, QMetaMethod* signal)
///
void k_toolbarlabelaction_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param signal QMetaMethod*
///
void k_toolbarlabelaction_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param signal QMetaMethod*
///
void k_toolbarlabelaction_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, QMetaMethod* signal)
///
void k_toolbarlabelaction_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KToolBarLabelAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_toolbarlabelaction_created_widgets(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_toolbarlabelaction_super_created_widgets(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
/// @param callback libqt_list of QWidget* func(KToolBarLabelAction* self)
///
void k_toolbarlabelaction_on_created_widgets(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KToolBarLabelAction*
///
QObject* k_toolbarlabelaction_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
///
QObject* k_toolbarlabelaction_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
/// @param callback QObject* func(KToolBarLabelAction* self)
///
void k_toolbarlabelaction_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KToolBarLabelAction*
///
int32_t k_toolbarlabelaction_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
///
int32_t k_toolbarlabelaction_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
/// @param callback int32_t func(KToolBarLabelAction* self)
///
void k_toolbarlabelaction_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KToolBarLabelAction*
/// @param signal const char*
///
int32_t k_toolbarlabelaction_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
/// @param signal const char*
///
int32_t k_toolbarlabelaction_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
/// @param callback int32_t func(KToolBarLabelAction* self, const char* signal)
///
void k_toolbarlabelaction_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KToolBarLabelAction*
/// @param signal QMetaMethod*
///
bool k_toolbarlabelaction_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
/// @param signal QMetaMethod*
///
bool k_toolbarlabelaction_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KToolBarLabelAction*
/// @param callback bool func(KToolBarLabelAction* self, QMetaMethod* signal)
///
void k_toolbarlabelaction_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KToolBarLabelAction*
/// @param callback void func(KToolBarLabelAction* self, const char* objectName)
///
void k_toolbarlabelaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktoolbarlabelaction.html#dtor.KToolBarLabelAction)
///
/// Delete this object from C++ memory.
///
/// @param self KToolBarLabelAction*
///
void k_toolbarlabelaction_delete(void* self);

#endif
