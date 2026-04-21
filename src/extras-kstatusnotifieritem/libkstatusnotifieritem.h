#pragma once
#ifndef SRC_EXTRAS_KSTATUSNOTIFIERITEM_QT6C_LIBKSTATUSNOTIFIERITEM_H
#define SRC_EXTRAS_KSTATUSNOTIFIERITEM_QT6C_LIBKSTATUSNOTIFIERITEM_H

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
/// @param self KStatusNotifierItem*
///
const QMetaObject* k_statusnotifieritem_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KStatusNotifierItem*
/// @param callback const QMetaObject* func()
///
void k_statusnotifieritem_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_meta_object` instead
///
#define k_statusnotifieritem_qbase_meta_object k_statusnotifieritem_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KStatusNotifierItem*
///
const QMetaObject* k_statusnotifieritem_super_meta_object(void* self);

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

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_metacast` instead
///
#define k_statusnotifieritem_qbase_metacast k_statusnotifieritem_super_metacast

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

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_metacall` instead
///
#define k_statusnotifieritem_qbase_metacall k_statusnotifieritem_super_metacall

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_id(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setCategory)
///
/// @param self KStatusNotifierItem*
/// @param category enum KStatusNotifierItem__ItemCategory
///
void k_statusnotifieritem_set_category(void* self, int32_t category);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#category)
///
/// @param self KStatusNotifierItem*
///
/// @return enum KStatusNotifierItem__ItemCategory
///
int32_t k_statusnotifieritem_category(void* self);

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_title(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setStatus)
///
/// @param self KStatusNotifierItem*
/// @param status enum KStatusNotifierItem__ItemStatus
///
void k_statusnotifieritem_set_status(void* self, int32_t status);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#status)
///
/// @param self KStatusNotifierItem*
///
/// @return enum KStatusNotifierItem__ItemStatus
///
int32_t k_statusnotifieritem_status(void* self);

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setIconByPixmap)
///
/// @param self KStatusNotifierItem*
/// @param icon QIcon*
///
void k_statusnotifieritem_set_icon_by_pixmap(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#iconPixmap)
///
/// @param self KStatusNotifierItem*
///
QIcon* k_statusnotifieritem_icon_pixmap(void* self);

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_overlay_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setOverlayIconByPixmap)
///
/// @param self KStatusNotifierItem*
/// @param icon QIcon*
///
void k_statusnotifieritem_set_overlay_icon_by_pixmap(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#overlayIconPixmap)
///
/// @param self KStatusNotifierItem*
///
QIcon* k_statusnotifieritem_overlay_icon_pixmap(void* self);

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_attention_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAttentionIconByPixmap)
///
/// @param self KStatusNotifierItem*
/// @param icon QIcon*
///
void k_statusnotifieritem_set_attention_icon_by_pixmap(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#attentionIconPixmap)
///
/// @param self KStatusNotifierItem*
///
QIcon* k_statusnotifieritem_attention_icon_pixmap(void* self);

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_attention_movie_name(void* self);

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
void k_statusnotifieritem_set_tool_tip2(void* self, void* icon, const char* title, const char* subTitle);

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_tool_tip_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setToolTipIconByPixmap)
///
/// @param self KStatusNotifierItem*
/// @param icon QIcon*
///
void k_statusnotifieritem_set_tool_tip_icon_by_pixmap(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#toolTipIconPixmap)
///
/// @param self KStatusNotifierItem*
///
QIcon* k_statusnotifieritem_tool_tip_icon_pixmap(void* self);

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_tool_tip_title(void* self);

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_tool_tip_sub_title(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setContextMenu)
///
/// @param self KStatusNotifierItem*
/// @param menu QMenu*
///
void k_statusnotifieritem_set_context_menu(void* self, void* menu);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#contextMenu)
///
/// @param self KStatusNotifierItem*
///
QMenu* k_statusnotifieritem_context_menu(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setAssociatedWindow)
///
/// @param self KStatusNotifierItem*
/// @param window QWindow*
///
void k_statusnotifieritem_set_associated_window(void* self, void* window);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#associatedWindow)
///
/// @param self KStatusNotifierItem*
///
QWindow* k_statusnotifieritem_associated_window(void* self);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#actionCollection)
///
/// @param self KStatusNotifierItem*
///
/// @return libqt_list of QAction*
///
libqt_list k_statusnotifieritem_action_collection(void* self);

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
/// @param self KStatusNotifierItem*
/// @param name const char*
///
QAction* k_statusnotifieritem_action(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#setStandardActionsEnabled)
///
/// @param self KStatusNotifierItem*
/// @param enabled bool
///
void k_statusnotifieritem_set_standard_actions_enabled(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#standardActionsEnabled)
///
/// @param self KStatusNotifierItem*
///
bool k_statusnotifieritem_standard_actions_enabled(void* self);

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_provided_token(void* self);

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
void k_statusnotifieritem_activate(void* self, void* pos);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activate)
///
/// Allows for overriding the related default method
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QPoint* pos)
///
void k_statusnotifieritem_on_activate(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_activate` instead
///
#define k_statusnotifieritem_qbase_activate k_statusnotifieritem_super_activate

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activate)
///
/// Base class method implementation
///
/// @param self KStatusNotifierItem*
/// @param pos QPoint*
///
void k_statusnotifieritem_super_activate(void* self, void* pos);

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
void k_statusnotifieritem_activate_requested(void* self, bool active, void* pos);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#activateRequested)
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, bool active, QPoint* pos)
///
void k_statusnotifieritem_on_activate_requested(void* self, void (*callback)(void*, bool, void*));

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#secondaryActivateRequested)
///
/// @param self KStatusNotifierItem*
/// @param pos QPoint*
///
void k_statusnotifieritem_secondary_activate_requested(void* self, void* pos);

