#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKFONTACTION_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKFONTACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kfontaction.html

/// k_fontaction_new constructs a new KFontAction object.
///
/// @param fontListCriteria uint32_t
/// @param parent QObject*
KFontAction* k_fontaction_new(uint32_t fontListCriteria, void* parent);

/// k_fontaction_new2 constructs a new KFontAction object.
///
/// @param parent QObject*
KFontAction* k_fontaction_new2(void* parent);

/// k_fontaction_new3 constructs a new KFontAction object.
///
/// @param text const char*
/// @param parent QObject*
KFontAction* k_fontaction_new3(const char* text, void* parent);

/// k_fontaction_new4 constructs a new KFontAction object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
KFontAction* k_fontaction_new4(void* icon, const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFontAction*
const QMetaObject* k_fontaction_meta_object(void* self);

/// @param self KFontAction*
/// @param param1 const char*
void* k_fontaction_metacast(void* self, const char* param1);

/// @param self KFontAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_fontaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFontAction*
/// @param callback int32_t func(KFontAction* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_fontaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFontAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_fontaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_fontaction_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kfontaction.html#font)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char* k_fontaction_font(void* self);

/// [Qt documentation](https://api.kde.org/kfontaction.html#setFont)
///
/// @param self KFontAction*
/// @param family const char*
void k_fontaction_set_font(void* self, const char* family);

/// [Qt documentation](https://api.kde.org/kfontaction.html#createWidget)
///
/// @param self KFontAction*
/// @param parent QWidget*
QWidget* k_fontaction_create_widget(void* self, void* parent);

/// [Qt documentation](https://api.kde.org/kfontaction.html#createWidget)
///
/// Allows for overriding the related default method
///
/// @param self KFontAction*
/// @param callback QWidget* func(KFontAction* self, QWidget* parent)
void k_fontaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kfontaction.html#createWidget)
///
/// Base class method implementation
///
/// @param self KFontAction*
/// @param parent QWidget*
QWidget* k_fontaction_qbase_create_widget(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_fontaction_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_fontaction_tr3(const char* s, const char* c, int n);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#toolBarMode)
///
/// @param self KFontAction*
///
/// @return enum KSelectAction__ToolBarMode
int32_t k_fontaction_tool_bar_mode(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setToolBarMode)
///
/// @param self KFontAction*
/// @param mode enum KSelectAction__ToolBarMode
void k_fontaction_set_tool_bar_mode(void* self, int32_t mode);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
///
/// @param self KFontAction*
///
/// @return enum QToolButton__ToolButtonPopupMode
int32_t k_fontaction_tool_button_popup_mode(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
///
/// @param self KFontAction*
/// @param mode enum QToolButton__ToolButtonPopupMode
void k_fontaction_set_tool_button_popup_mode(void* self, int32_t mode);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#selectableActionGroup)
///
/// @param self KFontAction*
QActionGroup* k_fontaction_selectable_action_group(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#currentAction)
///
/// @param self KFontAction*
QAction* k_fontaction_current_action(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#currentItem)
///
/// @param self KFontAction*
int32_t k_fontaction_current_item(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#currentText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char* k_fontaction_current_text(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#actions)
///
/// @param self KFontAction*
libqt_list /* of QAction* */ k_fontaction_actions(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#action)
///
/// @param self KFontAction*
/// @param index int
QAction* k_fontaction_action(void* self, int index);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#action)
///
/// @param self KFontAction*
/// @param text const char*
QAction* k_fontaction_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KFontAction*
/// @param action QAction*
bool k_fontaction_set_current_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentItem)
///
/// @param self KFontAction*
/// @param index int
bool k_fontaction_set_current_item(void* self, int index);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KFontAction*
/// @param text const char*
bool k_fontaction_set_current_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KFontAction*
/// @param action QAction*
void k_fontaction_add_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KFontAction*
/// @param text const char*
QAction* k_fontaction_add_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KFontAction*
/// @param icon QIcon*
/// @param text const char*
QAction* k_fontaction_add_action3(void* self, void* icon, const char* text);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setItems)
///
/// @param self KFontAction*
/// @param lst const char**
void k_fontaction_set_items(void* self, const char* lst[]);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#items)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char** k_fontaction_items(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#isEditable)
///
/// @param self KFontAction*
bool k_fontaction_is_editable(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setEditable)
///
/// @param self KFontAction*
/// @param editable bool
void k_fontaction_set_editable(void* self, bool editable);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#comboWidth)
///
/// @param self KFontAction*
int32_t k_fontaction_combo_width(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setComboWidth)
///
/// @param self KFontAction*
/// @param width int
void k_fontaction_set_combo_width(void* self, int width);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
///
/// @param self KFontAction*
/// @param n int
void k_fontaction_set_max_combo_view_count(void* self, int n);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#clear)
///
/// @param self KFontAction*
void k_fontaction_clear(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#removeAllActions)
///
/// @param self KFontAction*
void k_fontaction_remove_all_actions(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
///
/// @param self KFontAction*
/// @param b bool
void k_fontaction_set_menu_accels_enabled(void* self, bool b);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
///
/// @param self KFontAction*
bool k_fontaction_menu_accels_enabled(void* self);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#changeItem)
///
/// @param self KFontAction*
/// @param index int
/// @param text const char*
void k_fontaction_change_item(void* self, int index, const char* text);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KFontAction*
/// @param action QAction*
void k_fontaction_action_triggered(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QAction* action)
void k_fontaction_on_action_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KFontAction*
/// @param index int
void k_fontaction_index_triggered(void* self, int index);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, int index)
void k_fontaction_on_index_triggered(void* self, void (*callback)(void*, int));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KFontAction*
/// @param text const char*
void k_fontaction_text_triggered(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, const char* text)
void k_fontaction_on_text_triggered(void* self, void (*callback)(void*, const char*));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#action)
///
/// @param self KFontAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
QAction* k_fontaction_action22(void* self, const char* text, int32_t cs);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KFontAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
bool k_fontaction_set_current_action22(void* self, const char* text, int32_t cs);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KFontAction*
/// @param w QWidget*
void k_fontaction_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self KFontAction*
QWidget* k_fontaction_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KFontAction*
/// @param parent QWidget*
QWidget* k_fontaction_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KFontAction*
/// @param widget QWidget*
void k_fontaction_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KFontAction*
libqt_list /* of QObject* */ k_fontaction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KFontAction*
/// @param group QActionGroup*
void k_fontaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KFontAction*
QActionGroup* k_fontaction_action_group(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KFontAction*
/// @param icon QIcon*
void k_fontaction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KFontAction*
QIcon* k_fontaction_icon(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KFontAction*
/// @param text const char*
void k_fontaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char* k_fontaction_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KFontAction*
/// @param text const char*
void k_fontaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char* k_fontaction_icon_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KFontAction*
/// @param tip const char*
void k_fontaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char* k_fontaction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KFontAction*
/// @param statusTip const char*
void k_fontaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char* k_fontaction_status_tip(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KFontAction*
/// @param what const char*
void k_fontaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char* k_fontaction_whats_this(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KFontAction*
/// @param priority enum QAction__Priority
void k_fontaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KFontAction*
///
/// @return enum QAction__Priority
int32_t k_fontaction_priority(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KFontAction*
/// @param b bool
void k_fontaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KFontAction*
bool k_fontaction_is_separator(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KFontAction*
/// @param shortcut QKeySequence*
void k_fontaction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KFontAction*
QKeySequence* k_fontaction_shortcut(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KFontAction*
/// @param shortcuts libqt_list /* of QKeySequence* */
void k_fontaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KFontAction*
/// @param shortcuts enum QKeySequence__StandardKey
void k_fontaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KFontAction*
libqt_list /* of QKeySequence* */ k_fontaction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KFontAction*
/// @param context enum Qt__ShortcutContext
void k_fontaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KFontAction*
///
/// @return enum Qt__ShortcutContext
int32_t k_fontaction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KFontAction*
/// @param autoRepeat bool
void k_fontaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KFontAction*
bool k_fontaction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KFontAction*
/// @param checkable bool
void k_fontaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KFontAction*
bool k_fontaction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KFontAction*
QVariant* k_fontaction_data(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KFontAction*
/// @param varVal QVariant*
void k_fontaction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KFontAction*
bool k_fontaction_is_checked(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KFontAction*
bool k_fontaction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KFontAction*
bool k_fontaction_is_visible(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KFontAction*
/// @param event enum QAction__ActionEvent
void k_fontaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KFontAction*
/// @param menuRole enum QAction__MenuRole
void k_fontaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KFontAction*
///
/// @return enum QAction__MenuRole
int32_t k_fontaction_menu_role(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KFontAction*
/// @param visible bool
void k_fontaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KFontAction*
bool k_fontaction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KFontAction*
/// @param show bool
void k_fontaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KFontAction*
bool k_fontaction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KFontAction*
bool k_fontaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KFontAction*
void k_fontaction_trigger(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KFontAction*
void k_fontaction_hover(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KFontAction*
/// @param checked bool
void k_fontaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KFontAction*
void k_fontaction_toggle(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KFontAction*
/// @param enabled bool
void k_fontaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KFontAction*
void k_fontaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KFontAction*
/// @param b bool
void k_fontaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KFontAction*
/// @param visible bool
void k_fontaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KFontAction*
void k_fontaction_changed(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self)
void k_fontaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KFontAction*
/// @param enabled bool
void k_fontaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, bool enabled)
void k_fontaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KFontAction*
/// @param checkable bool
void k_fontaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, bool checkable)
void k_fontaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KFontAction*
void k_fontaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self)
void k_fontaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KFontAction*
void k_fontaction_triggered(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self)
void k_fontaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KFontAction*
void k_fontaction_hovered(void* self);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self)
void k_fontaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KFontAction*
/// @param param1 bool
void k_fontaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, bool param1)
void k_fontaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KFontAction*
/// @param object QObject*
bool k_fontaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KFontAction*
/// @param checked bool
void k_fontaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, bool checked)
void k_fontaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char* k_fontaction_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFontAction*
/// @param name char*
void k_fontaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFontAction*
bool k_fontaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFontAction*
bool k_fontaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFontAction*
bool k_fontaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFontAction*
bool k_fontaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFontAction*
/// @param b bool
bool k_fontaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFontAction*
QThread* k_fontaction_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFontAction*
/// @param thread QThread*
bool k_fontaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFontAction*
/// @param interval int
int32_t k_fontaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFontAction*
/// @param id int
void k_fontaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFontAction*
/// @param id enum Qt__TimerId
void k_fontaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFontAction*
libqt_list /* of QObject* */ k_fontaction_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KFontAction*
/// @param parent QObject*
void k_fontaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFontAction*
/// @param filterObj QObject*
void k_fontaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFontAction*
/// @param obj QObject*
void k_fontaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_fontaction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFontAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_fontaction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_fontaction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_fontaction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFontAction*
void k_fontaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFontAction*
void k_fontaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFontAction*
/// @param name const char*
/// @param value QVariant*
bool k_fontaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFontAction*
/// @param name const char*
QVariant* k_fontaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFontAction*
const char** k_fontaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFontAction*
QBindingStorage* k_fontaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFontAction*
const QBindingStorage* k_fontaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFontAction*
void k_fontaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self)
void k_fontaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KFontAction*
QObject* k_fontaction_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFontAction*
/// @param classname const char*
bool k_fontaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFontAction*
void k_fontaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFontAction*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_fontaction_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFontAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_fontaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_fontaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFontAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_fontaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFontAction*
/// @param param1 QObject*
void k_fontaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QObject* param1)
void k_fontaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#removeAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param action QAction*
QAction* k_fontaction_remove_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#removeAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param action QAction*
QAction* k_fontaction_qbase_remove_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#removeAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback QAction* func(KFontAction* self, QAction* action)
void k_fontaction_on_remove_action(void* self, QAction* (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param before QAction*
/// @param action QAction*
void k_fontaction_insert_action(void* self, void* before, void* action);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param before QAction*
/// @param action QAction*
void k_fontaction_qbase_insert_action(void* self, void* before, void* action);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QAction* before, QAction* action)
void k_fontaction_on_insert_action(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#slotActionTriggered)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param action QAction*
void k_fontaction_slot_action_triggered(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#slotActionTriggered)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param action QAction*
void k_fontaction_qbase_slot_action_triggered(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#slotActionTriggered)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QAction* action)
void k_fontaction_on_slot_action_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param widget QWidget*
void k_fontaction_delete_widget(void* self, void* widget);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param widget QWidget*
void k_fontaction_qbase_delete_widget(void* self, void* widget);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QWidget* widget)
void k_fontaction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param event QEvent*
bool k_fontaction_event(void* self, void* event);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param event QEvent*
bool k_fontaction_qbase_event(void* self, void* event);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback bool func(KFontAction* self, QEvent* event)
void k_fontaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param watched QObject*
/// @param event QEvent*
bool k_fontaction_event_filter(void* self, void* watched, void* event);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param watched QObject*
/// @param event QEvent*
bool k_fontaction_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback bool func(KFontAction* self, QObject* watched, QEvent* event)
void k_fontaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param event QTimerEvent*
void k_fontaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param event QTimerEvent*
void k_fontaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QTimerEvent* event)
void k_fontaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param event QChildEvent*
void k_fontaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param event QChildEvent*
void k_fontaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QChildEvent* event)
void k_fontaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param event QEvent*
void k_fontaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param event QEvent*
void k_fontaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QEvent* event)
void k_fontaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param signal QMetaMethod*
void k_fontaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param signal QMetaMethod*
void k_fontaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QMetaMethod* signal)
void k_fontaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param signal QMetaMethod*
void k_fontaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param signal QMetaMethod*
void k_fontaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, QMetaMethod* signal)
void k_fontaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param param1 bool
void k_fontaction_slot_toggled(void* self, bool param1);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param param1 bool
void k_fontaction_qbase_slot_toggled(void* self, bool param1);

/// Inherited from KSelectAction
///
/// [Qt documentation](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, bool param1)
void k_fontaction_on_slot_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
libqt_list /* of QWidget* */ k_fontaction_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
libqt_list /* of QWidget* */ k_fontaction_qbase_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback libqt_list /* of QWidget* */ func()
void k_fontaction_on_created_widgets(void* self, libqt_list /* of QWidget* */ (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
QObject* k_fontaction_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
QObject* k_fontaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback QObject* func()
void k_fontaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
int32_t k_fontaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
int32_t k_fontaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback int32_t func()
void k_fontaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param signal const char*
int32_t k_fontaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param signal const char*
int32_t k_fontaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback int32_t func(KFontAction* self, const char* signal)
void k_fontaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontAction*
/// @param signal QMetaMethod*
bool k_fontaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontAction*
/// @param signal QMetaMethod*
bool k_fontaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontAction*
/// @param callback bool func(KFontAction* self, QMetaMethod* signal)
void k_fontaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFontAction*
/// @param callback void func(KFontAction* self, const char* objectName)
void k_fontaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kfontaction.html#dtor.KFontAction)
///
/// Delete this object from C++ memory.
///
/// @param self KFontAction*
void k_fontaction_delete(void* self);

#endif
