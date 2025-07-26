#pragma once
#ifndef SRCQT6C_LIBQACTION_H
#define SRCQT6C_LIBQACTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qaction.html

/// q_action_new constructs a new QAction object.
///
///
QAction* q_action_new();

/// q_action_new2 constructs a new QAction object.
///
/// ``` const char* text ```
QAction* q_action_new2(const char* text);

/// q_action_new3 constructs a new QAction object.
///
/// ``` QIcon* icon, const char* text ```
QAction* q_action_new3(void* icon, const char* text);

/// q_action_new4 constructs a new QAction object.
///
/// ``` QObject* parent ```
QAction* q_action_new4(void* parent);

/// q_action_new5 constructs a new QAction object.
///
/// ``` const char* text, QObject* parent ```
QAction* q_action_new5(const char* text, void* parent);

/// q_action_new6 constructs a new QAction object.
///
/// ``` QIcon* icon, const char* text, QObject* parent ```
QAction* q_action_new6(void* icon, const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAction* self ```
const QMetaObject* q_action_meta_object(void* self);

/// ``` QAction* self, const char* param1 ```
void* q_action_metacast(void* self, const char* param1);

/// ``` QAction* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_action_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAction* self, int32_t (*slot)(QAction*, enum QMetaObject__Call, int, void*) ```
void q_action_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAction* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_action_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_action_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// ``` QAction* self ```
libqt_list /* of QObject* */ q_action_associated_objects(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// ``` QAction* self, QActionGroup* group ```
void q_action_set_action_group(void* self, void* group);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// ``` QAction* self ```
QActionGroup* q_action_action_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// ``` QAction* self, QIcon* icon ```
void q_action_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// ``` QAction* self ```
QIcon* q_action_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// ``` QAction* self, const char* text ```
void q_action_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
///
/// ``` QAction* self ```
const char* q_action_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// ``` QAction* self, const char* text ```
void q_action_set_icon_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// ``` QAction* self ```
const char* q_action_icon_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// ``` QAction* self, const char* tip ```
void q_action_set_tool_tip(void* self, const char* tip);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// ``` QAction* self ```
const char* q_action_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// ``` QAction* self, const char* statusTip ```
void q_action_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// ``` QAction* self ```
const char* q_action_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// ``` QAction* self, const char* what ```
void q_action_set_whats_this(void* self, const char* what);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// ``` QAction* self ```
const char* q_action_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// ``` QAction* self, enum QAction__Priority priority ```
void q_action_set_priority(void* self, int64_t priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// ``` QAction* self ```
int64_t q_action_priority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// ``` QAction* self, bool b ```
void q_action_set_separator(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// ``` QAction* self ```
bool q_action_is_separator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// ``` QAction* self, QKeySequence* shortcut ```
void q_action_set_shortcut(void* self, void* shortcut);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// ``` QAction* self ```
QKeySequence* q_action_shortcut(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// ``` QAction* self, libqt_list /* of QKeySequence* */ shortcuts ```
void q_action_set_shortcuts(void* self, libqt_list shortcuts);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// ``` QAction* self, enum QKeySequence__StandardKey shortcuts ```
void q_action_set_shortcuts2(void* self, int64_t shortcuts);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// ``` QAction* self ```
libqt_list /* of QKeySequence* */ q_action_shortcuts(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// ``` QAction* self, enum Qt__ShortcutContext context ```
void q_action_set_shortcut_context(void* self, int64_t context);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// ``` QAction* self ```
int64_t q_action_shortcut_context(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// ``` QAction* self, bool autoRepeat ```
void q_action_set_auto_repeat(void* self, bool autoRepeat);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// ``` QAction* self ```
bool q_action_auto_repeat(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// ``` QAction* self, QFont* font ```
void q_action_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
///
/// ``` QAction* self ```
QFont* q_action_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// ``` QAction* self, bool checkable ```
void q_action_set_checkable(void* self, bool checkable);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// ``` QAction* self ```
bool q_action_is_checkable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
///
/// ``` QAction* self ```
QVariant* q_action_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// ``` QAction* self, QVariant* varVal ```
void q_action_set_data(void* self, void* varVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// ``` QAction* self ```
bool q_action_is_checked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// ``` QAction* self ```
bool q_action_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// ``` QAction* self ```
bool q_action_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// ``` QAction* self, enum QAction__ActionEvent event ```
void q_action_activate(void* self, int64_t event);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// ``` QAction* self, enum QAction__MenuRole menuRole ```
void q_action_set_menu_role(void* self, int64_t menuRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// ``` QAction* self ```
int64_t q_action_menu_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// ``` QAction* self, bool visible ```
void q_action_set_icon_visible_in_menu(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// ``` QAction* self ```
bool q_action_is_icon_visible_in_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// ``` QAction* self, bool show ```
void q_action_set_shortcut_visible_in_context_menu(void* self, bool show);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// ``` QAction* self ```
bool q_action_is_shortcut_visible_in_context_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// ``` QAction* self ```
bool q_action_show_status_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
///
/// ``` QAction* self, QEvent* param1 ```
bool q_action_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QAction* self, bool (*slot)(QAction*, QEvent*) ```
void q_action_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
///
/// Base class method implementation
///
/// ``` QAction* self, QEvent* param1 ```
bool q_action_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// ``` QAction* self ```
void q_action_trigger(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// ``` QAction* self ```
void q_action_hover(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// ``` QAction* self, bool checked ```
void q_action_set_checked(void* self, bool checked);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// ``` QAction* self ```
void q_action_toggle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// ``` QAction* self, bool enabled ```
void q_action_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// ``` QAction* self ```
void q_action_reset_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// ``` QAction* self, bool b ```
void q_action_set_disabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// ``` QAction* self, bool visible ```
void q_action_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// ``` QAction* self ```
void q_action_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// ``` QAction* self, void (*slot)(QAction*) ```
void q_action_on_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// ``` QAction* self, bool enabled ```
void q_action_enabled_changed(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// ``` QAction* self, void (*slot)(QAction*, bool) ```
void q_action_on_enabled_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// ``` QAction* self, bool checkable ```
void q_action_checkable_changed(void* self, bool checkable);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// ``` QAction* self, void (*slot)(QAction*, bool) ```
void q_action_on_checkable_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// ``` QAction* self ```
void q_action_visible_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// ``` QAction* self, void (*slot)(QAction*) ```
void q_action_on_visible_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QAction* self ```
void q_action_triggered(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QAction* self, void (*slot)(QAction*) ```
void q_action_on_triggered(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// ``` QAction* self ```
void q_action_hovered(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// ``` QAction* self, void (*slot)(QAction*) ```
void q_action_on_hovered(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// ``` QAction* self, bool param1 ```
void q_action_toggled(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// ``` QAction* self, void (*slot)(QAction*, bool) ```
void q_action_on_toggled(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_action_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_action_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// ``` QAction* self, QObject* object ```
bool q_action_show_status_text1(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QAction* self, bool checked ```
void q_action_triggered1(void* self, bool checked);

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QAction* self, void (*slot)(QAction*, bool) ```
void q_action_on_triggered1(void* self, void (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAction* self ```
const char* q_action_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAction* self, char* name ```
void q_action_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAction* self ```
bool q_action_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAction* self ```
bool q_action_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAction* self ```
bool q_action_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAction* self ```
bool q_action_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAction* self, bool b ```
bool q_action_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAction* self ```
QThread* q_action_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAction* self, QThread* thread ```
bool q_action_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAction* self, int interval ```
int32_t q_action_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAction* self, int id ```
void q_action_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAction* self, enum Qt__TimerId id ```
void q_action_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAction* self ```
libqt_list /* of QObject* */ q_action_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAction* self, QObject* parent ```
void q_action_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAction* self, QObject* filterObj ```
void q_action_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAction* self, QObject* obj ```
void q_action_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_action_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAction* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_action_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_action_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_action_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAction* self ```
void q_action_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAction* self ```
void q_action_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAction* self, const char* name, QVariant* value ```
bool q_action_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAction* self, const char* name ```
QVariant* q_action_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAction* self ```
const char** q_action_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAction* self ```
QBindingStorage* q_action_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAction* self ```
const QBindingStorage* q_action_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAction* self ```
void q_action_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAction* self, void (*slot)(QAction*) ```
void q_action_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAction* self ```
QObject* q_action_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAction* self, const char* classname ```
bool q_action_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAction* self ```
void q_action_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAction* self, QThread* thread, Disambiguated_t* param2 ```
bool q_action_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAction* self, int interval, enum Qt__TimerType timerType ```
int32_t q_action_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_action_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAction* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_action_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAction* self, QObject* param1 ```
void q_action_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAction* self, void (*slot)(QAction*, QObject*) ```
void q_action_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QObject* watched, QEvent* event ```
bool q_action_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QObject* watched, QEvent* event ```
bool q_action_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, bool (*slot)(QAction*, QObject*, QEvent*) ```
void q_action_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QTimerEvent* event ```
void q_action_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QTimerEvent* event ```
void q_action_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QTimerEvent*) ```
void q_action_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QChildEvent* event ```
void q_action_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QChildEvent* event ```
void q_action_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QChildEvent*) ```
void q_action_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QEvent* event ```
void q_action_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QEvent* event ```
void q_action_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QEvent*) ```
void q_action_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
void q_action_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
void q_action_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QMetaMethod*) ```
void q_action_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
void q_action_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
void q_action_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QMetaMethod*) ```
void q_action_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self ```
QObject* q_action_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self ```
QObject* q_action_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, QObject* (*slot)() ```
void q_action_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self ```
int32_t q_action_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self ```
int32_t q_action_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, int32_t (*slot)() ```
void q_action_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, const char* signal ```
int32_t q_action_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, const char* signal ```
int32_t q_action_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, int32_t (*slot)(QAction*, const char*) ```
void q_action_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
bool q_action_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
bool q_action_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, bool (*slot)(QAction*, QMetaMethod*) ```
void q_action_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAction* self, void (*slot)(QAction*, const char*) ```
void q_action_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#dtor.QAction)
///
/// Delete this object from C++ memory.
///
/// ``` QAction* self ```
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
