#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKEXTENDABLEITEMDELEGATE_H
#define SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKEXTENDABLEITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html)

/// k_extendableitemdelegate_new constructs a new KExtendableItemDelegate object.
///
/// @param parent QAbstractItemView*
///
KExtendableItemDelegate* k_extendableitemdelegate_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KExtendableItemDelegate*
///
const QMetaObject* k_extendableitemdelegate_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback const QMetaObject* func()
///
void k_extendableitemdelegate_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_meta_object` instead
///
#define k_extendableitemdelegate_qbase_meta_object k_extendableitemdelegate_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
///
const QMetaObject* k_extendableitemdelegate_super_meta_object(void* self);

/// @param self KExtendableItemDelegate*
/// @param param1 const char*
///
void* k_extendableitemdelegate_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback void* func(KExtendableItemDelegate* self, const char* param1)
///
void k_extendableitemdelegate_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_metacast` instead
///
#define k_extendableitemdelegate_qbase_metacast k_extendableitemdelegate_super_metacast

/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
/// @param param1 const char*
///
void* k_extendableitemdelegate_super_metacast(void* self, const char* param1);

/// @param self KExtendableItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_extendableitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback int32_t func(KExtendableItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_extendableitemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_metacall` instead
///
#define k_extendableitemdelegate_qbase_metacall k_extendableitemdelegate_super_metacall

