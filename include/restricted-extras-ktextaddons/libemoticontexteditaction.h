#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBEMOTICONTEXTEDITACTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBEMOTICONTEXTEDITACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)

/// k_textemoticonswidgets__emoticontexteditaction_new constructs a new TextEmoticonsWidgets::EmoticonTextEditAction object.
///
/// @param parent QObject*
///
TextEmoticonsWidgets__EmoticonTextEditAction* k_textemoticonswidgets__emoticontexteditaction_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const QMetaObject* k_textemoticonswidgets__emoticontexteditaction_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// Allows for overriding the related default method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback const QMetaObject* func()
///
void k_textemoticonswidgets__emoticontexteditaction_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_meta_object` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_meta_object k_textemoticonswidgets__emoticontexteditaction_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// Base class method implementation
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const QMetaObject* k_textemoticonswidgets__emoticontexteditaction_super_meta_object(void* self);

/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 const char*
///
void* k_textemoticonswidgets__emoticontexteditaction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void* func(TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* param1)
///
void k_textemoticonswidgets__emoticontexteditaction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_metacast` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_metacast k_textemoticonswidgets__emoticontexteditaction_super_metacast

/// Base class method implementation
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 const char*
///
void* k_textemoticonswidgets__emoticontexteditaction_super_metacast(void* self, const char* param1);

