#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKSELECTACTION_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKSELECTACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kselectaction.html

/// k_selectaction_new constructs a new KSelectAction object.
///
/// @param parent QObject*
KSelectAction* k_selectaction_new(void* parent);

/// k_selectaction_new2 constructs a new KSelectAction object.
///
/// @param text const char*
/// @param parent QObject*
KSelectAction* k_selectaction_new2(const char* text, void* parent);

/// k_selectaction_new3 constructs a new KSelectAction object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
KSelectAction* k_selectaction_new3(void* icon, const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSelectAction*
const QMetaObject* k_selectaction_meta_object(void* self);

/// @param self KSelectAction*
/// @param param1 const char*
void* k_selectaction_metacast(void* self, const char* param1);

/// @param self KSelectAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_selectaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSelectAction*
/// @param callback int32_t func(KSelectAction* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_selectaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSelectAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_selectaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_selectaction_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kselectaction.html#toolBarMode)
///
/// @param self KSelectAction*
///
/// @return enum KSelectAction__ToolBarMode
int32_t k_selectaction_tool_bar_mode(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setToolBarMode)
///
/// @param self KSelectAction*
/// @param mode enum KSelectAction__ToolBarMode
void k_selectaction_set_tool_bar_mode(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
///
/// @param self KSelectAction*
///
/// @return enum QToolButton__ToolButtonPopupMode
int32_t k_selectaction_tool_button_popup_mode(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
///
/// @param self KSelectAction*
/// @param mode enum QToolButton__ToolButtonPopupMode
void k_selectaction_set_tool_button_popup_mode(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/kselectaction.html#selectableActionGroup)
///
/// @param self KSelectAction*
QActionGroup* k_selectaction_selectable_action_group(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#currentAction)
///
/// @param self KSelectAction*
QAction* k_selectaction_current_action(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#currentItem)
///
/// @param self KSelectAction*
int32_t k_selectaction_current_item(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#currentText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSelectAction*
const char* k_selectaction_current_text(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#actions)
///
/// @param self KSelectAction*
libqt_list /* of QAction* */ k_selectaction_actions(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#action)
///
/// @param self KSelectAction*
/// @param index int
QAction* k_selectaction_action(void* self, int index);

/// [Qt documentation](https://api.kde.org/kselectaction.html#action)
///
/// @param self KSelectAction*
/// @param text const char*
QAction* k_selectaction_action2(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KSelectAction*
/// @param action QAction*
bool k_selectaction_set_current_action(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentItem)
///
/// @param self KSelectAction*
/// @param index int
bool k_selectaction_set_current_item(void* self, int index);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KSelectAction*
/// @param text const char*
bool k_selectaction_set_current_action2(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KSelectAction*
/// @param action QAction*
void k_selectaction_add_action(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KSelectAction*
/// @param text const char*
QAction* k_selectaction_add_action2(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KSelectAction*
/// @param icon QIcon*
/// @param text const char*
QAction* k_selectaction_add_action3(void* self, void* icon, const char* text);

/// [Qt documentation](https://api.kde.org/kselectaction.html#removeAction)
///
/// @param self KSelectAction*
/// @param action QAction*
QAction* k_selectaction_remove_action(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kselectaction.html#removeAction)
///
/// Allows for overriding the related default method
///
/// @param self KSelectAction*
/// @param callback QAction* func(KSelectAction* self, QAction* action)
void k_selectaction_on_remove_action(void* self, QAction* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#removeAction)
///
/// Base class method implementation
///
/// @param self KSelectAction*
/// @param action QAction*
QAction* k_selectaction_qbase_remove_action(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kselectaction.html#insertAction)
///
/// @param self KSelectAction*
/// @param before QAction*
/// @param action QAction*
void k_selectaction_insert_action(void* self, void* before, void* action);

/// [Qt documentation](https://api.kde.org/kselectaction.html#insertAction)
///
/// Allows for overriding the related default method
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QAction* before, QAction* action)
void k_selectaction_on_insert_action(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#insertAction)
///
/// Base class method implementation
///
/// @param self KSelectAction*
/// @param before QAction*
/// @param action QAction*
void k_selectaction_qbase_insert_action(void* self, void* before, void* action);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setItems)
///
/// @param self KSelectAction*
/// @param lst const char**
void k_selectaction_set_items(void* self, const char* lst[static 1]);

/// [Qt documentation](https://api.kde.org/kselectaction.html#items)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSelectAction*
const char** k_selectaction_items(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#isEditable)
///
/// @param self KSelectAction*
bool k_selectaction_is_editable(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setEditable)
///
/// @param self KSelectAction*
/// @param editable bool
void k_selectaction_set_editable(void* self, bool editable);

/// [Qt documentation](https://api.kde.org/kselectaction.html#comboWidth)
///
/// @param self KSelectAction*
int32_t k_selectaction_combo_width(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setComboWidth)
///
/// @param self KSelectAction*
/// @param width int
void k_selectaction_set_combo_width(void* self, int width);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
///
/// @param self KSelectAction*
/// @param n int
void k_selectaction_set_max_combo_view_count(void* self, int n);

/// [Qt documentation](https://api.kde.org/kselectaction.html#clear)
///
/// @param self KSelectAction*
void k_selectaction_clear(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#removeAllActions)
///
/// @param self KSelectAction*
void k_selectaction_remove_all_actions(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
///
/// @param self KSelectAction*
/// @param b bool
void k_selectaction_set_menu_accels_enabled(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
///
/// @param self KSelectAction*
bool k_selectaction_menu_accels_enabled(void* self);

/// [Qt documentation](https://api.kde.org/kselectaction.html#changeItem)
///
/// @param self KSelectAction*
/// @param index int
/// @param text const char*
void k_selectaction_change_item(void* self, int index, const char* text);

/// [Qt documentation](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KSelectAction*
/// @param action QAction*
void k_selectaction_action_triggered(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QAction* action)
void k_selectaction_on_action_triggered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KSelectAction*
/// @param index int
void k_selectaction_index_triggered(void* self, int index);

/// [Qt documentation](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, int index)
void k_selectaction_on_index_triggered(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KSelectAction*
/// @param text const char*
void k_selectaction_text_triggered(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, const char* text)
void k_selectaction_on_text_triggered(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#slotActionTriggered)
///
/// @param self KSelectAction*
/// @param action QAction*
void k_selectaction_slot_action_triggered(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kselectaction.html#slotActionTriggered)
///
/// Allows for overriding the related default method
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QAction* action)
void k_selectaction_on_slot_action_triggered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#slotActionTriggered)
///
/// Base class method implementation
///
/// @param self KSelectAction*
/// @param action QAction*
void k_selectaction_qbase_slot_action_triggered(void* self, void* action);

/// [Qt documentation](https://api.kde.org/kselectaction.html#slotToggled)
///
/// @param self KSelectAction*
/// @param param1 bool
void k_selectaction_slot_toggled(void* self, bool param1);

/// [Qt documentation](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Allows for overriding the related default method
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, bool param1)
void k_selectaction_on_slot_toggled(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Base class method implementation
///
/// @param self KSelectAction*
/// @param param1 bool
void k_selectaction_qbase_slot_toggled(void* self, bool param1);

/// [Qt documentation](https://api.kde.org/kselectaction.html#createWidget)
///
/// @param self KSelectAction*
/// @param parent QWidget*
QWidget* k_selectaction_create_widget(void* self, void* parent);

/// [Qt documentation](https://api.kde.org/kselectaction.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self KSelectAction*
/// @param callback QWidget* func(KSelectAction* self, QWidget* parent)
void k_selectaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#createWidget)
///
/// Base class method implementation
///
/// @param self KSelectAction*
/// @param parent QWidget*
QWidget* k_selectaction_qbase_create_widget(void* self, void* parent);

/// [Qt documentation](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// @param self KSelectAction*
/// @param widget QWidget*
void k_selectaction_delete_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Allows for overriding the related default method
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QWidget* widget)
void k_selectaction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Base class method implementation
///
/// @param self KSelectAction*
/// @param widget QWidget*
void k_selectaction_qbase_delete_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/kselectaction.html#event)
///
/// @param self KSelectAction*
/// @param event QEvent*
bool k_selectaction_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kselectaction.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KSelectAction*
/// @param callback bool func(KSelectAction* self, QEvent* event)
void k_selectaction_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#event)
///
/// Base class method implementation
///
/// @param self KSelectAction*
/// @param event QEvent*
bool k_selectaction_qbase_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kselectaction.html#eventFilter)
///
/// @param self KSelectAction*
/// @param watched QObject*
/// @param event QEvent*
bool k_selectaction_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KSelectAction*
/// @param callback bool func(KSelectAction* self, QObject* watched, QEvent* event)
void k_selectaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KSelectAction*
/// @param watched QObject*
/// @param event QEvent*
bool k_selectaction_qbase_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_selectaction_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_selectaction_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kselectaction.html#action)
///
/// @param self KSelectAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
QAction* k_selectaction_action22(void* self, const char* text, int32_t cs);

/// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KSelectAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
bool k_selectaction_set_current_action22(void* self, const char* text, int32_t cs);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KSelectAction*
/// @param w QWidget*
void k_selectaction_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self KSelectAction*
QWidget* k_selectaction_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KSelectAction*
/// @param parent QWidget*
QWidget* k_selectaction_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KSelectAction*
/// @param widget QWidget*
void k_selectaction_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KSelectAction*
libqt_list /* of QObject* */ k_selectaction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KSelectAction*
/// @param group QActionGroup*
void k_selectaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KSelectAction*
QActionGroup* k_selectaction_action_group(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KSelectAction*
/// @param icon QIcon*
void k_selectaction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KSelectAction*
QIcon* k_selectaction_icon(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KSelectAction*
/// @param text const char*
void k_selectaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSelectAction*
const char* k_selectaction_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KSelectAction*
/// @param text const char*
void k_selectaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSelectAction*
const char* k_selectaction_icon_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KSelectAction*
/// @param tip const char*
void k_selectaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSelectAction*
const char* k_selectaction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KSelectAction*
/// @param statusTip const char*
void k_selectaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSelectAction*
const char* k_selectaction_status_tip(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KSelectAction*
/// @param what const char*
void k_selectaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSelectAction*
const char* k_selectaction_whats_this(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KSelectAction*
/// @param priority enum QAction__Priority
void k_selectaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KSelectAction*
///
/// @return enum QAction__Priority
int32_t k_selectaction_priority(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KSelectAction*
/// @param b bool
void k_selectaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KSelectAction*
bool k_selectaction_is_separator(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KSelectAction*
/// @param shortcut QKeySequence*
void k_selectaction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KSelectAction*
QKeySequence* k_selectaction_shortcut(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KSelectAction*
/// @param shortcuts libqt_list /* of QKeySequence* */
void k_selectaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KSelectAction*
/// @param shortcuts enum QKeySequence__StandardKey
void k_selectaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KSelectAction*
libqt_list /* of QKeySequence* */ k_selectaction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KSelectAction*
/// @param context enum Qt__ShortcutContext
void k_selectaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KSelectAction*
///
/// @return enum Qt__ShortcutContext
int32_t k_selectaction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KSelectAction*
/// @param autoRepeat bool
void k_selectaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KSelectAction*
bool k_selectaction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KSelectAction*
/// @param font QFont*
void k_selectaction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KSelectAction*
QFont* k_selectaction_font(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KSelectAction*
/// @param checkable bool
void k_selectaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KSelectAction*
bool k_selectaction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KSelectAction*
QVariant* k_selectaction_data(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KSelectAction*
/// @param varVal QVariant*
void k_selectaction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KSelectAction*
bool k_selectaction_is_checked(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KSelectAction*
bool k_selectaction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KSelectAction*
bool k_selectaction_is_visible(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KSelectAction*
/// @param event enum QAction__ActionEvent
void k_selectaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KSelectAction*
/// @param menuRole enum QAction__MenuRole
void k_selectaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KSelectAction*
///
/// @return enum QAction__MenuRole
int32_t k_selectaction_menu_role(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KSelectAction*
/// @param visible bool
void k_selectaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KSelectAction*
bool k_selectaction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KSelectAction*
/// @param show bool
void k_selectaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KSelectAction*
bool k_selectaction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KSelectAction*
bool k_selectaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KSelectAction*
void k_selectaction_trigger(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KSelectAction*
void k_selectaction_hover(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KSelectAction*
/// @param checked bool
void k_selectaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KSelectAction*
void k_selectaction_toggle(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KSelectAction*
/// @param enabled bool
void k_selectaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KSelectAction*
void k_selectaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KSelectAction*
/// @param b bool
void k_selectaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KSelectAction*
/// @param visible bool
void k_selectaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KSelectAction*
void k_selectaction_changed(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self)
void k_selectaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KSelectAction*
/// @param enabled bool
void k_selectaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, bool enabled)
void k_selectaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KSelectAction*
/// @param checkable bool
void k_selectaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, bool checkable)
void k_selectaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KSelectAction*
void k_selectaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self)
void k_selectaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KSelectAction*
void k_selectaction_triggered(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self)
void k_selectaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KSelectAction*
void k_selectaction_hovered(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self)
void k_selectaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KSelectAction*
/// @param param1 bool
void k_selectaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, bool param1)
void k_selectaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KSelectAction*
/// @param object QObject*
bool k_selectaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KSelectAction*
/// @param checked bool
void k_selectaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, bool checked)
void k_selectaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSelectAction*
const char* k_selectaction_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSelectAction*
/// @param name char*
void k_selectaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSelectAction*
bool k_selectaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSelectAction*
bool k_selectaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSelectAction*
bool k_selectaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSelectAction*
bool k_selectaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSelectAction*
/// @param b bool
bool k_selectaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSelectAction*
QThread* k_selectaction_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSelectAction*
/// @param thread QThread*
bool k_selectaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelectAction*
/// @param interval int
int32_t k_selectaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSelectAction*
/// @param id int
void k_selectaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSelectAction*
/// @param id enum Qt__TimerId
void k_selectaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSelectAction*
libqt_list /* of QObject* */ k_selectaction_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSelectAction*
/// @param parent QObject*
void k_selectaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSelectAction*
/// @param filterObj QObject*
void k_selectaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSelectAction*
/// @param obj QObject*
void k_selectaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_selectaction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSelectAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_selectaction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_selectaction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_selectaction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSelectAction*
void k_selectaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSelectAction*
void k_selectaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSelectAction*
/// @param name const char*
/// @param value QVariant*
bool k_selectaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSelectAction*
/// @param name const char*
QVariant* k_selectaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSelectAction*
const char** k_selectaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSelectAction*
QBindingStorage* k_selectaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSelectAction*
const QBindingStorage* k_selectaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectAction*
void k_selectaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self)
void k_selectaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSelectAction*
QObject* k_selectaction_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSelectAction*
/// @param classname const char*
bool k_selectaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSelectAction*
void k_selectaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSelectAction*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_selectaction_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelectAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_selectaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_selectaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSelectAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_selectaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectAction*
/// @param param1 QObject*
void k_selectaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QObject* param1)
void k_selectaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
/// @param event QTimerEvent*
void k_selectaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
/// @param event QTimerEvent*
void k_selectaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QTimerEvent* event)
void k_selectaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
/// @param event QChildEvent*
void k_selectaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
/// @param event QChildEvent*
void k_selectaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QChildEvent* event)
void k_selectaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
/// @param event QEvent*
void k_selectaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
/// @param event QEvent*
void k_selectaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QEvent* event)
void k_selectaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
/// @param signal QMetaMethod*
void k_selectaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
/// @param signal QMetaMethod*
void k_selectaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QMetaMethod* signal)
void k_selectaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
/// @param signal QMetaMethod*
void k_selectaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
/// @param signal QMetaMethod*
void k_selectaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, QMetaMethod* signal)
void k_selectaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
libqt_list /* of QWidget* */ k_selectaction_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
libqt_list /* of QWidget* */ k_selectaction_qbase_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback QWidget** func()
void k_selectaction_on_created_widgets(void* self, QWidget** (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
QObject* k_selectaction_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
QObject* k_selectaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback QObject* func()
void k_selectaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
int32_t k_selectaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
int32_t k_selectaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback int32_t func()
void k_selectaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
/// @param signal const char*
int32_t k_selectaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
/// @param signal const char*
int32_t k_selectaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback int32_t func(KSelectAction* self, const char* signal)
void k_selectaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectAction*
/// @param signal QMetaMethod*
bool k_selectaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectAction*
/// @param signal QMetaMethod*
bool k_selectaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectAction*
/// @param callback bool func(KSelectAction* self, QMetaMethod* signal)
void k_selectaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectAction*
/// @param callback void func(KSelectAction* self, const char* objectName)
void k_selectaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kselectaction.html#dtor.KSelectAction)
///
/// Delete this object from C++ memory.
///
/// @param self KSelectAction*
void k_selectaction_delete(void* self);

/// https://api.kde.org/kselectaction.html#types

typedef enum {
    KSELECTACTION_TOOLBARMODE_MENUMODE = 0,
    KSELECTACTION_TOOLBARMODE_COMBOBOXMODE = 1
} KSelectAction__ToolBarMode;

#endif
