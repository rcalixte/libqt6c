#pragma once
#ifndef SRC_EXTRAS_KXMLGUI_QT6C_LIBKTOGGLETOOLBARACTION_H
#define SRC_EXTRAS_KXMLGUI_QT6C_LIBKTOGGLETOOLBARACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktoggletoolbaraction.html)

/// k_toggletoolbaraction_new constructs a new KToggleToolBarAction object.
///
/// @param toolBar KToolBar*
/// @param text const char*
/// @param parent QObject*
///
KToggleToolBarAction* k_toggletoolbaraction_new(void* toolBar, const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KToggleToolBarAction*
///
const QMetaObject* k_toggletoolbaraction_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KToggleToolBarAction*
/// @param callback const QMetaObject* func()
///
void k_toggletoolbaraction_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KToggleToolBarAction*
///
const QMetaObject* k_toggletoolbaraction_qbase_meta_object(void* self);

/// @param self KToggleToolBarAction*
/// @param param1 const char*
///
void* k_toggletoolbaraction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KToggleToolBarAction*
/// @param callback void* func(KToggleToolBarAction* self, const char* param1)
///
void k_toggletoolbaraction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KToggleToolBarAction*
/// @param param1 const char*
///
void* k_toggletoolbaraction_qbase_metacast(void* self, const char* param1);

/// @param self KToggleToolBarAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toggletoolbaraction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KToggleToolBarAction*
/// @param callback int32_t func(KToggleToolBarAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_toggletoolbaraction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KToggleToolBarAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toggletoolbaraction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_toggletoolbaraction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktoggletoolbaraction.html#toolBar)
///
/// @param self KToggleToolBarAction*
///
KToolBar* k_toggletoolbaraction_tool_bar(void* self);

/// [Upstream resources](https://api.kde.org/ktoggletoolbaraction.html#eventFilter)
///
/// @param self KToggleToolBarAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_toggletoolbaraction_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://api.kde.org/ktoggletoolbaraction.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KToggleToolBarAction*
/// @param callback bool func(KToggleToolBarAction* self, QObject* watched, QEvent* event)
///
void k_toggletoolbaraction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktoggletoolbaraction.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KToggleToolBarAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_toggletoolbaraction_qbase_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_toggletoolbaraction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_toggletoolbaraction_tr3(const char* s, const char* c, int n);

/// Inherited from KToggleAction
///
/// [Upstream resources](https://api.kde.org/ktoggleaction.html#setCheckedState)
///
/// @param self KToggleToolBarAction*
/// @param checkedItem KGuiItem*
///
void k_toggletoolbaraction_set_checked_state(void* self, void* checkedItem);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KToggleToolBarAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_toggletoolbaraction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KToggleToolBarAction*
/// @param group QActionGroup*
///
void k_toggletoolbaraction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KToggleToolBarAction*
///
QActionGroup* k_toggletoolbaraction_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KToggleToolBarAction*
/// @param icon QIcon*
///
void k_toggletoolbaraction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KToggleToolBarAction*
///
QIcon* k_toggletoolbaraction_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KToggleToolBarAction*
/// @param text const char*
///
void k_toggletoolbaraction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToggleToolBarAction*
///
const char* k_toggletoolbaraction_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KToggleToolBarAction*
/// @param text const char*
///
void k_toggletoolbaraction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToggleToolBarAction*
///
const char* k_toggletoolbaraction_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KToggleToolBarAction*
/// @param tip const char*
///
void k_toggletoolbaraction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToggleToolBarAction*
///
const char* k_toggletoolbaraction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KToggleToolBarAction*
/// @param statusTip const char*
///
void k_toggletoolbaraction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToggleToolBarAction*
///
const char* k_toggletoolbaraction_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KToggleToolBarAction*
/// @param what const char*
///
void k_toggletoolbaraction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToggleToolBarAction*
///
const char* k_toggletoolbaraction_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KToggleToolBarAction*
/// @param priority enum QAction__Priority
///
void k_toggletoolbaraction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KToggleToolBarAction*
///
/// @return enum QAction__Priority
///
int32_t k_toggletoolbaraction_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KToggleToolBarAction*
/// @param b bool
///
void k_toggletoolbaraction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KToggleToolBarAction*
/// @param shortcut QKeySequence*
///
void k_toggletoolbaraction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KToggleToolBarAction*
///
QKeySequence* k_toggletoolbaraction_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToggleToolBarAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_toggletoolbaraction_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToggleToolBarAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_toggletoolbaraction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KToggleToolBarAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_toggletoolbaraction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KToggleToolBarAction*
/// @param context enum Qt__ShortcutContext
///
void k_toggletoolbaraction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KToggleToolBarAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_toggletoolbaraction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KToggleToolBarAction*
/// @param autoRepeat bool
///
void k_toggletoolbaraction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KToggleToolBarAction*
/// @param font QFont*
///
void k_toggletoolbaraction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KToggleToolBarAction*
///
QFont* k_toggletoolbaraction_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KToggleToolBarAction*
/// @param checkable bool
///
void k_toggletoolbaraction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KToggleToolBarAction*
///
QVariant* k_toggletoolbaraction_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KToggleToolBarAction*
/// @param varVal QVariant*
///
void k_toggletoolbaraction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KToggleToolBarAction*
/// @param event enum QAction__ActionEvent
///
void k_toggletoolbaraction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KToggleToolBarAction*
/// @param menuRole enum QAction__MenuRole
///
void k_toggletoolbaraction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KToggleToolBarAction*
///
/// @return enum QAction__MenuRole
///
int32_t k_toggletoolbaraction_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KToggleToolBarAction*
/// @param visible bool
///
void k_toggletoolbaraction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KToggleToolBarAction*
/// @param show bool
///
void k_toggletoolbaraction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KToggleToolBarAction*
/// @param checked bool
///
void k_toggletoolbaraction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KToggleToolBarAction*
/// @param enabled bool
///
void k_toggletoolbaraction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KToggleToolBarAction*
/// @param b bool
///
void k_toggletoolbaraction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KToggleToolBarAction*
/// @param visible bool
///
void k_toggletoolbaraction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self)
///
void k_toggletoolbaraction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToggleToolBarAction*
/// @param enabled bool
///
void k_toggletoolbaraction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, bool enabled)
///
void k_toggletoolbaraction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToggleToolBarAction*
/// @param checkable bool
///
void k_toggletoolbaraction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, bool checkable)
///
void k_toggletoolbaraction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self)
///
void k_toggletoolbaraction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self)
///
void k_toggletoolbaraction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self)
///
void k_toggletoolbaraction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToggleToolBarAction*
/// @param param1 bool
///
void k_toggletoolbaraction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, bool param1)
///
void k_toggletoolbaraction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToggleToolBarAction*
/// @param object QObject*
///
bool k_toggletoolbaraction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToggleToolBarAction*
/// @param checked bool
///
void k_toggletoolbaraction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, bool checked)
///
void k_toggletoolbaraction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToggleToolBarAction*
///
const char* k_toggletoolbaraction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KToggleToolBarAction*
/// @param name char*
///
void k_toggletoolbaraction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KToggleToolBarAction*
///
bool k_toggletoolbaraction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KToggleToolBarAction*
/// @param b bool
///
bool k_toggletoolbaraction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KToggleToolBarAction*
///
QThread* k_toggletoolbaraction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KToggleToolBarAction*
/// @param thread QThread*
///
bool k_toggletoolbaraction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToggleToolBarAction*
/// @param interval int
///
int32_t k_toggletoolbaraction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToggleToolBarAction*
/// @param time int64_t of nanoseconds
///
int32_t k_toggletoolbaraction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToggleToolBarAction*
/// @param id int
///
void k_toggletoolbaraction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToggleToolBarAction*
/// @param id enum Qt__TimerId
///
void k_toggletoolbaraction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KToggleToolBarAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_toggletoolbaraction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KToggleToolBarAction*
/// @param parent QObject*
///
void k_toggletoolbaraction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KToggleToolBarAction*
/// @param filterObj QObject*
///
void k_toggletoolbaraction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KToggleToolBarAction*
/// @param obj QObject*
///
void k_toggletoolbaraction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_toggletoolbaraction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToggleToolBarAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_toggletoolbaraction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_toggletoolbaraction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_toggletoolbaraction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KToggleToolBarAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_toggletoolbaraction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KToggleToolBarAction*
/// @param name const char*
///
QVariant* k_toggletoolbaraction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KToggleToolBarAction*
///
const char** k_toggletoolbaraction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToggleToolBarAction*
///
QBindingStorage* k_toggletoolbaraction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToggleToolBarAction*
///
const QBindingStorage* k_toggletoolbaraction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self)
///
void k_toggletoolbaraction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KToggleToolBarAction*
///
QObject* k_toggletoolbaraction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KToggleToolBarAction*
/// @param classname const char*
///
bool k_toggletoolbaraction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToggleToolBarAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_toggletoolbaraction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToggleToolBarAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_toggletoolbaraction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_toggletoolbaraction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToggleToolBarAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_toggletoolbaraction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToggleToolBarAction*
/// @param param1 QObject*
///
void k_toggletoolbaraction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, QObject* param1)
///
void k_toggletoolbaraction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param param1 QEvent*
///
bool k_toggletoolbaraction_event(void* self, void* param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param param1 QEvent*
///
bool k_toggletoolbaraction_qbase_event(void* self, void* param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback bool func(KToggleToolBarAction* self, QEvent* param1)
///
void k_toggletoolbaraction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param event QTimerEvent*
///
void k_toggletoolbaraction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param event QTimerEvent*
///
void k_toggletoolbaraction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, QTimerEvent* event)
///
void k_toggletoolbaraction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param event QChildEvent*
///
void k_toggletoolbaraction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param event QChildEvent*
///
void k_toggletoolbaraction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, QChildEvent* event)
///
void k_toggletoolbaraction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param event QEvent*
///
void k_toggletoolbaraction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param event QEvent*
///
void k_toggletoolbaraction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, QEvent* event)
///
void k_toggletoolbaraction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param signal QMetaMethod*
///
void k_toggletoolbaraction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param signal QMetaMethod*
///
void k_toggletoolbaraction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, QMetaMethod* signal)
///
void k_toggletoolbaraction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param signal QMetaMethod*
///
void k_toggletoolbaraction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param signal QMetaMethod*
///
void k_toggletoolbaraction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, QMetaMethod* signal)
///
void k_toggletoolbaraction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
///
QObject* k_toggletoolbaraction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
///
QObject* k_toggletoolbaraction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback QObject* func()
///
void k_toggletoolbaraction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
///
int32_t k_toggletoolbaraction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
///
int32_t k_toggletoolbaraction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback int32_t func()
///
void k_toggletoolbaraction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param signal const char*
///
int32_t k_toggletoolbaraction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param signal const char*
///
int32_t k_toggletoolbaraction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback int32_t func(KToggleToolBarAction* self, const char* signal)
///
void k_toggletoolbaraction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param signal QMetaMethod*
///
bool k_toggletoolbaraction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param signal QMetaMethod*
///
bool k_toggletoolbaraction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleToolBarAction*
/// @param callback bool func(KToggleToolBarAction* self, QMetaMethod* signal)
///
void k_toggletoolbaraction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KToggleToolBarAction*
/// @param callback void func(KToggleToolBarAction* self, const char* objectName)
///
void k_toggletoolbaraction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktoggletoolbaraction.html#dtor.KToggleToolBarAction)
///
/// Delete this object from C++ memory.
///
/// @param self KToggleToolBarAction*
///
void k_toggletoolbaraction_delete(void* self);

#endif