/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textemoticonswidgets__emoticontexteditaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback int32_t func(TextEmoticonsWidgets__EmoticonTextEditAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textemoticonswidgets__emoticontexteditaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_metacall` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_metacall k_textemoticonswidgets__emoticontexteditaction_super_metacall

/// Base class method implementation
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textemoticonswidgets__emoticontexteditaction_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textemoticonswidgets__emoticontexteditaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param b bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_custom_emoji_support(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_custom_emoji_support(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 const char*
///
void k_textemoticonswidgets__emoticontexteditaction_insert_emoticon(void* self, const char* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* param1)
///
void k_textemoticonswidgets__emoticontexteditaction_on_insert_emoticon(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textemoticonswidgets__emoticontexteditaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textemoticonswidgets__emoticontexteditaction_tr3(const char* s, const char* c, int n);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#addAction)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param action QAction*
///
void k_textemoticonswidgets__emoticontexteditaction_add_action(void* self, void* action);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#addSeparator)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QAction* k_textemoticonswidgets__emoticontexteditaction_add_separator(void* self);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#insertAction)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param before QAction*
/// @param action QAction*
///
void k_textemoticonswidgets__emoticontexteditaction_insert_action(void* self, void* before, void* action);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#insertSeparator)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param before QAction*
///
QAction* k_textemoticonswidgets__emoticontexteditaction_insert_separator(void* self, void* before);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#removeAction)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param action QAction*
///
void k_textemoticonswidgets__emoticontexteditaction_remove_action(void* self, void* action);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#popupMode)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
/// @return enum QToolButton__ToolButtonPopupMode
///
int32_t k_textemoticonswidgets__emoticontexteditaction_popup_mode(void* self);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#setPopupMode)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param popupMode enum QToolButton__ToolButtonPopupMode
///
void k_textemoticonswidgets__emoticontexteditaction_set_popup_mode(void* self, int32_t popupMode);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param w QWidget*
///
void k_textemoticonswidgets__emoticontexteditaction_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QWidget* k_textemoticonswidgets__emoticontexteditaction_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param parent QWidget*
///
QWidget* k_textemoticonswidgets__emoticontexteditaction_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param widget QWidget*
///
void k_textemoticonswidgets__emoticontexteditaction_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_textemoticonswidgets__emoticontexteditaction_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param group QActionGroup*
///
void k_textemoticonswidgets__emoticontexteditaction_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QActionGroup* k_textemoticonswidgets__emoticontexteditaction_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param icon QIcon*
///
void k_textemoticonswidgets__emoticontexteditaction_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QIcon* k_textemoticonswidgets__emoticontexteditaction_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param text const char*
///
void k_textemoticonswidgets__emoticontexteditaction_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const char* k_textemoticonswidgets__emoticontexteditaction_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param text const char*
///
void k_textemoticonswidgets__emoticontexteditaction_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const char* k_textemoticonswidgets__emoticontexteditaction_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param tip const char*
///
void k_textemoticonswidgets__emoticontexteditaction_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const char* k_textemoticonswidgets__emoticontexteditaction_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param statusTip const char*
///
void k_textemoticonswidgets__emoticontexteditaction_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const char* k_textemoticonswidgets__emoticontexteditaction_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param what const char*
///
void k_textemoticonswidgets__emoticontexteditaction_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const char* k_textemoticonswidgets__emoticontexteditaction_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param priority enum QAction__Priority
///
void k_textemoticonswidgets__emoticontexteditaction_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
/// @return enum QAction__Priority
///
int32_t k_textemoticonswidgets__emoticontexteditaction_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param b bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param shortcut QKeySequence*
///
void k_textemoticonswidgets__emoticontexteditaction_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QKeySequence* k_textemoticonswidgets__emoticontexteditaction_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_textemoticonswidgets__emoticontexteditaction_set_shortcuts(void* self, libqt_list shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_textemoticonswidgets__emoticontexteditaction_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_textemoticonswidgets__emoticontexteditaction_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param context enum Qt__ShortcutContext
///
void k_textemoticonswidgets__emoticontexteditaction_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_textemoticonswidgets__emoticontexteditaction_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param autoRepeat bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param font QFont*
///
void k_textemoticonswidgets__emoticontexteditaction_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QFont* k_textemoticonswidgets__emoticontexteditaction_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param checkable bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QVariant* k_textemoticonswidgets__emoticontexteditaction_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param varVal QVariant*
///
void k_textemoticonswidgets__emoticontexteditaction_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param event enum QAction__ActionEvent
///
void k_textemoticonswidgets__emoticontexteditaction_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param menuRole enum QAction__MenuRole
///
void k_textemoticonswidgets__emoticontexteditaction_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
/// @return enum QAction__MenuRole
///
int32_t k_textemoticonswidgets__emoticontexteditaction_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param visible bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param show bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param checked bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param enabled bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param b bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param visible bool
///
void k_textemoticonswidgets__emoticontexteditaction_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self)
///
void k_textemoticonswidgets__emoticontexteditaction_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param enabled bool
///
void k_textemoticonswidgets__emoticontexteditaction_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, bool enabled)
///
void k_textemoticonswidgets__emoticontexteditaction_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param checkable bool
///
void k_textemoticonswidgets__emoticontexteditaction_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, bool checkable)
///
void k_textemoticonswidgets__emoticontexteditaction_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self)
///
void k_textemoticonswidgets__emoticontexteditaction_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self)
///
void k_textemoticonswidgets__emoticontexteditaction_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self)
///
void k_textemoticonswidgets__emoticontexteditaction_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 bool
///
void k_textemoticonswidgets__emoticontexteditaction_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, bool param1)
///
void k_textemoticonswidgets__emoticontexteditaction_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param object QObject*
///
bool k_textemoticonswidgets__emoticontexteditaction_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param checked bool
///
void k_textemoticonswidgets__emoticontexteditaction_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, bool checked)
///
void k_textemoticonswidgets__emoticontexteditaction_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const char* k_textemoticonswidgets__emoticontexteditaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param name const char*
///
void k_textemoticonswidgets__emoticontexteditaction_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param b bool
///
bool k_textemoticonswidgets__emoticontexteditaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QThread* k_textemoticonswidgets__emoticontexteditaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param thread QThread*
///
bool k_textemoticonswidgets__emoticontexteditaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param interval int
///
int32_t k_textemoticonswidgets__emoticontexteditaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param time int64_t of nanoseconds
///
int32_t k_textemoticonswidgets__emoticontexteditaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param id int
///
void k_textemoticonswidgets__emoticontexteditaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param id enum Qt__TimerId
///
void k_textemoticonswidgets__emoticontexteditaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_textemoticonswidgets__emoticontexteditaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param parent QObject*
///
void k_textemoticonswidgets__emoticontexteditaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param filterObj QObject*
///
void k_textemoticonswidgets__emoticontexteditaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param obj QObject*
///
void k_textemoticonswidgets__emoticontexteditaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textemoticonswidgets__emoticontexteditaction_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textemoticonswidgets__emoticontexteditaction_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
bool k_textemoticonswidgets__emoticontexteditaction_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param receiver QObject*
///
bool k_textemoticonswidgets__emoticontexteditaction_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textemoticonswidgets__emoticontexteditaction_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_textemoticonswidgets__emoticontexteditaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param name const char*
///
QVariant* k_textemoticonswidgets__emoticontexteditaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const char** k_textemoticonswidgets__emoticontexteditaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QBindingStorage* k_textemoticonswidgets__emoticontexteditaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
const QBindingStorage* k_textemoticonswidgets__emoticontexteditaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self)
///
void k_textemoticonswidgets__emoticontexteditaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QObject* k_textemoticonswidgets__emoticontexteditaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param classname const char*
///
bool k_textemoticonswidgets__emoticontexteditaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textemoticonswidgets__emoticontexteditaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textemoticonswidgets__emoticontexteditaction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textemoticonswidgets__emoticontexteditaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal const char*
///
bool k_textemoticonswidgets__emoticontexteditaction_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textemoticonswidgets__emoticontexteditaction_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textemoticonswidgets__emoticontexteditaction_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textemoticonswidgets__emoticontexteditaction_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 QObject*
///
void k_textemoticonswidgets__emoticontexteditaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QObject* param1)
///
void k_textemoticonswidgets__emoticontexteditaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param parent QWidget*
///
QWidget* k_textemoticonswidgets__emoticontexteditaction_create_widget(void* self, void* parent);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_create_widget` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_create_widget k_textemoticonswidgets__emoticontexteditaction_super_create_widget

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param parent QWidget*
///
QWidget* k_textemoticonswidgets__emoticontexteditaction_super_create_widget(void* self, void* parent);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback QWidget* func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* parent)
///
void k_textemoticonswidgets__emoticontexteditaction_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 QEvent*
///
bool k_textemoticonswidgets__emoticontexteditaction_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_event` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_event k_textemoticonswidgets__emoticontexteditaction_super_event

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 QEvent*
///
bool k_textemoticonswidgets__emoticontexteditaction_super_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback bool func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* param1)
///
void k_textemoticonswidgets__emoticontexteditaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textemoticonswidgets__emoticontexteditaction_event_filter(void* self, void* param1, void* param2);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_event_filter` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_event_filter k_textemoticonswidgets__emoticontexteditaction_super_event_filter

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textemoticonswidgets__emoticontexteditaction_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback bool func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QObject* param1, QEvent* param2)
///
void k_textemoticonswidgets__emoticontexteditaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param widget QWidget*
///
void k_textemoticonswidgets__emoticontexteditaction_delete_widget(void* self, void* widget);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_delete_widget` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_delete_widget k_textemoticonswidgets__emoticontexteditaction_super_delete_widget

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param widget QWidget*
///
void k_textemoticonswidgets__emoticontexteditaction_super_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* widget)
///
void k_textemoticonswidgets__emoticontexteditaction_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param event QTimerEvent*
///
void k_textemoticonswidgets__emoticontexteditaction_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_timer_event` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_timer_event k_textemoticonswidgets__emoticontexteditaction_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param event QTimerEvent*
///
void k_textemoticonswidgets__emoticontexteditaction_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QTimerEvent* event)
///
void k_textemoticonswidgets__emoticontexteditaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param event QChildEvent*
///
void k_textemoticonswidgets__emoticontexteditaction_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_child_event` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_child_event k_textemoticonswidgets__emoticontexteditaction_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param event QChildEvent*
///
void k_textemoticonswidgets__emoticontexteditaction_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QChildEvent* event)
///
void k_textemoticonswidgets__emoticontexteditaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param event QEvent*
///
void k_textemoticonswidgets__emoticontexteditaction_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_custom_event` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_custom_event k_textemoticonswidgets__emoticontexteditaction_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param event QEvent*
///
void k_textemoticonswidgets__emoticontexteditaction_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* event)
///
void k_textemoticonswidgets__emoticontexteditaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal QMetaMethod*
///
void k_textemoticonswidgets__emoticontexteditaction_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_connect_notify` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_connect_notify k_textemoticonswidgets__emoticontexteditaction_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal QMetaMethod*
///
void k_textemoticonswidgets__emoticontexteditaction_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QMetaMethod* signal)
///
void k_textemoticonswidgets__emoticontexteditaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal QMetaMethod*
///
void k_textemoticonswidgets__emoticontexteditaction_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_disconnect_notify` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_disconnect_notify k_textemoticonswidgets__emoticontexteditaction_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal QMetaMethod*
///
void k_textemoticonswidgets__emoticontexteditaction_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QMetaMethod* signal)
///
void k_textemoticonswidgets__emoticontexteditaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_textemoticonswidgets__emoticontexteditaction_created_widgets(void* self);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_created_widgets` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_created_widgets k_textemoticonswidgets__emoticontexteditaction_super_created_widgets

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
/// @return libqt_list of QWidget*
///
libqt_list k_textemoticonswidgets__emoticontexteditaction_super_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback libqt_list of QWidget* func()
///
void k_textemoticonswidgets__emoticontexteditaction_on_created_widgets(void* self, libqt_list (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QObject* k_textemoticonswidgets__emoticontexteditaction_sender(void* self);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_sender` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_sender k_textemoticonswidgets__emoticontexteditaction_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
QObject* k_textemoticonswidgets__emoticontexteditaction_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback QObject* func()
///
void k_textemoticonswidgets__emoticontexteditaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
int32_t k_textemoticonswidgets__emoticontexteditaction_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_sender_signal_index` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_sender_signal_index k_textemoticonswidgets__emoticontexteditaction_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
int32_t k_textemoticonswidgets__emoticontexteditaction_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback int32_t func()
///
void k_textemoticonswidgets__emoticontexteditaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal const char*
///
int32_t k_textemoticonswidgets__emoticontexteditaction_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_receivers` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_receivers k_textemoticonswidgets__emoticontexteditaction_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal const char*
///
int32_t k_textemoticonswidgets__emoticontexteditaction_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback int32_t func(TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* signal)
///
void k_textemoticonswidgets__emoticontexteditaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal QMetaMethod*
///
bool k_textemoticonswidgets__emoticontexteditaction_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textemoticonswidgets__emoticontexteditaction_super_is_signal_connected` instead
///
#define k_textemoticonswidgets__emoticontexteditaction_qbase_is_signal_connected k_textemoticonswidgets__emoticontexteditaction_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param signal QMetaMethod*
///
bool k_textemoticonswidgets__emoticontexteditaction_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback bool func(TextEmoticonsWidgets__EmoticonTextEditAction* self, QMetaMethod* signal)
///
void k_textemoticonswidgets__emoticontexteditaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
/// @param callback void func(TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* objectName)
///
void k_textemoticonswidgets__emoticontexteditaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextEmoticonsWidgets__EmoticonTextEditAction*
///
void k_textemoticonswidgets__emoticontexteditaction_delete(void* self);

#endif
