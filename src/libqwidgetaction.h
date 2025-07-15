#pragma once
#ifndef SRCQT6C_LIBQWIDGETACTION_H
#define SRCQT6C_LIBQWIDGETACTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qwidgetaction.html

/// q_widgetaction_new constructs a new QWidgetAction object.
///
/// ``` QObject* parent ```
QWidgetAction* q_widgetaction_new(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWidgetAction* self ```
const QMetaObject* q_widgetaction_meta_object(void* self);

/// ``` QWidgetAction* self, const char* param1 ```
void* q_widgetaction_metacast(void* self, const char* param1);

/// ``` QWidgetAction* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_widgetaction_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, int32_t (*slot)(QWidgetAction*, enum QMetaObject__Call, int, void*) ```
void q_widgetaction_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWidgetAction* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_widgetaction_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_widgetaction_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// ``` QWidgetAction* self, QWidget* w ```
void q_widgetaction_set_default_widget(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// ``` QWidgetAction* self ```
QWidget* q_widgetaction_default_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// ``` QWidgetAction* self, QWidget* parent ```
QWidget* q_widgetaction_request_widget(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// ``` QWidgetAction* self, QWidget* widget ```
void q_widgetaction_release_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// ``` QWidgetAction* self, QEvent* param1 ```
bool q_widgetaction_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, bool (*slot)(QWidgetAction*, QEvent*) ```
void q_widgetaction_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Base class method implementation
///
/// ``` QWidgetAction* self, QEvent* param1 ```
bool q_widgetaction_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// ``` QWidgetAction* self, QObject* param1, QEvent* param2 ```
bool q_widgetaction_event_filter(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, bool (*slot)(QWidgetAction*, QObject*, QEvent*) ```
void q_widgetaction_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Base class method implementation
///
/// ``` QWidgetAction* self, QObject* param1, QEvent* param2 ```
bool q_widgetaction_qbase_event_filter(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createWidget)
///
/// ``` QWidgetAction* self, QWidget* parent ```
QWidget* q_widgetaction_create_widget(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createWidget)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, QWidget* (*slot)(QWidgetAction*, QWidget*) ```
void q_widgetaction_on_create_widget(void* self, QWidget* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createWidget)
///
/// Base class method implementation
///
/// ``` QWidgetAction* self, QWidget* parent ```
QWidget* q_widgetaction_qbase_create_widget(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// ``` QWidgetAction* self, QWidget* widget ```
void q_widgetaction_delete_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QWidget*) ```
void q_widgetaction_on_delete_widget(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Base class method implementation
///
/// ``` QWidgetAction* self, QWidget* widget ```
void q_widgetaction_qbase_delete_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// ``` QWidgetAction* self ```
libqt_list /* of QWidget* */ q_widgetaction_created_widgets(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, libqt_list /* of QWidget* */ (*slot)() ```
void q_widgetaction_on_created_widgets(void* self, libqt_list /* of QWidget* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Base class method implementation
///
/// ``` QWidgetAction* self ```
libqt_list /* of QWidget* */ q_widgetaction_qbase_created_widgets(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_widgetaction_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_widgetaction_tr3(const char* s, const char* c, int n);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// ``` QWidgetAction* self ```
libqt_list /* of QObject* */ q_widgetaction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// ``` QWidgetAction* self, QActionGroup* group ```
void q_widgetaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// ``` QWidgetAction* self ```
QActionGroup* q_widgetaction_action_group(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// ``` QWidgetAction* self, QIcon* icon ```
void q_widgetaction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// ``` QWidgetAction* self ```
QIcon* q_widgetaction_icon(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// ``` QWidgetAction* self, const char* text ```
void q_widgetaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// ``` QWidgetAction* self, const char* text ```
void q_widgetaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_icon_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// ``` QWidgetAction* self, const char* tip ```
void q_widgetaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// ``` QWidgetAction* self, const char* statusTip ```
void q_widgetaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_status_tip(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// ``` QWidgetAction* self, const char* what ```
void q_widgetaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_whats_this(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// ``` QWidgetAction* self, enum QAction__Priority priority ```
void q_widgetaction_set_priority(void* self, int64_t priority);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// ``` QWidgetAction* self ```
int64_t q_widgetaction_priority(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// ``` QWidgetAction* self, bool b ```
void q_widgetaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_separator(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// ``` QWidgetAction* self, QKeySequence* shortcut ```
void q_widgetaction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// ``` QWidgetAction* self ```
QKeySequence* q_widgetaction_shortcut(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// ``` QWidgetAction* self, libqt_list /* of QKeySequence* */ shortcuts ```
void q_widgetaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// ``` QWidgetAction* self, enum QKeySequence__StandardKey shortcuts ```
void q_widgetaction_set_shortcuts2(void* self, int64_t shortcuts);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// ``` QWidgetAction* self ```
libqt_list /* of QKeySequence* */ q_widgetaction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// ``` QWidgetAction* self, enum Qt__ShortcutContext context ```
void q_widgetaction_set_shortcut_context(void* self, int64_t context);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// ``` QWidgetAction* self ```
int64_t q_widgetaction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// ``` QWidgetAction* self, bool autoRepeat ```
void q_widgetaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// ``` QWidgetAction* self, QFont* font ```
void q_widgetaction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
///
/// ``` QWidgetAction* self ```
QFont* q_widgetaction_font(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// ``` QWidgetAction* self, bool checkable ```
void q_widgetaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
///
/// ``` QWidgetAction* self ```
QVariant* q_widgetaction_data(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// ``` QWidgetAction* self, QVariant* varVal ```
void q_widgetaction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_checked(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_visible(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// ``` QWidgetAction* self, enum QAction__ActionEvent event ```
void q_widgetaction_activate(void* self, int64_t event);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// ``` QWidgetAction* self, enum QAction__MenuRole menuRole ```
void q_widgetaction_set_menu_role(void* self, int64_t menuRole);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// ``` QWidgetAction* self ```
int64_t q_widgetaction_menu_role(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// ``` QWidgetAction* self, bool visible ```
void q_widgetaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// ``` QWidgetAction* self, bool show ```
void q_widgetaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_trigger(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_hover(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// ``` QWidgetAction* self, bool checked ```
void q_widgetaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_toggle(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// ``` QWidgetAction* self, bool enabled ```
void q_widgetaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// ``` QWidgetAction* self, bool b ```
void q_widgetaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// ``` QWidgetAction* self, bool visible ```
void q_widgetaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_changed(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// ``` QWidgetAction* self, void (*slot)(QAction*) ```
void q_widgetaction_on_changed(void* self, void (*slot)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// ``` QWidgetAction* self, bool enabled ```
void q_widgetaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// ``` QWidgetAction* self, void (*slot)(QAction*, bool) ```
void q_widgetaction_on_enabled_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// ``` QWidgetAction* self, bool checkable ```
void q_widgetaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// ``` QWidgetAction* self, void (*slot)(QAction*, bool) ```
void q_widgetaction_on_checkable_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// ``` QWidgetAction* self, void (*slot)(QAction*) ```
void q_widgetaction_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_triggered(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QWidgetAction* self, void (*slot)(QAction*) ```
void q_widgetaction_on_triggered(void* self, void (*slot)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_hovered(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// ``` QWidgetAction* self, void (*slot)(QAction*) ```
void q_widgetaction_on_hovered(void* self, void (*slot)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// ``` QWidgetAction* self, bool param1 ```
void q_widgetaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// ``` QWidgetAction* self, void (*slot)(QAction*, bool) ```
void q_widgetaction_on_toggled(void* self, void (*slot)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// ``` QWidgetAction* self, QObject* object ```
bool q_widgetaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QWidgetAction* self, bool checked ```
void q_widgetaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QWidgetAction* self, void (*slot)(QAction*, bool) ```
void q_widgetaction_on_triggered1(void* self, void (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWidgetAction* self, char* name ```
void q_widgetaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWidgetAction* self, bool b ```
bool q_widgetaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWidgetAction* self ```
QThread* q_widgetaction_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWidgetAction* self, QThread* thread ```
bool q_widgetaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWidgetAction* self, int interval ```
int32_t q_widgetaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWidgetAction* self, int id ```
void q_widgetaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWidgetAction* self, enum Qt__TimerId id ```
void q_widgetaction_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWidgetAction* self ```
libqt_list /* of QObject* */ q_widgetaction_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWidgetAction* self, QObject* parent ```
void q_widgetaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWidgetAction* self, QObject* filterObj ```
void q_widgetaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWidgetAction* self, QObject* obj ```
void q_widgetaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_widgetaction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWidgetAction* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_widgetaction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_widgetaction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_widgetaction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWidgetAction* self, const char* name, QVariant* value ```
bool q_widgetaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWidgetAction* self, const char* name ```
QVariant* q_widgetaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWidgetAction* self ```
const char** q_widgetaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWidgetAction* self ```
QBindingStorage* q_widgetaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWidgetAction* self ```
const QBindingStorage* q_widgetaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidgetAction* self, void (*slot)(QObject*) ```
void q_widgetaction_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWidgetAction* self ```
QObject* q_widgetaction_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWidgetAction* self, const char* classname ```
bool q_widgetaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWidgetAction* self, QThread* thread, Disambiguated_t* param2 ```
bool q_widgetaction_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWidgetAction* self, int interval, enum Qt__TimerType timerType ```
int32_t q_widgetaction_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_widgetaction_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWidgetAction* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_widgetaction_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidgetAction* self, QObject* param1 ```
void q_widgetaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidgetAction* self, void (*slot)(QObject*, QObject*) ```
void q_widgetaction_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QTimerEvent* event ```
void q_widgetaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QTimerEvent* event ```
void q_widgetaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QTimerEvent*) ```
void q_widgetaction_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QChildEvent* event ```
void q_widgetaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QChildEvent* event ```
void q_widgetaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QChildEvent*) ```
void q_widgetaction_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QEvent* event ```
void q_widgetaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QEvent* event ```
void q_widgetaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QEvent*) ```
void q_widgetaction_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
void q_widgetaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
void q_widgetaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QMetaMethod*) ```
void q_widgetaction_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
void q_widgetaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
void q_widgetaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QMetaMethod*) ```
void q_widgetaction_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self ```
QObject* q_widgetaction_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self ```
QObject* q_widgetaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, QObject* (*slot)() ```
void q_widgetaction_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self ```
int32_t q_widgetaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self ```
int32_t q_widgetaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, int32_t (*slot)() ```
void q_widgetaction_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, const char* signal ```
int32_t q_widgetaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, const char* signal ```
int32_t q_widgetaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, int32_t (*slot)(QWidgetAction*, const char*) ```
void q_widgetaction_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
bool q_widgetaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
bool q_widgetaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, bool (*slot)(QWidgetAction*, QMetaMethod*) ```
void q_widgetaction_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWidgetAction* self, void (*slot)(QObject*, const char*) ```
void q_widgetaction_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#dtor.QWidgetAction)
///
/// Delete this object from C++ memory.
///
/// ``` QWidgetAction* self ```
void q_widgetaction_delete(void* self);

#endif
