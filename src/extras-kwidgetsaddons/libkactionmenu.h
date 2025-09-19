#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKACTIONMENU_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKACTIONMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kactionmenu.html

/// k_actionmenu_new constructs a new KActionMenu object.
///
/// @param parent QObject*
KActionMenu* k_actionmenu_new(void* parent);

/// k_actionmenu_new2 constructs a new KActionMenu object.
///
/// @param text const char*
/// @param parent QObject*
KActionMenu* k_actionmenu_new2(const char* text, void* parent);

/// k_actionmenu_new3 constructs a new KActionMenu object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
KActionMenu* k_actionmenu_new3(void* icon, const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KActionMenu*
const QMetaObject* k_actionmenu_meta_object(void* self);

/// @param self KActionMenu*
/// @param param1 const char*
void* k_actionmenu_metacast(void* self, const char* param1);

/// @param self KActionMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_actionmenu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KActionMenu*
/// @param callback int32_t func(KActionMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_actionmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KActionMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_actionmenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_actionmenu_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kactionmenu.html#addAction)
///
/// @param self KActionMenu*
/// @param action QAction*
void k_actionmenu_add_action(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kactionmenu.html#addSeparator)
///
/// @param self KActionMenu*
QAction* k_actionmenu_add_separator(void* self);

/// [Qt documentation](https://api.kde.org/kactionmenu.html#insertAction)
///
/// @param self KActionMenu*
/// @param before QAction*
/// @param action QAction*
void k_actionmenu_insert_action(void* self, void* before, void* action);

/// [Qt documentation](https://api.kde.org/kactionmenu.html#insertSeparator)
///
/// @param self KActionMenu*
/// @param before QAction*
QAction* k_actionmenu_insert_separator(void* self, void* before);

/// [Qt documentation](https://api.kde.org/kactionmenu.html#removeAction)
///
/// @param self KActionMenu*
/// @param action QAction*
void k_actionmenu_remove_action(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kactionmenu.html#popupMode)
///
/// @param self KActionMenu*
///
/// @return enum QToolButton__ToolButtonPopupMode
int32_t k_actionmenu_popup_mode(void* self);

/// [Qt documentation](https://api.kde.org/kactionmenu.html#setPopupMode)
///
/// @param self KActionMenu*
/// @param popupMode enum QToolButton__ToolButtonPopupMode
void k_actionmenu_set_popup_mode(void* self, int32_t popupMode);

/// [Qt documentation](https://api.kde.org/kactionmenu.html#createWidget)
///
/// @param self KActionMenu*
/// @param parent QWidget*
QWidget* k_actionmenu_create_widget(void* self, void* parent);

/// [Qt documentation](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self KActionMenu*
/// @param callback QWidget* func(KActionMenu* self, QWidget* parent)
void k_actionmenu_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Base class method implementation
///
/// @param self KActionMenu*
/// @param parent QWidget*
QWidget* k_actionmenu_qbase_create_widget(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_actionmenu_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_actionmenu_tr3(const char* s, const char* c, int n);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KActionMenu*
/// @param w QWidget*
void k_actionmenu_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self KActionMenu*
QWidget* k_actionmenu_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KActionMenu*
/// @param parent QWidget*
QWidget* k_actionmenu_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KActionMenu*
/// @param widget QWidget*
void k_actionmenu_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KActionMenu*
libqt_list /* of QObject* */ k_actionmenu_associated_objects(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KActionMenu*
/// @param group QActionGroup*
void k_actionmenu_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KActionMenu*
QActionGroup* k_actionmenu_action_group(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KActionMenu*
/// @param icon QIcon*
void k_actionmenu_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KActionMenu*
QIcon* k_actionmenu_icon(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KActionMenu*
/// @param text const char*
void k_actionmenu_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionMenu*
const char* k_actionmenu_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KActionMenu*
/// @param text const char*
void k_actionmenu_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionMenu*
const char* k_actionmenu_icon_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KActionMenu*
/// @param tip const char*
void k_actionmenu_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionMenu*
const char* k_actionmenu_tool_tip(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KActionMenu*
/// @param statusTip const char*
void k_actionmenu_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionMenu*
const char* k_actionmenu_status_tip(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KActionMenu*
/// @param what const char*
void k_actionmenu_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionMenu*
const char* k_actionmenu_whats_this(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KActionMenu*
/// @param priority enum QAction__Priority
void k_actionmenu_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KActionMenu*
///
/// @return enum QAction__Priority
int32_t k_actionmenu_priority(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KActionMenu*
/// @param b bool
void k_actionmenu_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KActionMenu*
bool k_actionmenu_is_separator(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KActionMenu*
/// @param shortcut QKeySequence*
void k_actionmenu_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KActionMenu*
QKeySequence* k_actionmenu_shortcut(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KActionMenu*
/// @param shortcuts libqt_list /* of QKeySequence* */
void k_actionmenu_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KActionMenu*
/// @param shortcuts enum QKeySequence__StandardKey
void k_actionmenu_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KActionMenu*
libqt_list /* of QKeySequence* */ k_actionmenu_shortcuts(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KActionMenu*
/// @param context enum Qt__ShortcutContext
void k_actionmenu_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KActionMenu*
///
/// @return enum Qt__ShortcutContext
int32_t k_actionmenu_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KActionMenu*
/// @param autoRepeat bool
void k_actionmenu_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KActionMenu*
bool k_actionmenu_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KActionMenu*
/// @param font QFont*
void k_actionmenu_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KActionMenu*
QFont* k_actionmenu_font(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KActionMenu*
/// @param checkable bool
void k_actionmenu_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KActionMenu*
bool k_actionmenu_is_checkable(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KActionMenu*
QVariant* k_actionmenu_data(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KActionMenu*
/// @param varVal QVariant*
void k_actionmenu_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KActionMenu*
bool k_actionmenu_is_checked(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KActionMenu*
bool k_actionmenu_is_enabled(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KActionMenu*
bool k_actionmenu_is_visible(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KActionMenu*
/// @param event enum QAction__ActionEvent
void k_actionmenu_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KActionMenu*
/// @param menuRole enum QAction__MenuRole
void k_actionmenu_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KActionMenu*
///
/// @return enum QAction__MenuRole
int32_t k_actionmenu_menu_role(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KActionMenu*
/// @param visible bool
void k_actionmenu_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KActionMenu*
bool k_actionmenu_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KActionMenu*
/// @param show bool
void k_actionmenu_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KActionMenu*
bool k_actionmenu_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KActionMenu*
bool k_actionmenu_show_status_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KActionMenu*
void k_actionmenu_trigger(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KActionMenu*
void k_actionmenu_hover(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KActionMenu*
/// @param checked bool
void k_actionmenu_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KActionMenu*
void k_actionmenu_toggle(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KActionMenu*
/// @param enabled bool
void k_actionmenu_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KActionMenu*
void k_actionmenu_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KActionMenu*
/// @param b bool
void k_actionmenu_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KActionMenu*
/// @param visible bool
void k_actionmenu_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KActionMenu*
void k_actionmenu_changed(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
void k_actionmenu_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KActionMenu*
/// @param enabled bool
void k_actionmenu_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, bool enabled)
void k_actionmenu_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KActionMenu*
/// @param checkable bool
void k_actionmenu_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, bool checkable)
void k_actionmenu_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KActionMenu*
void k_actionmenu_visible_changed(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
void k_actionmenu_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KActionMenu*
void k_actionmenu_triggered(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
void k_actionmenu_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KActionMenu*
void k_actionmenu_hovered(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
void k_actionmenu_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KActionMenu*
/// @param param1 bool
void k_actionmenu_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, bool param1)
void k_actionmenu_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KActionMenu*
/// @param object QObject*
bool k_actionmenu_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KActionMenu*
/// @param checked bool
void k_actionmenu_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, bool checked)
void k_actionmenu_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionMenu*
const char* k_actionmenu_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KActionMenu*
/// @param name char*
void k_actionmenu_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KActionMenu*
bool k_actionmenu_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KActionMenu*
bool k_actionmenu_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KActionMenu*
bool k_actionmenu_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KActionMenu*
bool k_actionmenu_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KActionMenu*
/// @param b bool
bool k_actionmenu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KActionMenu*
QThread* k_actionmenu_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KActionMenu*
/// @param thread QThread*
bool k_actionmenu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionMenu*
/// @param interval int
int32_t k_actionmenu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KActionMenu*
/// @param id int
void k_actionmenu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KActionMenu*
/// @param id enum Qt__TimerId
void k_actionmenu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KActionMenu*
libqt_list /* of QObject* */ k_actionmenu_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KActionMenu*
/// @param parent QObject*
void k_actionmenu_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KActionMenu*
/// @param filterObj QObject*
void k_actionmenu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KActionMenu*
/// @param obj QObject*
void k_actionmenu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_actionmenu_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KActionMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_actionmenu_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_actionmenu_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_actionmenu_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KActionMenu*
void k_actionmenu_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KActionMenu*
void k_actionmenu_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KActionMenu*
/// @param name const char*
/// @param value QVariant*
bool k_actionmenu_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KActionMenu*
/// @param name const char*
QVariant* k_actionmenu_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KActionMenu*
const char** k_actionmenu_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KActionMenu*
QBindingStorage* k_actionmenu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KActionMenu*
const QBindingStorage* k_actionmenu_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionMenu*
void k_actionmenu_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self)
void k_actionmenu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KActionMenu*
QObject* k_actionmenu_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KActionMenu*
/// @param classname const char*
bool k_actionmenu_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KActionMenu*
void k_actionmenu_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KActionMenu*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_actionmenu_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KActionMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_actionmenu_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_actionmenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KActionMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_actionmenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionMenu*
/// @param param1 QObject*
void k_actionmenu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QObject* param1)
void k_actionmenu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param param1 QEvent*
bool k_actionmenu_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param param1 QEvent*
bool k_actionmenu_qbase_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback bool func(KActionMenu* self, QEvent* param1)
void k_actionmenu_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_actionmenu_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_actionmenu_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback bool func(KActionMenu* self, QObject* param1, QEvent* param2)
void k_actionmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param widget QWidget*
void k_actionmenu_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param widget QWidget*
void k_actionmenu_qbase_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QWidget* widget)
void k_actionmenu_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param event QTimerEvent*
void k_actionmenu_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param event QTimerEvent*
void k_actionmenu_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QTimerEvent* event)
void k_actionmenu_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param event QChildEvent*
void k_actionmenu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param event QChildEvent*
void k_actionmenu_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QChildEvent* event)
void k_actionmenu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param event QEvent*
void k_actionmenu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param event QEvent*
void k_actionmenu_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QEvent* event)
void k_actionmenu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
void k_actionmenu_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
void k_actionmenu_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QMetaMethod* signal)
void k_actionmenu_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
void k_actionmenu_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
void k_actionmenu_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, QMetaMethod* signal)
void k_actionmenu_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
libqt_list /* of QWidget* */ k_actionmenu_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
libqt_list /* of QWidget* */ k_actionmenu_qbase_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback QWidget** func()
void k_actionmenu_on_created_widgets(void* self, QWidget** (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
QObject* k_actionmenu_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
QObject* k_actionmenu_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback QObject* func()
void k_actionmenu_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
int32_t k_actionmenu_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
int32_t k_actionmenu_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback int32_t func()
void k_actionmenu_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param signal const char*
int32_t k_actionmenu_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param signal const char*
int32_t k_actionmenu_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback int32_t func(KActionMenu* self, const char* signal)
void k_actionmenu_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
bool k_actionmenu_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KActionMenu*
/// @param signal QMetaMethod*
bool k_actionmenu_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KActionMenu*
/// @param callback bool func(KActionMenu* self, QMetaMethod* signal)
void k_actionmenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KActionMenu*
/// @param callback void func(KActionMenu* self, const char* objectName)
void k_actionmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kactionmenu.html#dtor.KActionMenu)
///
/// Delete this object from C++ memory.
///
/// @param self KActionMenu*
void k_actionmenu_delete(void* self);

#endif
