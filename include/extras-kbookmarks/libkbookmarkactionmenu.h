#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKS_QT6C_LIBKBOOKMARKACTIONMENU_H
#define SRC_EXTRAS_KBOOKMARKS_QT6C_LIBKBOOKMARKACTIONMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kbookmarkactionmenu.html)

/// k_bookmarkactionmenu_new constructs a new KBookmarkActionMenu object.
///
/// @param bm KBookmark*
/// @param parent QObject*
///
KBookmarkActionMenu* k_bookmarkactionmenu_new(void* bm, void* parent);

/// [Upstream resources](https://api.kde.org/kbookmarkactionmenu.html)

/// k_bookmarkactionmenu_new2 constructs a new KBookmarkActionMenu object.
///
/// @param bm KBookmark*
/// @param text const char*
/// @param parent QObject*
///
KBookmarkActionMenu* k_bookmarkactionmenu_new2(void* bm, const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KBookmarkActionMenu*
///
const QMetaObject* k_bookmarkactionmenu_meta_object(void* self);

/// @param self KBookmarkActionMenu*
/// @param param1 const char*
///
void* k_bookmarkactionmenu_metacast(void* self, const char* param1);

/// @param self KBookmarkActionMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_bookmarkactionmenu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KBookmarkActionMenu*
/// @param callback int32_t func(KBookmarkActionMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_bookmarkactionmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KBookmarkActionMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_bookmarkactionmenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_bookmarkactionmenu_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_bookmarkactionmenu_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_bookmarkactionmenu_tr3(const char* s, const char* c, int n);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#addAction)
///
/// @param self KBookmarkActionMenu*
/// @param action QAction*
///
void k_bookmarkactionmenu_add_action(void* self, void* action);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#addSeparator)
///
/// @param self KBookmarkActionMenu*
///
QAction* k_bookmarkactionmenu_add_separator(void* self);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#insertAction)
///
/// @param self KBookmarkActionMenu*
/// @param before QAction*
/// @param action QAction*
///
void k_bookmarkactionmenu_insert_action(void* self, void* before, void* action);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#insertSeparator)
///
/// @param self KBookmarkActionMenu*
/// @param before QAction*
///
QAction* k_bookmarkactionmenu_insert_separator(void* self, void* before);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#removeAction)
///
/// @param self KBookmarkActionMenu*
/// @param action QAction*
///
void k_bookmarkactionmenu_remove_action(void* self, void* action);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#popupMode)
///
/// @param self KBookmarkActionMenu*
///
/// @return enum QToolButton__ToolButtonPopupMode
///
int32_t k_bookmarkactionmenu_popup_mode(void* self);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#setPopupMode)
///
/// @param self KBookmarkActionMenu*
/// @param popupMode enum QToolButton__ToolButtonPopupMode
///
void k_bookmarkactionmenu_set_popup_mode(void* self, int32_t popupMode);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// @param self KBookmarkActionMenu*
/// @param w QWidget*
///
void k_bookmarkactionmenu_set_default_widget(void* self, void* w);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// @param self KBookmarkActionMenu*
///
QWidget* k_bookmarkactionmenu_default_widget(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// @param self KBookmarkActionMenu*
/// @param parent QWidget*
///
QWidget* k_bookmarkactionmenu_request_widget(void* self, void* parent);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// @param self KBookmarkActionMenu*
/// @param widget QWidget*
///
void k_bookmarkactionmenu_release_widget(void* self, void* widget);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// @param self KBookmarkActionMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_bookmarkactionmenu_associated_objects(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// @param self KBookmarkActionMenu*
/// @param group QActionGroup*
///
void k_bookmarkactionmenu_set_action_group(void* self, void* group);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// @param self KBookmarkActionMenu*
///
QActionGroup* k_bookmarkactionmenu_action_group(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// @param self KBookmarkActionMenu*
/// @param icon QIcon*
///
void k_bookmarkactionmenu_set_icon(void* self, void* icon);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// @param self KBookmarkActionMenu*
///
QIcon* k_bookmarkactionmenu_icon(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// @param self KBookmarkActionMenu*
/// @param text const char*
///
void k_bookmarkactionmenu_set_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KBookmarkActionMenu*
///
const char* k_bookmarkactionmenu_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// @param self KBookmarkActionMenu*
/// @param text const char*
///
void k_bookmarkactionmenu_set_icon_text(void* self, const char* text);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KBookmarkActionMenu*
///
const char* k_bookmarkactionmenu_icon_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// @param self KBookmarkActionMenu*
/// @param tip const char*
///
void k_bookmarkactionmenu_set_tool_tip(void* self, const char* tip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KBookmarkActionMenu*
///
const char* k_bookmarkactionmenu_tool_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// @param self KBookmarkActionMenu*
/// @param statusTip const char*
///
void k_bookmarkactionmenu_set_status_tip(void* self, const char* statusTip);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KBookmarkActionMenu*
///
const char* k_bookmarkactionmenu_status_tip(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// @param self KBookmarkActionMenu*
/// @param what const char*
///
void k_bookmarkactionmenu_set_whats_this(void* self, const char* what);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KBookmarkActionMenu*
///
const char* k_bookmarkactionmenu_whats_this(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// @param self KBookmarkActionMenu*
/// @param priority enum QAction__Priority
///
void k_bookmarkactionmenu_set_priority(void* self, int32_t priority);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// @param self KBookmarkActionMenu*
///
/// @return enum QAction__Priority
///
int32_t k_bookmarkactionmenu_priority(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// @param self KBookmarkActionMenu*
/// @param b bool
///
void k_bookmarkactionmenu_set_separator(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_separator(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// @param self KBookmarkActionMenu*
/// @param shortcut QKeySequence*
///
void k_bookmarkactionmenu_set_shortcut(void* self, void* shortcut);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// @param self KBookmarkActionMenu*
///
QKeySequence* k_bookmarkactionmenu_shortcut(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KBookmarkActionMenu*
/// @param shortcuts libqt_list of QKeySequence*
///
void k_bookmarkactionmenu_set_shortcuts(void* self, libqt_list /* of QKeySequence* */ shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// @param self KBookmarkActionMenu*
/// @param shortcuts enum QKeySequence__StandardKey
///
void k_bookmarkactionmenu_set_shortcuts2(void* self, int32_t shortcuts);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// @param self KBookmarkActionMenu*
///
/// @return libqt_list of QKeySequence*
///
libqt_list k_bookmarkactionmenu_shortcuts(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// @param self KBookmarkActionMenu*
/// @param context enum Qt__ShortcutContext
///
void k_bookmarkactionmenu_set_shortcut_context(void* self, int32_t context);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// @param self KBookmarkActionMenu*
///
/// @return enum Qt__ShortcutContext
///
int32_t k_bookmarkactionmenu_shortcut_context(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// @param self KBookmarkActionMenu*
/// @param autoRepeat bool
///
void k_bookmarkactionmenu_set_auto_repeat(void* self, bool autoRepeat);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_auto_repeat(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// @param self KBookmarkActionMenu*
/// @param font QFont*
///
void k_bookmarkactionmenu_set_font(void* self, void* font);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
///
/// @param self KBookmarkActionMenu*
///
QFont* k_bookmarkactionmenu_font(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// @param self KBookmarkActionMenu*
/// @param checkable bool
///
void k_bookmarkactionmenu_set_checkable(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_checkable(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
///
/// @param self KBookmarkActionMenu*
///
QVariant* k_bookmarkactionmenu_data(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// @param self KBookmarkActionMenu*
/// @param varVal QVariant*
///
void k_bookmarkactionmenu_set_data(void* self, void* varVal);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_checked(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_visible(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// @param self KBookmarkActionMenu*
/// @param event enum QAction__ActionEvent
///
void k_bookmarkactionmenu_activate(void* self, int32_t event);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// @param self KBookmarkActionMenu*
/// @param menuRole enum QAction__MenuRole
///
void k_bookmarkactionmenu_set_menu_role(void* self, int32_t menuRole);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// @param self KBookmarkActionMenu*
///
/// @return enum QAction__MenuRole
///
int32_t k_bookmarkactionmenu_menu_role(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// @param self KBookmarkActionMenu*
/// @param visible bool
///
void k_bookmarkactionmenu_set_icon_visible_in_menu(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_icon_visible_in_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// @param self KBookmarkActionMenu*
/// @param show bool
///
void k_bookmarkactionmenu_set_shortcut_visible_in_context_menu(void* self, bool show);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_shortcut_visible_in_context_menu(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_show_status_text(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_trigger(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_hover(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// @param self KBookmarkActionMenu*
/// @param checked bool
///
void k_bookmarkactionmenu_set_checked(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_toggle(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// @param self KBookmarkActionMenu*
/// @param enabled bool
///
void k_bookmarkactionmenu_set_enabled(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_reset_enabled(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// @param self KBookmarkActionMenu*
/// @param b bool
///
void k_bookmarkactionmenu_set_disabled(void* self, bool b);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// @param self KBookmarkActionMenu*
/// @param visible bool
///
void k_bookmarkactionmenu_set_visible(void* self, bool visible);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self)
///
void k_bookmarkactionmenu_on_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KBookmarkActionMenu*
/// @param enabled bool
///
void k_bookmarkactionmenu_enabled_changed(void* self, bool enabled);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, bool enabled)
///
void k_bookmarkactionmenu_on_enabled_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KBookmarkActionMenu*
/// @param checkable bool
///
void k_bookmarkactionmenu_checkable_changed(void* self, bool checkable);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, bool checkable)
///
void k_bookmarkactionmenu_on_checkable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_visible_changed(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self)
///
void k_bookmarkactionmenu_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_triggered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self)
///
void k_bookmarkactionmenu_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_hovered(void* self);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self)
///
void k_bookmarkactionmenu_on_hovered(void* self, void (*callback)(void*));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KBookmarkActionMenu*
/// @param param1 bool
///
void k_bookmarkactionmenu_toggled(void* self, bool param1);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, bool param1)
///
void k_bookmarkactionmenu_on_toggled(void* self, void (*callback)(void*, bool));

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// @param self KBookmarkActionMenu*
/// @param object QObject*
///
bool k_bookmarkactionmenu_show_status_text1(void* self, void* object);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KBookmarkActionMenu*
/// @param checked bool
///
void k_bookmarkactionmenu_triggered1(void* self, bool checked);

/// Inherited from QAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, bool checked)
///
void k_bookmarkactionmenu_on_triggered1(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KBookmarkActionMenu*
///
const char* k_bookmarkactionmenu_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KBookmarkActionMenu*
/// @param name char*
///
void k_bookmarkactionmenu_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KBookmarkActionMenu*
///
bool k_bookmarkactionmenu_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KBookmarkActionMenu*
/// @param b bool
///
bool k_bookmarkactionmenu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KBookmarkActionMenu*
///
QThread* k_bookmarkactionmenu_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBookmarkActionMenu*
/// @param thread QThread*
///
bool k_bookmarkactionmenu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkActionMenu*
/// @param interval int
///
int32_t k_bookmarkactionmenu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBookmarkActionMenu*
/// @param id int
///
void k_bookmarkactionmenu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBookmarkActionMenu*
/// @param id enum Qt__TimerId
///
void k_bookmarkactionmenu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KBookmarkActionMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_bookmarkactionmenu_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KBookmarkActionMenu*
/// @param parent QObject*
///
void k_bookmarkactionmenu_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KBookmarkActionMenu*
/// @param filterObj QObject*
///
void k_bookmarkactionmenu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KBookmarkActionMenu*
/// @param obj QObject*
///
void k_bookmarkactionmenu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_bookmarkactionmenu_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KBookmarkActionMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_bookmarkactionmenu_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_bookmarkactionmenu_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_bookmarkactionmenu_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KBookmarkActionMenu*
/// @param name const char*
/// @param value QVariant*
///
bool k_bookmarkactionmenu_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KBookmarkActionMenu*
/// @param name const char*
///
QVariant* k_bookmarkactionmenu_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KBookmarkActionMenu*
///
const char** k_bookmarkactionmenu_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBookmarkActionMenu*
///
QBindingStorage* k_bookmarkactionmenu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBookmarkActionMenu*
///
const QBindingStorage* k_bookmarkactionmenu_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self)
///
void k_bookmarkactionmenu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KBookmarkActionMenu*
///
QObject* k_bookmarkactionmenu_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KBookmarkActionMenu*
/// @param classname const char*
///
bool k_bookmarkactionmenu_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBookmarkActionMenu*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_bookmarkactionmenu_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkActionMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_bookmarkactionmenu_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_bookmarkactionmenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KBookmarkActionMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_bookmarkactionmenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkActionMenu*
/// @param param1 QObject*
///
void k_bookmarkactionmenu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, QObject* param1)
///
void k_bookmarkactionmenu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KBookmarkActionInterface
///
/// [Upstream resources](https://api.kde.org/kbookmarkactioninterface.html#bookmark)
///
/// @param self KBookmarkActionMenu*
///
const KBookmark* k_bookmarkactionmenu_bookmark(void* self);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param parent QWidget*
///
QWidget* k_bookmarkactionmenu_create_widget(void* self, void* parent);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param parent QWidget*
///
QWidget* k_bookmarkactionmenu_qbase_create_widget(void* self, void* parent);

/// Inherited from KActionMenu
///
/// [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback QWidget* func(KBookmarkActionMenu* self, QWidget* parent)
///
void k_bookmarkactionmenu_on_create_widget(void* self, QWidget* (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param param1 QEvent*
///
bool k_bookmarkactionmenu_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param param1 QEvent*
///
bool k_bookmarkactionmenu_qbase_event(void* self, void* param1);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback bool func(KBookmarkActionMenu* self, QEvent* param1)
///
void k_bookmarkactionmenu_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_bookmarkactionmenu_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_bookmarkactionmenu_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback bool func(KBookmarkActionMenu* self, QObject* param1, QEvent* param2)
///
void k_bookmarkactionmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param widget QWidget*
///
void k_bookmarkactionmenu_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param widget QWidget*
///
void k_bookmarkactionmenu_qbase_delete_widget(void* self, void* widget);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, QWidget* widget)
///
void k_bookmarkactionmenu_on_delete_widget(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param event QTimerEvent*
///
void k_bookmarkactionmenu_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param event QTimerEvent*
///
void k_bookmarkactionmenu_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, QTimerEvent* event)
///
void k_bookmarkactionmenu_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param event QChildEvent*
///
void k_bookmarkactionmenu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param event QChildEvent*
///
void k_bookmarkactionmenu_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, QChildEvent* event)
///
void k_bookmarkactionmenu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param event QEvent*
///
void k_bookmarkactionmenu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param event QEvent*
///
void k_bookmarkactionmenu_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, QEvent* event)
///
void k_bookmarkactionmenu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkactionmenu_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkactionmenu_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, QMetaMethod* signal)
///
void k_bookmarkactionmenu_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkactionmenu_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkactionmenu_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, QMetaMethod* signal)
///
void k_bookmarkactionmenu_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
///
/// @return libqt_list of QWidget*
///
libqt_list k_bookmarkactionmenu_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
///
/// @return libqt_list of QWidget*
///
libqt_list k_bookmarkactionmenu_qbase_created_widgets(void* self);

/// Inherited from QWidgetAction
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback QWidget** func()
///
void k_bookmarkactionmenu_on_created_widgets(void* self, QWidget** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
///
QObject* k_bookmarkactionmenu_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
///
QObject* k_bookmarkactionmenu_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback QObject* func()
///
void k_bookmarkactionmenu_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
///
int32_t k_bookmarkactionmenu_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
///
int32_t k_bookmarkactionmenu_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback int32_t func()
///
void k_bookmarkactionmenu_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param signal const char*
///
int32_t k_bookmarkactionmenu_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param signal const char*
///
int32_t k_bookmarkactionmenu_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback int32_t func(KBookmarkActionMenu* self, const char* signal)
///
void k_bookmarkactionmenu_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param signal QMetaMethod*
///
bool k_bookmarkactionmenu_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param signal QMetaMethod*
///
bool k_bookmarkactionmenu_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkActionMenu*
/// @param callback bool func(KBookmarkActionMenu* self, QMetaMethod* signal)
///
void k_bookmarkactionmenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KBookmarkActionMenu*
/// @param callback void func(KBookmarkActionMenu* self, const char* objectName)
///
void k_bookmarkactionmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kbookmarkactionmenu.html#dtor.KBookmarkActionMenu)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmarkActionMenu*
///
void k_bookmarkactionmenu_delete(void* self);

#endif
