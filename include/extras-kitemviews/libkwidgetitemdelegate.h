#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKWIDGETITEMDELEGATE_H
#define SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKWIDGETITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self KWidgetItemDelegate*
///
const QMetaObject* k_widgetitemdelegate_meta_object(void* self);

/// @param self KWidgetItemDelegate*
/// @param param1 const char*
///
void* k_widgetitemdelegate_metacast(void* self, const char* param1);

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
int32_t k_widgetitemdelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_widgetitemdelegate_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#itemView)
///
/// @param self KWidgetItemDelegate*
///
QAbstractItemView* k_widgetitemdelegate_item_view(void* self);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#focusedIndex)
///
/// @param self KWidgetItemDelegate*
///
QPersistentModelIndex* k_widgetitemdelegate_focused_index(void* self);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#resetModel)
///
/// @param self KWidgetItemDelegate*
///
void k_widgetitemdelegate_reset_model(void* self);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
///
/// @param self KWidgetItemDelegate*
/// @param index QModelIndex*
///
libqt_list /* of QWidget* */ k_widgetitemdelegate_create_item_widgets(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetItemDelegate*
/// @param callback QWidget** func(KWidgetItemDelegate* self, QModelIndex* index)
///
void k_widgetitemdelegate_on_create_item_widgets(void* self, QWidget** (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#createItemWidgets)
///
/// Base class method implementation
///
/// @param self KWidgetItemDelegate*
/// @param index QModelIndex*
///
libqt_list /* of QWidget* */ k_widgetitemdelegate_qbase_create_item_widgets(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
///
/// @param self KWidgetItemDelegate*
/// @param widgets libqt_list /* of QWidget* */
/// @param option QStyleOptionViewItem*
/// @param index QPersistentModelIndex*
///
void k_widgetitemdelegate_update_item_widgets(void* self, libqt_list widgets, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget** widgets, QStyleOptionViewItem* option, QPersistentModelIndex* index)
///
void k_widgetitemdelegate_on_update_item_widgets(void* self, void (*callback)(void*, QWidget**, void*, void*));

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#updateItemWidgets)
///
/// Base class method implementation
///
/// @param self KWidgetItemDelegate*
/// @param widgets libqt_list /* of QWidget* */
/// @param option QStyleOptionViewItem*
/// @param index QPersistentModelIndex*
///
void k_widgetitemdelegate_qbase_update_item_widgets(void* self, libqt_list widgets, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
///
/// @param self KWidgetItemDelegate*
/// @param widget QWidget*
/// @param types libqt_list /* of enum QEvent__Type */
///
void k_widgetitemdelegate_set_blocked_event_types(void* self, void* widget, libqt_list types);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* widget, libqt_list /* of enum QEvent__Type */ /* of enum QEvent__Type */)
///
void k_widgetitemdelegate_on_set_blocked_event_types(void* self, void (*callback)(void*, void*, libqt_list));

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#setBlockedEventTypes)
///
/// Base class method implementation
///
/// @param self KWidgetItemDelegate*
/// @param widget QWidget*
/// @param types libqt_list /* of enum QEvent__Type */
///
void k_widgetitemdelegate_qbase_set_blocked_event_types(void* self, void* widget, libqt_list types);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
///
/// @param self KWidgetItemDelegate*
/// @param widget QWidget*
///
/// @return libqt_list of enum QEvent__Type
///
libqt_list /* of enum QEvent__Type */ k_widgetitemdelegate_blocked_event_types(void* self, void* widget);

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
///
/// Allows for overriding the related default method
///
/// @param self KWidgetItemDelegate*
/// @param callback libqt_list /* of enum QEvent__Type */ func(KWidgetItemDelegate* self, QWidget* widget)
///
void k_widgetitemdelegate_on_blocked_event_types(void* self, libqt_list /* of enum QEvent__Type */ (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kwidgetitemdelegate.html#blockedEventTypes)
///
/// Base class method implementation
///
/// @param self KWidgetItemDelegate*
/// @param widget QWidget*
///
/// @return libqt_list of enum QEvent__Type
///
libqt_list /* of enum QEvent__Type */ k_widgetitemdelegate_qbase_blocked_event_types(void* self, void* widget);

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
void k_widgetitemdelegate_size_hint_changed(void* self, void* param1);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QModelIndex* param1)
///
void k_widgetitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*));

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
/// @param self KWidgetItemDelegate*
///
const char* k_widgetitemdelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KWidgetItemDelegate*
/// @param name char*
///
void k_widgetitemdelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KWidgetItemDelegate*
///
bool k_widgetitemdelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KWidgetItemDelegate*
///
bool k_widgetitemdelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KWidgetItemDelegate*
///
bool k_widgetitemdelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KWidgetItemDelegate*
///
bool k_widgetitemdelegate_signals_blocked(void* self);

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
/// @param self KWidgetItemDelegate*
///
QThread* k_widgetitemdelegate_thread(void* self);

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
/// @param self KWidgetItemDelegate*
///
libqt_list /* of QObject* */ k_widgetitemdelegate_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_widgetitemdelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWidgetItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_widgetitemdelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_widgetitemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_widgetitemdelegate_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KWidgetItemDelegate*
///
void k_widgetitemdelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KWidgetItemDelegate*
///
void k_widgetitemdelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KWidgetItemDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool k_widgetitemdelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KWidgetItemDelegate*
/// @param name const char*
///
QVariant* k_widgetitemdelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWidgetItemDelegate*
///
const char** k_widgetitemdelegate_dynamic_property_names(void* self);

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
/// @param self KWidgetItemDelegate*
///
const QBindingStorage* k_widgetitemdelegate_binding_storage2(void* self);

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
/// @param self KWidgetItemDelegate*
///
QObject* k_widgetitemdelegate_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KWidgetItemDelegate*
/// @param classname const char*
///
bool k_widgetitemdelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KWidgetItemDelegate*
///
void k_widgetitemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWidgetItemDelegate*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_widgetitemdelegate_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_widgetitemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWidgetItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_widgetitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
/// @param self KWidgetItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_paint(void* self, void* painter, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* k_widgetitemdelegate_size_hint(void* self, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* k_widgetitemdelegate_qbase_size_hint(void* self, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback QSize* func(KWidgetItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* k_widgetitemdelegate_create_editor(void* self, void* parent, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* k_widgetitemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback QWidget* func(KWidgetItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void k_widgetitemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_set_editor_data(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void k_widgetitemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_set_model_data(void* self, void* editor, void* model, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index)
///
void k_widgetitemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_widgetitemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*));

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
bool k_widgetitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);

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
bool k_widgetitemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback bool func(KWidgetItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

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
bool k_widgetitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);

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
bool k_widgetitemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback bool func(KWidgetItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_widgetitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
///
libqt_list /* of int */ k_widgetitemdelegate_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
///
libqt_list /* of int */ k_widgetitemdelegate_qbase_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback int* func()
///
void k_widgetitemdelegate_on_painting_roles(void* self, int* (*callback)());

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
bool k_widgetitemdelegate_qbase_event(void* self, void* event);

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
bool k_widgetitemdelegate_qbase_event_filter(void* self, void* watched, void* event);

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
void k_widgetitemdelegate_qbase_timer_event(void* self, void* event);

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
void k_widgetitemdelegate_qbase_child_event(void* self, void* event);

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
void k_widgetitemdelegate_qbase_custom_event(void* self, void* event);

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
void k_widgetitemdelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
void k_widgetitemdelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QMetaMethod* signal)
///
void k_widgetitemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
void k_widgetitemdelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
void k_widgetitemdelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback void func(KWidgetItemDelegate* self, QMetaMethod* signal)
///
void k_widgetitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
///
QObject* k_widgetitemdelegate_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
///
QObject* k_widgetitemdelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback QObject* func()
///
void k_widgetitemdelegate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
///
int32_t k_widgetitemdelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
///
int32_t k_widgetitemdelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback int32_t func()
///
void k_widgetitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal const char*
///
int32_t k_widgetitemdelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal const char*
///
int32_t k_widgetitemdelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback int32_t func(KWidgetItemDelegate* self, const char* signal)
///
void k_widgetitemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
bool k_widgetitemdelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param signal QMetaMethod*
///
bool k_widgetitemdelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KWidgetItemDelegate*
/// @param callback bool func(KWidgetItemDelegate* self, QMetaMethod* signal)
///
void k_widgetitemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
