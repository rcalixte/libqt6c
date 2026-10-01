#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKWIDGETITEMDELEGATE_H
#define EXTRAS_KITEMVIEWS_LIBKWIDGETITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html)

/// k_widgetitemdelegate_new constructs a new KWidgetItemDelegate object.
///
/// @param itemView QAbstractItemView*
///
KWidgetItemDelegate* k_widgetitemdelegate_new(void* itemView);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html)

/// k_widgetitemdelegate_new2 constructs a new KWidgetItemDelegate object.
///
/// @param itemView QAbstractItemView*
/// @param parent QObject*
///
KWidgetItemDelegate* k_widgetitemdelegate_new2(void* itemView, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KWidgetItemDelegate*
///
const QMetaObject* k_widgetitemdelegate_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetItemDelegate*
/// @param callback const QMetaObject* func(const KWidgetItemDelegate* self)
///
void k_widgetitemdelegate_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KWidgetItemDelegate*
///
const QMetaObject* k_widgetitemdelegate_super_meta_object(const void* self);

/// @param self KWidgetItemDelegate*
/// @param param1 const char*
///
void* k_widgetitemdelegate_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KWidgetItemDelegate*
/// @param callback void* func(KWidgetItemDelegate* self, const char* param1)
///
void k_widgetitemdelegate_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KWidgetItemDelegate*
/// @param param1 const char*
///
void* k_widgetitemdelegate_super_metacast(void* self, const char* param1);

/// @param self KWidgetItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_widgetitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KWidgetItemDelegate*
/// @param callback int32_t func(KWidgetItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_widgetitemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KWidgetItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_widgetitemdelegate_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_widgetitemdelegate_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#itemView)
///
/// @param self const KWidgetItemDelegate*
///
QAbstractItemView* k_widgetitemdelegate_item_view(const void* self);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#focusedIndex)
///
/// @param self const KWidgetItemDelegate*
///
QPersistentModelIndex* k_widgetitemdelegate_focused_index(const void* self);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#resetModel)
///
/// @param self KWidgetItemDelegate*
///
void k_widgetitemdelegate_reset_model(void* self);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
///
/// @warning This method must be implemented with `k_widgetitemdelegate_on_create_item_widgets` before it can be called.
///
/// @param self const KWidgetItemDelegate*
/// @param index QModelIndex*
///
/// @return libqt_list of QWidget*
///
libqt_list k_widgetitemdelegate_create_item_widgets(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetItemDelegate*
/// @param callback libqt_list of QWidget* func(const KWidgetItemDelegate* self, QModelIndex* index)
///
void k_widgetitemdelegate_on_create_item_widgets(void* self, libqt_list (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
///
/// @warning This method must be implemented with `k_widgetitemdelegate_on_update_item_widgets` before it can be called.
///
/// @param self const KWidgetItemDelegate*
/// @param widgets libqt_list of QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QPersistentModelIndex*
///
void k_widgetitemdelegate_update_item_widgets(const void* self, libqt_list widgets, const void* option, const void* index);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(const KWidgetItemDelegate* self, libqt_list of QWidget* widgets, QStyleOptionViewItem* option, QPersistentModelIndex* index)
///
void k_widgetitemdelegate_on_update_item_widgets(void* self, void (*callback)(const void*, libqt_list, const void*, const void*));

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
///
/// @param self const KWidgetItemDelegate*
/// @param widget QWidget*
/// @param types libqt_list of enum QEvent__Type
///
void k_widgetitemdelegate_set_blocked_event_types(const void* self, void* widget, libqt_list types);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
///
/// @param self const KWidgetItemDelegate*
/// @param widget QWidget*
///
/// @return libqt_list of enum QEvent__Type
///
libqt_list k_widgetitemdelegate_blocked_event_types(const void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_widgetitemdelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_widgetitemdelegate_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
///
void k_widgetitemdelegate_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor)
///
void k_widgetitemdelegate_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
///
void k_widgetitemdelegate_close_editor(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor)
///
void k_widgetitemdelegate_on_close_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self KWidgetItemDelegate*
/// @param param1 QModelIndex*
///
void k_widgetitemdelegate_size_hint_changed(void* self, const void* param1);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QModelIndex* param1)
///
void k_widgetitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void k_widgetitemdelegate_close_editor2(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void k_widgetitemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWidgetItemDelegate*
///
const char* k_widgetitemdelegate_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KWidgetItemDelegate*
/// @param name const char*
///
void k_widgetitemdelegate_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KWidgetItemDelegate*
///
bool k_widgetitemdelegate_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KWidgetItemDelegate*
///
bool k_widgetitemdelegate_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KWidgetItemDelegate*
///
bool k_widgetitemdelegate_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KWidgetItemDelegate*
///
bool k_widgetitemdelegate_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KWidgetItemDelegate*
/// @param b bool
///
bool k_widgetitemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KWidgetItemDelegate*
///
QThread* k_widgetitemdelegate_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWidgetItemDelegate*
/// @param thread QThread*
///
bool k_widgetitemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetItemDelegate*
/// @param interval int
///
int32_t k_widgetitemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetItemDelegate*
/// @param time int64_t of nanoseconds
///
int32_t k_widgetitemdelegate_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWidgetItemDelegate*
/// @param id int
///
void k_widgetitemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWidgetItemDelegate*
/// @param id enum Qt__TimerId
///
void k_widgetitemdelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KWidgetItemDelegate*
///
/// @return libqt_list of QObject*
///
libqt_list k_widgetitemdelegate_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KWidgetItemDelegate*
/// @param parent QObject*
///
void k_widgetitemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KWidgetItemDelegate*
/// @param filterObj QObject*
///
void k_widgetitemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KWidgetItemDelegate*
/// @param obj QObject*
///
void k_widgetitemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_widgetitemdelegate_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_widgetitemdelegate_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KWidgetItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_widgetitemdelegate_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_widgetitemdelegate_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_widgetitemdelegate_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetItemDelegate*
///
bool k_widgetitemdelegate_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetItemDelegate*
/// @param receiver QObject*
///
bool k_widgetitemdelegate_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_widgetitemdelegate_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KWidgetItemDelegate*
///
void k_widgetitemdelegate_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KWidgetItemDelegate*
///
void k_widgetitemdelegate_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KWidgetItemDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool k_widgetitemdelegate_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KWidgetItemDelegate*
/// @param name const char*
///
QVariant* k_widgetitemdelegate_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KWidgetItemDelegate*
///
const char** k_widgetitemdelegate_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWidgetItemDelegate*
///
QBindingStorage* k_widgetitemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KWidgetItemDelegate*
///
const QBindingStorage* k_widgetitemdelegate_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetItemDelegate*
///
void k_widgetitemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self)
///
void k_widgetitemdelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KWidgetItemDelegate*
///
QObject* k_widgetitemdelegate_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KWidgetItemDelegate*
/// @param classname const char*
///
bool k_widgetitemdelegate_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KWidgetItemDelegate*
///
void k_widgetitemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetItemDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_widgetitemdelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWidgetItemDelegate*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_widgetitemdelegate_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_widgetitemdelegate_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_widgetitemdelegate_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KWidgetItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_widgetitemdelegate_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetItemDelegate*
/// @param signal const char*
///
bool k_widgetitemdelegate_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_widgetitemdelegate_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_widgetitemdelegate_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KWidgetItemDelegate*
/// @param receiver QObject*
/// @param member const char*
///
bool k_widgetitemdelegate_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetItemDelegate*
/// @param param1 QObject*
///
void k_widgetitemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QObject* param1)
///
void k_widgetitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `k_widgetitemdelegate_on_paint` before it can be called.
////// @param self const KWidgetItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_paint(const void* self, void* painter, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_paint(void* self, void (*callback)(const void*, void*, const void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `k_widgetitemdelegate_on_size_hint` before it can be called.
////// @param self const KWidgetItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* k_widgetitemdelegate_size_hint(const void* self, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback QSize* func(KWidgetItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_widgetitemdelegate_on_size_hint(void* self, QSize* (*callback)(const void*, const void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* k_widgetitemdelegate_create_editor(const void* self, void* parent, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* k_widgetitemdelegate_super_create_editor(const void* self, void* parent, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback QWidget* func(KWidgetItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_create_editor(void* self, QWidget* (*callback)(const void*, void*, const void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_destroy_editor(const void* self, void* editor, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_super_destroy_editor(const void* self, void* editor, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void k_widgetitemdelegate_on_destroy_editor(void* self, void (*callback)(const void*, void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_set_editor_data(const void* self, void* editor, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_super_set_editor_data(const void* self, void* editor, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void k_widgetitemdelegate_on_set_editor_data(void* self, void (*callback)(const void*, void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_set_model_data(const void* self, void* editor, void* model, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_super_set_model_data(const void* self, void* editor, void* model, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index)
///
void k_widgetitemdelegate_on_set_model_data(void* self, void (*callback)(const void*, void*, void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_update_editor_geometry(const void* self, void* editor, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_super_update_editor_geometry(const void* self, void* editor, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_update_editor_geometry(void* self, void (*callback)(const void*, void*, const void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_widgetitemdelegate_editor_event(void* self, void* event, void* model, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_widgetitemdelegate_super_editor_event(void* self, void* event, void* model, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback bool func(KWidgetItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, const void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_widgetitemdelegate_help_event(void* self, void* event, void* view, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_widgetitemdelegate_super_help_event(void* self, void* event, void* view, const void* option, const void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback bool func(KWidgetItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, const void*, const void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
///
/// @return libqt_list of int
///
libqt_list k_widgetitemdelegate_painting_roles(const void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
///
/// @return libqt_list of int
///
libqt_list k_widgetitemdelegate_super_painting_roles(const void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback libqt_list of int func(KWidgetItemDelegate* self)
///
void k_widgetitemdelegate_on_painting_roles(void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QEvent*
///
bool k_widgetitemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QEvent*
///
bool k_widgetitemdelegate_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback bool func(KWidgetItemDelegate* self, QEvent* event)
///
void k_widgetitemdelegate_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_widgetitemdelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_widgetitemdelegate_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback bool func(KWidgetItemDelegate* self, QObject* watched, QEvent* event)
///
void k_widgetitemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QTimerEvent*
///
void k_widgetitemdelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QTimerEvent*
///
void k_widgetitemdelegate_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QTimerEvent* event)
///
void k_widgetitemdelegate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QChildEvent*
///
void k_widgetitemdelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QChildEvent*
///
void k_widgetitemdelegate_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QChildEvent* event)
///
void k_widgetitemdelegate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QEvent*
///
void k_widgetitemdelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param event QEvent*
///
void k_widgetitemdelegate_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QEvent* event)
///
void k_widgetitemdelegate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
void k_widgetitemdelegate_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
void k_widgetitemdelegate_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QMetaMethod* signal)
///
void k_widgetitemdelegate_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
void k_widgetitemdelegate_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
void k_widgetitemdelegate_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QMetaMethod* signal)
///
void k_widgetitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
///
QObject* k_widgetitemdelegate_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
///
QObject* k_widgetitemdelegate_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback QObject* func(KWidgetItemDelegate* self)
///
void k_widgetitemdelegate_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
///
int32_t k_widgetitemdelegate_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
///
int32_t k_widgetitemdelegate_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback int32_t func(KWidgetItemDelegate* self)
///
void k_widgetitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param signal const char*
///
int32_t k_widgetitemdelegate_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param signal const char*
///
int32_t k_widgetitemdelegate_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback int32_t func(KWidgetItemDelegate* self, const char* signal)
///
void k_widgetitemdelegate_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
bool k_widgetitemdelegate_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
bool k_widgetitemdelegate_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback bool func(KWidgetItemDelegate* self, QMetaMethod* signal)
///
void k_widgetitemdelegate_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, const char* objectName)
///
void k_widgetitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#dtor.KWidgetItemDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self KWidgetItemDelegate*
///
void k_widgetitemdelegate_delete(void* self);

#endif