/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_extendableitemdelegate_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_extendableitemdelegate_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
///
/// @param self KExtendableItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* k_extendableitemdelegate_size_hint(void* self, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback QSize* func(KExtendableItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_extendableitemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_size_hint` instead
///
#define k_extendableitemdelegate_qbase_size_hint k_extendableitemdelegate_super_size_hint

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* k_extendableitemdelegate_super_size_hint(void* self, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#paint)
///
/// @param self KExtendableItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_paint(void* self, void* painter, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_extendableitemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_paint` instead
///
#define k_extendableitemdelegate_qbase_paint k_extendableitemdelegate_super_paint

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#paint)
///
/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_super_paint(void* self, void* painter, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendItem)
///
/// @param self KExtendableItemDelegate*
/// @param extender QWidget*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_extend_item(void* self, void* extender, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractItem)
///
/// @param self KExtendableItemDelegate*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_contract_item(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractAll)
///
/// @param self KExtendableItemDelegate*
///
void k_extendableitemdelegate_contract_all(void* self);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#isExtended)
///
/// @param self KExtendableItemDelegate*
/// @param index QModelIndex*
///
bool k_extendableitemdelegate_is_extended(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
///
/// @param self KExtendableItemDelegate*
/// @param extender QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_update_extender_geometry(void* self, void* extender, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
///
/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* extender, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_extendableitemdelegate_on_update_extender_geometry(void* self, void (*callback)(void*, void*, void*, void*));

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_update_extender_geometry` instead
///
#define k_extendableitemdelegate_qbase_update_extender_geometry k_extendableitemdelegate_super_update_extender_geometry

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#updateExtenderGeometry)
///
/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
/// @param extender QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_super_update_extender_geometry(void* self, void* extender, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderCreated)
///
/// @param self KExtendableItemDelegate*
/// @param extender QWidget*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_extender_created(void* self, void* extender, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderCreated)
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* extender, QModelIndex* index)
///
void k_extendableitemdelegate_on_extender_created(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderDestroyed)
///
/// @param self KExtendableItemDelegate*
/// @param extender QWidget*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_extender_destroyed(void* self, void* extender, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderDestroyed)
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* extender, QModelIndex* index)
///
void k_extendableitemdelegate_on_extender_destroyed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
///
/// @param self KExtendableItemDelegate*
/// @param extender QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QRect* k_extendableitemdelegate_extender_rect(void* self, void* extender, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
///
/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback QRect* func(KExtendableItemDelegate* self, QWidget* extender, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_extendableitemdelegate_on_extender_rect(void* self, QRect* (*callback)(void*, void*, void*, void*));

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_extender_rect` instead
///
#define k_extendableitemdelegate_qbase_extender_rect k_extendableitemdelegate_super_extender_rect

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extenderRect)
///
/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
/// @param extender QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QRect* k_extendableitemdelegate_super_extender_rect(void* self, void* extender, void* option, void* index);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
///
/// @param self KExtendableItemDelegate*
/// @param pixmap QPixmap*
///
void k_extendableitemdelegate_set_extend_pixmap(void* self, void* pixmap);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
///
/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QPixmap* pixmap)
///
void k_extendableitemdelegate_on_set_extend_pixmap(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_set_extend_pixmap` instead
///
#define k_extendableitemdelegate_qbase_set_extend_pixmap k_extendableitemdelegate_super_set_extend_pixmap

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setExtendPixmap)
///
/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
/// @param pixmap QPixmap*
///
void k_extendableitemdelegate_super_set_extend_pixmap(void* self, void* pixmap);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
///
/// @param self KExtendableItemDelegate*
/// @param pixmap QPixmap*
///
void k_extendableitemdelegate_set_contract_pixmap(void* self, void* pixmap);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
///
/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QPixmap* pixmap)
///
void k_extendableitemdelegate_on_set_contract_pixmap(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_set_contract_pixmap` instead
///
#define k_extendableitemdelegate_qbase_set_contract_pixmap k_extendableitemdelegate_super_set_contract_pixmap

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#setContractPixmap)
///
/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
/// @param pixmap QPixmap*
///
void k_extendableitemdelegate_super_set_contract_pixmap(void* self, void* pixmap);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
///
/// @param self KExtendableItemDelegate*
///
QPixmap* k_extendableitemdelegate_extend_pixmap(void* self);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
///
/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback QPixmap* func()
///
void k_extendableitemdelegate_on_extend_pixmap(void* self, QPixmap* (*callback)());

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_extend_pixmap` instead
///
#define k_extendableitemdelegate_qbase_extend_pixmap k_extendableitemdelegate_super_extend_pixmap

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#extendPixmap)
///
/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
///
QPixmap* k_extendableitemdelegate_super_extend_pixmap(void* self);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
///
/// @param self KExtendableItemDelegate*
///
QPixmap* k_extendableitemdelegate_contract_pixmap(void* self);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
///
/// Allows for overriding the related default method
///
/// @param self KExtendableItemDelegate*
/// @param callback QPixmap* func()
///
void k_extendableitemdelegate_on_contract_pixmap(void* self, QPixmap* (*callback)());

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_contract_pixmap` instead
///
#define k_extendableitemdelegate_qbase_contract_pixmap k_extendableitemdelegate_super_contract_pixmap

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#contractPixmap)
///
/// Base class method implementation
///
/// @param self KExtendableItemDelegate*
///
QPixmap* k_extendableitemdelegate_super_contract_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_extendableitemdelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_extendableitemdelegate_tr3(const char* s, const char* c, int n);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#itemEditorFactory)
///
/// @param self KExtendableItemDelegate*
///
QItemEditorFactory* k_extendableitemdelegate_item_editor_factory(void* self);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setItemEditorFactory)
///
/// @param self KExtendableItemDelegate*
/// @param factory QItemEditorFactory*
///
void k_extendableitemdelegate_set_item_editor_factory(void* self, void* factory);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
///
void k_extendableitemdelegate_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* editor)
///
void k_extendableitemdelegate_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
///
void k_extendableitemdelegate_close_editor(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* editor)
///
void k_extendableitemdelegate_on_close_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self KExtendableItemDelegate*
/// @param param1 QModelIndex*
///
void k_extendableitemdelegate_size_hint_changed(void* self, void* param1);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QModelIndex* param1)
///
void k_extendableitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void k_extendableitemdelegate_close_editor2(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void k_extendableitemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KExtendableItemDelegate*
///
const char* k_extendableitemdelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KExtendableItemDelegate*
/// @param name const char*
///
void k_extendableitemdelegate_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KExtendableItemDelegate*
///
bool k_extendableitemdelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KExtendableItemDelegate*
///
bool k_extendableitemdelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KExtendableItemDelegate*
///
bool k_extendableitemdelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KExtendableItemDelegate*
///
bool k_extendableitemdelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KExtendableItemDelegate*
/// @param b bool
///
bool k_extendableitemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KExtendableItemDelegate*
///
QThread* k_extendableitemdelegate_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KExtendableItemDelegate*
/// @param thread QThread*
///
bool k_extendableitemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KExtendableItemDelegate*
/// @param interval int
///
int32_t k_extendableitemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KExtendableItemDelegate*
/// @param time int64_t of nanoseconds
///
int32_t k_extendableitemdelegate_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KExtendableItemDelegate*
/// @param id int
///
void k_extendableitemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KExtendableItemDelegate*
/// @param id enum Qt__TimerId
///
void k_extendableitemdelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KExtendableItemDelegate*
///
/// @return libqt_list of QObject*
///
libqt_list k_extendableitemdelegate_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KExtendableItemDelegate*
/// @param parent QObject*
///
void k_extendableitemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KExtendableItemDelegate*
/// @param filterObj QObject*
///
void k_extendableitemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KExtendableItemDelegate*
/// @param obj QObject*
///
void k_extendableitemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_extendableitemdelegate_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_extendableitemdelegate_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KExtendableItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_extendableitemdelegate_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_extendableitemdelegate_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_extendableitemdelegate_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KExtendableItemDelegate*
///
bool k_extendableitemdelegate_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KExtendableItemDelegate*
/// @param receiver QObject*
///
bool k_extendableitemdelegate_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_extendableitemdelegate_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KExtendableItemDelegate*
///
void k_extendableitemdelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KExtendableItemDelegate*
///
void k_extendableitemdelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KExtendableItemDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool k_extendableitemdelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KExtendableItemDelegate*
/// @param name const char*
///
QVariant* k_extendableitemdelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KExtendableItemDelegate*
///
const char** k_extendableitemdelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KExtendableItemDelegate*
///
QBindingStorage* k_extendableitemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KExtendableItemDelegate*
///
const QBindingStorage* k_extendableitemdelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KExtendableItemDelegate*
///
void k_extendableitemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self)
///
void k_extendableitemdelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KExtendableItemDelegate*
///
QObject* k_extendableitemdelegate_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KExtendableItemDelegate*
/// @param classname const char*
///
bool k_extendableitemdelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KExtendableItemDelegate*
///
void k_extendableitemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KExtendableItemDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_extendableitemdelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KExtendableItemDelegate*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_extendableitemdelegate_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_extendableitemdelegate_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_extendableitemdelegate_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KExtendableItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_extendableitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KExtendableItemDelegate*
/// @param signal const char*
///
bool k_extendableitemdelegate_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KExtendableItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_extendableitemdelegate_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KExtendableItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_extendableitemdelegate_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KExtendableItemDelegate*
/// @param receiver QObject*
/// @param member const char*
///
bool k_extendableitemdelegate_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KExtendableItemDelegate*
/// @param param1 QObject*
///
void k_extendableitemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QObject* param1)
///
void k_extendableitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* k_extendableitemdelegate_create_editor(void* self, void* parent, void* option, void* index);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_create_editor` instead
///
#define k_extendableitemdelegate_qbase_create_editor k_extendableitemdelegate_super_create_editor

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* k_extendableitemdelegate_super_create_editor(void* self, void* parent, void* option, void* index);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback QWidget* func(KExtendableItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_extendableitemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*));

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_set_editor_data(void* self, void* editor, void* index);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_set_editor_data` instead
///
#define k_extendableitemdelegate_qbase_set_editor_data k_extendableitemdelegate_super_set_editor_data

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_super_set_editor_data(void* self, void* editor, void* index);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void k_extendableitemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_set_model_data(void* self, void* editor, void* model, void* index);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_set_model_data` instead
///
#define k_extendableitemdelegate_qbase_set_model_data k_extendableitemdelegate_super_set_model_data

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_super_set_model_data(void* self, void* editor, void* model, void* index);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index)
///
void k_extendableitemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_update_editor_geometry` instead
///
#define k_extendableitemdelegate_qbase_update_editor_geometry k_extendableitemdelegate_super_update_editor_geometry

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_super_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_extendableitemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param value QVariant*
/// @param locale QLocale*
///
const char* k_extendableitemdelegate_display_text(void* self, void* value, void* locale);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_display_text` instead
///
#define k_extendableitemdelegate_qbase_display_text k_extendableitemdelegate_super_display_text

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param value QVariant*
/// @param locale QLocale*
///
const char* k_extendableitemdelegate_super_display_text(void* self, void* value, void* locale);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback const char* func(KExtendableItemDelegate* self, QVariant* value, QLocale* locale)
///
void k_extendableitemdelegate_on_display_text(void* self, const char* (*callback)(void*, void*, void*));

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_init_style_option(void* self, void* option, void* index);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_init_style_option` instead
///
#define k_extendableitemdelegate_qbase_init_style_option k_extendableitemdelegate_super_init_style_option

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_super_init_style_option(void* self, void* option, void* index);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_extendableitemdelegate_on_init_style_option(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param object QObject*
/// @param event QEvent*
///
bool k_extendableitemdelegate_event_filter(void* self, void* object, void* event);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_event_filter` instead
///
#define k_extendableitemdelegate_qbase_event_filter k_extendableitemdelegate_super_event_filter

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param object QObject*
/// @param event QEvent*
///
bool k_extendableitemdelegate_super_event_filter(void* self, void* object, void* event);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback bool func(KExtendableItemDelegate* self, QObject* object, QEvent* event)
///
void k_extendableitemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_extendableitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_editor_event` instead
///
#define k_extendableitemdelegate_qbase_editor_event k_extendableitemdelegate_super_editor_event

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_extendableitemdelegate_super_editor_event(void* self, void* event, void* model, void* option, void* index);

/// Inherited from QStyledItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback bool func(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_extendableitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_destroy_editor(void* self, void* editor, void* index);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_destroy_editor` instead
///
#define k_extendableitemdelegate_qbase_destroy_editor k_extendableitemdelegate_super_destroy_editor

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void k_extendableitemdelegate_super_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void k_extendableitemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_extendableitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_help_event` instead
///
#define k_extendableitemdelegate_qbase_help_event k_extendableitemdelegate_super_help_event

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool k_extendableitemdelegate_super_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback bool func(KExtendableItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index)
///
void k_extendableitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
///
/// @return libqt_list of int
///
libqt_list k_extendableitemdelegate_painting_roles(void* self);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_painting_roles` instead
///
#define k_extendableitemdelegate_qbase_painting_roles k_extendableitemdelegate_super_painting_roles

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
///
/// @return libqt_list of int
///
libqt_list k_extendableitemdelegate_super_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback libqt_list of int func()
///
void k_extendableitemdelegate_on_painting_roles(void* self, libqt_list (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QEvent*
///
bool k_extendableitemdelegate_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_event` instead
///
#define k_extendableitemdelegate_qbase_event k_extendableitemdelegate_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QEvent*
///
bool k_extendableitemdelegate_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback bool func(KExtendableItemDelegate* self, QEvent* event)
///
void k_extendableitemdelegate_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QTimerEvent*
///
void k_extendableitemdelegate_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_timer_event` instead
///
#define k_extendableitemdelegate_qbase_timer_event k_extendableitemdelegate_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QTimerEvent*
///
void k_extendableitemdelegate_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QTimerEvent* event)
///
void k_extendableitemdelegate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QChildEvent*
///
void k_extendableitemdelegate_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_child_event` instead
///
#define k_extendableitemdelegate_qbase_child_event k_extendableitemdelegate_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QChildEvent*
///
void k_extendableitemdelegate_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QChildEvent* event)
///
void k_extendableitemdelegate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QEvent*
///
void k_extendableitemdelegate_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_custom_event` instead
///
#define k_extendableitemdelegate_qbase_custom_event k_extendableitemdelegate_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param event QEvent*
///
void k_extendableitemdelegate_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QEvent* event)
///
void k_extendableitemdelegate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param signal QMetaMethod*
///
void k_extendableitemdelegate_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_connect_notify` instead
///
#define k_extendableitemdelegate_qbase_connect_notify k_extendableitemdelegate_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param signal QMetaMethod*
///
void k_extendableitemdelegate_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QMetaMethod* signal)
///
void k_extendableitemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param signal QMetaMethod*
///
void k_extendableitemdelegate_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_disconnect_notify` instead
///
#define k_extendableitemdelegate_qbase_disconnect_notify k_extendableitemdelegate_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param signal QMetaMethod*
///
void k_extendableitemdelegate_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, QMetaMethod* signal)
///
void k_extendableitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
///
QObject* k_extendableitemdelegate_sender(void* self);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_sender` instead
///
#define k_extendableitemdelegate_qbase_sender k_extendableitemdelegate_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
///
QObject* k_extendableitemdelegate_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback QObject* func()
///
void k_extendableitemdelegate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
///
int32_t k_extendableitemdelegate_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_sender_signal_index` instead
///
#define k_extendableitemdelegate_qbase_sender_signal_index k_extendableitemdelegate_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
///
int32_t k_extendableitemdelegate_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback int32_t func()
///
void k_extendableitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param signal const char*
///
int32_t k_extendableitemdelegate_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_receivers` instead
///
#define k_extendableitemdelegate_qbase_receivers k_extendableitemdelegate_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param signal const char*
///
int32_t k_extendableitemdelegate_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback int32_t func(KExtendableItemDelegate* self, const char* signal)
///
void k_extendableitemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param signal QMetaMethod*
///
bool k_extendableitemdelegate_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_extendableitemdelegate_super_is_signal_connected` instead
///
#define k_extendableitemdelegate_qbase_is_signal_connected k_extendableitemdelegate_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param signal QMetaMethod*
///
bool k_extendableitemdelegate_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtendableItemDelegate*
/// @param callback bool func(KExtendableItemDelegate* self, QMetaMethod* signal)
///
void k_extendableitemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtendableItemDelegate*
/// @param callback void func(KExtendableItemDelegate* self, const char* objectName)
///
void k_extendableitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#dtor.KExtendableItemDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self KExtendableItemDelegate*
///
void k_extendableitemdelegate_delete(void* self);

/// [Upstream resources](https://api.kde.org/kextendableitemdelegate.html#public-types)

typedef enum {
    KEXTENDABLEITEMDELEGATE_AUXDATAROLES_SHOWEXTENSIONINDICATORROLE = 456
} KExtendableItemDelegate__auxDataRoles;

#endif
