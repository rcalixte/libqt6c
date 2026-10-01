#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTOGGLEFULLSCREENACTION_H
#define EXTRAS_KWIDGETSADDONS_LIBKTOGGLEFULLSCREENACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html)

/// k_togglefullscreenaction_new constructs a new KToggleFullScreenAction object.
///
/// @param parent QObject*
///
KToggleFullScreenAction* k_togglefullscreenaction_new(void* parent);

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html)

/// k_togglefullscreenaction_new2 constructs a new KToggleFullScreenAction object.
///
/// @param window QWidget*
/// @param parent QObject*
///
KToggleFullScreenAction* k_togglefullscreenaction_new2(void* window, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KToggleFullScreenAction*
///
const QMetaObject* k_togglefullscreenaction_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KToggleFullScreenAction*
/// @param callback const QMetaObject* func(const KToggleFullScreenAction* self)
///
void k_togglefullscreenaction_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KToggleFullScreenAction*
///
const QMetaObject* k_togglefullscreenaction_super_meta_object(const void* self);

/// @param self KToggleFullScreenAction*
/// @param param1 const char*
///
void* k_togglefullscreenaction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KToggleFullScreenAction*
/// @param callback void* func(KToggleFullScreenAction* self, const char* param1)
///
void k_togglefullscreenaction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KToggleFullScreenAction*
/// @param param1 const char*
///
void* k_togglefullscreenaction_super_metacast(void* self, const char* param1);

/// @param self KToggleFullScreenAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_togglefullscreenaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KToggleFullScreenAction*
/// @param callback int32_t func(KToggleFullScreenAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_togglefullscreenaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KToggleFullScreenAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_togglefullscreenaction_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_togglefullscreenaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html#setWindow)
///
/// @param self KToggleFullScreenAction*
/// @param window QWidget*
///
void k_togglefullscreenaction_set_window(void* self, void* window);

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html#setFullScreen)
///
/// @param window QWidget*
/// @param set bool
///
void k_togglefullscreenaction_set_full_screen(void* window, bool set);

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html#eventFilter)
///
/// @param self KToggleFullScreenAction*
/// @param object QObject*
/// @param event QEvent*
///
bool k_togglefullscreenaction_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KToggleFullScreenAction*
/// @param callback bool func(KToggleFullScreenAction* self, QObject* object, QEvent* event)
///
void k_togglefullscreenaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KToggleFullScreenAction*
/// @param object QObject*
/// @param event QEvent*
///
bool k_togglefullscreenaction_super_event_filter(void* self, void* object, void* event);

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html#slotToggled)
///
/// @param self KToggleFullScreenAction*
/// @param checked bool
///
void k_togglefullscreenaction_slot_toggled(void* self, bool checked);

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html#slotToggled)
///
/// Allows for overriding the related default method
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, bool checked)
///
void k_togglefullscreenaction_on_slot_toggled(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html#slotToggled)
///
/// Base class method implementation
///
/// @param self KToggleFullScreenAction*
/// @param checked bool
///
void k_togglefullscreenaction_super_slot_toggled(void* self, bool checked);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_togglefullscreenaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_togglefullscreenaction_tr3(const char* s, const char* c, int n);

/// Inherited from KToggleAction
///
/// [Upstream resources](https://api.kde.org/ktoggleaction.html#setCheckedState)
///
/// @param self KToggleFullScreenAction*
/// @param checkedItem KGuiItem*
///
void k_togglefullscreenaction_set_checked_state(void* self, const void* checkedItem);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self const KToggleFullScreenAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_togglefullscreenaction_associated_objects(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KToggleFullScreenAction*
/// @param group QActionGroup*
///
void k_togglefullscreenaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self const KToggleFullScreenAction*
///
QActionGroup* k_togglefullscreenaction_action_group(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KToggleFullScreenAction*
/// @param icon QIcon*
///
void k_togglefullscreenaction_set_icon(void* self, const void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self const KToggleFullScreenAction*
///
QIcon* k_togglefullscreenaction_icon(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KToggleFullScreenAction*
/// @param text const char*
///
void k_togglefullscreenaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToggleFullScreenAction*
///
const char* k_togglefullscreenaction_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KToggleFullScreenAction*
/// @param text const char*
///
void k_togglefullscreenaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToggleFullScreenAction*
///
const char* k_togglefullscreenaction_icon_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KToggleFullScreenAction*
/// @param tip const char*
///
void k_togglefullscreenaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToggleFullScreenAction*
///
const char* k_togglefullscreenaction_tool_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KToggleFullScreenAction*
/// @param statusTip const char*
///
void k_togglefullscreenaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToggleFullScreenAction*
///
const char* k_togglefullscreenaction_status_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KToggleFullScreenAction*
/// @param what const char*
///
void k_togglefullscreenaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToggleFullScreenAction*
///
const char* k_togglefullscreenaction_whats_this(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KToggleFullScreenAction*
/// @param priority enum QAction__Priority
///
void k_togglefullscreenaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self const KToggleFullScreenAction*
///
/// @return enum QAction__Priority
///
int32_t k_togglefullscreenaction_priority(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KToggleFullScreenAction*
/// @param b bool
///
void k_togglefullscreenaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_separator(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KToggleFullScreenAction*
/// @param shortcut QKeySequence*
///
void k_togglefullscreenaction_set_shortcut(void* self, const void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self const KToggleFullScreenAction*
///
QKeySequence* k_togglefullscreenaction_shortcut(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToggleFullScreenAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_togglefullscreenaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KToggleFullScreenAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_togglefullscreenaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self const KToggleFullScreenAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_togglefullscreenaction_shortcuts(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KToggleFullScreenAction*
/// @param context enum Qt__ShortcutContext
///
void k_togglefullscreenaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self const KToggleFullScreenAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_togglefullscreenaction_shortcut_context(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KToggleFullScreenAction*
/// @param autoRepeat bool
///
void k_togglefullscreenaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_auto_repeat(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KToggleFullScreenAction*
/// @param font QFont*
///
void k_togglefullscreenaction_set_font(void* self, const void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self const KToggleFullScreenAction*
///
QFont* k_togglefullscreenaction_font(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KToggleFullScreenAction*
/// @param checkable bool
///
void k_togglefullscreenaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_checkable(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self const KToggleFullScreenAction*
///
QVariant* k_togglefullscreenaction_data(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KToggleFullScreenAction*
/// @param var QVariant*
///
void k_togglefullscreenaction_set_data(void* self, const void* var);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_checked(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_enabled(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_visible(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KToggleFullScreenAction*
/// @param event enum QAction__ActionEvent
///
void k_togglefullscreenaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KToggleFullScreenAction*
/// @param menuRole enum QAction__MenuRole
///
void k_togglefullscreenaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self const KToggleFullScreenAction*
///
/// @return enum QAction__MenuRole
///
int32_t k_togglefullscreenaction_menu_role(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KToggleFullScreenAction*
/// @param visible bool
///
void k_togglefullscreenaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_icon_visible_in_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KToggleFullScreenAction*
/// @param show bool
///
void k_togglefullscreenaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_shortcut_visible_in_context_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToggleFullScreenAction*
///
bool k_togglefullscreenaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KToggleFullScreenAction*
/// @param checked bool
///
void k_togglefullscreenaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KToggleFullScreenAction*
/// @param enabled bool
///
void k_togglefullscreenaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KToggleFullScreenAction*
/// @param b bool
///
void k_togglefullscreenaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KToggleFullScreenAction*
/// @param visible bool
///
void k_togglefullscreenaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self)
///
void k_togglefullscreenaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToggleFullScreenAction*
/// @param enabled bool
///
void k_togglefullscreenaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, bool enabled)
///
void k_togglefullscreenaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToggleFullScreenAction*
/// @param checkable bool
///
void k_togglefullscreenaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, bool checkable)
///
void k_togglefullscreenaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self)
///
void k_togglefullscreenaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self)
///
void k_togglefullscreenaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self)
///
void k_togglefullscreenaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToggleFullScreenAction*
/// @param param1 bool
///
void k_togglefullscreenaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, bool param1)
///
void k_togglefullscreenaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KToggleFullScreenAction*
/// @param object QObject*
///
bool k_togglefullscreenaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToggleFullScreenAction*
/// @param checked bool
///
void k_togglefullscreenaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, bool checked)
///
void k_togglefullscreenaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KToggleFullScreenAction*
///
const char* k_togglefullscreenaction_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KToggleFullScreenAction*
/// @param name const char*
///
void k_togglefullscreenaction_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KToggleFullScreenAction*
/// @param b bool
///
bool k_togglefullscreenaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KToggleFullScreenAction*
///
QThread* k_togglefullscreenaction_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KToggleFullScreenAction*
/// @param thread QThread*
///
bool k_togglefullscreenaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToggleFullScreenAction*
/// @param interval int
///
int32_t k_togglefullscreenaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToggleFullScreenAction*
/// @param time int64_t of nanoseconds
///
int32_t k_togglefullscreenaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToggleFullScreenAction*
/// @param id int
///
void k_togglefullscreenaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToggleFullScreenAction*
/// @param id enum Qt__TimerId
///
void k_togglefullscreenaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KToggleFullScreenAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_togglefullscreenaction_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KToggleFullScreenAction*
/// @param parent QObject*
///
void k_togglefullscreenaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KToggleFullScreenAction*
/// @param filterObj QObject*
///
void k_togglefullscreenaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KToggleFullScreenAction*
/// @param obj QObject*
///
void k_togglefullscreenaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_togglefullscreenaction_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_togglefullscreenaction_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KToggleFullScreenAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_togglefullscreenaction_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_togglefullscreenaction_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_togglefullscreenaction_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToggleFullScreenAction*
///
bool k_togglefullscreenaction_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToggleFullScreenAction*
/// @param receiver QObject*
///
bool k_togglefullscreenaction_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_togglefullscreenaction_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KToggleFullScreenAction*
///
void k_togglefullscreenaction_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KToggleFullScreenAction*
///
void k_togglefullscreenaction_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KToggleFullScreenAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_togglefullscreenaction_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KToggleFullScreenAction*
/// @param name const char*
///
QVariant* k_togglefullscreenaction_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KToggleFullScreenAction*
///
const char** k_togglefullscreenaction_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToggleFullScreenAction*
///
QBindingStorage* k_togglefullscreenaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KToggleFullScreenAction*
///
const QBindingStorage* k_togglefullscreenaction_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self)
///
void k_togglefullscreenaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KToggleFullScreenAction*
///
QObject* k_togglefullscreenaction_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KToggleFullScreenAction*
/// @param classname const char*
///
bool k_togglefullscreenaction_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToggleFullScreenAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_togglefullscreenaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToggleFullScreenAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_togglefullscreenaction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_togglefullscreenaction_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_togglefullscreenaction_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KToggleFullScreenAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_togglefullscreenaction_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToggleFullScreenAction*
/// @param signal const char*
///
bool k_togglefullscreenaction_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToggleFullScreenAction*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_togglefullscreenaction_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToggleFullScreenAction*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_togglefullscreenaction_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KToggleFullScreenAction*
/// @param receiver QObject*
/// @param member const char*
///
bool k_togglefullscreenaction_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToggleFullScreenAction*
/// @param param1 QObject*
///
void k_togglefullscreenaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, QObject* param1)
///
void k_togglefullscreenaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param param1 QEvent*
///
bool k_togglefullscreenaction_event(void* self, void* param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param param1 QEvent*
///
bool k_togglefullscreenaction_super_event(void* self, void* param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param callback bool func(KToggleFullScreenAction* self, QEvent* param1)
///
void k_togglefullscreenaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param event QTimerEvent*
///
void k_togglefullscreenaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param event QTimerEvent*
///
void k_togglefullscreenaction_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, QTimerEvent* event)
///
void k_togglefullscreenaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param event QChildEvent*
///
void k_togglefullscreenaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param event QChildEvent*
///
void k_togglefullscreenaction_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, QChildEvent* event)
///
void k_togglefullscreenaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param event QEvent*
///
void k_togglefullscreenaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param event QEvent*
///
void k_togglefullscreenaction_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, QEvent* event)
///
void k_togglefullscreenaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param signal QMetaMethod*
///
void k_togglefullscreenaction_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param signal QMetaMethod*
///
void k_togglefullscreenaction_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, QMetaMethod* signal)
///
void k_togglefullscreenaction_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param signal QMetaMethod*
///
void k_togglefullscreenaction_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param signal QMetaMethod*
///
void k_togglefullscreenaction_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, QMetaMethod* signal)
///
void k_togglefullscreenaction_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KToggleFullScreenAction*
///
QObject* k_togglefullscreenaction_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KToggleFullScreenAction*
///
QObject* k_togglefullscreenaction_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KToggleFullScreenAction*
/// @param callback QObject* func(KToggleFullScreenAction* self)
///
void k_togglefullscreenaction_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KToggleFullScreenAction*
///
int32_t k_togglefullscreenaction_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KToggleFullScreenAction*
///
int32_t k_togglefullscreenaction_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KToggleFullScreenAction*
/// @param callback int32_t func(KToggleFullScreenAction* self)
///
void k_togglefullscreenaction_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KToggleFullScreenAction*
/// @param signal const char*
///
int32_t k_togglefullscreenaction_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KToggleFullScreenAction*
/// @param signal const char*
///
int32_t k_togglefullscreenaction_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KToggleFullScreenAction*
/// @param callback int32_t func(KToggleFullScreenAction* self, const char* signal)
///
void k_togglefullscreenaction_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KToggleFullScreenAction*
/// @param signal QMetaMethod*
///
bool k_togglefullscreenaction_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KToggleFullScreenAction*
/// @param signal QMetaMethod*
///
bool k_togglefullscreenaction_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KToggleFullScreenAction*
/// @param callback bool func(KToggleFullScreenAction* self, QMetaMethod* signal)
///
void k_togglefullscreenaction_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KToggleFullScreenAction*
/// @param callback void func(KToggleFullScreenAction* self, const char* objectName)
///
void k_togglefullscreenaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktogglefullscreenaction.html#dtor.KToggleFullScreenAction)
///
/// Delete this object from C++ memory.
///
/// @param self KToggleFullScreenAction*
///
void k_togglefullscreenaction_delete(void* self);

#endif
