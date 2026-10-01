#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBACTION_H
#define EXTRAS_KNEWSTUFF_LIBACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knswidgets-action.html)

/// k_nswidgets__action_new constructs a new KNSWidgets::Action object.
///
/// @param text const char*
/// @param configFile const char*
/// @param parent QObject*
///
KNSWidgets__Action* k_nswidgets__action_new(const char* text, const char* configFile, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KNSWidgets__Action*
///
const QMetaObject* k_nswidgets__action_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KNSWidgets__Action*
/// @param callback const QMetaObject* func(const KNSWidgets__Action* self)
///
void k_nswidgets__action_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KNSWidgets__Action*
///
const QMetaObject* k_nswidgets__action_super_meta_object(const void* self);

/// @param self KNSWidgets__Action*
/// @param param1 const char*
///
void* k_nswidgets__action_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KNSWidgets__Action*
/// @param callback void* func(KNSWidgets__Action* self, const char* param1)
///
void k_nswidgets__action_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KNSWidgets__Action*
/// @param param1 const char*
///
void* k_nswidgets__action_super_metacast(void* self, const char* param1);

/// @param self KNSWidgets__Action*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_nswidgets__action_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNSWidgets__Action*
/// @param callback int32_t func(KNSWidgets__Action* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_nswidgets__action_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNSWidgets__Action*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_nswidgets__action_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_nswidgets__action_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knswidgets-action.html#dialogFinished)
///
/// @param self KNSWidgets__Action*
/// @param changedEntries libqt_list of KNSCore__Entry*
///
void k_nswidgets__action_dialog_finished(void* self, libqt_list changedEntries);

/// [Upstream resources](https://api.kde.org/knswidgets-action.html#dialogFinished)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, libqt_list of KNSCore__Entry* changedEntries)
///
void k_nswidgets__action_on_dialog_finished(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_nswidgets__action_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_nswidgets__action_tr3(const char* s, const char* c, int n);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self const KNSWidgets__Action*
///
/// @return libqt_list of QObject*
///
libqt_list k_nswidgets__action_associated_objects(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KNSWidgets__Action*
/// @param group QActionGroup*
///
void k_nswidgets__action_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self const KNSWidgets__Action*
///
QActionGroup* k_nswidgets__action_action_group(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KNSWidgets__Action*
/// @param icon QIcon*
///
void k_nswidgets__action_set_icon(void* self, const void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self const KNSWidgets__Action*
///
QIcon* k_nswidgets__action_icon(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KNSWidgets__Action*
/// @param text const char*
///
void k_nswidgets__action_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSWidgets__Action*
///
const char* k_nswidgets__action_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KNSWidgets__Action*
/// @param text const char*
///
void k_nswidgets__action_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSWidgets__Action*
///
const char* k_nswidgets__action_icon_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KNSWidgets__Action*
/// @param tip const char*
///
void k_nswidgets__action_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSWidgets__Action*
///
const char* k_nswidgets__action_tool_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KNSWidgets__Action*
/// @param statusTip const char*
///
void k_nswidgets__action_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSWidgets__Action*
///
const char* k_nswidgets__action_status_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KNSWidgets__Action*
/// @param what const char*
///
void k_nswidgets__action_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSWidgets__Action*
///
const char* k_nswidgets__action_whats_this(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KNSWidgets__Action*
/// @param priority enum QAction__Priority
///
void k_nswidgets__action_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self const KNSWidgets__Action*
///
/// @return enum QAction__Priority
///
int32_t k_nswidgets__action_priority(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KNSWidgets__Action*
/// @param b bool
///
void k_nswidgets__action_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_separator(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KNSWidgets__Action*
/// @param shortcut QKeySequence*
///
void k_nswidgets__action_set_shortcut(void* self, const void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self const KNSWidgets__Action*
///
QKeySequence* k_nswidgets__action_shortcut(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KNSWidgets__Action*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_nswidgets__action_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KNSWidgets__Action*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_nswidgets__action_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self const KNSWidgets__Action*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_nswidgets__action_shortcuts(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KNSWidgets__Action*
/// @param context enum Qt__ShortcutContext
///
void k_nswidgets__action_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self const KNSWidgets__Action*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_nswidgets__action_shortcut_context(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KNSWidgets__Action*
/// @param autoRepeat bool
///
void k_nswidgets__action_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_auto_repeat(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KNSWidgets__Action*
/// @param font QFont*
///
void k_nswidgets__action_set_font(void* self, const void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self const KNSWidgets__Action*
///
QFont* k_nswidgets__action_font(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KNSWidgets__Action*
/// @param checkable bool
///
void k_nswidgets__action_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_checkable(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self const KNSWidgets__Action*
///
QVariant* k_nswidgets__action_data(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KNSWidgets__Action*
/// @param var QVariant*
///
void k_nswidgets__action_set_data(void* self, const void* var);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_checked(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_enabled(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_visible(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KNSWidgets__Action*
/// @param event enum QAction__ActionEvent
///
void k_nswidgets__action_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KNSWidgets__Action*
/// @param menuRole enum QAction__MenuRole
///
void k_nswidgets__action_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self const KNSWidgets__Action*
///
/// @return enum QAction__MenuRole
///
int32_t k_nswidgets__action_menu_role(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KNSWidgets__Action*
/// @param visible bool
///
void k_nswidgets__action_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_icon_visible_in_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KNSWidgets__Action*
/// @param show bool
///
void k_nswidgets__action_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_shortcut_visible_in_context_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KNSWidgets__Action*
///
bool k_nswidgets__action_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KNSWidgets__Action*
/// @param checked bool
///
void k_nswidgets__action_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KNSWidgets__Action*
/// @param enabled bool
///
void k_nswidgets__action_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KNSWidgets__Action*
/// @param b bool
///
void k_nswidgets__action_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KNSWidgets__Action*
/// @param visible bool
///
void k_nswidgets__action_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self)
///
void k_nswidgets__action_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KNSWidgets__Action*
/// @param enabled bool
///
void k_nswidgets__action_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, bool enabled)
///
void k_nswidgets__action_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KNSWidgets__Action*
/// @param checkable bool
///
void k_nswidgets__action_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, bool checkable)
///
void k_nswidgets__action_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self)
///
void k_nswidgets__action_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self)
///
void k_nswidgets__action_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self)
///
void k_nswidgets__action_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KNSWidgets__Action*
/// @param param1 bool
///
void k_nswidgets__action_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, bool param1)
///
void k_nswidgets__action_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KNSWidgets__Action*
/// @param object QObject*
///
bool k_nswidgets__action_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KNSWidgets__Action*
/// @param checked bool
///
void k_nswidgets__action_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, bool checked)
///
void k_nswidgets__action_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KNSWidgets__Action*
///
const char* k_nswidgets__action_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSWidgets__Action*
/// @param name const char*
///
void k_nswidgets__action_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNSWidgets__Action*
/// @param b bool
///
bool k_nswidgets__action_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KNSWidgets__Action*
///
QThread* k_nswidgets__action_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSWidgets__Action*
/// @param thread QThread*
///
bool k_nswidgets__action_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSWidgets__Action*
/// @param interval int
///
int32_t k_nswidgets__action_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSWidgets__Action*
/// @param time int64_t of nanoseconds
///
int32_t k_nswidgets__action_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSWidgets__Action*
/// @param id int
///
void k_nswidgets__action_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSWidgets__Action*
/// @param id enum Qt__TimerId
///
void k_nswidgets__action_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KNSWidgets__Action*
///
/// @return libqt_list of QObject*
///
libqt_list k_nswidgets__action_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNSWidgets__Action*
/// @param parent QObject*
///
void k_nswidgets__action_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNSWidgets__Action*
/// @param filterObj QObject*
///
void k_nswidgets__action_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNSWidgets__Action*
/// @param obj QObject*
///
void k_nswidgets__action_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_nswidgets__action_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_nswidgets__action_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KNSWidgets__Action*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_nswidgets__action_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_nswidgets__action_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_nswidgets__action_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSWidgets__Action*
///
bool k_nswidgets__action_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSWidgets__Action*
/// @param receiver QObject*
///
bool k_nswidgets__action_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_nswidgets__action_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KNSWidgets__Action*
///
void k_nswidgets__action_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KNSWidgets__Action*
///
void k_nswidgets__action_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSWidgets__Action*
/// @param name const char*
/// @param value QVariant*
///
bool k_nswidgets__action_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KNSWidgets__Action*
/// @param name const char*
///
QVariant* k_nswidgets__action_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KNSWidgets__Action*
///
const char** k_nswidgets__action_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSWidgets__Action*
///
QBindingStorage* k_nswidgets__action_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KNSWidgets__Action*
///
const QBindingStorage* k_nswidgets__action_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self)
///
void k_nswidgets__action_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KNSWidgets__Action*
///
QObject* k_nswidgets__action_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KNSWidgets__Action*
/// @param classname const char*
///
bool k_nswidgets__action_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSWidgets__Action*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_nswidgets__action_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSWidgets__Action*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_nswidgets__action_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_nswidgets__action_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_nswidgets__action_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KNSWidgets__Action*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_nswidgets__action_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSWidgets__Action*
/// @param signal const char*
///
bool k_nswidgets__action_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSWidgets__Action*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_nswidgets__action_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSWidgets__Action*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_nswidgets__action_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KNSWidgets__Action*
/// @param receiver QObject*
/// @param member const char*
///
bool k_nswidgets__action_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSWidgets__Action*
/// @param param1 QObject*
///
void k_nswidgets__action_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, QObject* param1)
///
void k_nswidgets__action_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param param1 QEvent*
///
bool k_nswidgets__action_event(void* self, void* param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param param1 QEvent*
///
bool k_nswidgets__action_super_event(void* self, void* param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param callback bool func(KNSWidgets__Action* self, QEvent* param1)
///
void k_nswidgets__action_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_nswidgets__action_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_nswidgets__action_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param callback bool func(KNSWidgets__Action* self, QObject* watched, QEvent* event)
///
void k_nswidgets__action_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param event QTimerEvent*
///
void k_nswidgets__action_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param event QTimerEvent*
///
void k_nswidgets__action_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, QTimerEvent* event)
///
void k_nswidgets__action_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param event QChildEvent*
///
void k_nswidgets__action_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param event QChildEvent*
///
void k_nswidgets__action_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, QChildEvent* event)
///
void k_nswidgets__action_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param event QEvent*
///
void k_nswidgets__action_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param event QEvent*
///
void k_nswidgets__action_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, QEvent* event)
///
void k_nswidgets__action_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param signal QMetaMethod*
///
void k_nswidgets__action_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param signal QMetaMethod*
///
void k_nswidgets__action_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, QMetaMethod* signal)
///
void k_nswidgets__action_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param signal QMetaMethod*
///
void k_nswidgets__action_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param signal QMetaMethod*
///
void k_nswidgets__action_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, QMetaMethod* signal)
///
void k_nswidgets__action_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSWidgets__Action*
///
QObject* k_nswidgets__action_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSWidgets__Action*
///
QObject* k_nswidgets__action_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNSWidgets__Action*
/// @param callback QObject* func(KNSWidgets__Action* self)
///
void k_nswidgets__action_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSWidgets__Action*
///
int32_t k_nswidgets__action_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSWidgets__Action*
///
int32_t k_nswidgets__action_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNSWidgets__Action*
/// @param callback int32_t func(KNSWidgets__Action* self)
///
void k_nswidgets__action_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSWidgets__Action*
/// @param signal const char*
///
int32_t k_nswidgets__action_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSWidgets__Action*
/// @param signal const char*
///
int32_t k_nswidgets__action_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNSWidgets__Action*
/// @param callback int32_t func(KNSWidgets__Action* self, const char* signal)
///
void k_nswidgets__action_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KNSWidgets__Action*
/// @param signal QMetaMethod*
///
bool k_nswidgets__action_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KNSWidgets__Action*
/// @param signal QMetaMethod*
///
bool k_nswidgets__action_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KNSWidgets__Action*
/// @param callback bool func(KNSWidgets__Action* self, QMetaMethod* signal)
///
void k_nswidgets__action_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSWidgets__Action*
/// @param callback void func(KNSWidgets__Action* self, const char* objectName)
///
void k_nswidgets__action_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KNSWidgets__Action*
///
void k_nswidgets__action_delete(void* self);

#endif
