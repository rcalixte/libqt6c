#pragma once
#ifndef EXTRAS_KSTATUSNOTIFIERITEM_LIBKSTATUSNOTIFIERITEM_H
#define EXTRAS_KSTATUSNOTIFIERITEM_LIBKSTATUSNOTIFIERITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html)

/// k_statusnotifieritem_new constructs a new KStatusNotifierItem object.
///
KStatusNotifierItem* k_statusnotifieritem_new();

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html)

/// k_statusnotifieritem_new2 constructs a new KStatusNotifierItem object.
///
/// @param id const char*
///
KStatusNotifierItem* k_statusnotifieritem_new2(const char* id);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html)

/// k_statusnotifieritem_new3 constructs a new KStatusNotifierItem object.
///
/// @param parent QObject*
///
KStatusNotifierItem* k_statusnotifieritem_new3(void* parent);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html)

/// k_statusnotifieritem_new4 constructs a new KStatusNotifierItem object.
///
/// @param id const char*
/// @param parent QObject*
///
KStatusNotifierItem* k_statusnotifieritem_new4(const char* id, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KStatusNotifierItem*
///
const QMetaObject* k_statusnotifieritem_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KStatusNotifierItem*
/// @param callback const QMetaObject* func(const KStatusNotifierItem* self)
///
void k_statusnotifieritem_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KStatusNotifierItem*
///
const QMetaObject* k_statusnotifieritem_super_meta_object(const void* self);

/// @param self KStatusNotifierItem*
/// @param param1 const char*
///
void* k_statusnotifieritem_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KStatusNotifierItem*
/// @param callback void* func(KStatusNotifierItem* self, const char* param1)
///
void k_statusnotifieritem_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KStatusNotifierItem*
/// @param param1 const char*
///
void* k_statusnotifieritem_super_metacast(void* self, const char* param1);

/// @param self KStatusNotifierItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_statusnotifieritem_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KStatusNotifierItem*
/// @param callback int32_t func(KStatusNotifierItem* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_statusnotifieritem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KStatusNotifierItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_statusnotifieritem_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_statusnotifieritem_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_id(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setCategory)
///
/// @param self KStatusNotifierItem*
/// @param category enum KStatusNotifierItem__ItemCategory
///
void k_statusnotifieritem_set_category(void* self, int32_t category);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#category)
///
/// @param self const KStatusNotifierItem*
///
/// @return enum KStatusNotifierItem__ItemCategory
///
int32_t k_statusnotifieritem_category(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setTitle)
///
/// @param self KStatusNotifierItem*
/// @param title const char*
///
void k_statusnotifieritem_set_title(void* self, const char* title);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_title(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setStatus)
///
/// @param self KStatusNotifierItem*
/// @param status enum KStatusNotifierItem__ItemStatus
///
void k_statusnotifieritem_set_status(void* self, int32_t status);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#status)
///
/// @param self const KStatusNotifierItem*
///
/// @return enum KStatusNotifierItem__ItemStatus
///
int32_t k_statusnotifieritem_status(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setIconByName)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
///
void k_statusnotifieritem_set_icon_by_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_icon_name(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setIconByPixmap)
///
/// @param self KStatusNotifierItem*
/// @param icon QIcon*
///
void k_statusnotifieritem_set_icon_by_pixmap(void* self, const void* icon);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#iconPixmap)
///
/// @param self const KStatusNotifierItem*
///
QIcon* k_statusnotifieritem_icon_pixmap(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setOverlayIconByName)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
///
void k_statusnotifieritem_set_overlay_icon_by_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#overlayIconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_overlay_icon_name(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setOverlayIconByPixmap)
///
/// @param self KStatusNotifierItem*
/// @param icon QIcon*
///
void k_statusnotifieritem_set_overlay_icon_by_pixmap(void* self, const void* icon);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#overlayIconPixmap)
///
/// @param self const KStatusNotifierItem*
///
QIcon* k_statusnotifieritem_overlay_icon_pixmap(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionIconByName)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
///
void k_statusnotifieritem_set_attention_icon_by_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionIconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_attention_icon_name(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionIconByPixmap)
///
/// @param self KStatusNotifierItem*
/// @param icon QIcon*
///
void k_statusnotifieritem_set_attention_icon_by_pixmap(void* self, const void* icon);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionIconPixmap)
///
/// @param self const KStatusNotifierItem*
///
QIcon* k_statusnotifieritem_attention_icon_pixmap(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionMovieByName)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
///
void k_statusnotifieritem_set_attention_movie_by_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionMovieName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_attention_movie_name(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTip)
///
/// @param self KStatusNotifierItem*
/// @param iconName const char*
/// @param title const char*
/// @param subTitle const char*
///
void k_statusnotifieritem_set_tool_tip(void* self, const char* iconName, const char* title, const char* subTitle);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTip)
///
/// @param self KStatusNotifierItem*
/// @param icon QIcon*
/// @param title const char*
/// @param subTitle const char*
///
void k_statusnotifieritem_set_tool_tip2(void* self, const void* icon, const char* title, const char* subTitle);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipIconByName)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
///
void k_statusnotifieritem_set_tool_tip_icon_by_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipIconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_tool_tip_icon_name(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipIconByPixmap)
///
/// @param self KStatusNotifierItem*
/// @param icon QIcon*
///
void k_statusnotifieritem_set_tool_tip_icon_by_pixmap(void* self, const void* icon);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipIconPixmap)
///
/// @param self const KStatusNotifierItem*
///
QIcon* k_statusnotifieritem_tool_tip_icon_pixmap(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipTitle)
///
/// @param self KStatusNotifierItem*
/// @param title const char*
///
void k_statusnotifieritem_set_tool_tip_title(void* self, const char* title);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_tool_tip_title(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipSubTitle)
///
/// @param self KStatusNotifierItem*
/// @param subTitle const char*
///
void k_statusnotifieritem_set_tool_tip_sub_title(void* self, const char* subTitle);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipSubTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_tool_tip_sub_title(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setContextMenu)
///
/// @param self KStatusNotifierItem*
/// @param menu QMenu*
///
void k_statusnotifieritem_set_context_menu(void* self, void* menu);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#contextMenu)
///
/// @param self const KStatusNotifierItem*
///
QMenu* k_statusnotifieritem_context_menu(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAssociatedWindow)
///
/// @param self KStatusNotifierItem*
/// @param window QWindow*
///
void k_statusnotifieritem_set_associated_window(void* self, void* window);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#associatedWindow)
///
/// @param self const KStatusNotifierItem*
///
QWindow* k_statusnotifieritem_associated_window(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#actionCollection)
///
/// @param self const KStatusNotifierItem*
///
/// @return libqt_list of QAction*
///
libqt_list k_statusnotifieritem_action_collection(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#addAction)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
/// @param action QAction*
///
void k_statusnotifieritem_add_action(void* self, const char* name, void* action);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#removeAction)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
///
void k_statusnotifieritem_remove_action(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#action)
///
/// @param self const KStatusNotifierItem*
/// @param name const char*
///
QAction* k_statusnotifieritem_action(const void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setStandardActionsEnabled)
///
/// @param self KStatusNotifierItem*
/// @param enabled bool
///
void k_statusnotifieritem_set_standard_actions_enabled(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#standardActionsEnabled)
///
/// @param self const KStatusNotifierItem*
///
bool k_statusnotifieritem_standard_actions_enabled(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#showMessage)
///
/// @param self KStatusNotifierItem*
/// @param title const char*
/// @param message const char*
/// @param icon const char*
///
void k_statusnotifieritem_show_message(void* self, const char* title, const char* message, const char* icon);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#providedToken)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_provided_token(const void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#abortQuit)
///
/// @param self KStatusNotifierItem*
///
void k_statusnotifieritem_abort_quit(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activate)
///
/// @param self KStatusNotifierItem*
/// @param pos QPoint*
///
void k_statusnotifieritem_activate(void* self, const void* pos);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activate)
///
/// Allows for overriding the related default method
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QPoint* pos)
///
void k_statusnotifieritem_on_activate(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activate)
///
/// Base class method implementation
///
/// @param self KStatusNotifierItem*
/// @param pos QPoint*
///
void k_statusnotifieritem_super_activate(void* self, const void* pos);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#hideAssociatedWindow)
///
/// @param self KStatusNotifierItem*
///
void k_statusnotifieritem_hide_associated_window(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#scrollRequested)
///
/// @param self KStatusNotifierItem*
/// @param delta int
/// @param orientation enum Qt__Orientation
///
void k_statusnotifieritem_scroll_requested(void* self, int delta, int32_t orientation);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#scrollRequested)
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, int delta, enum Qt__Orientation orientation)
///
void k_statusnotifieritem_on_scroll_requested(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activateRequested)
///
/// @param self KStatusNotifierItem*
/// @param active bool
/// @param pos QPoint*
///
void k_statusnotifieritem_activate_requested(void* self, bool active, const void* pos);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activateRequested)
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, bool active, QPoint* pos)
///
void k_statusnotifieritem_on_activate_requested(void* self, void (*callback)(void*, bool, const void*));

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#secondaryActivateRequested)
///
/// @param self KStatusNotifierItem*
/// @param pos QPoint*
///
void k_statusnotifieritem_secondary_activate_requested(void* self, const void* pos);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#secondaryActivateRequested)
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QPoint* pos)
///
void k_statusnotifieritem_on_secondary_activate_requested(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#quitRequested)
///
/// @param self KStatusNotifierItem*
///
void k_statusnotifieritem_quit_requested(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#quitRequested)
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self)
///
void k_statusnotifieritem_on_quit_requested(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#eventFilter)
///
/// @param self KStatusNotifierItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_statusnotifieritem_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KStatusNotifierItem*
/// @param callback bool func(KStatusNotifierItem* self, QObject* watched, QEvent* event)
///
void k_statusnotifieritem_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KStatusNotifierItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_statusnotifieritem_super_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_statusnotifieritem_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_statusnotifieritem_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#showMessage)
///
/// @param self KStatusNotifierItem*
/// @param title const char*
/// @param message const char*
/// @param icon const char*
/// @param timeout int
///
void k_statusnotifieritem_show_message4(void* self, const char* title, const char* message, const char* icon, int timeout);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KStatusNotifierItem*
///
const char* k_statusnotifieritem_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
///
void k_statusnotifieritem_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KStatusNotifierItem*
///
bool k_statusnotifieritem_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KStatusNotifierItem*
///
bool k_statusnotifieritem_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KStatusNotifierItem*
///
bool k_statusnotifieritem_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KStatusNotifierItem*
///
bool k_statusnotifieritem_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KStatusNotifierItem*
/// @param b bool
///
bool k_statusnotifieritem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KStatusNotifierItem*
///
QThread* k_statusnotifieritem_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KStatusNotifierItem*
/// @param thread QThread*
///
bool k_statusnotifieritem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStatusNotifierItem*
/// @param interval int
///
int32_t k_statusnotifieritem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStatusNotifierItem*
/// @param time int64_t of nanoseconds
///
int32_t k_statusnotifieritem_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KStatusNotifierItem*
/// @param id int
///
void k_statusnotifieritem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KStatusNotifierItem*
/// @param id enum Qt__TimerId
///
void k_statusnotifieritem_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KStatusNotifierItem*
///
/// @return libqt_list of QObject*
///
libqt_list k_statusnotifieritem_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KStatusNotifierItem*
/// @param parent QObject*
///
void k_statusnotifieritem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KStatusNotifierItem*
/// @param filterObj QObject*
///
void k_statusnotifieritem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KStatusNotifierItem*
/// @param obj QObject*
///
void k_statusnotifieritem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_statusnotifieritem_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_statusnotifieritem_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KStatusNotifierItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_statusnotifieritem_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_statusnotifieritem_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_statusnotifieritem_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KStatusNotifierItem*
///
bool k_statusnotifieritem_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KStatusNotifierItem*
/// @param receiver QObject*
///
bool k_statusnotifieritem_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_statusnotifieritem_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KStatusNotifierItem*
///
void k_statusnotifieritem_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KStatusNotifierItem*
///
void k_statusnotifieritem_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
/// @param value QVariant*
///
bool k_statusnotifieritem_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KStatusNotifierItem*
/// @param name const char*
///
QVariant* k_statusnotifieritem_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KStatusNotifierItem*
///
const char** k_statusnotifieritem_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KStatusNotifierItem*
///
QBindingStorage* k_statusnotifieritem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KStatusNotifierItem*
///
const QBindingStorage* k_statusnotifieritem_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStatusNotifierItem*
///
void k_statusnotifieritem_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self)
///
void k_statusnotifieritem_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KStatusNotifierItem*
///
QObject* k_statusnotifieritem_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KStatusNotifierItem*
/// @param classname const char*
///
bool k_statusnotifieritem_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KStatusNotifierItem*
///
void k_statusnotifieritem_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStatusNotifierItem*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_statusnotifieritem_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KStatusNotifierItem*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_statusnotifieritem_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_statusnotifieritem_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_statusnotifieritem_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KStatusNotifierItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_statusnotifieritem_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KStatusNotifierItem*
/// @param signal const char*
///
bool k_statusnotifieritem_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KStatusNotifierItem*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_statusnotifieritem_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KStatusNotifierItem*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_statusnotifieritem_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KStatusNotifierItem*
/// @param receiver QObject*
/// @param member const char*
///
bool k_statusnotifieritem_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStatusNotifierItem*
/// @param param1 QObject*
///
void k_statusnotifieritem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QObject* param1)
///
void k_statusnotifieritem_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param event QEvent*
///
bool k_statusnotifieritem_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param event QEvent*
///
bool k_statusnotifieritem_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback bool func(KStatusNotifierItem* self, QEvent* event)
///
void k_statusnotifieritem_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param event QTimerEvent*
///
void k_statusnotifieritem_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param event QTimerEvent*
///
void k_statusnotifieritem_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QTimerEvent* event)
///
void k_statusnotifieritem_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param event QChildEvent*
///
void k_statusnotifieritem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param event QChildEvent*
///
void k_statusnotifieritem_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QChildEvent* event)
///
void k_statusnotifieritem_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param event QEvent*
///
void k_statusnotifieritem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param event QEvent*
///
void k_statusnotifieritem_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QEvent* event)
///
void k_statusnotifieritem_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal QMetaMethod*
///
void k_statusnotifieritem_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal QMetaMethod*
///
void k_statusnotifieritem_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QMetaMethod* signal)
///
void k_statusnotifieritem_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal QMetaMethod*
///
void k_statusnotifieritem_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal QMetaMethod*
///
void k_statusnotifieritem_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QMetaMethod* signal)
///
void k_statusnotifieritem_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KStatusNotifierItem*
///
QObject* k_statusnotifieritem_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KStatusNotifierItem*
///
QObject* k_statusnotifieritem_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback QObject* func(KStatusNotifierItem* self)
///
void k_statusnotifieritem_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KStatusNotifierItem*
///
int32_t k_statusnotifieritem_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KStatusNotifierItem*
///
int32_t k_statusnotifieritem_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback int32_t func(KStatusNotifierItem* self)
///
void k_statusnotifieritem_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KStatusNotifierItem*
/// @param signal const char*
///
int32_t k_statusnotifieritem_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KStatusNotifierItem*
/// @param signal const char*
///
int32_t k_statusnotifieritem_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback int32_t func(KStatusNotifierItem* self, const char* signal)
///
void k_statusnotifieritem_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KStatusNotifierItem*
/// @param signal QMetaMethod*
///
bool k_statusnotifieritem_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KStatusNotifierItem*
/// @param signal QMetaMethod*
///
bool k_statusnotifieritem_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback bool func(KStatusNotifierItem* self, QMetaMethod* signal)
///
void k_statusnotifieritem_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, const char* objectName)
///
void k_statusnotifieritem_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#dtor.KStatusNotifierItem)
///
/// Delete this object from C++ memory.
///
/// @param self KStatusNotifierItem*
///
void k_statusnotifieritem_delete(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#public-types)

typedef enum {
    KSTATUSNOTIFIERITEM_ITEMSTATUS_PASSIVE = 1,
    KSTATUSNOTIFIERITEM_ITEMSTATUS_ACTIVE = 2,
    KSTATUSNOTIFIERITEM_ITEMSTATUS_NEEDSATTENTION = 3
} KStatusNotifierItem__ItemStatus;

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#public-types)

typedef enum {
    KSTATUSNOTIFIERITEM_ITEMCATEGORY_APPLICATIONSTATUS = 1,
    KSTATUSNOTIFIERITEM_ITEMCATEGORY_COMMUNICATIONS = 2,
    KSTATUSNOTIFIERITEM_ITEMCATEGORY_SYSTEMSERVICES = 3,
    KSTATUSNOTIFIERITEM_ITEMCATEGORY_HARDWARE = 4,
    KSTATUSNOTIFIERITEM_ITEMCATEGORY_RESERVED = 129
} KStatusNotifierItem__ItemCategory;

#endif
