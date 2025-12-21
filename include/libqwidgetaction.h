#pragma once
#ifndef SRC_QT6C_LIBQWIDGETACTION_H
#define SRC_QT6C_LIBQWIDGETACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html)

/// q_widgetaction_new constructs a new QWidgetAction object.
///
/// @param parent QObject*
///
QWidgetAction* q_widgetaction_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWidgetAction*
///
const QMetaObject* q_widgetaction_meta_object(void* self);

/// @param self QWidgetAction*
/// @param param1 const char*
///
void* q_widgetaction_metacast(void* self, const char* param1);

/// @param self QWidgetAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_widgetaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWidgetAction*
/// @param callback int32_t func(QWidgetAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_widgetaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWidgetAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_widgetaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_widgetaction_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self QWidgetAction*
/// @param w QWidget*
///
void q_widgetaction_set_default_widget(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self QWidgetAction*
///
QWidget* q_widgetaction_default_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self QWidgetAction*
/// @param parent QWidget*
///
QWidget* q_widgetaction_request_widget(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self QWidgetAction*
/// @param widget QWidget*
///
void q_widgetaction_release_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// @param self QWidgetAction*
/// @param param1 QEvent*
///
bool q_widgetaction_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetAction*
/// @param callback bool func(QWidgetAction* self, QEvent* param1)
///
void q_widgetaction_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Base class method implementation
///
/// @param self QWidgetAction*
/// @param param1 QEvent*
///
bool q_widgetaction_qbase_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// @param self QWidgetAction*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_widgetaction_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetAction*
/// @param callback bool func(QWidgetAction* self, QObject* param1, QEvent* param2)
///
void q_widgetaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QWidgetAction*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_widgetaction_qbase_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createWidget)
///
/// @param self QWidgetAction*
/// @param parent QWidget*
///
QWidget* q_widgetaction_create_widget(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetAction*
/// @param callback QWidget* func(QWidgetAction* self, QWidget* parent)
///
void q_widgetaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createWidget)
///
/// Base class method implementation
///
/// @param self QWidgetAction*
/// @param parent QWidget*
///
QWidget* q_widgetaction_qbase_create_widget(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// @param self QWidgetAction*
/// @param widget QWidget*
///
void q_widgetaction_delete_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, QWidget* widget)
///
void q_widgetaction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Base class method implementation
///
/// @param self QWidgetAction*
/// @param widget QWidget*
///
void q_widgetaction_qbase_delete_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// @param self QWidgetAction*
///
libqt_list /* of QWidget* */ q_widgetaction_created_widgets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Allows for overriding the related default method
///
/// @param self QWidgetAction*
/// @param callback QWidget** func()
///
void q_widgetaction_on_created_widgets(void* self, QWidget** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Base class method implementation
///
/// @param self QWidgetAction*
///
libqt_list /* of QWidget* */ q_widgetaction_qbase_created_widgets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_widgetaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_widgetaction_tr3(const char* s, const char* c, int n);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self QWidgetAction*
///
libqt_list /* of QObject* */ q_widgetaction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self QWidgetAction*
/// @param group QActionGroup*
///
void q_widgetaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self QWidgetAction*
///
QActionGroup* q_widgetaction_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self QWidgetAction*
/// @param icon QIcon*
///
void q_widgetaction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self QWidgetAction*
///
QIcon* q_widgetaction_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self QWidgetAction*
/// @param text const char*
///
void q_widgetaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QWidgetAction*
///
const char* q_widgetaction_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self QWidgetAction*
/// @param text const char*
///
void q_widgetaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QWidgetAction*
///
const char* q_widgetaction_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self QWidgetAction*
/// @param tip const char*
///
void q_widgetaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QWidgetAction*
///
const char* q_widgetaction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self QWidgetAction*
/// @param statusTip const char*
///
void q_widgetaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QWidgetAction*
///
const char* q_widgetaction_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self QWidgetAction*
/// @param what const char*
///
void q_widgetaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QWidgetAction*
///
const char* q_widgetaction_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self QWidgetAction*
/// @param priority enum QAction__Priority
///
void q_widgetaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self QWidgetAction*
///
/// @return enum QAction__Priority
///
int32_t q_widgetaction_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self QWidgetAction*
/// @param b bool
///
void q_widgetaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self QWidgetAction*
/// @param shortcut QKeySequence*
///
void q_widgetaction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self QWidgetAction*
///
QKeySequence* q_widgetaction_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self QWidgetAction*
/// @param shortcuts libqt_list /* of QKeySequence* */
///
void q_widgetaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self QWidgetAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void q_widgetaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self QWidgetAction*
///
libqt_list /* of QKeySequence* */ q_widgetaction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self QWidgetAction*
/// @param context enum Qt__ShortcutContext
///
void q_widgetaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self QWidgetAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t q_widgetaction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self QWidgetAction*
/// @param autoRepeat bool
///
void q_widgetaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self QWidgetAction*
/// @param font QFont*
///
void q_widgetaction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self QWidgetAction*
///
QFont* q_widgetaction_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self QWidgetAction*
/// @param checkable bool
///
void q_widgetaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self QWidgetAction*
///
QVariant* q_widgetaction_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self QWidgetAction*
/// @param varVal QVariant*
///
void q_widgetaction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self QWidgetAction*
/// @param event enum QAction__ActionEvent
///
void q_widgetaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self QWidgetAction*
/// @param menuRole enum QAction__MenuRole
///
void q_widgetaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self QWidgetAction*
///
/// @return enum QAction__MenuRole
///
int32_t q_widgetaction_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self QWidgetAction*
/// @param visible bool
///
void q_widgetaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self QWidgetAction*
/// @param show bool
///
void q_widgetaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self QWidgetAction*
///
void q_widgetaction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self QWidgetAction*
///
void q_widgetaction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self QWidgetAction*
/// @param checked bool
///
void q_widgetaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self QWidgetAction*
///
void q_widgetaction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self QWidgetAction*
/// @param enabled bool
///
void q_widgetaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self QWidgetAction*
///
void q_widgetaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self QWidgetAction*
/// @param b bool
///
void q_widgetaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self QWidgetAction*
/// @param visible bool
///
void q_widgetaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self QWidgetAction*
///
void q_widgetaction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self)
///
void q_widgetaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self QWidgetAction*
/// @param enabled bool
///
void q_widgetaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, bool enabled)
///
void q_widgetaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self QWidgetAction*
/// @param checkable bool
///
void q_widgetaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, bool checkable)
///
void q_widgetaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self QWidgetAction*
///
void q_widgetaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self)
///
void q_widgetaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self QWidgetAction*
///
void q_widgetaction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self)
///
void q_widgetaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self QWidgetAction*
///
void q_widgetaction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self)
///
void q_widgetaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self QWidgetAction*
/// @param param1 bool
///
void q_widgetaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, bool param1)
///
void q_widgetaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self QWidgetAction*
/// @param object QObject*
///
bool q_widgetaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self QWidgetAction*
/// @param checked bool
///
void q_widgetaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, bool checked)
///
void q_widgetaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QWidgetAction*
///
const char* q_widgetaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWidgetAction*
/// @param name char*
///
void q_widgetaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWidgetAction*
///
bool q_widgetaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWidgetAction*
/// @param b bool
///
bool q_widgetaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWidgetAction*
///
QThread* q_widgetaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWidgetAction*
/// @param thread QThread*
///
bool q_widgetaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWidgetAction*
/// @param interval int
///
int32_t q_widgetaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWidgetAction*
/// @param id int
///
void q_widgetaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWidgetAction*
/// @param id enum Qt__TimerId
///
void q_widgetaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWidgetAction*
///
libqt_list /* of QObject* */ q_widgetaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWidgetAction*
/// @param parent QObject*
///
void q_widgetaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWidgetAction*
/// @param filterObj QObject*
///
void q_widgetaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWidgetAction*
/// @param obj QObject*
///
void q_widgetaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_widgetaction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWidgetAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_widgetaction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_widgetaction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_widgetaction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWidgetAction*
///
void q_widgetaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWidgetAction*
///
void q_widgetaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWidgetAction*
/// @param name const char*
/// @param value QVariant*
///
bool q_widgetaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWidgetAction*
/// @param name const char*
///
QVariant* q_widgetaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QWidgetAction*
///
const char** q_widgetaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWidgetAction*
///
QBindingStorage* q_widgetaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWidgetAction*
///
const QBindingStorage* q_widgetaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWidgetAction*
///
void q_widgetaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self)
///
void q_widgetaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWidgetAction*
///
QObject* q_widgetaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWidgetAction*
/// @param classname const char*
///
bool q_widgetaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWidgetAction*
///
void q_widgetaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWidgetAction*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_widgetaction_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWidgetAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_widgetaction_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_widgetaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWidgetAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_widgetaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWidgetAction*
/// @param param1 QObject*
///
void q_widgetaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, QObject* param1)
///
void q_widgetaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetAction*
/// @param event QTimerEvent*
///
void q_widgetaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param event QTimerEvent*
///
void q_widgetaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, QTimerEvent* event)
///
void q_widgetaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetAction*
/// @param event QChildEvent*
///
void q_widgetaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param event QChildEvent*
///
void q_widgetaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, QChildEvent* event)
///
void q_widgetaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetAction*
/// @param event QEvent*
///
void q_widgetaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param event QEvent*
///
void q_widgetaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, QEvent* event)
///
void q_widgetaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetAction*
/// @param signal QMetaMethod*
///
void q_widgetaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param signal QMetaMethod*
///
void q_widgetaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, QMetaMethod* signal)
///
void q_widgetaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetAction*
/// @param signal QMetaMethod*
///
void q_widgetaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param signal QMetaMethod*
///
void q_widgetaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, QMetaMethod* signal)
///
void q_widgetaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetAction*
///
QObject* q_widgetaction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetAction*
///
QObject* q_widgetaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param callback QObject* func()
///
void q_widgetaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetAction*
///
int32_t q_widgetaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetAction*
///
int32_t q_widgetaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param callback int32_t func()
///
void q_widgetaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetAction*
/// @param signal const char*
///
int32_t q_widgetaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param signal const char*
///
int32_t q_widgetaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param callback int32_t func(QWidgetAction* self, const char* signal)
///
void q_widgetaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidgetAction*
/// @param signal QMetaMethod*
///
bool q_widgetaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param signal QMetaMethod*
///
bool q_widgetaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidgetAction*
/// @param callback bool func(QWidgetAction* self, QMetaMethod* signal)
///
void q_widgetaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWidgetAction*
/// @param callback void func(QWidgetAction* self, const char* objectName)
///
void q_widgetaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#dtor.QWidgetAction)
///
/// Delete this object from C++ memory.
///
/// @param self QWidgetAction*
///
void q_widgetaction_delete(void* self);

#endif
