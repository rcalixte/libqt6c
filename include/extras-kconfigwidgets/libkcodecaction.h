#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKCODECACTION_H
#define SRC_EXTRAS_KCONFIGWIDGETS_QT6C_LIBKCODECACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcodecaction.html

/// k_codecaction_new constructs a new KCodecAction object.
///
/// @param parent QObject*
KCodecAction* k_codecaction_new(void* parent);

/// k_codecaction_new2 constructs a new KCodecAction object.
///
/// @param text const char*
/// @param parent QObject*
KCodecAction* k_codecaction_new2(const char* text, void* parent);

/// k_codecaction_new3 constructs a new KCodecAction object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
KCodecAction* k_codecaction_new3(void* icon, const char* text, void* parent);

/// k_codecaction_new4 constructs a new KCodecAction object.
///
/// @param parent QObject*
/// @param showAutoOptions bool
KCodecAction* k_codecaction_new4(void* parent, bool showAutoOptions);

/// k_codecaction_new5 constructs a new KCodecAction object.
///
/// @param text const char*
/// @param parent QObject*
/// @param showAutoOptions bool
KCodecAction* k_codecaction_new5(const char* text, void* parent, bool showAutoOptions);

/// k_codecaction_new6 constructs a new KCodecAction object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
/// @param showAutoOptions bool
KCodecAction* k_codecaction_new6(void* icon, const char* text, void* parent, bool showAutoOptions);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCodecAction*
const QMetaObject* k_codecaction_meta_object(void* self);

/// @param self KCodecAction*
/// @param param1 const char*
void* k_codecaction_metacast(void* self, const char* param1);

/// @param self KCodecAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_codecaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCodecAction*
/// @param callback int32_t func(KCodecAction* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_codecaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCodecAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_codecaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_codecaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcodecaction.html#currentCodecName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char* k_codecaction_current_codec_name(void* self);

/// [Upstream resources](https://api.kde.org/kcodecaction.html#setCurrentCodec)
///
/// @param self KCodecAction*
/// @param codecName const char*
bool k_codecaction_set_current_codec(void* self, const char* codecName);

