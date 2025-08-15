#pragma once
#ifndef SRCQT6C_LIBQACTION_H
#define SRCQT6C_LIBQACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qaction.html

/// q_action_new constructs a new QAction object.
///
QAction* q_action_new();

/// q_action_new2 constructs a new QAction object.
///
/// @param text const char*
QAction* q_action_new2(const char* text);

/// q_action_new3 constructs a new QAction object.
///
/// @param icon QIcon*
/// @param text const char*
QAction* q_action_new3(void* icon, const char* text);

/// q_action_new4 constructs a new QAction object.
///
/// @param parent QObject*
QAction* q_action_new4(void* parent);

/// q_action_new5 constructs a new QAction object.
///
/// @param text const char*
/// @param parent QObject*
QAction* q_action_new5(const char* text, void* parent);

/// q_action_new6 constructs a new QAction object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
QAction* q_action_new6(void* icon, const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAction*
const QMetaObject* q_action_meta_object(void* self);

/// @param self QAction*
/// @param param1 const char*
void* q_action_metacast(void* self, const char* param1);

/// @param self QAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_action_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAction*
/// @param callback int32_t fn(QAction*, enum QMetaObject__Call, int, void*)
void q_action_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_action_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_action_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self QAction*
libqt_list /* of QObject* */ q_action_associated_objects(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self QAction*
/// @param group QActionGroup*
void q_action_set_action_group(void* self, void* group);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self QAction*
QActionGroup* q_action_action_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self QAction*
/// @param icon QIcon*
void q_action_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self QAction*
QIcon* q_action_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self QAction*
/// @param text const char*
void q_action_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAction*
const char* q_action_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self QAction*
/// @param text const char*
void q_action_set_icon_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAction*
const char* q_action_icon_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self QAction*
/// @param tip const char*
void q_action_set_tool_tip(void* self, const char* tip);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAction*
const char* q_action_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self QAction*
/// @param statusTip const char*
void q_action_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAction*
const char* q_action_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self QAction*
/// @param what const char*
void q_action_set_whats_this(void* self, const char* what);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAction*
const char* q_action_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self QAction*
/// @param priority enum QAction__Priority
void q_action_set_priority(void* self, int64_t priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self QAction*
///
/// @return enum QAction__Priority
int64_t q_action_priority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self QAction*
/// @param b bool
void q_action_set_separator(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self QAction*
bool q_action_is_separator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self QAction*
/// @param shortcut QKeySequence*
void q_action_set_shortcut(void* self, void* shortcut);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self QAction*
QKeySequence* q_action_shortcut(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self QAction*
/// @param shortcuts libqt_list /* of QKeySequence* */
void q_action_set_shortcuts(void* self, libqt_list shortcuts);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self QAction*
/// @param shortcuts enum QKeySequence__StandardKey
void q_action_set_shortcuts2(void* self, int64_t shortcuts);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self QAction*
libqt_list /* of QKeySequence* */ q_action_shortcuts(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self QAction*
/// @param context enum Qt__ShortcutContext
void q_action_set_shortcut_context(void* self, int64_t context);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self QAction*
///
/// @return enum Qt__ShortcutContext
int64_t q_action_shortcut_context(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self QAction*
/// @param autoRepeat bool
void q_action_set_auto_repeat(void* self, bool autoRepeat);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self QAction*
bool q_action_auto_repeat(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self QAction*
/// @param font QFont*
void q_action_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self QAction*
QFont* q_action_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self QAction*
/// @param checkable bool
void q_action_set_checkable(void* self, bool checkable);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self QAction*
bool q_action_is_checkable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self QAction*
QVariant* q_action_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self QAction*
/// @param varVal QVariant*
void q_action_set_data(void* self, void* varVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self QAction*
bool q_action_is_checked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self QAction*
bool q_action_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self QAction*
bool q_action_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self QAction*
/// @param event enum QAction__ActionEvent
void q_action_activate(void* self, int64_t event);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self QAction*
/// @param menuRole enum QAction__MenuRole
void q_action_set_menu_role(void* self, int64_t menuRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self QAction*
///
/// @return enum QAction__MenuRole
int64_t q_action_menu_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self QAction*
/// @param visible bool
void q_action_set_icon_visible_in_menu(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self QAction*
bool q_action_is_icon_visible_in_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self QAction*
/// @param show bool
void q_action_set_shortcut_visible_in_context_menu(void* self, bool show);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self QAction*
bool q_action_is_shortcut_visible_in_context_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self QAction*
bool q_action_show_status_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
///
/// @param self QAction*
/// @param param1 QEvent*
bool q_action_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QAction*
/// @param callback bool fn(QAction*, QEvent*)
void q_action_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Base class method implementation
///
/// @param self QAction*
/// @param param1 QEvent*
bool q_action_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self QAction*
void q_action_trigger(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self QAction*
void q_action_hover(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self QAction*
/// @param checked bool
void q_action_set_checked(void* self, bool checked);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self QAction*
void q_action_toggle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self QAction*
/// @param enabled bool
void q_action_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self QAction*
void q_action_reset_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self QAction*
/// @param b bool
void q_action_set_disabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self QAction*
/// @param visible bool
void q_action_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self QAction*
void q_action_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self QAction*
/// @param callback void fn(QAction*)
void q_action_on_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self QAction*
/// @param enabled bool
void q_action_enabled_changed(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self QAction*
/// @param callback void fn(QAction*, bool)
void q_action_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self QAction*
/// @param checkable bool
void q_action_checkable_changed(void* self, bool checkable);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self QAction*
/// @param callback void fn(QAction*, bool)
void q_action_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self QAction*
void q_action_visible_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self QAction*
/// @param callback void fn(QAction*)
void q_action_on_visible_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self QAction*
void q_action_triggered(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self QAction*
/// @param callback void fn(QAction*)
void q_action_on_triggered(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self QAction*
void q_action_hovered(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self QAction*
/// @param callback void fn(QAction*)
void q_action_on_hovered(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self QAction*
/// @param param1 bool
void q_action_toggled(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self QAction*
/// @param callback void fn(QAction*, bool)
void q_action_on_toggled(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_action_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_action_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self QAction*
/// @param object QObject*
bool q_action_show_status_text1(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self QAction*
/// @param checked bool
void q_action_triggered1(void* self, bool checked);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self QAction*
/// @param callback void fn(QAction*, bool)
void q_action_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAction*
const char* q_action_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAction*
/// @param name char*
void q_action_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAction*
bool q_action_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAction*
bool q_action_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAction*
bool q_action_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAction*
bool q_action_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAction*
/// @param b bool
bool q_action_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAction*
QThread* q_action_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAction*
/// @param thread QThread*
bool q_action_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAction*
/// @param interval int
int32_t q_action_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAction*
/// @param id int
void q_action_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAction*
/// @param id enum Qt__TimerId
void q_action_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAction*
libqt_list /* of QObject* */ q_action_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAction*
/// @param parent QObject*
void q_action_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAction*
/// @param filterObj QObject*
void q_action_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAction*
/// @param obj QObject*
void q_action_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_action_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_action_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_action_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_action_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAction*
void q_action_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAction*
void q_action_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAction*
/// @param name const char*
/// @param value QVariant*
bool q_action_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAction*
/// @param name const char*
QVariant* q_action_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAction*
const char** q_action_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAction*
QBindingStorage* q_action_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAction*
const QBindingStorage* q_action_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAction*
void q_action_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAction*
/// @param callback void fn(QAction*)
void q_action_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAction*
QObject* q_action_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAction*
/// @param classname const char*
bool q_action_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAction*
void q_action_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAction*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_action_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_action_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_action_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_action_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAction*
/// @param param1 QObject*
void q_action_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAction*
/// @param callback void fn(QAction*, QObject*)
void q_action_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
/// @param watched QObject*
/// @param event QEvent*
bool q_action_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
/// @param watched QObject*
/// @param event QEvent*
bool q_action_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback bool fn(QAction*, QObject*, QEvent*)
void q_action_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
/// @param event QTimerEvent*
void q_action_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
/// @param event QTimerEvent*
void q_action_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback void fn(QAction*, QTimerEvent*)
void q_action_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
/// @param event QChildEvent*
void q_action_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
/// @param event QChildEvent*
void q_action_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback void fn(QAction*, QChildEvent*)
void q_action_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
/// @param event QEvent*
void q_action_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
/// @param event QEvent*
void q_action_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback void fn(QAction*, QEvent*)
void q_action_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
/// @param signal QMetaMethod*
void q_action_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
/// @param signal QMetaMethod*
void q_action_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback void fn(QAction*, QMetaMethod*)
void q_action_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
/// @param signal QMetaMethod*
void q_action_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
/// @param signal QMetaMethod*
void q_action_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback void fn(QAction*, QMetaMethod*)
void q_action_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
QObject* q_action_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
QObject* q_action_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback QObject* fn()
void q_action_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
int32_t q_action_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
int32_t q_action_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback int32_t fn()
void q_action_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
/// @param signal const char*
int32_t q_action_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
/// @param signal const char*
int32_t q_action_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback int32_t fn(QAction*, const char*)
void q_action_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAction*
/// @param signal QMetaMethod*
bool q_action_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAction*
/// @param signal QMetaMethod*
bool q_action_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAction*
/// @param callback bool fn(QAction*, QMetaMethod*)
void q_action_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAction*
/// @param callback void fn(QAction*, const char*)
void q_action_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#dtor.QAction)
///
/// Delete this object from C++ memory.
///
/// @param self QAction*
void q_action_delete(void* self);

/// https://doc.qt.io/qt-6/qaction.html#types

typedef enum {
    QACTION_MENUROLE_NOROLE = 0,
    QACTION_MENUROLE_TEXTHEURISTICROLE = 1,
    QACTION_MENUROLE_APPLICATIONSPECIFICROLE = 2,
    QACTION_MENUROLE_ABOUTQTROLE = 3,
    QACTION_MENUROLE_ABOUTROLE = 4,
    QACTION_MENUROLE_PREFERENCESROLE = 5,
    QACTION_MENUROLE_QUITROLE = 6
} QAction__MenuRole;

typedef enum {
    QACTION_PRIORITY_LOWPRIORITY = 0,
    QACTION_PRIORITY_NORMALPRIORITY = 128,
    QACTION_PRIORITY_HIGHPRIORITY = 256
} QAction__Priority;

typedef enum {
    QACTION_ACTIONEVENT_TRIGGER = 0,
    QACTION_ACTIONEVENT_HOVER = 1
} QAction__ActionEvent;

#endif
