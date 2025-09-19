#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKRECENTFILESMENU_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKRECENTFILESMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/krecentfilesmenu.html

/// k_recentfilesmenu_new constructs a new KRecentFilesMenu object.
///
/// @param parent QWidget*
KRecentFilesMenu* k_recentfilesmenu_new(void* parent);

/// k_recentfilesmenu_new2 constructs a new KRecentFilesMenu object.
///
/// @param title const char*
KRecentFilesMenu* k_recentfilesmenu_new2(const char* title);

/// k_recentfilesmenu_new3 constructs a new KRecentFilesMenu object.
///
KRecentFilesMenu* k_recentfilesmenu_new3();

/// k_recentfilesmenu_new4 constructs a new KRecentFilesMenu object.
///
/// @param title const char*
/// @param parent QWidget*
KRecentFilesMenu* k_recentfilesmenu_new4(const char* title, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KRecentFilesMenu*
const QMetaObject* k_recentfilesmenu_meta_object(void* self);

/// @param self KRecentFilesMenu*
/// @param param1 const char*
void* k_recentfilesmenu_metacast(void* self, const char* param1);

/// @param self KRecentFilesMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_recentfilesmenu_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KRecentFilesMenu*
/// @param callback int32_t func(KRecentFilesMenu* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_recentfilesmenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KRecentFilesMenu*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_recentfilesmenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_recentfilesmenu_tr(const char* s);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#group)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_group(void* self);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#setGroup)
///
/// @param self KRecentFilesMenu*
/// @param group const char*
void k_recentfilesmenu_set_group(void* self, const char* group);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#addUrl)
///
/// @param self KRecentFilesMenu*
/// @param url QUrl*
void k_recentfilesmenu_add_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#removeUrl)
///
/// @param self KRecentFilesMenu*
/// @param url QUrl*
void k_recentfilesmenu_remove_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#maximumItems)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_maximum_items(void* self);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#setMaximumItems)
///
/// @param self KRecentFilesMenu*
/// @param maximumItems uint64_t
void k_recentfilesmenu_set_maximum_items(void* self, uint64_t maximumItems);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#recentFiles)
///
/// @param self KRecentFilesMenu*
libqt_list /* of QUrl* */ k_recentfilesmenu_recent_files(void* self);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#clearRecentFiles)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_clear_recent_files(void* self);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#urlTriggered)
///
/// @param self KRecentFilesMenu*
/// @param url QUrl*
void k_recentfilesmenu_url_triggered(void* self, void* url);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#urlTriggered)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QUrl* url)
void k_recentfilesmenu_on_url_triggered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#recentFilesChanged)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_recent_files_changed(void* self);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#recentFilesChanged)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self)
void k_recentfilesmenu_on_recent_files_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_recentfilesmenu_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_recentfilesmenu_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#addUrl)
///
/// @param self KRecentFilesMenu*
/// @param url QUrl*
/// @param name const char*
void k_recentfilesmenu_add_url2(void* self, void* url, const char* name);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self KRecentFilesMenu*
/// @param menu QMenu*
QAction* k_recentfilesmenu_add_menu(void* self, void* menu);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self KRecentFilesMenu*
/// @param title const char*
QMenu* k_recentfilesmenu_add_menu2(void* self, const char* title);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self KRecentFilesMenu*
/// @param icon QIcon*
/// @param title const char*
QMenu* k_recentfilesmenu_add_menu3(void* self, void* icon, const char* title);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSeparator)
///
/// @param self KRecentFilesMenu*
QAction* k_recentfilesmenu_add_separator(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// @param self KRecentFilesMenu*
/// @param text const char*
QAction* k_recentfilesmenu_add_section(void* self, const char* text);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// @param self KRecentFilesMenu*
/// @param icon QIcon*
/// @param text const char*
QAction* k_recentfilesmenu_add_section2(void* self, void* icon, const char* text);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertMenu)
///
/// @param self KRecentFilesMenu*
/// @param before QAction*
/// @param menu QMenu*
QAction* k_recentfilesmenu_insert_menu(void* self, void* before, void* menu);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSeparator)
///
/// @param self KRecentFilesMenu*
/// @param before QAction*
QAction* k_recentfilesmenu_insert_separator(void* self, void* before);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// @param self KRecentFilesMenu*
/// @param before QAction*
/// @param text const char*
QAction* k_recentfilesmenu_insert_section(void* self, void* before, const char* text);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// @param self KRecentFilesMenu*
/// @param before QAction*
/// @param icon QIcon*
/// @param text const char*
QAction* k_recentfilesmenu_insert_section2(void* self, void* before, void* icon, const char* text);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isEmpty)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_empty(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#clear)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_clear(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setTearOffEnabled)
///
/// @param self KRecentFilesMenu*
/// @param tearOffEnabled bool
void k_recentfilesmenu_set_tear_off_enabled(void* self, bool tearOffEnabled);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isTearOffEnabled)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_tear_off_enabled(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isTearOffMenuVisible)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_tear_off_menu_visible(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_show_tear_off_menu(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// @param self KRecentFilesMenu*
/// @param pos QPoint*
void k_recentfilesmenu_show_tear_off_menu2(void* self, void* pos);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideTearOffMenu)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_hide_tear_off_menu(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setDefaultAction)
///
/// @param self KRecentFilesMenu*
/// @param defaultAction QAction*
void k_recentfilesmenu_set_default_action(void* self, void* defaultAction);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#defaultAction)
///
/// @param self KRecentFilesMenu*
QAction* k_recentfilesmenu_default_action(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setActiveAction)
///
/// @param self KRecentFilesMenu*
/// @param act QAction*
void k_recentfilesmenu_set_active_action(void* self, void* act);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#activeAction)
///
/// @param self KRecentFilesMenu*
QAction* k_recentfilesmenu_active_action(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// @param self KRecentFilesMenu*
/// @param pos QPoint*
void k_recentfilesmenu_popup(void* self, void* pos);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self KRecentFilesMenu*
QAction* k_recentfilesmenu_exec(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self KRecentFilesMenu*
/// @param pos QPoint*
QAction* k_recentfilesmenu_exec2(void* self, void* pos);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list /* of QAction* */
/// @param pos QPoint*
QAction* k_recentfilesmenu_exec3(libqt_list actions, void* pos);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionGeometry)
///
/// @param self KRecentFilesMenu*
/// @param param1 QAction*
QRect* k_recentfilesmenu_action_geometry(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionAt)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPoint*
QAction* k_recentfilesmenu_action_at(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#menuAction)
///
/// @param self KRecentFilesMenu*
QAction* k_recentfilesmenu_menu_action(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#menuInAction)
///
/// @param action QAction*
QMenu* k_recentfilesmenu_menu_in_action(void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_title(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setTitle)
///
/// @param self KRecentFilesMenu*
/// @param title const char*
void k_recentfilesmenu_set_title(void* self, const char* title);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#icon)
///
/// @param self KRecentFilesMenu*
QIcon* k_recentfilesmenu_icon(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setIcon)
///
/// @param self KRecentFilesMenu*
/// @param icon QIcon*
void k_recentfilesmenu_set_icon(void* self, void* icon);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setNoReplayFor)
///
/// @param self KRecentFilesMenu*
/// @param widget QWidget*
void k_recentfilesmenu_set_no_replay_for(void* self, void* widget);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#separatorsCollapsible)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_separators_collapsible(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setSeparatorsCollapsible)
///
/// @param self KRecentFilesMenu*
/// @param collapse bool
void k_recentfilesmenu_set_separators_collapsible(void* self, bool collapse);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#toolTipsVisible)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_tool_tips_visible(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setToolTipsVisible)
///
/// @param self KRecentFilesMenu*
/// @param visible bool
void k_recentfilesmenu_set_tool_tips_visible(void* self, bool visible);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_about_to_show(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self)
void k_recentfilesmenu_on_about_to_show(void* self, void (*callback)(void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_about_to_hide(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self)
void k_recentfilesmenu_on_about_to_hide(void* self, void (*callback)(void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// @param self KRecentFilesMenu*
/// @param action QAction*
void k_recentfilesmenu_triggered(void* self, void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QAction* action)
void k_recentfilesmenu_on_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// @param self KRecentFilesMenu*
/// @param action QAction*
void k_recentfilesmenu_hovered(void* self, void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QAction* action)
void k_recentfilesmenu_on_hovered(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// @param self KRecentFilesMenu*
/// @param pos QPoint*
/// @param at QAction*
void k_recentfilesmenu_popup2(void* self, void* pos, void* at);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self KRecentFilesMenu*
/// @param pos QPoint*
/// @param at QAction*
QAction* k_recentfilesmenu_exec22(void* self, void* pos, void* at);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list /* of QAction* */
/// @param pos QPoint*
/// @param at QAction*
QAction* k_recentfilesmenu_exec32(libqt_list actions, void* pos, void* at);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list /* of QAction* */
/// @param pos QPoint*
/// @param at QAction*
/// @param parent QWidget*
QAction* k_recentfilesmenu_exec4(libqt_list actions, void* pos, void* at, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KRecentFilesMenu*
uintptr_t k_recentfilesmenu_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KRecentFilesMenu*
uintptr_t k_recentfilesmenu_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KRecentFilesMenu*
uintptr_t k_recentfilesmenu_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KRecentFilesMenu*
QStyle* k_recentfilesmenu_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KRecentFilesMenu*
/// @param style QStyle*
void k_recentfilesmenu_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KRecentFilesMenu*
///
/// @return enum Qt__WindowModality
int32_t k_recentfilesmenu_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KRecentFilesMenu*
/// @param windowModality enum Qt__WindowModality
void k_recentfilesmenu_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KRecentFilesMenu*
/// @param param1 QWidget*
bool k_recentfilesmenu_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KRecentFilesMenu*
/// @param enabled bool
void k_recentfilesmenu_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KRecentFilesMenu*
/// @param disabled bool
void k_recentfilesmenu_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KRecentFilesMenu*
/// @param windowModified bool
void k_recentfilesmenu_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KRecentFilesMenu*
QRect* k_recentfilesmenu_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KRecentFilesMenu*
const QRect* k_recentfilesmenu_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KRecentFilesMenu*
QRect* k_recentfilesmenu_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KRecentFilesMenu*
QPoint* k_recentfilesmenu_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KRecentFilesMenu*
QRect* k_recentfilesmenu_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KRecentFilesMenu*
QRect* k_recentfilesmenu_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KRecentFilesMenu*
QRegion* k_recentfilesmenu_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KRecentFilesMenu*
/// @param minimumSize QSize*
void k_recentfilesmenu_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KRecentFilesMenu*
/// @param minw int
/// @param minh int
void k_recentfilesmenu_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KRecentFilesMenu*
/// @param maximumSize QSize*
void k_recentfilesmenu_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KRecentFilesMenu*
/// @param maxw int
/// @param maxh int
void k_recentfilesmenu_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KRecentFilesMenu*
/// @param minw int
void k_recentfilesmenu_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KRecentFilesMenu*
/// @param minh int
void k_recentfilesmenu_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KRecentFilesMenu*
/// @param maxw int
void k_recentfilesmenu_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KRecentFilesMenu*
/// @param maxh int
void k_recentfilesmenu_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KRecentFilesMenu*
/// @param sizeIncrement QSize*
void k_recentfilesmenu_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KRecentFilesMenu*
/// @param w int
/// @param h int
void k_recentfilesmenu_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KRecentFilesMenu*
/// @param baseSize QSize*
void k_recentfilesmenu_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KRecentFilesMenu*
/// @param basew int
/// @param baseh int
void k_recentfilesmenu_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KRecentFilesMenu*
/// @param fixedSize QSize*
void k_recentfilesmenu_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KRecentFilesMenu*
/// @param w int
/// @param h int
void k_recentfilesmenu_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KRecentFilesMenu*
/// @param w int
void k_recentfilesmenu_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KRecentFilesMenu*
/// @param h int
void k_recentfilesmenu_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPointF*
QPointF* k_recentfilesmenu_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPoint*
QPoint* k_recentfilesmenu_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPointF*
QPointF* k_recentfilesmenu_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPoint*
QPoint* k_recentfilesmenu_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPointF*
QPointF* k_recentfilesmenu_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPoint*
QPoint* k_recentfilesmenu_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPointF*
QPointF* k_recentfilesmenu_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPoint*
QPoint* k_recentfilesmenu_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KRecentFilesMenu*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_recentfilesmenu_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KRecentFilesMenu*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_recentfilesmenu_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KRecentFilesMenu*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_recentfilesmenu_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KRecentFilesMenu*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_recentfilesmenu_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KRecentFilesMenu*
QWidget* k_recentfilesmenu_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KRecentFilesMenu*
QWidget* k_recentfilesmenu_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KRecentFilesMenu*
QWidget* k_recentfilesmenu_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KRecentFilesMenu*
const QPalette* k_recentfilesmenu_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KRecentFilesMenu*
/// @param palette QPalette*
void k_recentfilesmenu_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KRecentFilesMenu*
/// @param backgroundRole enum QPalette__ColorRole
void k_recentfilesmenu_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KRecentFilesMenu*
///
/// @return enum QPalette__ColorRole
int32_t k_recentfilesmenu_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KRecentFilesMenu*
/// @param foregroundRole enum QPalette__ColorRole
void k_recentfilesmenu_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KRecentFilesMenu*
///
/// @return enum QPalette__ColorRole
int32_t k_recentfilesmenu_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KRecentFilesMenu*
const QFont* k_recentfilesmenu_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KRecentFilesMenu*
/// @param font QFont*
void k_recentfilesmenu_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KRecentFilesMenu*
QFontMetrics* k_recentfilesmenu_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KRecentFilesMenu*
QFontInfo* k_recentfilesmenu_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KRecentFilesMenu*
QCursor* k_recentfilesmenu_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KRecentFilesMenu*
/// @param cursor QCursor*
void k_recentfilesmenu_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KRecentFilesMenu*
/// @param enable bool
void k_recentfilesmenu_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KRecentFilesMenu*
/// @param enable bool
void k_recentfilesmenu_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KRecentFilesMenu*
/// @param mask QBitmap*
void k_recentfilesmenu_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KRecentFilesMenu*
/// @param mask QRegion*
void k_recentfilesmenu_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KRecentFilesMenu*
QRegion* k_recentfilesmenu_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRecentFilesMenu*
/// @param target QPaintDevice*
void k_recentfilesmenu_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRecentFilesMenu*
/// @param painter QPainter*
void k_recentfilesmenu_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KRecentFilesMenu*
QPixmap* k_recentfilesmenu_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KRecentFilesMenu*
QGraphicsEffect* k_recentfilesmenu_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KRecentFilesMenu*
/// @param effect QGraphicsEffect*
void k_recentfilesmenu_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KRecentFilesMenu*
/// @param type enum Qt__GestureType
void k_recentfilesmenu_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KRecentFilesMenu*
/// @param type enum Qt__GestureType
void k_recentfilesmenu_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KRecentFilesMenu*
/// @param windowTitle const char*
void k_recentfilesmenu_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KRecentFilesMenu*
/// @param styleSheet const char*
void k_recentfilesmenu_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KRecentFilesMenu*
/// @param icon QIcon*
void k_recentfilesmenu_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KRecentFilesMenu*
QIcon* k_recentfilesmenu_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KRecentFilesMenu*
/// @param windowIconText const char*
void k_recentfilesmenu_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KRecentFilesMenu*
/// @param windowRole const char*
void k_recentfilesmenu_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KRecentFilesMenu*
/// @param filePath const char*
void k_recentfilesmenu_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KRecentFilesMenu*
/// @param level double
void k_recentfilesmenu_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KRecentFilesMenu*
double k_recentfilesmenu_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KRecentFilesMenu*
/// @param toolTip const char*
void k_recentfilesmenu_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KRecentFilesMenu*
/// @param msec int
void k_recentfilesmenu_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KRecentFilesMenu*
/// @param statusTip const char*
void k_recentfilesmenu_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KRecentFilesMenu*
/// @param whatsThis const char*
void k_recentfilesmenu_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KRecentFilesMenu*
/// @param name const char*
void k_recentfilesmenu_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KRecentFilesMenu*
/// @param description const char*
void k_recentfilesmenu_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KRecentFilesMenu*
/// @param direction enum Qt__LayoutDirection
void k_recentfilesmenu_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KRecentFilesMenu*
///
/// @return enum Qt__LayoutDirection
int32_t k_recentfilesmenu_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KRecentFilesMenu*
/// @param locale QLocale*
void k_recentfilesmenu_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KRecentFilesMenu*
QLocale* k_recentfilesmenu_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KRecentFilesMenu*
/// @param reason enum Qt__FocusReason
void k_recentfilesmenu_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KRecentFilesMenu*
///
/// @return enum Qt__FocusPolicy
int32_t k_recentfilesmenu_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KRecentFilesMenu*
/// @param policy enum Qt__FocusPolicy
void k_recentfilesmenu_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_recentfilesmenu_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KRecentFilesMenu*
/// @param focusProxy QWidget*
void k_recentfilesmenu_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KRecentFilesMenu*
QWidget* k_recentfilesmenu_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KRecentFilesMenu*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_recentfilesmenu_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KRecentFilesMenu*
/// @param policy enum Qt__ContextMenuPolicy
void k_recentfilesmenu_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KRecentFilesMenu*
/// @param param1 QCursor*
void k_recentfilesmenu_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KRecentFilesMenu*
/// @param key QKeySequence*
int32_t k_recentfilesmenu_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KRecentFilesMenu*
/// @param id int
void k_recentfilesmenu_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KRecentFilesMenu*
/// @param id int
void k_recentfilesmenu_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KRecentFilesMenu*
/// @param id int
void k_recentfilesmenu_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_recentfilesmenu_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_recentfilesmenu_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KRecentFilesMenu*
/// @param enable bool
void k_recentfilesmenu_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KRecentFilesMenu*
QGraphicsProxyWidget* k_recentfilesmenu_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRecentFilesMenu*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_recentfilesmenu_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRecentFilesMenu*
/// @param param1 QRect*
void k_recentfilesmenu_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRecentFilesMenu*
/// @param param1 QRegion*
void k_recentfilesmenu_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRecentFilesMenu*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_recentfilesmenu_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRecentFilesMenu*
/// @param param1 QRect*
void k_recentfilesmenu_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRecentFilesMenu*
/// @param param1 QRegion*
void k_recentfilesmenu_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KRecentFilesMenu*
/// @param hidden bool
void k_recentfilesmenu_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KRecentFilesMenu*
/// @param param1 QWidget*
void k_recentfilesmenu_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KRecentFilesMenu*
/// @param x int
/// @param y int
void k_recentfilesmenu_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KRecentFilesMenu*
/// @param param1 QPoint*
void k_recentfilesmenu_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KRecentFilesMenu*
/// @param w int
/// @param h int
void k_recentfilesmenu_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KRecentFilesMenu*
/// @param param1 QSize*
void k_recentfilesmenu_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KRecentFilesMenu*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_recentfilesmenu_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KRecentFilesMenu*
/// @param geometry QRect*
void k_recentfilesmenu_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
char* k_recentfilesmenu_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KRecentFilesMenu*
/// @param geometry const char*
bool k_recentfilesmenu_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KRecentFilesMenu*
/// @param param1 QWidget*
bool k_recentfilesmenu_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KRecentFilesMenu*
///
/// @return flag of enum Qt__WindowState
int32_t k_recentfilesmenu_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KRecentFilesMenu*
/// @param state flag of enum Qt__WindowState
void k_recentfilesmenu_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KRecentFilesMenu*
/// @param state flag of enum Qt__WindowState
void k_recentfilesmenu_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KRecentFilesMenu*
QSizePolicy* k_recentfilesmenu_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KRecentFilesMenu*
/// @param sizePolicy QSizePolicy*
void k_recentfilesmenu_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KRecentFilesMenu*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_recentfilesmenu_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KRecentFilesMenu*
QRegion* k_recentfilesmenu_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KRecentFilesMenu*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_recentfilesmenu_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KRecentFilesMenu*
/// @param margins QMargins*
void k_recentfilesmenu_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KRecentFilesMenu*
QMargins* k_recentfilesmenu_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KRecentFilesMenu*
QRect* k_recentfilesmenu_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KRecentFilesMenu*
QLayout* k_recentfilesmenu_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KRecentFilesMenu*
/// @param layout QLayout*
void k_recentfilesmenu_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KRecentFilesMenu*
/// @param parent QWidget*
void k_recentfilesmenu_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KRecentFilesMenu*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_recentfilesmenu_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KRecentFilesMenu*
/// @param dx int
/// @param dy int
void k_recentfilesmenu_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KRecentFilesMenu*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_recentfilesmenu_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KRecentFilesMenu*
QWidget* k_recentfilesmenu_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KRecentFilesMenu*
QWidget* k_recentfilesmenu_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KRecentFilesMenu*
QWidget* k_recentfilesmenu_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KRecentFilesMenu*
/// @param on bool
void k_recentfilesmenu_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRecentFilesMenu*
/// @param action QAction*
void k_recentfilesmenu_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KRecentFilesMenu*
/// @param actions libqt_list /* of QAction* */
void k_recentfilesmenu_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KRecentFilesMenu*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_recentfilesmenu_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KRecentFilesMenu*
/// @param before QAction*
/// @param action QAction*
void k_recentfilesmenu_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KRecentFilesMenu*
/// @param action QAction*
void k_recentfilesmenu_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KRecentFilesMenu*
libqt_list /* of QAction* */ k_recentfilesmenu_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRecentFilesMenu*
/// @param text const char*
QAction* k_recentfilesmenu_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRecentFilesMenu*
/// @param icon QIcon*
/// @param text const char*
QAction* k_recentfilesmenu_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRecentFilesMenu*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_recentfilesmenu_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRecentFilesMenu*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_recentfilesmenu_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KRecentFilesMenu*
QWidget* k_recentfilesmenu_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KRecentFilesMenu*
/// @param type flag of enum Qt__WindowType
void k_recentfilesmenu_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KRecentFilesMenu*
///
/// @return flag of enum Qt__WindowType
int64_t k_recentfilesmenu_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KRecentFilesMenu*
/// @param param1 enum Qt__WindowType
void k_recentfilesmenu_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KRecentFilesMenu*
/// @param type flag of enum Qt__WindowType
void k_recentfilesmenu_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KRecentFilesMenu*
///
/// @return enum Qt__WindowType
int64_t k_recentfilesmenu_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_recentfilesmenu_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KRecentFilesMenu*
/// @param x int
/// @param y int
QWidget* k_recentfilesmenu_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KRecentFilesMenu*
/// @param p QPoint*
QWidget* k_recentfilesmenu_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KRecentFilesMenu*
/// @param p QPointF*
QWidget* k_recentfilesmenu_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KRecentFilesMenu*
/// @param param1 enum Qt__WidgetAttribute
void k_recentfilesmenu_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KRecentFilesMenu*
/// @param param1 enum Qt__WidgetAttribute
bool k_recentfilesmenu_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KRecentFilesMenu*
/// @param child QWidget*
bool k_recentfilesmenu_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KRecentFilesMenu*
/// @param enabled bool
void k_recentfilesmenu_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KRecentFilesMenu*
QBackingStore* k_recentfilesmenu_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KRecentFilesMenu*
QWindow* k_recentfilesmenu_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KRecentFilesMenu*
QScreen* k_recentfilesmenu_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KRecentFilesMenu*
/// @param screen QScreen*
void k_recentfilesmenu_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_recentfilesmenu_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KRecentFilesMenu*
/// @param title const char*
void k_recentfilesmenu_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, const char* title)
void k_recentfilesmenu_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KRecentFilesMenu*
/// @param icon QIcon*
void k_recentfilesmenu_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QIcon* icon)
void k_recentfilesmenu_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KRecentFilesMenu*
/// @param iconText const char*
void k_recentfilesmenu_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, const char* iconText)
void k_recentfilesmenu_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KRecentFilesMenu*
/// @param pos QPoint*
void k_recentfilesmenu_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QPoint* pos)
void k_recentfilesmenu_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KRecentFilesMenu*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_recentfilesmenu_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KRecentFilesMenu*
/// @param hints flag of enum Qt__InputMethodHint
void k_recentfilesmenu_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRecentFilesMenu*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_recentfilesmenu_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRecentFilesMenu*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_recentfilesmenu_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRecentFilesMenu*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_recentfilesmenu_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRecentFilesMenu*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_recentfilesmenu_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRecentFilesMenu*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_recentfilesmenu_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRecentFilesMenu*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_recentfilesmenu_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KRecentFilesMenu*
/// @param rectangle QRect*
QPixmap* k_recentfilesmenu_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KRecentFilesMenu*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_recentfilesmenu_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KRecentFilesMenu*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_recentfilesmenu_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KRecentFilesMenu*
/// @param id int
/// @param enable bool
void k_recentfilesmenu_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KRecentFilesMenu*
/// @param id int
/// @param enable bool
void k_recentfilesmenu_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KRecentFilesMenu*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_recentfilesmenu_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KRecentFilesMenu*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_recentfilesmenu_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_recentfilesmenu_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_recentfilesmenu_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char* k_recentfilesmenu_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KRecentFilesMenu*
/// @param name char*
void k_recentfilesmenu_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KRecentFilesMenu*
/// @param b bool
bool k_recentfilesmenu_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KRecentFilesMenu*
QThread* k_recentfilesmenu_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KRecentFilesMenu*
/// @param thread QThread*
bool k_recentfilesmenu_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRecentFilesMenu*
/// @param interval int
int32_t k_recentfilesmenu_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRecentFilesMenu*
/// @param id int
void k_recentfilesmenu_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRecentFilesMenu*
/// @param id enum Qt__TimerId
void k_recentfilesmenu_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KRecentFilesMenu*
libqt_list /* of QObject* */ k_recentfilesmenu_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KRecentFilesMenu*
/// @param filterObj QObject*
void k_recentfilesmenu_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KRecentFilesMenu*
/// @param obj QObject*
void k_recentfilesmenu_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_recentfilesmenu_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KRecentFilesMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_recentfilesmenu_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_recentfilesmenu_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_recentfilesmenu_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KRecentFilesMenu*
/// @param name const char*
/// @param value QVariant*
bool k_recentfilesmenu_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KRecentFilesMenu*
/// @param name const char*
QVariant* k_recentfilesmenu_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRecentFilesMenu*
const char** k_recentfilesmenu_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KRecentFilesMenu*
QBindingStorage* k_recentfilesmenu_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KRecentFilesMenu*
const QBindingStorage* k_recentfilesmenu_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self)
void k_recentfilesmenu_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KRecentFilesMenu*
QObject* k_recentfilesmenu_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KRecentFilesMenu*
/// @param classname const char*
bool k_recentfilesmenu_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KRecentFilesMenu*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_recentfilesmenu_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRecentFilesMenu*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_recentfilesmenu_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_recentfilesmenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KRecentFilesMenu*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_recentfilesmenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRecentFilesMenu*
/// @param param1 QObject*
void k_recentfilesmenu_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QObject* param1)
void k_recentfilesmenu_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KRecentFilesMenu*
double k_recentfilesmenu_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KRecentFilesMenu*
double k_recentfilesmenu_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_recentfilesmenu_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_recentfilesmenu_encode_metric_f(int32_t metric, double value);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_size_hint(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_qbase_size_hint(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback QSize* func()
void k_recentfilesmenu_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QEvent*
void k_recentfilesmenu_change_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QEvent*
void k_recentfilesmenu_qbase_change_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QEvent* param1)
void k_recentfilesmenu_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QKeyEvent*
void k_recentfilesmenu_key_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QKeyEvent*
void k_recentfilesmenu_qbase_key_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QKeyEvent* param1)
void k_recentfilesmenu_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QMouseEvent*
void k_recentfilesmenu_mouse_release_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QMouseEvent*
void k_recentfilesmenu_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QMouseEvent* param1)
void k_recentfilesmenu_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QMouseEvent*
void k_recentfilesmenu_mouse_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QMouseEvent*
void k_recentfilesmenu_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QMouseEvent* param1)
void k_recentfilesmenu_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QMouseEvent*
void k_recentfilesmenu_mouse_move_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QMouseEvent*
void k_recentfilesmenu_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QMouseEvent* param1)
void k_recentfilesmenu_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QWheelEvent*
void k_recentfilesmenu_wheel_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QWheelEvent*
void k_recentfilesmenu_qbase_wheel_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QWheelEvent* param1)
void k_recentfilesmenu_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QEnterEvent*
void k_recentfilesmenu_enter_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QEnterEvent*
void k_recentfilesmenu_qbase_enter_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QEnterEvent* param1)
void k_recentfilesmenu_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QEvent*
void k_recentfilesmenu_leave_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QEvent*
void k_recentfilesmenu_qbase_leave_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QEvent* param1)
void k_recentfilesmenu_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QHideEvent*
void k_recentfilesmenu_hide_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QHideEvent*
void k_recentfilesmenu_qbase_hide_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QHideEvent* param1)
void k_recentfilesmenu_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QPaintEvent*
void k_recentfilesmenu_paint_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QPaintEvent*
void k_recentfilesmenu_qbase_paint_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QPaintEvent* param1)
void k_recentfilesmenu_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QActionEvent*
void k_recentfilesmenu_action_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QActionEvent*
void k_recentfilesmenu_qbase_action_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QActionEvent* param1)
void k_recentfilesmenu_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QTimerEvent*
void k_recentfilesmenu_timer_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QTimerEvent*
void k_recentfilesmenu_qbase_timer_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QTimerEvent* param1)
void k_recentfilesmenu_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QEvent*
bool k_recentfilesmenu_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QEvent*
bool k_recentfilesmenu_qbase_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback bool func(KRecentFilesMenu* self, QEvent* param1)
void k_recentfilesmenu_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param next bool
bool k_recentfilesmenu_focus_next_prev_child(void* self, bool next);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param next bool
bool k_recentfilesmenu_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback bool func(KRecentFilesMenu* self, bool next)
void k_recentfilesmenu_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
void k_recentfilesmenu_init_style_option(void* self, void* option, void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
void k_recentfilesmenu_qbase_init_style_option(void* self, void* option, void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QStyleOptionMenuItem* option, QAction* action)
void k_recentfilesmenu_on_init_style_option(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback int32_t func()
void k_recentfilesmenu_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param visible bool
void k_recentfilesmenu_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param visible bool
void k_recentfilesmenu_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, bool visible)
void k_recentfilesmenu_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
QSize* k_recentfilesmenu_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback QSize* func()
void k_recentfilesmenu_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 int
int32_t k_recentfilesmenu_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 int
int32_t k_recentfilesmenu_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback int32_t func(KRecentFilesMenu* self, int param1)
void k_recentfilesmenu_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback bool func()
void k_recentfilesmenu_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
QPaintEngine* k_recentfilesmenu_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
QPaintEngine* k_recentfilesmenu_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback QPaintEngine* func()
void k_recentfilesmenu_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QMouseEvent*
void k_recentfilesmenu_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QMouseEvent*
void k_recentfilesmenu_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QMouseEvent* event)
void k_recentfilesmenu_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QKeyEvent*
void k_recentfilesmenu_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QKeyEvent*
void k_recentfilesmenu_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QKeyEvent* event)
void k_recentfilesmenu_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QFocusEvent*
void k_recentfilesmenu_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QFocusEvent*
void k_recentfilesmenu_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QFocusEvent* event)
void k_recentfilesmenu_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QFocusEvent*
void k_recentfilesmenu_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QFocusEvent*
void k_recentfilesmenu_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QFocusEvent* event)
void k_recentfilesmenu_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QMoveEvent*
void k_recentfilesmenu_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QMoveEvent*
void k_recentfilesmenu_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QMoveEvent* event)
void k_recentfilesmenu_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QResizeEvent*
void k_recentfilesmenu_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QResizeEvent*
void k_recentfilesmenu_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QResizeEvent* event)
void k_recentfilesmenu_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QCloseEvent*
void k_recentfilesmenu_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QCloseEvent*
void k_recentfilesmenu_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QCloseEvent* event)
void k_recentfilesmenu_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QContextMenuEvent*
void k_recentfilesmenu_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QContextMenuEvent*
void k_recentfilesmenu_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QContextMenuEvent* event)
void k_recentfilesmenu_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QTabletEvent*
void k_recentfilesmenu_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QTabletEvent*
void k_recentfilesmenu_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QTabletEvent* event)
void k_recentfilesmenu_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QDragEnterEvent*
void k_recentfilesmenu_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QDragEnterEvent*
void k_recentfilesmenu_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QDragEnterEvent* event)
void k_recentfilesmenu_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QDragMoveEvent*
void k_recentfilesmenu_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QDragMoveEvent*
void k_recentfilesmenu_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QDragMoveEvent* event)
void k_recentfilesmenu_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QDragLeaveEvent*
void k_recentfilesmenu_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QDragLeaveEvent*
void k_recentfilesmenu_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QDragLeaveEvent* event)
void k_recentfilesmenu_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QDropEvent*
void k_recentfilesmenu_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QDropEvent*
void k_recentfilesmenu_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QDropEvent* event)
void k_recentfilesmenu_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QShowEvent*
void k_recentfilesmenu_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QShowEvent*
void k_recentfilesmenu_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QShowEvent* event)
void k_recentfilesmenu_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_recentfilesmenu_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_recentfilesmenu_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback bool func(KRecentFilesMenu* self, const char* eventType, void* message, intptr_t* result)
void k_recentfilesmenu_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_recentfilesmenu_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_recentfilesmenu_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback int32_t func(KRecentFilesMenu* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_recentfilesmenu_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param painter QPainter*
void k_recentfilesmenu_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param painter QPainter*
void k_recentfilesmenu_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QPainter* painter)
void k_recentfilesmenu_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param offset QPoint*
QPaintDevice* k_recentfilesmenu_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param offset QPoint*
QPaintDevice* k_recentfilesmenu_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback QPaintDevice* func(KRecentFilesMenu* self, QPoint* offset)
void k_recentfilesmenu_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
QPainter* k_recentfilesmenu_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
QPainter* k_recentfilesmenu_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback QPainter* func()
void k_recentfilesmenu_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QInputMethodEvent*
void k_recentfilesmenu_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 QInputMethodEvent*
void k_recentfilesmenu_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QInputMethodEvent* param1)
void k_recentfilesmenu_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_recentfilesmenu_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_recentfilesmenu_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback QVariant* func(KRecentFilesMenu* self, enum Qt__InputMethodQuery param1)
void k_recentfilesmenu_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param watched QObject*
/// @param event QEvent*
bool k_recentfilesmenu_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param watched QObject*
/// @param event QEvent*
bool k_recentfilesmenu_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback bool func(KRecentFilesMenu* self, QObject* watched, QEvent* event)
void k_recentfilesmenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QChildEvent*
void k_recentfilesmenu_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QChildEvent*
void k_recentfilesmenu_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QChildEvent* event)
void k_recentfilesmenu_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QEvent*
void k_recentfilesmenu_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param event QEvent*
void k_recentfilesmenu_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QEvent* event)
void k_recentfilesmenu_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param signal QMetaMethod*
void k_recentfilesmenu_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param signal QMetaMethod*
void k_recentfilesmenu_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QMetaMethod* signal)
void k_recentfilesmenu_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param signal QMetaMethod*
void k_recentfilesmenu_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param signal QMetaMethod*
void k_recentfilesmenu_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, QMetaMethod* signal)
void k_recentfilesmenu_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_column_count(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_qbase_column_count(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback int32_t func()
void k_recentfilesmenu_on_column_count(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func()
void k_recentfilesmenu_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func()
void k_recentfilesmenu_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback void func()
void k_recentfilesmenu_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback bool func()
void k_recentfilesmenu_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
bool k_recentfilesmenu_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback bool func()
void k_recentfilesmenu_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
QObject* k_recentfilesmenu_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
QObject* k_recentfilesmenu_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback QObject* func()
void k_recentfilesmenu_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
int32_t k_recentfilesmenu_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback int32_t func()
void k_recentfilesmenu_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param signal const char*
int32_t k_recentfilesmenu_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param signal const char*
int32_t k_recentfilesmenu_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback int32_t func(KRecentFilesMenu* self, const char* signal)
void k_recentfilesmenu_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param signal QMetaMethod*
bool k_recentfilesmenu_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param signal QMetaMethod*
bool k_recentfilesmenu_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback bool func(KRecentFilesMenu* self, QMetaMethod* signal)
void k_recentfilesmenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_recentfilesmenu_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_recentfilesmenu_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRecentFilesMenu*
/// @param callback double func(KRecentFilesMenu* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_recentfilesmenu_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KRecentFilesMenu*
/// @param callback void func(KRecentFilesMenu* self, const char* objectName)
void k_recentfilesmenu_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/krecentfilesmenu.html#dtor.KRecentFilesMenu)
///
/// Delete this object from C++ memory.
///
/// @param self KRecentFilesMenu*
void k_recentfilesmenu_delete(void* self);

#endif
