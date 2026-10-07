#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARKCONTEXTMENU_H
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARKCONTEXTMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html)

/// k_bookmarkcontextmenu_new constructs a new KBookmarkContextMenu object.
///
/// @param bm KBookmark*
/// @param manager KBookmarkManager*
/// @param owner KBookmarkOwner*
///
KBookmarkContextMenu* k_bookmarkcontextmenu_new(const void* bm, void* manager, void* owner);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html)

/// k_bookmarkcontextmenu_new2 constructs a new KBookmarkContextMenu object.
///
/// @param bm KBookmark*
/// @param manager KBookmarkManager*
/// @param owner KBookmarkOwner*
/// @param parent QWidget*
///
KBookmarkContextMenu* k_bookmarkcontextmenu_new2(const void* bm, void* manager, void* owner, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KBookmarkContextMenu*
///
const QMetaObject* k_bookmarkcontextmenu_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkContextMenu*
/// @param callback const QMetaObject* func(const KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KBookmarkContextMenu*
///
const QMetaObject* k_bookmarkcontextmenu_super_meta_object(const void* self);

/// @param self KBookmarkContextMenu*
/// @param param1 const char*
///
void* k_bookmarkcontextmenu_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KBookmarkContextMenu*
/// @param callback void* func(KBookmarkContextMenu* self, const char* param1)
///
void k_bookmarkcontextmenu_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KBookmarkContextMenu*
/// @param param1 const char*
///
void* k_bookmarkcontextmenu_super_metacast(void* self, const char* param1);

/// @param self KBookmarkContextMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_bookmarkcontextmenu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KBookmarkContextMenu*
/// @param callback int32_t func(KBookmarkContextMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_bookmarkcontextmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KBookmarkContextMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_bookmarkcontextmenu_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_bookmarkcontextmenu_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addActions)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_add_actions(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addActions)
///
/// Allows for overriding the related default method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_add_actions(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addActions)
///
/// Base class method implementation
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_super_add_actions(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#setBrowserMode)
///
/// @param self KBookmarkContextMenu*
/// @param browserMode bool
///
void k_bookmarkcontextmenu_set_browser_mode(void* self, bool browserMode);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#browserMode)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_browser_mode(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotEditAt)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_slot_edit_at(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotProperties)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_slot_properties(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotInsert)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_slot_insert(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotRemove)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_slot_remove(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotCopyLocation)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_slot_copy_location(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotOpenFolderInTabs)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_slot_open_folder_in_tabs(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addBookmark)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_add_bookmark(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addFolderActions)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_add_folder_actions(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addProperties)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_add_properties(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addBookmarkActions)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_add_bookmark_actions(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addOpenFolderInTabs)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_add_open_folder_in_tabs(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#manager)
///
/// @param self const KBookmarkContextMenu*
///
KBookmarkManager* k_bookmarkcontextmenu_manager(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#owner)
///
/// @param self const KBookmarkContextMenu*
///
KBookmarkOwner* k_bookmarkcontextmenu_owner(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#bookmark)
///
/// @param self const KBookmarkContextMenu*
///
KBookmark* k_bookmarkcontextmenu_bookmark(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_bookmarkcontextmenu_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_bookmarkcontextmenu_tr3(const char* s, const char* c, int n);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self KBookmarkContextMenu*
/// @param menu QMenu*
///
QAction* k_bookmarkcontextmenu_add_menu(void* self, void* menu);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self KBookmarkContextMenu*
/// @param title const char*
///
QMenu* k_bookmarkcontextmenu_add_menu2(void* self, const char* title);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self KBookmarkContextMenu*
/// @param icon QIcon*
/// @param title const char*
///
QMenu* k_bookmarkcontextmenu_add_menu3(void* self, const void* icon, const char* title);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSeparator)
///
/// @param self KBookmarkContextMenu*
///
QAction* k_bookmarkcontextmenu_add_separator(void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// @param self KBookmarkContextMenu*
/// @param text const char*
///
QAction* k_bookmarkcontextmenu_add_section(void* self, const char* text);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// @param self KBookmarkContextMenu*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_bookmarkcontextmenu_add_section2(void* self, const void* icon, const char* text);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertMenu)
///
/// @param self KBookmarkContextMenu*
/// @param before QAction*
/// @param menu QMenu*
///
QAction* k_bookmarkcontextmenu_insert_menu(void* self, void* before, void* menu);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSeparator)
///
/// @param self KBookmarkContextMenu*
/// @param before QAction*
///
QAction* k_bookmarkcontextmenu_insert_separator(void* self, void* before);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// @param self KBookmarkContextMenu*
/// @param before QAction*
/// @param text const char*
///
QAction* k_bookmarkcontextmenu_insert_section(void* self, void* before, const char* text);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// @param self KBookmarkContextMenu*
/// @param before QAction*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_bookmarkcontextmenu_insert_section2(void* self, void* before, const void* icon, const char* text);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isEmpty)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_empty(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#clear)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_clear(void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setTearOffEnabled)
///
/// @param self KBookmarkContextMenu*
/// @param tearOffEnabled bool
///
void k_bookmarkcontextmenu_set_tear_off_enabled(void* self, bool tearOffEnabled);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isTearOffEnabled)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_tear_off_enabled(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isTearOffMenuVisible)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_tear_off_menu_visible(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_show_tear_off_menu(void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// @param self KBookmarkContextMenu*
/// @param pos QPoint*
///
void k_bookmarkcontextmenu_show_tear_off_menu2(void* self, const void* pos);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideTearOffMenu)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_hide_tear_off_menu(void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setDefaultAction)
///
/// @param self KBookmarkContextMenu*
/// @param defaultAction QAction*
///
void k_bookmarkcontextmenu_set_default_action(void* self, void* defaultAction);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#defaultAction)
///
/// @param self const KBookmarkContextMenu*
///
QAction* k_bookmarkcontextmenu_default_action(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setActiveAction)
///
/// @param self KBookmarkContextMenu*
/// @param act QAction*
///
void k_bookmarkcontextmenu_set_active_action(void* self, void* act);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#activeAction)
///
/// @param self const KBookmarkContextMenu*
///
QAction* k_bookmarkcontextmenu_active_action(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// @param self KBookmarkContextMenu*
/// @param pos QPoint*
///
void k_bookmarkcontextmenu_popup(void* self, const void* pos);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self KBookmarkContextMenu*
///
QAction* k_bookmarkcontextmenu_exec(void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self KBookmarkContextMenu*
/// @param pos QPoint*
///
QAction* k_bookmarkcontextmenu_exec2(void* self, const void* pos);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list of QAction*
/// @param pos QPoint*
///
QAction* k_bookmarkcontextmenu_exec3(libqt_list actions, const void* pos);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionGeometry)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QAction*
///
QRect* k_bookmarkcontextmenu_action_geometry(const void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionAt)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QPoint*
///
QAction* k_bookmarkcontextmenu_action_at(const void* self, const void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#menuAction)
///
/// @param self const KBookmarkContextMenu*
///
QAction* k_bookmarkcontextmenu_menu_action(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#menuInAction)
///
/// @param action QAction*
///
QMenu* k_bookmarkcontextmenu_menu_in_action(const void* action);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_title(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setTitle)
///
/// @param self KBookmarkContextMenu*
/// @param title const char*
///
void k_bookmarkcontextmenu_set_title(void* self, const char* title);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#icon)
///
/// @param self const KBookmarkContextMenu*
///
QIcon* k_bookmarkcontextmenu_icon(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setIcon)
///
/// @param self KBookmarkContextMenu*
/// @param icon QIcon*
///
void k_bookmarkcontextmenu_set_icon(void* self, const void* icon);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setNoReplayFor)
///
/// @param self KBookmarkContextMenu*
/// @param widget QWidget*
///
void k_bookmarkcontextmenu_set_no_replay_for(void* self, void* widget);

#ifdef __APPLE__
/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#toNSMenu)
///
/// @param self KBookmarkContextMenu*
///
/// @return NSMenu* (NOTE: This pointer value could be `NULL`.)
///
void* k_bookmarkcontextmenu_to_n_s_menu(void* self);
#endif

#ifdef __APPLE__
/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setAsDockMenu)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_set_as_dock_menu(void* self);
#endif

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#separatorsCollapsible)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_separators_collapsible(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setSeparatorsCollapsible)
///
/// @param self KBookmarkContextMenu*
/// @param collapse bool
///
void k_bookmarkcontextmenu_set_separators_collapsible(void* self, bool collapse);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#toolTipsVisible)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_tool_tips_visible(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setToolTipsVisible)
///
/// @param self KBookmarkContextMenu*
/// @param visible bool
///
void k_bookmarkcontextmenu_set_tool_tips_visible(void* self, bool visible);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_about_to_show(void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_about_to_show(void* self, void (*callback)(void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_about_to_hide(void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_about_to_hide(void* self, void (*callback)(void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// @param self KBookmarkContextMenu*
/// @param action QAction*
///
void k_bookmarkcontextmenu_triggered(void* self, void* action);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QAction* action)
///
void k_bookmarkcontextmenu_on_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// @param self KBookmarkContextMenu*
/// @param action QAction*
///
void k_bookmarkcontextmenu_hovered(void* self, void* action);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QAction* action)
///
void k_bookmarkcontextmenu_on_hovered(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// @param self KBookmarkContextMenu*
/// @param pos QPoint*
/// @param at QAction*
///
void k_bookmarkcontextmenu_popup2(void* self, const void* pos, void* at);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self KBookmarkContextMenu*
/// @param pos QPoint*
/// @param at QAction*
///
QAction* k_bookmarkcontextmenu_exec22(void* self, const void* pos, void* at);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list of QAction*
/// @param pos QPoint*
/// @param at QAction*
///
QAction* k_bookmarkcontextmenu_exec32(libqt_list actions, const void* pos, void* at);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list of QAction*
/// @param pos QPoint*
/// @param at QAction*
/// @param parent QWidget*
///
QAction* k_bookmarkcontextmenu_exec4(libqt_list actions, const void* pos, void* at, void* parent);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const KBookmarkContextMenu*
///
QPaintDevice* k_bookmarkcontextmenu_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a KBookmarkContextMenu object
///
/// @param _qpaintdevice QPaintDevice*
///
KBookmarkContextMenu* k_bookmarkcontextmenu_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KBookmarkContextMenu*
///
uintptr_t k_bookmarkcontextmenu_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KBookmarkContextMenu*
///
uintptr_t k_bookmarkcontextmenu_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KBookmarkContextMenu*
///
uintptr_t k_bookmarkcontextmenu_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KBookmarkContextMenu*
///
QStyle* k_bookmarkcontextmenu_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KBookmarkContextMenu*
/// @param style QStyle*
///
void k_bookmarkcontextmenu_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KBookmarkContextMenu*
///
/// @return enum Qt__WindowModality
///
int32_t k_bookmarkcontextmenu_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KBookmarkContextMenu*
/// @param windowModality enum Qt__WindowModality
///
void k_bookmarkcontextmenu_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QWidget*
///
bool k_bookmarkcontextmenu_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KBookmarkContextMenu*
/// @param enabled bool
///
void k_bookmarkcontextmenu_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KBookmarkContextMenu*
/// @param disabled bool
///
void k_bookmarkcontextmenu_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KBookmarkContextMenu*
/// @param windowModified bool
///
void k_bookmarkcontextmenu_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KBookmarkContextMenu*
///
QRect* k_bookmarkcontextmenu_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KBookmarkContextMenu*
///
const QRect* k_bookmarkcontextmenu_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KBookmarkContextMenu*
///
QRect* k_bookmarkcontextmenu_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KBookmarkContextMenu*
///
QPoint* k_bookmarkcontextmenu_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KBookmarkContextMenu*
///
QRect* k_bookmarkcontextmenu_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KBookmarkContextMenu*
///
QRect* k_bookmarkcontextmenu_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KBookmarkContextMenu*
///
QRegion* k_bookmarkcontextmenu_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KBookmarkContextMenu*
/// @param minimumSize QSize*
///
void k_bookmarkcontextmenu_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KBookmarkContextMenu*
/// @param minw int
/// @param minh int
///
void k_bookmarkcontextmenu_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KBookmarkContextMenu*
/// @param maximumSize QSize*
///
void k_bookmarkcontextmenu_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KBookmarkContextMenu*
/// @param maxw int
/// @param maxh int
///
void k_bookmarkcontextmenu_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KBookmarkContextMenu*
/// @param minw int
///
void k_bookmarkcontextmenu_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KBookmarkContextMenu*
/// @param minh int
///
void k_bookmarkcontextmenu_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KBookmarkContextMenu*
/// @param maxw int
///
void k_bookmarkcontextmenu_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KBookmarkContextMenu*
/// @param maxh int
///
void k_bookmarkcontextmenu_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KBookmarkContextMenu*
/// @param sizeIncrement QSize*
///
void k_bookmarkcontextmenu_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KBookmarkContextMenu*
/// @param w int
/// @param h int
///
void k_bookmarkcontextmenu_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KBookmarkContextMenu*
/// @param baseSize QSize*
///
void k_bookmarkcontextmenu_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KBookmarkContextMenu*
/// @param basew int
/// @param baseh int
///
void k_bookmarkcontextmenu_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KBookmarkContextMenu*
/// @param fixedSize QSize*
///
void k_bookmarkcontextmenu_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KBookmarkContextMenu*
/// @param w int
/// @param h int
///
void k_bookmarkcontextmenu_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KBookmarkContextMenu*
/// @param w int
///
void k_bookmarkcontextmenu_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KBookmarkContextMenu*
/// @param h int
///
void k_bookmarkcontextmenu_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QPointF*
///
QPointF* k_bookmarkcontextmenu_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QPoint*
///
QPoint* k_bookmarkcontextmenu_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QPointF*
///
QPointF* k_bookmarkcontextmenu_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QPoint*
///
QPoint* k_bookmarkcontextmenu_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QPointF*
///
QPointF* k_bookmarkcontextmenu_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QPoint*
///
QPoint* k_bookmarkcontextmenu_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QPointF*
///
QPointF* k_bookmarkcontextmenu_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QPoint*
///
QPoint* k_bookmarkcontextmenu_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_bookmarkcontextmenu_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_bookmarkcontextmenu_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_bookmarkcontextmenu_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_bookmarkcontextmenu_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KBookmarkContextMenu*
///
QWidget* k_bookmarkcontextmenu_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KBookmarkContextMenu*
///
QWidget* k_bookmarkcontextmenu_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KBookmarkContextMenu*
///
QWidget* k_bookmarkcontextmenu_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KBookmarkContextMenu*
///
const QPalette* k_bookmarkcontextmenu_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KBookmarkContextMenu*
/// @param palette QPalette*
///
void k_bookmarkcontextmenu_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KBookmarkContextMenu*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_bookmarkcontextmenu_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KBookmarkContextMenu*
///
/// @return enum QPalette__ColorRole
///
int32_t k_bookmarkcontextmenu_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KBookmarkContextMenu*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_bookmarkcontextmenu_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KBookmarkContextMenu*
///
/// @return enum QPalette__ColorRole
///
int32_t k_bookmarkcontextmenu_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KBookmarkContextMenu*
///
const QFont* k_bookmarkcontextmenu_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KBookmarkContextMenu*
/// @param font QFont*
///
void k_bookmarkcontextmenu_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KBookmarkContextMenu*
///
QFontMetrics* k_bookmarkcontextmenu_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KBookmarkContextMenu*
///
QFontInfo* k_bookmarkcontextmenu_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KBookmarkContextMenu*
///
QCursor* k_bookmarkcontextmenu_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KBookmarkContextMenu*
/// @param cursor QCursor*
///
void k_bookmarkcontextmenu_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KBookmarkContextMenu*
/// @param enable bool
///
void k_bookmarkcontextmenu_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KBookmarkContextMenu*
/// @param enable bool
///
void k_bookmarkcontextmenu_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KBookmarkContextMenu*
/// @param mask QBitmap*
///
void k_bookmarkcontextmenu_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KBookmarkContextMenu*
/// @param mask QRegion*
///
void k_bookmarkcontextmenu_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KBookmarkContextMenu*
///
QRegion* k_bookmarkcontextmenu_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBookmarkContextMenu*
/// @param target QPaintDevice*
///
void k_bookmarkcontextmenu_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBookmarkContextMenu*
/// @param painter QPainter*
///
void k_bookmarkcontextmenu_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KBookmarkContextMenu*
///
QPixmap* k_bookmarkcontextmenu_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KBookmarkContextMenu*
///
QGraphicsEffect* k_bookmarkcontextmenu_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KBookmarkContextMenu*
/// @param effect QGraphicsEffect*
///
void k_bookmarkcontextmenu_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KBookmarkContextMenu*
/// @param type enum Qt__GestureType
///
void k_bookmarkcontextmenu_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KBookmarkContextMenu*
/// @param type enum Qt__GestureType
///
void k_bookmarkcontextmenu_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KBookmarkContextMenu*
/// @param windowTitle const char*
///
void k_bookmarkcontextmenu_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KBookmarkContextMenu*
/// @param styleSheet const char*
///
void k_bookmarkcontextmenu_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KBookmarkContextMenu*
/// @param icon QIcon*
///
void k_bookmarkcontextmenu_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KBookmarkContextMenu*
///
QIcon* k_bookmarkcontextmenu_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KBookmarkContextMenu*
/// @param windowIconText const char*
///
void k_bookmarkcontextmenu_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KBookmarkContextMenu*
/// @param windowRole const char*
///
void k_bookmarkcontextmenu_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KBookmarkContextMenu*
/// @param filePath const char*
///
void k_bookmarkcontextmenu_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KBookmarkContextMenu*
/// @param level double
///
void k_bookmarkcontextmenu_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KBookmarkContextMenu*
///
double k_bookmarkcontextmenu_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KBookmarkContextMenu*
/// @param toolTip const char*
///
void k_bookmarkcontextmenu_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KBookmarkContextMenu*
/// @param msec int
///
void k_bookmarkcontextmenu_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KBookmarkContextMenu*
/// @param statusTip const char*
///
void k_bookmarkcontextmenu_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KBookmarkContextMenu*
/// @param whatsThis const char*
///
void k_bookmarkcontextmenu_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KBookmarkContextMenu*
/// @param name const char*
///
void k_bookmarkcontextmenu_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KBookmarkContextMenu*
/// @param description const char*
///
void k_bookmarkcontextmenu_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KBookmarkContextMenu*
/// @param direction enum Qt__LayoutDirection
///
void k_bookmarkcontextmenu_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KBookmarkContextMenu*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_bookmarkcontextmenu_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KBookmarkContextMenu*
/// @param locale QLocale*
///
void k_bookmarkcontextmenu_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KBookmarkContextMenu*
///
QLocale* k_bookmarkcontextmenu_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KBookmarkContextMenu*
/// @param reason enum Qt__FocusReason
///
void k_bookmarkcontextmenu_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KBookmarkContextMenu*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_bookmarkcontextmenu_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KBookmarkContextMenu*
/// @param policy enum Qt__FocusPolicy
///
void k_bookmarkcontextmenu_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_bookmarkcontextmenu_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KBookmarkContextMenu*
/// @param focusProxy QWidget*
///
void k_bookmarkcontextmenu_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KBookmarkContextMenu*
///
QWidget* k_bookmarkcontextmenu_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KBookmarkContextMenu*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_bookmarkcontextmenu_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KBookmarkContextMenu*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_bookmarkcontextmenu_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KBookmarkContextMenu*
/// @param param1 QCursor*
///
void k_bookmarkcontextmenu_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KBookmarkContextMenu*
/// @param key QKeySequence*
///
int32_t k_bookmarkcontextmenu_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KBookmarkContextMenu*
/// @param id int
///
void k_bookmarkcontextmenu_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KBookmarkContextMenu*
/// @param id int
///
void k_bookmarkcontextmenu_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KBookmarkContextMenu*
/// @param id int
///
void k_bookmarkcontextmenu_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_bookmarkcontextmenu_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_bookmarkcontextmenu_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KBookmarkContextMenu*
/// @param enable bool
///
void k_bookmarkcontextmenu_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KBookmarkContextMenu*
///
QGraphicsProxyWidget* k_bookmarkcontextmenu_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBookmarkContextMenu*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_bookmarkcontextmenu_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBookmarkContextMenu*
/// @param param1 QRect*
///
void k_bookmarkcontextmenu_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KBookmarkContextMenu*
/// @param param1 QRegion*
///
void k_bookmarkcontextmenu_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBookmarkContextMenu*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_bookmarkcontextmenu_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBookmarkContextMenu*
/// @param param1 QRect*
///
void k_bookmarkcontextmenu_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KBookmarkContextMenu*
/// @param param1 QRegion*
///
void k_bookmarkcontextmenu_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KBookmarkContextMenu*
/// @param hidden bool
///
void k_bookmarkcontextmenu_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KBookmarkContextMenu*
/// @param param1 QWidget*
///
void k_bookmarkcontextmenu_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KBookmarkContextMenu*
/// @param x int
/// @param y int
///
void k_bookmarkcontextmenu_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KBookmarkContextMenu*
/// @param param1 QPoint*
///
void k_bookmarkcontextmenu_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KBookmarkContextMenu*
/// @param w int
/// @param h int
///
void k_bookmarkcontextmenu_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KBookmarkContextMenu*
/// @param param1 QSize*
///
void k_bookmarkcontextmenu_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KBookmarkContextMenu*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_bookmarkcontextmenu_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KBookmarkContextMenu*
/// @param geometry QRect*
///
void k_bookmarkcontextmenu_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KBookmarkContextMenu*
/// @param geometry const char*
///
bool k_bookmarkcontextmenu_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 QWidget*
///
bool k_bookmarkcontextmenu_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KBookmarkContextMenu*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_bookmarkcontextmenu_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KBookmarkContextMenu*
/// @param state flag of enum Qt__WindowState
///
void k_bookmarkcontextmenu_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KBookmarkContextMenu*
/// @param state flag of enum Qt__WindowState
///
void k_bookmarkcontextmenu_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KBookmarkContextMenu*
///
QSizePolicy* k_bookmarkcontextmenu_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KBookmarkContextMenu*
/// @param sizePolicy QSizePolicy*
///
void k_bookmarkcontextmenu_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KBookmarkContextMenu*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_bookmarkcontextmenu_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KBookmarkContextMenu*
///
QRegion* k_bookmarkcontextmenu_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KBookmarkContextMenu*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_bookmarkcontextmenu_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KBookmarkContextMenu*
/// @param margins QMargins*
///
void k_bookmarkcontextmenu_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KBookmarkContextMenu*
///
QMargins* k_bookmarkcontextmenu_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const KBookmarkContextMenu*
///
QRect* k_bookmarkcontextmenu_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KBookmarkContextMenu*
///
QLayout* k_bookmarkcontextmenu_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KBookmarkContextMenu*
/// @param layout QLayout*
///
void k_bookmarkcontextmenu_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KBookmarkContextMenu*
/// @param parent QWidget*
///
void k_bookmarkcontextmenu_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KBookmarkContextMenu*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_bookmarkcontextmenu_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KBookmarkContextMenu*
/// @param dx int
/// @param dy int
///
void k_bookmarkcontextmenu_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KBookmarkContextMenu*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_bookmarkcontextmenu_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KBookmarkContextMenu*
///
QWidget* k_bookmarkcontextmenu_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KBookmarkContextMenu*
///
QWidget* k_bookmarkcontextmenu_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KBookmarkContextMenu*
///
QWidget* k_bookmarkcontextmenu_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KBookmarkContextMenu*
/// @param on bool
///
void k_bookmarkcontextmenu_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBookmarkContextMenu*
/// @param action QAction*
///
void k_bookmarkcontextmenu_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KBookmarkContextMenu*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_bookmarkcontextmenu_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KBookmarkContextMenu*
/// @param before QAction*
/// @param action QAction*
///
void k_bookmarkcontextmenu_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KBookmarkContextMenu*
/// @param action QAction*
///
void k_bookmarkcontextmenu_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KBookmarkContextMenu*
///
/// @return libqt_list of QAction*
///
libqt_list k_bookmarkcontextmenu_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBookmarkContextMenu*
/// @param text const char*
///
QAction* k_bookmarkcontextmenu_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBookmarkContextMenu*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_bookmarkcontextmenu_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBookmarkContextMenu*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_bookmarkcontextmenu_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KBookmarkContextMenu*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_bookmarkcontextmenu_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KBookmarkContextMenu*
///
QWidget* k_bookmarkcontextmenu_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KBookmarkContextMenu*
/// @param type flag of enum Qt__WindowType
///
void k_bookmarkcontextmenu_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KBookmarkContextMenu*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_bookmarkcontextmenu_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KBookmarkContextMenu*
/// @param param1 enum Qt__WindowType
///
void k_bookmarkcontextmenu_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KBookmarkContextMenu*
/// @param type flag of enum Qt__WindowType
///
void k_bookmarkcontextmenu_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KBookmarkContextMenu*
///
/// @return enum Qt__WindowType
///
int32_t k_bookmarkcontextmenu_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_bookmarkcontextmenu_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KBookmarkContextMenu*
/// @param x int
/// @param y int
///
QWidget* k_bookmarkcontextmenu_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KBookmarkContextMenu*
/// @param p QPoint*
///
QWidget* k_bookmarkcontextmenu_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KBookmarkContextMenu*
/// @param p QPointF*
///
QWidget* k_bookmarkcontextmenu_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KBookmarkContextMenu*
/// @param param1 enum Qt__WidgetAttribute
///
void k_bookmarkcontextmenu_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KBookmarkContextMenu*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_bookmarkcontextmenu_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KBookmarkContextMenu*
/// @param child QWidget*
///
bool k_bookmarkcontextmenu_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KBookmarkContextMenu*
/// @param enabled bool
///
void k_bookmarkcontextmenu_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KBookmarkContextMenu*
///
QBackingStore* k_bookmarkcontextmenu_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KBookmarkContextMenu*
///
QWindow* k_bookmarkcontextmenu_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KBookmarkContextMenu*
///
QScreen* k_bookmarkcontextmenu_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KBookmarkContextMenu*
/// @param screen QScreen*
///
void k_bookmarkcontextmenu_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_bookmarkcontextmenu_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KBookmarkContextMenu*
/// @param title const char*
///
void k_bookmarkcontextmenu_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, const char* title)
///
void k_bookmarkcontextmenu_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KBookmarkContextMenu*
/// @param icon QIcon*
///
void k_bookmarkcontextmenu_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QIcon* icon)
///
void k_bookmarkcontextmenu_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KBookmarkContextMenu*
/// @param iconText const char*
///
void k_bookmarkcontextmenu_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, const char* iconText)
///
void k_bookmarkcontextmenu_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KBookmarkContextMenu*
/// @param pos QPoint*
///
void k_bookmarkcontextmenu_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QPoint* pos)
///
void k_bookmarkcontextmenu_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KBookmarkContextMenu*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_bookmarkcontextmenu_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KBookmarkContextMenu*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_bookmarkcontextmenu_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBookmarkContextMenu*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_bookmarkcontextmenu_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBookmarkContextMenu*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_bookmarkcontextmenu_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBookmarkContextMenu*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_bookmarkcontextmenu_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBookmarkContextMenu*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_bookmarkcontextmenu_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBookmarkContextMenu*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_bookmarkcontextmenu_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KBookmarkContextMenu*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_bookmarkcontextmenu_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KBookmarkContextMenu*
/// @param rectangle QRect*
///
QPixmap* k_bookmarkcontextmenu_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KBookmarkContextMenu*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_bookmarkcontextmenu_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KBookmarkContextMenu*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_bookmarkcontextmenu_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KBookmarkContextMenu*
/// @param id int
/// @param enable bool
///
void k_bookmarkcontextmenu_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KBookmarkContextMenu*
/// @param id int
/// @param enable bool
///
void k_bookmarkcontextmenu_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KBookmarkContextMenu*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_bookmarkcontextmenu_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KBookmarkContextMenu*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_bookmarkcontextmenu_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_bookmarkcontextmenu_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_bookmarkcontextmenu_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkContextMenu*
///
const char* k_bookmarkcontextmenu_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KBookmarkContextMenu*
/// @param name const char*
///
void k_bookmarkcontextmenu_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KBookmarkContextMenu*
/// @param b bool
///
bool k_bookmarkcontextmenu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KBookmarkContextMenu*
///
QThread* k_bookmarkcontextmenu_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBookmarkContextMenu*
/// @param thread QThread*
///
bool k_bookmarkcontextmenu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkContextMenu*
/// @param interval int
///
int32_t k_bookmarkcontextmenu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkContextMenu*
/// @param time int64_t of nanoseconds
///
int32_t k_bookmarkcontextmenu_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBookmarkContextMenu*
/// @param id int
///
void k_bookmarkcontextmenu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBookmarkContextMenu*
/// @param id enum Qt__TimerId
///
void k_bookmarkcontextmenu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KBookmarkContextMenu*
///
/// @return libqt_list of QObject*
///
libqt_list k_bookmarkcontextmenu_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KBookmarkContextMenu*
/// @param filterObj QObject*
///
void k_bookmarkcontextmenu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KBookmarkContextMenu*
/// @param obj QObject*
///
void k_bookmarkcontextmenu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_bookmarkcontextmenu_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_bookmarkcontextmenu_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KBookmarkContextMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_bookmarkcontextmenu_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_bookmarkcontextmenu_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_bookmarkcontextmenu_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBookmarkContextMenu*
/// @param receiver QObject*
///
bool k_bookmarkcontextmenu_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_bookmarkcontextmenu_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KBookmarkContextMenu*
/// @param name const char*
/// @param value QVariant*
///
bool k_bookmarkcontextmenu_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KBookmarkContextMenu*
/// @param name const char*
///
QVariant* k_bookmarkcontextmenu_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KBookmarkContextMenu*
///
const char** k_bookmarkcontextmenu_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBookmarkContextMenu*
///
QBindingStorage* k_bookmarkcontextmenu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KBookmarkContextMenu*
///
const QBindingStorage* k_bookmarkcontextmenu_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KBookmarkContextMenu*
///
QObject* k_bookmarkcontextmenu_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KBookmarkContextMenu*
/// @param classname const char*
///
bool k_bookmarkcontextmenu_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkContextMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_bookmarkcontextmenu_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBookmarkContextMenu*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_bookmarkcontextmenu_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_bookmarkcontextmenu_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_bookmarkcontextmenu_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KBookmarkContextMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_bookmarkcontextmenu_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBookmarkContextMenu*
/// @param signal const char*
///
bool k_bookmarkcontextmenu_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBookmarkContextMenu*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_bookmarkcontextmenu_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBookmarkContextMenu*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_bookmarkcontextmenu_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KBookmarkContextMenu*
/// @param receiver QObject*
/// @param member const char*
///
bool k_bookmarkcontextmenu_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkContextMenu*
/// @param param1 QObject*
///
void k_bookmarkcontextmenu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QObject* param1)
///
void k_bookmarkcontextmenu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KBookmarkContextMenu*
///
double k_bookmarkcontextmenu_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KBookmarkContextMenu*
///
double k_bookmarkcontextmenu_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_bookmarkcontextmenu_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_bookmarkcontextmenu_encode_metric_f(int32_t metric, double value);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_size_hint(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_super_size_hint(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback QSize* func(KBookmarkContextMenu* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_bookmarkcontextmenu_on_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QEvent*
///
void k_bookmarkcontextmenu_change_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QEvent*
///
void k_bookmarkcontextmenu_super_change_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QEvent* param1)
///
void k_bookmarkcontextmenu_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QKeyEvent*
///
void k_bookmarkcontextmenu_key_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QKeyEvent*
///
void k_bookmarkcontextmenu_super_key_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QKeyEvent* param1)
///
void k_bookmarkcontextmenu_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QMouseEvent*
///
void k_bookmarkcontextmenu_mouse_release_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QMouseEvent*
///
void k_bookmarkcontextmenu_super_mouse_release_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QMouseEvent* param1)
///
void k_bookmarkcontextmenu_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QMouseEvent*
///
void k_bookmarkcontextmenu_mouse_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QMouseEvent*
///
void k_bookmarkcontextmenu_super_mouse_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QMouseEvent* param1)
///
void k_bookmarkcontextmenu_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QMouseEvent*
///
void k_bookmarkcontextmenu_mouse_move_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QMouseEvent*
///
void k_bookmarkcontextmenu_super_mouse_move_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QMouseEvent* param1)
///
void k_bookmarkcontextmenu_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QWheelEvent*
///
void k_bookmarkcontextmenu_wheel_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QWheelEvent*
///
void k_bookmarkcontextmenu_super_wheel_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QWheelEvent* param1)
///
void k_bookmarkcontextmenu_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QEnterEvent*
///
void k_bookmarkcontextmenu_enter_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QEnterEvent*
///
void k_bookmarkcontextmenu_super_enter_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QEnterEvent* param1)
///
void k_bookmarkcontextmenu_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QEvent*
///
void k_bookmarkcontextmenu_leave_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QEvent*
///
void k_bookmarkcontextmenu_super_leave_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QEvent* param1)
///
void k_bookmarkcontextmenu_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QHideEvent*
///
void k_bookmarkcontextmenu_hide_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QHideEvent*
///
void k_bookmarkcontextmenu_super_hide_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QHideEvent* param1)
///
void k_bookmarkcontextmenu_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QPaintEvent*
///
void k_bookmarkcontextmenu_paint_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QPaintEvent*
///
void k_bookmarkcontextmenu_super_paint_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QPaintEvent* param1)
///
void k_bookmarkcontextmenu_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QActionEvent*
///
void k_bookmarkcontextmenu_action_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QActionEvent*
///
void k_bookmarkcontextmenu_super_action_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QActionEvent* param1)
///
void k_bookmarkcontextmenu_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QTimerEvent*
///
void k_bookmarkcontextmenu_timer_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QTimerEvent*
///
void k_bookmarkcontextmenu_super_timer_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QTimerEvent* param1)
///
void k_bookmarkcontextmenu_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QEvent*
///
bool k_bookmarkcontextmenu_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QEvent*
///
bool k_bookmarkcontextmenu_super_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback bool func(KBookmarkContextMenu* self, QEvent* param1)
///
void k_bookmarkcontextmenu_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param next bool
///
bool k_bookmarkcontextmenu_focus_next_prev_child(void* self, bool next);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param next bool
///
bool k_bookmarkcontextmenu_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback bool func(KBookmarkContextMenu* self, bool next)
///
void k_bookmarkcontextmenu_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
///
void k_bookmarkcontextmenu_init_style_option(const void* self, void* option, const void* action);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
///
void k_bookmarkcontextmenu_super_init_style_option(const void* self, void* option, const void* action);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QStyleOptionMenuItem* option, QAction* action)
///
void k_bookmarkcontextmenu_on_init_style_option(void* self, void (*callback)(const void*, void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback int32_t func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param visible bool
///
void k_bookmarkcontextmenu_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param visible bool
///
void k_bookmarkcontextmenu_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, bool visible)
///
void k_bookmarkcontextmenu_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QSize* k_bookmarkcontextmenu_super_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback QSize* func(KBookmarkContextMenu* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_bookmarkcontextmenu_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param param1 int
///
int32_t k_bookmarkcontextmenu_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param param1 int
///
int32_t k_bookmarkcontextmenu_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback int32_t func(KBookmarkContextMenu* self, int param1)
///
void k_bookmarkcontextmenu_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback bool func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QPaintEngine* k_bookmarkcontextmenu_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QPaintEngine* k_bookmarkcontextmenu_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback QPaintEngine* func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QMouseEvent*
///
void k_bookmarkcontextmenu_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QMouseEvent*
///
void k_bookmarkcontextmenu_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QMouseEvent* event)
///
void k_bookmarkcontextmenu_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QKeyEvent*
///
void k_bookmarkcontextmenu_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QKeyEvent*
///
void k_bookmarkcontextmenu_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QKeyEvent* event)
///
void k_bookmarkcontextmenu_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QFocusEvent*
///
void k_bookmarkcontextmenu_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QFocusEvent*
///
void k_bookmarkcontextmenu_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QFocusEvent* event)
///
void k_bookmarkcontextmenu_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QFocusEvent*
///
void k_bookmarkcontextmenu_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QFocusEvent*
///
void k_bookmarkcontextmenu_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QFocusEvent* event)
///
void k_bookmarkcontextmenu_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QMoveEvent*
///
void k_bookmarkcontextmenu_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QMoveEvent*
///
void k_bookmarkcontextmenu_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QMoveEvent* event)
///
void k_bookmarkcontextmenu_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QResizeEvent*
///
void k_bookmarkcontextmenu_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QResizeEvent*
///
void k_bookmarkcontextmenu_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QResizeEvent* event)
///
void k_bookmarkcontextmenu_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QCloseEvent*
///
void k_bookmarkcontextmenu_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QCloseEvent*
///
void k_bookmarkcontextmenu_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QCloseEvent* event)
///
void k_bookmarkcontextmenu_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QContextMenuEvent*
///
void k_bookmarkcontextmenu_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QContextMenuEvent*
///
void k_bookmarkcontextmenu_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QContextMenuEvent* event)
///
void k_bookmarkcontextmenu_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QTabletEvent*
///
void k_bookmarkcontextmenu_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QTabletEvent*
///
void k_bookmarkcontextmenu_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QTabletEvent* event)
///
void k_bookmarkcontextmenu_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QDragEnterEvent*
///
void k_bookmarkcontextmenu_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QDragEnterEvent*
///
void k_bookmarkcontextmenu_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QDragEnterEvent* event)
///
void k_bookmarkcontextmenu_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QDragMoveEvent*
///
void k_bookmarkcontextmenu_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QDragMoveEvent*
///
void k_bookmarkcontextmenu_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QDragMoveEvent* event)
///
void k_bookmarkcontextmenu_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QDragLeaveEvent*
///
void k_bookmarkcontextmenu_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QDragLeaveEvent*
///
void k_bookmarkcontextmenu_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QDragLeaveEvent* event)
///
void k_bookmarkcontextmenu_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QDropEvent*
///
void k_bookmarkcontextmenu_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QDropEvent*
///
void k_bookmarkcontextmenu_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QDropEvent* event)
///
void k_bookmarkcontextmenu_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QShowEvent*
///
void k_bookmarkcontextmenu_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QShowEvent*
///
void k_bookmarkcontextmenu_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QShowEvent* event)
///
void k_bookmarkcontextmenu_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_bookmarkcontextmenu_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_bookmarkcontextmenu_super_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback bool func(KBookmarkContextMenu* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_bookmarkcontextmenu_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_bookmarkcontextmenu_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_bookmarkcontextmenu_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback int32_t func(KBookmarkContextMenu* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_bookmarkcontextmenu_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param painter QPainter*
///
void k_bookmarkcontextmenu_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param painter QPainter*
///
void k_bookmarkcontextmenu_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QPainter* painter)
///
void k_bookmarkcontextmenu_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param offset QPoint*
///
QPaintDevice* k_bookmarkcontextmenu_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param offset QPoint*
///
QPaintDevice* k_bookmarkcontextmenu_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback QPaintDevice* func(KBookmarkContextMenu* self, QPoint* offset)
///
void k_bookmarkcontextmenu_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QPainter* k_bookmarkcontextmenu_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QPainter* k_bookmarkcontextmenu_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback QPainter* func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QInputMethodEvent*
///
void k_bookmarkcontextmenu_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param param1 QInputMethodEvent*
///
void k_bookmarkcontextmenu_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QInputMethodEvent* param1)
///
void k_bookmarkcontextmenu_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_bookmarkcontextmenu_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_bookmarkcontextmenu_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback QVariant* func(KBookmarkContextMenu* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_bookmarkcontextmenu_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_bookmarkcontextmenu_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_bookmarkcontextmenu_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback bool func(KBookmarkContextMenu* self, QObject* watched, QEvent* event)
///
void k_bookmarkcontextmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QChildEvent*
///
void k_bookmarkcontextmenu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QChildEvent*
///
void k_bookmarkcontextmenu_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QChildEvent* event)
///
void k_bookmarkcontextmenu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QEvent*
///
void k_bookmarkcontextmenu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param event QEvent*
///
void k_bookmarkcontextmenu_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QEvent* event)
///
void k_bookmarkcontextmenu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkcontextmenu_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkcontextmenu_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QMetaMethod* signal)
///
void k_bookmarkcontextmenu_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkcontextmenu_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param signal QMetaMethod*
///
void k_bookmarkcontextmenu_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, QMetaMethod* signal)
///
void k_bookmarkcontextmenu_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_column_count(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_super_column_count(const void* self);

/// Inherited from QMenu
///
/// [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback int32_t func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_column_count(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback bool func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
///
bool k_bookmarkcontextmenu_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback bool func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QObject* k_bookmarkcontextmenu_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
QObject* k_bookmarkcontextmenu_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback QObject* func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
///
int32_t k_bookmarkcontextmenu_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback int32_t func(KBookmarkContextMenu* self)
///
void k_bookmarkcontextmenu_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param signal const char*
///
int32_t k_bookmarkcontextmenu_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param signal const char*
///
int32_t k_bookmarkcontextmenu_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback int32_t func(KBookmarkContextMenu* self, const char* signal)
///
void k_bookmarkcontextmenu_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param signal QMetaMethod*
///
bool k_bookmarkcontextmenu_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param signal QMetaMethod*
///
bool k_bookmarkcontextmenu_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback bool func(KBookmarkContextMenu* self, QMetaMethod* signal)
///
void k_bookmarkcontextmenu_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_bookmarkcontextmenu_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KBookmarkContextMenu*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_bookmarkcontextmenu_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBookmarkContextMenu*
/// @param callback double func(KBookmarkContextMenu* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_bookmarkcontextmenu_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KBookmarkContextMenu*
/// @param callback void func(KBookmarkContextMenu* self, const char* objectName)
///
void k_bookmarkcontextmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#dtor.KBookmarkContextMenu)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmarkContextMenu*
///
void k_bookmarkcontextmenu_delete(void* self);

#endif
