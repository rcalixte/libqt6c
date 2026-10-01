#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKFONTSIZEACTION_H
#define EXTRAS_KWIDGETSADDONS_LIBKFONTSIZEACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html)

/// k_fontsizeaction_new constructs a new KFontSizeAction object.
///
/// @param parent QObject*
///
KFontSizeAction* k_fontsizeaction_new(void* parent);

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html)

/// k_fontsizeaction_new2 constructs a new KFontSizeAction object.
///
/// @param text const char*
/// @param parent QObject*
///
KFontSizeAction* k_fontsizeaction_new2(const char* text, void* parent);

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html)

/// k_fontsizeaction_new3 constructs a new KFontSizeAction object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param parent QObject*
///
KFontSizeAction* k_fontsizeaction_new3(const void* icon, const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KFontSizeAction*
///
const QMetaObject* k_fontsizeaction_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KFontSizeAction*
/// @param callback const QMetaObject* func(const KFontSizeAction* self)
///
void k_fontsizeaction_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KFontSizeAction*
///
const QMetaObject* k_fontsizeaction_super_meta_object(const void* self);

/// @param self KFontSizeAction*
/// @param param1 const char*
///
void* k_fontsizeaction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KFontSizeAction*
/// @param callback void* func(KFontSizeAction* self, const char* param1)
///
void k_fontsizeaction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KFontSizeAction*
/// @param param1 const char*
///
void* k_fontsizeaction_super_metacast(void* self, const char* param1);

/// @param self KFontSizeAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fontsizeaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFontSizeAction*
/// @param callback int32_t func(KFontSizeAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_fontsizeaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFontSizeAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fontsizeaction_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_fontsizeaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html#fontSize)
///
/// @param self const KFontSizeAction*
///
int32_t k_fontsizeaction_font_size(const void* self);

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html#setFontSize)
///
/// @param self KFontSizeAction*
/// @param size int
///
void k_fontsizeaction_set_font_size(void* self, int size);

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html#fontSizeChanged)
///
/// @param self KFontSizeAction*
/// @param param1 int
///
void k_fontsizeaction_font_size_changed(void* self, int param1);

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html#fontSizeChanged)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, int param1)
///
void k_fontsizeaction_on_font_size_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html#slotActionTriggered)
///
/// @param self KFontSizeAction*
/// @param action QAction*
///
void k_fontsizeaction_slot_action_triggered(void* self, void* action);

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html#slotActionTriggered)
///
/// Allows for overriding the related default method
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QAction* action)
///
void k_fontsizeaction_on_slot_action_triggered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html#slotActionTriggered)
///
/// Base class method implementation
///
/// @param self KFontSizeAction*
/// @param action QAction*
///
void k_fontsizeaction_super_slot_action_triggered(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_fontsizeaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_fontsizeaction_tr3(const char* s, const char* c, int n);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#toolBarMode)
///
/// @param self const KFontSizeAction*
///
/// @return enum KSelectAction__ToolBarMode
///
int32_t k_fontsizeaction_tool_bar_mode(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setToolBarMode)
///
/// @param self KFontSizeAction*
/// @param mode enum KSelectAction__ToolBarMode
///
void k_fontsizeaction_set_tool_bar_mode(void* self, int32_t mode);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
///
/// @param self const KFontSizeAction*
///
/// @return enum QToolButton__ToolButtonPopupMode
///
int32_t k_fontsizeaction_tool_button_popup_mode(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
///
/// @param self KFontSizeAction*
/// @param mode enum QToolButton__ToolButtonPopupMode
///
void k_fontsizeaction_set_tool_button_popup_mode(void* self, int32_t mode);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#selectableActionGroup)
///
/// @param self const KFontSizeAction*
///
QActionGroup* k_fontsizeaction_selectable_action_group(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#currentAction)
///
/// @param self const KFontSizeAction*
///
QAction* k_fontsizeaction_current_action(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#currentItem)
///
/// @param self const KFontSizeAction*
///
int32_t k_fontsizeaction_current_item(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#currentText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFontSizeAction*
///
const char* k_fontsizeaction_current_text(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#actions)
///
/// @param self const KFontSizeAction*
///
/// @return libqt_list of QAction*
///
libqt_list k_fontsizeaction_actions(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#action)
///
/// @param self const KFontSizeAction*
/// @param index int
///
QAction* k_fontsizeaction_action(const void* self, int index);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#action)
///
/// @param self const KFontSizeAction*
/// @param text const char*
///
QAction* k_fontsizeaction_action2(const void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KFontSizeAction*
/// @param action QAction*
///
bool k_fontsizeaction_set_current_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentItem)
///
/// @param self KFontSizeAction*
/// @param index int
///
bool k_fontsizeaction_set_current_item(void* self, int index);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KFontSizeAction*
/// @param text const char*
///
bool k_fontsizeaction_set_current_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KFontSizeAction*
/// @param action QAction*
///
void k_fontsizeaction_add_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KFontSizeAction*
/// @param text const char*
///
QAction* k_fontsizeaction_add_action2(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
///
/// @param self KFontSizeAction*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_fontsizeaction_add_action3(void* self, const void* icon, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setItems)
///
/// @param self KFontSizeAction*
/// @param lst const char**
///
void k_fontsizeaction_set_items(void* self, const char* lst[static 1]);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#items)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KFontSizeAction*
///
const char** k_fontsizeaction_items(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#isEditable)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_editable(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setEditable)
///
/// @param self KFontSizeAction*
/// @param editable bool
///
void k_fontsizeaction_set_editable(void* self, bool editable);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#comboWidth)
///
/// @param self const KFontSizeAction*
///
int32_t k_fontsizeaction_combo_width(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setComboWidth)
///
/// @param self KFontSizeAction*
/// @param width int
///
void k_fontsizeaction_set_combo_width(void* self, int width);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
///
/// @param self KFontSizeAction*
/// @param n int
///
void k_fontsizeaction_set_max_combo_view_count(void* self, int n);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#clear)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_clear(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#removeAllActions)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_remove_all_actions(void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
///
/// @param self KFontSizeAction*
/// @param b bool
///
void k_fontsizeaction_set_menu_accels_enabled(void* self, bool b);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_menu_accels_enabled(const void* self);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#changeItem)
///
/// @param self KFontSizeAction*
/// @param index int
/// @param text const char*
///
void k_fontsizeaction_change_item(void* self, int index, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KFontSizeAction*
/// @param action QAction*
///
void k_fontsizeaction_action_triggered(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QAction* action)
///
void k_fontsizeaction_on_action_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KFontSizeAction*
/// @param index int
///
void k_fontsizeaction_index_triggered(void* self, int index);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, int index)
///
void k_fontsizeaction_on_index_triggered(void* self, void (*callback)(void*, int));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KFontSizeAction*
/// @param text const char*
///
void k_fontsizeaction_text_triggered(void* self, const char* text);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, const char* text)
///
void k_fontsizeaction_on_text_triggered(void* self, void (*callback)(void*, const char*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#action)
///
/// @param self const KFontSizeAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
///
QAction* k_fontsizeaction_action22(const void* self, const char* text, int32_t cs);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
///
/// @param self KFontSizeAction*
/// @param text const char*
/// @param cs enum Qt__CaseSensitivity
///
bool k_fontsizeaction_set_current_action22(void* self, const char* text, int32_t cs);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KFontSizeAction*
/// @param w QWidget*
///
void k_fontsizeaction_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self const KFontSizeAction*
///
QWidget* k_fontsizeaction_default_widget(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KFontSizeAction*
/// @param parent QWidget*
///
QWidget* k_fontsizeaction_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KFontSizeAction*
/// @param widget QWidget*
///
void k_fontsizeaction_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self const KFontSizeAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_fontsizeaction_associated_objects(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KFontSizeAction*
/// @param group QActionGroup*
///
void k_fontsizeaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self const KFontSizeAction*
///
QActionGroup* k_fontsizeaction_action_group(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KFontSizeAction*
/// @param icon QIcon*
///
void k_fontsizeaction_set_icon(void* self, const void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self const KFontSizeAction*
///
QIcon* k_fontsizeaction_icon(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KFontSizeAction*
/// @param text const char*
///
void k_fontsizeaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFontSizeAction*
///
const char* k_fontsizeaction_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KFontSizeAction*
/// @param text const char*
///
void k_fontsizeaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFontSizeAction*
///
const char* k_fontsizeaction_icon_text(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KFontSizeAction*
/// @param tip const char*
///
void k_fontsizeaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFontSizeAction*
///
const char* k_fontsizeaction_tool_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KFontSizeAction*
/// @param statusTip const char*
///
void k_fontsizeaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFontSizeAction*
///
const char* k_fontsizeaction_status_tip(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KFontSizeAction*
/// @param what const char*
///
void k_fontsizeaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFontSizeAction*
///
const char* k_fontsizeaction_whats_this(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KFontSizeAction*
/// @param priority enum QAction__Priority
///
void k_fontsizeaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self const KFontSizeAction*
///
/// @return enum QAction__Priority
///
int32_t k_fontsizeaction_priority(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KFontSizeAction*
/// @param b bool
///
void k_fontsizeaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_separator(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KFontSizeAction*
/// @param shortcut QKeySequence*
///
void k_fontsizeaction_set_shortcut(void* self, const void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self const KFontSizeAction*
///
QKeySequence* k_fontsizeaction_shortcut(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KFontSizeAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_fontsizeaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KFontSizeAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_fontsizeaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self const KFontSizeAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_fontsizeaction_shortcuts(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KFontSizeAction*
/// @param context enum Qt__ShortcutContext
///
void k_fontsizeaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self const KFontSizeAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_fontsizeaction_shortcut_context(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KFontSizeAction*
/// @param autoRepeat bool
///
void k_fontsizeaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_auto_repeat(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KFontSizeAction*
/// @param font QFont*
///
void k_fontsizeaction_set_font(void* self, const void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self const KFontSizeAction*
///
QFont* k_fontsizeaction_font(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KFontSizeAction*
/// @param checkable bool
///
void k_fontsizeaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_checkable(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self const KFontSizeAction*
///
QVariant* k_fontsizeaction_data(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KFontSizeAction*
/// @param var QVariant*
///
void k_fontsizeaction_set_data(void* self, const void* var);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_checked(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_enabled(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_visible(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KFontSizeAction*
/// @param event enum QAction__ActionEvent
///
void k_fontsizeaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KFontSizeAction*
/// @param menuRole enum QAction__MenuRole
///
void k_fontsizeaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self const KFontSizeAction*
///
/// @return enum QAction__MenuRole
///
int32_t k_fontsizeaction_menu_role(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KFontSizeAction*
/// @param visible bool
///
void k_fontsizeaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_icon_visible_in_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KFontSizeAction*
/// @param show bool
///
void k_fontsizeaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_shortcut_visible_in_context_menu(const void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KFontSizeAction*
///
bool k_fontsizeaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KFontSizeAction*
/// @param checked bool
///
void k_fontsizeaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KFontSizeAction*
/// @param enabled bool
///
void k_fontsizeaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KFontSizeAction*
/// @param b bool
///
void k_fontsizeaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KFontSizeAction*
/// @param visible bool
///
void k_fontsizeaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self)
///
void k_fontsizeaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KFontSizeAction*
/// @param enabled bool
///
void k_fontsizeaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, bool enabled)
///
void k_fontsizeaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KFontSizeAction*
/// @param checkable bool
///
void k_fontsizeaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, bool checkable)
///
void k_fontsizeaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self)
///
void k_fontsizeaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self)
///
void k_fontsizeaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self)
///
void k_fontsizeaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KFontSizeAction*
/// @param param1 bool
///
void k_fontsizeaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, bool param1)
///
void k_fontsizeaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KFontSizeAction*
/// @param object QObject*
///
bool k_fontsizeaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KFontSizeAction*
/// @param checked bool
///
void k_fontsizeaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, bool checked)
///
void k_fontsizeaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFontSizeAction*
///
const char* k_fontsizeaction_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFontSizeAction*
/// @param name const char*
///
void k_fontsizeaction_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFontSizeAction*
/// @param b bool
///
bool k_fontsizeaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KFontSizeAction*
///
QThread* k_fontsizeaction_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFontSizeAction*
/// @param thread QThread*
///
bool k_fontsizeaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFontSizeAction*
/// @param interval int
///
int32_t k_fontsizeaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFontSizeAction*
/// @param time int64_t of nanoseconds
///
int32_t k_fontsizeaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFontSizeAction*
/// @param id int
///
void k_fontsizeaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFontSizeAction*
/// @param id enum Qt__TimerId
///
void k_fontsizeaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KFontSizeAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_fontsizeaction_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KFontSizeAction*
/// @param parent QObject*
///
void k_fontsizeaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFontSizeAction*
/// @param filterObj QObject*
///
void k_fontsizeaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFontSizeAction*
/// @param obj QObject*
///
void k_fontsizeaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_fontsizeaction_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_fontsizeaction_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KFontSizeAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_fontsizeaction_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_fontsizeaction_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_fontsizeaction_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFontSizeAction*
///
bool k_fontsizeaction_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFontSizeAction*
/// @param receiver QObject*
///
bool k_fontsizeaction_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_fontsizeaction_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KFontSizeAction*
///
void k_fontsizeaction_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KFontSizeAction*
///
void k_fontsizeaction_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFontSizeAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_fontsizeaction_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KFontSizeAction*
/// @param name const char*
///
QVariant* k_fontsizeaction_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KFontSizeAction*
///
const char** k_fontsizeaction_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFontSizeAction*
///
QBindingStorage* k_fontsizeaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KFontSizeAction*
///
const QBindingStorage* k_fontsizeaction_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self)
///
void k_fontsizeaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KFontSizeAction*
///
QObject* k_fontsizeaction_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KFontSizeAction*
/// @param classname const char*
///
bool k_fontsizeaction_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFontSizeAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_fontsizeaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFontSizeAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_fontsizeaction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_fontsizeaction_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_fontsizeaction_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KFontSizeAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_fontsizeaction_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFontSizeAction*
/// @param signal const char*
///
bool k_fontsizeaction_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFontSizeAction*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_fontsizeaction_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFontSizeAction*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_fontsizeaction_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFontSizeAction*
/// @param receiver QObject*
/// @param member const char*
///
bool k_fontsizeaction_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFontSizeAction*
/// @param param1 QObject*
///
void k_fontsizeaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QObject* param1)
///
void k_fontsizeaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param action QAction*
///
QAction* k_fontsizeaction_remove_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param action QAction*
///
QAction* k_fontsizeaction_super_remove_action(void* self, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback QAction* func(KFontSizeAction* self, QAction* action)
///
void k_fontsizeaction_on_remove_action(void* self, QAction* (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param before QAction*
/// @param action QAction*
///
void k_fontsizeaction_insert_action(void* self, void* before, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param before QAction*
/// @param action QAction*
///
void k_fontsizeaction_super_insert_action(void* self, void* before, void* action);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QAction* before, QAction* action)
///
void k_fontsizeaction_on_insert_action(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param parent QWidget*
///
QWidget* k_fontsizeaction_create_widget(void* self, void* parent);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param parent QWidget*
///
QWidget* k_fontsizeaction_super_create_widget(void* self, void* parent);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback QWidget* func(KFontSizeAction* self, QWidget* parent)
///
void k_fontsizeaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param widget QWidget*
///
void k_fontsizeaction_delete_widget(void* self, void* widget);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param widget QWidget*
///
void k_fontsizeaction_super_delete_widget(void* self, void* widget);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QWidget* widget)
///
void k_fontsizeaction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param event QEvent*
///
bool k_fontsizeaction_event(void* self, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param event QEvent*
///
bool k_fontsizeaction_super_event(void* self, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback bool func(KFontSizeAction* self, QEvent* event)
///
void k_fontsizeaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_fontsizeaction_event_filter(void* self, void* watched, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_fontsizeaction_super_event_filter(void* self, void* watched, void* event);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback bool func(KFontSizeAction* self, QObject* watched, QEvent* event)
///
void k_fontsizeaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param event QTimerEvent*
///
void k_fontsizeaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param event QTimerEvent*
///
void k_fontsizeaction_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QTimerEvent* event)
///
void k_fontsizeaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param event QChildEvent*
///
void k_fontsizeaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param event QChildEvent*
///
void k_fontsizeaction_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QChildEvent* event)
///
void k_fontsizeaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param event QEvent*
///
void k_fontsizeaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param event QEvent*
///
void k_fontsizeaction_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QEvent* event)
///
void k_fontsizeaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param signal QMetaMethod*
///
void k_fontsizeaction_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param signal QMetaMethod*
///
void k_fontsizeaction_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QMetaMethod* signal)
///
void k_fontsizeaction_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param signal QMetaMethod*
///
void k_fontsizeaction_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param signal QMetaMethod*
///
void k_fontsizeaction_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, QMetaMethod* signal)
///
void k_fontsizeaction_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFontSizeAction*
/// @param param1 bool
///
void k_fontsizeaction_slot_toggled(void* self, bool param1);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param param1 bool
///
void k_fontsizeaction_super_slot_toggled(void* self, bool param1);

/// Inherited from KSelectAction
///
/// [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, bool param1)
///
void k_fontsizeaction_on_slot_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFontSizeAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_fontsizeaction_created_widgets(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFontSizeAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_fontsizeaction_super_created_widgets(const void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KFontSizeAction*
/// @param callback libqt_list of QWidget* func(KFontSizeAction* self)
///
void k_fontsizeaction_on_created_widgets(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFontSizeAction*
///
QObject* k_fontsizeaction_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFontSizeAction*
///
QObject* k_fontsizeaction_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KFontSizeAction*
/// @param callback QObject* func(KFontSizeAction* self)
///
void k_fontsizeaction_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFontSizeAction*
///
int32_t k_fontsizeaction_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFontSizeAction*
///
int32_t k_fontsizeaction_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KFontSizeAction*
/// @param callback int32_t func(KFontSizeAction* self)
///
void k_fontsizeaction_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFontSizeAction*
/// @param signal const char*
///
int32_t k_fontsizeaction_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFontSizeAction*
/// @param signal const char*
///
int32_t k_fontsizeaction_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KFontSizeAction*
/// @param callback int32_t func(KFontSizeAction* self, const char* signal)
///
void k_fontsizeaction_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFontSizeAction*
/// @param signal QMetaMethod*
///
bool k_fontsizeaction_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFontSizeAction*
/// @param signal QMetaMethod*
///
bool k_fontsizeaction_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KFontSizeAction*
/// @param callback bool func(KFontSizeAction* self, QMetaMethod* signal)
///
void k_fontsizeaction_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFontSizeAction*
/// @param callback void func(KFontSizeAction* self, const char* objectName)
///
void k_fontsizeaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfontsizeaction.html#dtor.KFontSizeAction)
///
/// Delete this object from C++ memory.
///
/// @param self KFontSizeAction*
///
void k_fontsizeaction_delete(void* self);

#endif