/// [Upstream resources](https://api.kde.org/kstatusnotifieritem.html#secondaryActivateRequested)
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QPoint* pos)
///
void k_statusnotifieritem_on_secondary_activate_requested(void* self, void (*callback)(void*, void*));

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

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_event_filter` instead
///
#define k_statusnotifieritem_qbase_event_filter k_statusnotifieritem_super_event_filter

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
/// @param self KStatusNotifierItem*
///
const char* k_statusnotifieritem_object_name(void* self);

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
/// @param self KStatusNotifierItem*
///
bool k_statusnotifieritem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KStatusNotifierItem*
///
bool k_statusnotifieritem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KStatusNotifierItem*
///
bool k_statusnotifieritem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KStatusNotifierItem*
///
bool k_statusnotifieritem_signals_blocked(void* self);

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
/// @param self KStatusNotifierItem*
///
QThread* k_statusnotifieritem_thread(void* self);

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
/// @param self KStatusNotifierItem*
///
/// @return libqt_list of QObject*
///
libqt_list k_statusnotifieritem_children(void* self);

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
QMetaObject__Connection* k_statusnotifieritem_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_statusnotifieritem_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KStatusNotifierItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_statusnotifieritem_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_statusnotifieritem_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_statusnotifieritem_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStatusNotifierItem*
///
bool k_statusnotifieritem_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStatusNotifierItem*
/// @param receiver QObject*
///
bool k_statusnotifieritem_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_statusnotifieritem_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KStatusNotifierItem*
///
void k_statusnotifieritem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KStatusNotifierItem*
///
void k_statusnotifieritem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
/// @param value QVariant*
///
bool k_statusnotifieritem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KStatusNotifierItem*
/// @param name const char*
///
QVariant* k_statusnotifieritem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KStatusNotifierItem*
///
const char** k_statusnotifieritem_dynamic_property_names(void* self);

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
/// @param self KStatusNotifierItem*
///
const QBindingStorage* k_statusnotifieritem_binding_storage2(void* self);

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
/// @param self KStatusNotifierItem*
///
QObject* k_statusnotifieritem_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KStatusNotifierItem*
/// @param classname const char*
///
bool k_statusnotifieritem_inherits(void* self, const char* classname);

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
QMetaObject__Connection* k_statusnotifieritem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_statusnotifieritem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KStatusNotifierItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_statusnotifieritem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStatusNotifierItem*
/// @param signal const char*
///
bool k_statusnotifieritem_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStatusNotifierItem*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_statusnotifieritem_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStatusNotifierItem*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_statusnotifieritem_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KStatusNotifierItem*
/// @param receiver QObject*
/// @param member const char*
///
bool k_statusnotifieritem_disconnect23(void* self, void* receiver, const char* member);

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

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_event` instead
///
#define k_statusnotifieritem_qbase_event k_statusnotifieritem_super_event

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

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_timer_event` instead
///
#define k_statusnotifieritem_qbase_timer_event k_statusnotifieritem_super_timer_event

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

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_child_event` instead
///
#define k_statusnotifieritem_qbase_child_event k_statusnotifieritem_super_child_event

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

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_custom_event` instead
///
#define k_statusnotifieritem_qbase_custom_event k_statusnotifieritem_super_custom_event

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
void k_statusnotifieritem_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_connect_notify` instead
///
#define k_statusnotifieritem_qbase_connect_notify k_statusnotifieritem_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal QMetaMethod*
///
void k_statusnotifieritem_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QMetaMethod* signal)
///
void k_statusnotifieritem_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal QMetaMethod*
///
void k_statusnotifieritem_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_disconnect_notify` instead
///
#define k_statusnotifieritem_qbase_disconnect_notify k_statusnotifieritem_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal QMetaMethod*
///
void k_statusnotifieritem_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback void func(KStatusNotifierItem* self, QMetaMethod* signal)
///
void k_statusnotifieritem_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
///
QObject* k_statusnotifieritem_sender(void* self);

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_sender` instead
///
#define k_statusnotifieritem_qbase_sender k_statusnotifieritem_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
///
QObject* k_statusnotifieritem_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback QObject* func()
///
void k_statusnotifieritem_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
///
int32_t k_statusnotifieritem_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_sender_signal_index` instead
///
#define k_statusnotifieritem_qbase_sender_signal_index k_statusnotifieritem_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
///
int32_t k_statusnotifieritem_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback int32_t func()
///
void k_statusnotifieritem_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal const char*
///
int32_t k_statusnotifieritem_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_receivers` instead
///
#define k_statusnotifieritem_qbase_receivers k_statusnotifieritem_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal const char*
///
int32_t k_statusnotifieritem_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback int32_t func(KStatusNotifierItem* self, const char* signal)
///
void k_statusnotifieritem_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal QMetaMethod*
///
bool k_statusnotifieritem_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_statusnotifieritem_super_is_signal_connected` instead
///
#define k_statusnotifieritem_qbase_is_signal_connected k_statusnotifieritem_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param signal QMetaMethod*
///
bool k_statusnotifieritem_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KStatusNotifierItem*
/// @param callback bool func(KStatusNotifierItem* self, QMetaMethod* signal)
///
void k_statusnotifieritem_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