/// [Upstream resources](https://api.kde.org/kcodecaction.html#codecNameTriggered)
///
/// @param self KCodecAction*
/// @param name const char*
void k_codecaction_codec_name_triggered(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcodecaction.html#codecNameTriggered)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, const char* name)
void k_codecaction_on_codec_name_triggered(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcodecaction.html#defaultItemTriggered)
///
/// @param self KCodecAction*
void k_codecaction_default_item_triggered(void* self);

/// [Upstream resources](https://api.kde.org/kcodecaction.html#defaultItemTriggered)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self)
void k_codecaction_on_default_item_triggered(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kcodecaction.html#slotActionTriggered)
///
/// @param self KCodecAction*
/// @param param1 QAction*
void k_codecaction_slot_action_triggered(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kcodecaction.html#slotActionTriggered)
///
/// Allows for overriding the related default method
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QAction* param1)
void k_codecaction_on_slot_action_triggered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcodecaction.html#slotActionTriggered)
///
/// Base class method implementation
///
/// @param self KCodecAction*
/// @param param1 QAction*
void k_codecaction_qbase_slot_action_triggered(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_codecaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_codecaction_tr3(const char* s, const char* c, int n);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#toolBarMode)
///
/// @param self KCodecAction*
///
/// @return enum KSelectAction__ToolBarMode
int32_t k_codecaction_tool_bar_mode(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setToolBarMode)
///
/// @param self KCodecAction*
/// @param mode enum KSelectAction__ToolBarMode
void k_codecaction_set_tool_bar_mode(void* self, int32_t mode);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
///
/// @param self KCodecAction*
///
/// @return enum QToolButton__ToolButtonPopupMode
int32_t k_codecaction_tool_button_popup_mode(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
///
/// @param self KCodecAction*
/// @param mode enum QToolButton__ToolButtonPopupMode
void k_codecaction_set_tool_button_popup_mode(void* self, int32_t mode);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#selectableActionGroup)
///
/// @param self KCodecAction*
QActionGroup* k_codecaction_selectable_action_group(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#currentAction)
///
/// @param self KCodecAction*
QAction* k_codecaction_current_action(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#currentItem)
///
/// @param self KCodecAction*
int32_t k_codecaction_current_item(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#currentText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char* k_codecaction_current_text(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#actions)
///
/// @param self KCodecAction*
libqt_list /* of QAction* */ k_codecaction_actions(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#action)
///
/// @param self KCodecAction*
/// @param index int
QAction* k_codecaction_action(void* self, int index);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#action)
///
/// @param self KCodecAction*
/// @param text const char*
QAction* k_codecaction_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KCodecAction*
/// @param action QAction*
bool k_codecaction_set_current_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentItem)
///
/// @param self KCodecAction*
/// @param index int
bool k_codecaction_set_current_item(void* self, int index);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KCodecAction*
/// @param text const char*
bool k_codecaction_set_current_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KCodecAction*
/// @param action QAction*
void k_codecaction_add_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KCodecAction*
/// @param text const char*
QAction* k_codecaction_add_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KCodecAction*
/// @param icon QIcon*
/// @param text const char*
QAction* k_codecaction_add_action3(void* self, void* icon, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setItems)
///
/// @param self KCodecAction*
/// @param lst const char**
void k_codecaction_set_items(void* self, const char* lst[static 1]);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#items)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char** k_codecaction_items(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#isEditable)
///
/// @param self KCodecAction*
bool k_codecaction_is_editable(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setEditable)
///
/// @param self KCodecAction*
/// @param editable bool
void k_codecaction_set_editable(void* self, bool editable);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#comboWidth)
///
/// @param self KCodecAction*
int32_t k_codecaction_combo_width(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setComboWidth)
///
/// @param self KCodecAction*
/// @param width int
void k_codecaction_set_combo_width(void* self, int width);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
///
/// @param self KCodecAction*
/// @param n int
void k_codecaction_set_max_combo_view_count(void* self, int n);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#clear)
///
/// @param self KCodecAction*
void k_codecaction_clear(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#removeAllActions)
///
/// @param self KCodecAction*
void k_codecaction_remove_all_actions(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
///
/// @param self KCodecAction*
/// @param b bool
void k_codecaction_set_menu_accels_enabled(void* self, bool b);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
///
/// @param self KCodecAction*
bool k_codecaction_menu_accels_enabled(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#changeItem)
///
/// @param self KCodecAction*
/// @param index int
/// @param text const char*
void k_codecaction_change_item(void* self, int index, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KCodecAction*
/// @param action QAction*
void k_codecaction_action_triggered(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QAction* action)
void k_codecaction_on_action_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KCodecAction*
/// @param index int
void k_codecaction_index_triggered(void* self, int index);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, int index)
void k_codecaction_on_index_triggered(void* self, void (*callback)(void*, int));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KCodecAction*
/// @param text const char*
void k_codecaction_text_triggered(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, const char* text)
void k_codecaction_on_text_triggered(void* self, void (*callback)(void*, const char*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#action)
///
/// @param self KCodecAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
QAction* k_codecaction_action22(void* self, const char* text, int32_t cs);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KCodecAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
bool k_codecaction_set_current_action22(void* self, const char* text, int32_t cs);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KCodecAction*
/// @param w QWidget*
void k_codecaction_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self KCodecAction*
QWidget* k_codecaction_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KCodecAction*
/// @param parent QWidget*
QWidget* k_codecaction_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KCodecAction*
/// @param widget QWidget*
void k_codecaction_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KCodecAction*
libqt_list /* of QObject* */ k_codecaction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KCodecAction*
/// @param group QActionGroup*
void k_codecaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KCodecAction*
QActionGroup* k_codecaction_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KCodecAction*
/// @param icon QIcon*
void k_codecaction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KCodecAction*
QIcon* k_codecaction_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KCodecAction*
/// @param text const char*
void k_codecaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char* k_codecaction_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KCodecAction*
/// @param text const char*
void k_codecaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char* k_codecaction_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KCodecAction*
/// @param tip const char*
void k_codecaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char* k_codecaction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KCodecAction*
/// @param statusTip const char*
void k_codecaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char* k_codecaction_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KCodecAction*
/// @param what const char*
void k_codecaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char* k_codecaction_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KCodecAction*
/// @param priority enum QAction__Priority
void k_codecaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KCodecAction*
///
/// @return enum QAction__Priority
int32_t k_codecaction_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KCodecAction*
/// @param b bool
void k_codecaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KCodecAction*
bool k_codecaction_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KCodecAction*
/// @param shortcut QKeySequence*
void k_codecaction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KCodecAction*
QKeySequence* k_codecaction_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KCodecAction*
/// @param shortcuts libqt_list /* of QKeySequence* */
void k_codecaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KCodecAction*
/// @param shortcuts enum QKeySequence__StandardKey
void k_codecaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KCodecAction*
libqt_list /* of QKeySequence* */ k_codecaction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KCodecAction*
/// @param context enum Qt__ShortcutContext
void k_codecaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KCodecAction*
///
/// @return enum Qt__ShortcutContext
int32_t k_codecaction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KCodecAction*
/// @param autoRepeat bool
void k_codecaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KCodecAction*
bool k_codecaction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KCodecAction*
/// @param font QFont*
void k_codecaction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KCodecAction*
QFont* k_codecaction_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KCodecAction*
/// @param checkable bool
void k_codecaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KCodecAction*
bool k_codecaction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KCodecAction*
QVariant* k_codecaction_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KCodecAction*
/// @param varVal QVariant*
void k_codecaction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KCodecAction*
bool k_codecaction_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KCodecAction*
bool k_codecaction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KCodecAction*
bool k_codecaction_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KCodecAction*
/// @param event enum QAction__ActionEvent
void k_codecaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KCodecAction*
/// @param menuRole enum QAction__MenuRole
void k_codecaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KCodecAction*
///
/// @return enum QAction__MenuRole
int32_t k_codecaction_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KCodecAction*
/// @param visible bool
void k_codecaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KCodecAction*
bool k_codecaction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KCodecAction*
/// @param show bool
void k_codecaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KCodecAction*
bool k_codecaction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KCodecAction*
bool k_codecaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KCodecAction*
void k_codecaction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KCodecAction*
void k_codecaction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KCodecAction*
/// @param checked bool
void k_codecaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KCodecAction*
void k_codecaction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KCodecAction*
/// @param enabled bool
void k_codecaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KCodecAction*
void k_codecaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KCodecAction*
/// @param b bool
void k_codecaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KCodecAction*
/// @param visible bool
void k_codecaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KCodecAction*
void k_codecaction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self)
void k_codecaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KCodecAction*
/// @param enabled bool
void k_codecaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, bool enabled)
void k_codecaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KCodecAction*
/// @param checkable bool
void k_codecaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, bool checkable)
void k_codecaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KCodecAction*
void k_codecaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self)
void k_codecaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KCodecAction*
void k_codecaction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self)
void k_codecaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KCodecAction*
void k_codecaction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self)
void k_codecaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KCodecAction*
/// @param param1 bool
void k_codecaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, bool param1)
void k_codecaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KCodecAction*
/// @param object QObject*
bool k_codecaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KCodecAction*
/// @param checked bool
void k_codecaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, bool checked)
void k_codecaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char* k_codecaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCodecAction*
/// @param name char*
void k_codecaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCodecAction*
bool k_codecaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCodecAction*
bool k_codecaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCodecAction*
bool k_codecaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCodecAction*
bool k_codecaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCodecAction*
/// @param b bool
bool k_codecaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCodecAction*
QThread* k_codecaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCodecAction*
/// @param thread QThread*
bool k_codecaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCodecAction*
/// @param interval int
int32_t k_codecaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCodecAction*
/// @param id int
void k_codecaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCodecAction*
/// @param id enum Qt__TimerId
void k_codecaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCodecAction*
libqt_list /* of QObject* */ k_codecaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCodecAction*
/// @param parent QObject*
void k_codecaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCodecAction*
/// @param filterObj QObject*
void k_codecaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCodecAction*
/// @param obj QObject*
void k_codecaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_codecaction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCodecAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_codecaction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_codecaction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_codecaction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCodecAction*
void k_codecaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCodecAction*
void k_codecaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCodecAction*
/// @param name const char*
/// @param value QVariant*
bool k_codecaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCodecAction*
/// @param name const char*
QVariant* k_codecaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCodecAction*
const char** k_codecaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCodecAction*
QBindingStorage* k_codecaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCodecAction*
const QBindingStorage* k_codecaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCodecAction*
void k_codecaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self)
void k_codecaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCodecAction*
QObject* k_codecaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCodecAction*
/// @param classname const char*
bool k_codecaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCodecAction*
void k_codecaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCodecAction*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_codecaction_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCodecAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_codecaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_codecaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCodecAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_codecaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCodecAction*
/// @param param1 QObject*
void k_codecaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QObject* param1)
void k_codecaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param action QAction*
QAction* k_codecaction_remove_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param action QAction*
QAction* k_codecaction_qbase_remove_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback QAction* func(KCodecAction* self, QAction* action)
void k_codecaction_on_remove_action(void* self, QAction* (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param before QAction*
/// @param action QAction*
void k_codecaction_insert_action(void* self, void* before, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param before QAction*
/// @param action QAction*
void k_codecaction_qbase_insert_action(void* self, void* before, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QAction* before, QAction* action)
void k_codecaction_on_insert_action(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param parent QWidget*
QWidget* k_codecaction_create_widget(void* self, void* parent);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param parent QWidget*
QWidget* k_codecaction_qbase_create_widget(void* self, void* parent);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback QWidget* func(KCodecAction* self, QWidget* parent)
void k_codecaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param widget QWidget*
void k_codecaction_delete_widget(void* self, void* widget);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param widget QWidget*
void k_codecaction_qbase_delete_widget(void* self, void* widget);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QWidget* widget)
void k_codecaction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param event QEvent*
bool k_codecaction_event(void* self, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param event QEvent*
bool k_codecaction_qbase_event(void* self, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback bool func(KCodecAction* self, QEvent* event)
void k_codecaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param watched QObject*
/// @param event QEvent*
bool k_codecaction_event_filter(void* self, void* watched, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param watched QObject*
/// @param event QEvent*
bool k_codecaction_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback bool func(KCodecAction* self, QObject* watched, QEvent* event)
void k_codecaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param event QTimerEvent*
void k_codecaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param event QTimerEvent*
void k_codecaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QTimerEvent* event)
void k_codecaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param event QChildEvent*
void k_codecaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param event QChildEvent*
void k_codecaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QChildEvent* event)
void k_codecaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param event QEvent*
void k_codecaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param event QEvent*
void k_codecaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QEvent* event)
void k_codecaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param signal QMetaMethod*
void k_codecaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param signal QMetaMethod*
void k_codecaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QMetaMethod* signal)
void k_codecaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param signal QMetaMethod*
void k_codecaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param signal QMetaMethod*
void k_codecaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, QMetaMethod* signal)
void k_codecaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param param1 bool
void k_codecaction_slot_toggled(void* self, bool param1);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param param1 bool
void k_codecaction_qbase_slot_toggled(void* self, bool param1);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, bool param1)
void k_codecaction_on_slot_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
libqt_list /* of QWidget* */ k_codecaction_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
libqt_list /* of QWidget* */ k_codecaction_qbase_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback QWidget** func()
void k_codecaction_on_created_widgets(void* self, QWidget** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
QObject* k_codecaction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
QObject* k_codecaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback QObject* func()
void k_codecaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
int32_t k_codecaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
int32_t k_codecaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback int32_t func()
void k_codecaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param signal const char*
int32_t k_codecaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param signal const char*
int32_t k_codecaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback int32_t func(KCodecAction* self, const char* signal)
void k_codecaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCodecAction*
/// @param signal QMetaMethod*
bool k_codecaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCodecAction*
/// @param signal QMetaMethod*
bool k_codecaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCodecAction*
/// @param callback bool func(KCodecAction* self, QMetaMethod* signal)
void k_codecaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCodecAction*
/// @param callback void func(KCodecAction* self, const char* objectName)
void k_codecaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcodecaction.html#dtor.KCodecAction)
///
/// Delete this object from C++ memory.
///
/// @param self KCodecAction*
void k_codecaction_delete(void* self);

#endif
