#pragma once
#ifndef LIBQABSTRACTITEMDELEGATE_H
#define LIBQABSTRACTITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html)

/// q_abstractitemdelegate_new constructs a new QAbstractItemDelegate object.
///
QAbstractItemDelegate* q_abstractitemdelegate_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html)

/// q_abstractitemdelegate_new2 constructs a new QAbstractItemDelegate object.
///
/// @param parent QObject*
///
QAbstractItemDelegate* q_abstractitemdelegate_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAbstractItemDelegate*
///
const QMetaObject* q_abstractitemdelegate_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback const QMetaObject* func(const QAbstractItemDelegate* self)
///
void q_abstractitemdelegate_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QAbstractItemDelegate*
///
const QMetaObject* q_abstractitemdelegate_super_meta_object(const void* self);

/// @param self QAbstractItemDelegate*
/// @param param1 const char*
///
void* q_abstractitemdelegate_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void* func(QAbstractItemDelegate* self, const char* param1)
///
void q_abstractitemdelegate_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param param1 const char*
///
void* q_abstractitemdelegate_super_metacast(void* self, const char* param1);

/// @param self QAbstractItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback int32_t func(QAbstractItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstractitemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractitemdelegate_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractitemdelegate_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// @warning This method must be implemented with `q_abstractitemdelegate_on_paint` before it can be called.
///
/// @param self const QAbstractItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_abstractitemdelegate_paint(const void* self, void* painter, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(const QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_abstractitemdelegate_on_paint(void* self, void (*callback)(const void*, void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// @warning This method must be implemented with `q_abstractitemdelegate_on_size_hint` before it can be called.
///
/// @param self const QAbstractItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QSize* q_abstractitemdelegate_size_hint(const void* self, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback QSize* func(const QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_abstractitemdelegate_on_size_hint(void* self, QSize* (*callback)(const void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// @param self const QAbstractItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* q_abstractitemdelegate_create_editor(const void* self, void* parent, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback QWidget* func(const QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_abstractitemdelegate_on_create_editor(void* self, QWidget* (*callback)(const void*, void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Base class method implementation
///
/// @param self const QAbstractItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
QWidget* q_abstractitemdelegate_super_create_editor(const void* self, void* parent, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// @param self const QAbstractItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_abstractitemdelegate_destroy_editor(const void* self, void* editor, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void q_abstractitemdelegate_on_destroy_editor(void* self, void (*callback)(const void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Base class method implementation
///
/// @param self const QAbstractItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_abstractitemdelegate_super_destroy_editor(const void* self, void* editor, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// @param self const QAbstractItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_abstractitemdelegate_set_editor_data(const void* self, void* editor, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index)
///
void q_abstractitemdelegate_on_set_editor_data(void* self, void (*callback)(const void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Base class method implementation
///
/// @param self const QAbstractItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
///
void q_abstractitemdelegate_super_set_editor_data(const void* self, void* editor, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// @param self const QAbstractItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void q_abstractitemdelegate_set_model_data(const void* self, void* editor, void* model, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index)
///
void q_abstractitemdelegate_on_set_model_data(void* self, void (*callback)(const void*, void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Base class method implementation
///
/// @param self const QAbstractItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
///
void q_abstractitemdelegate_super_set_model_data(const void* self, void* editor, void* model, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// @param self const QAbstractItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_abstractitemdelegate_update_editor_geometry(const void* self, void* editor, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(const QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_abstractitemdelegate_on_update_editor_geometry(void* self, void (*callback)(const void*, void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Base class method implementation
///
/// @param self const QAbstractItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_abstractitemdelegate_super_update_editor_geometry(const void* self, void* editor, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool q_abstractitemdelegate_editor_event(void* self, void* event, void* model, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool func(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_abstractitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool q_abstractitemdelegate_super_editor_event(void* self, void* event, void* model, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// @param self QAbstractItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool q_abstractitemdelegate_help_event(void* self, void* event, void* view, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool func(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index)
///
void q_abstractitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
///
bool q_abstractitemdelegate_super_help_event(void* self, void* event, void* view, const void* option, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// @param self const QAbstractItemDelegate*
///
/// @return libqt_list of int
///
libqt_list q_abstractitemdelegate_painting_roles(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback libqt_list of int func(const QAbstractItemDelegate* self)
///
void q_abstractitemdelegate_on_painting_roles(void* self, libqt_list (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Base class method implementation
///
/// @param self const QAbstractItemDelegate*
///
/// @return libqt_list of int
///
libqt_list q_abstractitemdelegate_super_painting_roles(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
///
void q_abstractitemdelegate_commit_data(void* self, void* editor);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QWidget* editor)
///
void q_abstractitemdelegate_on_commit_data(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
///
void q_abstractitemdelegate_close_editor(void* self, void* editor);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QWidget* editor)
///
void q_abstractitemdelegate_on_close_editor(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self QAbstractItemDelegate*
/// @param param1 QModelIndex*
///
void q_abstractitemdelegate_size_hint_changed(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QModelIndex* param1)
///
void q_abstractitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractitemdelegate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractitemdelegate_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_abstractitemdelegate_close_editor2(void* self, void* editor, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void q_abstractitemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAbstractItemDelegate*
///
const char* q_abstractitemdelegate_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractItemDelegate*
/// @param name const char*
///
void q_abstractitemdelegate_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAbstractItemDelegate*
///
bool q_abstractitemdelegate_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstractItemDelegate*
///
bool q_abstractitemdelegate_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstractItemDelegate*
///
bool q_abstractitemdelegate_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstractItemDelegate*
///
bool q_abstractitemdelegate_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractItemDelegate*
/// @param b bool
///
bool q_abstractitemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAbstractItemDelegate*
///
QThread* q_abstractitemdelegate_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractItemDelegate*
/// @param thread QThread*
///
bool q_abstractitemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemDelegate*
/// @param interval int
///
int32_t q_abstractitemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemDelegate*
/// @param time int64_t of nanoseconds
///
int32_t q_abstractitemdelegate_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractItemDelegate*
/// @param id int
///
void q_abstractitemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractItemDelegate*
/// @param id enum Qt__TimerId
///
void q_abstractitemdelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAbstractItemDelegate*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractitemdelegate_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractItemDelegate*
/// @param parent QObject*
///
void q_abstractitemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractItemDelegate*
/// @param filterObj QObject*
///
void q_abstractitemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractItemDelegate*
/// @param obj QObject*
///
void q_abstractitemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstractitemdelegate_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractitemdelegate_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractitemdelegate_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractitemdelegate_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractitemdelegate_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemDelegate*
///
bool q_abstractitemdelegate_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemDelegate*
/// @param receiver QObject*
///
bool q_abstractitemdelegate_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractitemdelegate_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstractItemDelegate*
///
void q_abstractitemdelegate_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstractItemDelegate*
///
void q_abstractitemdelegate_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractItemDelegate*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractitemdelegate_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstractItemDelegate*
/// @param name const char*
///
QVariant* q_abstractitemdelegate_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractItemDelegate*
///
const char** q_abstractitemdelegate_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractItemDelegate*
///
QBindingStorage* q_abstractitemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAbstractItemDelegate*
///
const QBindingStorage* q_abstractitemdelegate_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemDelegate*
///
void q_abstractitemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self)
///
void q_abstractitemdelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QAbstractItemDelegate*
///
QObject* q_abstractitemdelegate_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstractItemDelegate*
/// @param classname const char*
///
bool q_abstractitemdelegate_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractItemDelegate*
///
void q_abstractitemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractitemdelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemDelegate*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractitemdelegate_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstractitemdelegate_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstractitemdelegate_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractitemdelegate_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemDelegate*
/// @param signal const char*
///
bool q_abstractitemdelegate_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractitemdelegate_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemDelegate*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractitemdelegate_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractItemDelegate*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractitemdelegate_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemDelegate*
/// @param param1 QObject*
///
void q_abstractitemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QObject* param1)
///
void q_abstractitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
///
bool q_abstractitemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
///
bool q_abstractitemdelegate_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool func(QAbstractItemDelegate* self, QEvent* event)
///
void q_abstractitemdelegate_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractitemdelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractitemdelegate_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool func(QAbstractItemDelegate* self, QObject* watched, QEvent* event)
///
void q_abstractitemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QTimerEvent*
///
void q_abstractitemdelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QTimerEvent*
///
void q_abstractitemdelegate_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QTimerEvent* event)
///
void q_abstractitemdelegate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QChildEvent*
///
void q_abstractitemdelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QChildEvent*
///
void q_abstractitemdelegate_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QChildEvent* event)
///
void q_abstractitemdelegate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
///
void q_abstractitemdelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
///
void q_abstractitemdelegate_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QEvent* event)
///
void q_abstractitemdelegate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
///
void q_abstractitemdelegate_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
///
void q_abstractitemdelegate_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QMetaMethod* signal)
///
void q_abstractitemdelegate_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
///
void q_abstractitemdelegate_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
///
void q_abstractitemdelegate_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, QMetaMethod* signal)
///
void q_abstractitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractItemDelegate*
///
QObject* q_abstractitemdelegate_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractItemDelegate*
///
QObject* q_abstractitemdelegate_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback QObject* func(QAbstractItemDelegate* self)
///
void q_abstractitemdelegate_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractItemDelegate*
///
int32_t q_abstractitemdelegate_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractItemDelegate*
///
int32_t q_abstractitemdelegate_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback int32_t func(QAbstractItemDelegate* self)
///
void q_abstractitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractItemDelegate*
/// @param signal const char*
///
int32_t q_abstractitemdelegate_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractItemDelegate*
/// @param signal const char*
///
int32_t q_abstractitemdelegate_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback int32_t func(QAbstractItemDelegate* self, const char* signal)
///
void q_abstractitemdelegate_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAbstractItemDelegate*
/// @param signal QMetaMethod*
///
bool q_abstractitemdelegate_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAbstractItemDelegate*
/// @param signal QMetaMethod*
///
bool q_abstractitemdelegate_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool func(QAbstractItemDelegate* self, QMetaMethod* signal)
///
void q_abstractitemdelegate_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemDelegate*
/// @param callback void func(QAbstractItemDelegate* self, const char* objectName)
///
void q_abstractitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#dtor.QAbstractItemDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractItemDelegate*
///
void q_abstractitemdelegate_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemdelegate.html#public-types)

typedef enum {
    QABSTRACTITEMDELEGATE_ENDEDITHINT_NOHINT = 0,
    QABSTRACTITEMDELEGATE_ENDEDITHINT_EDITNEXTITEM = 1,
    QABSTRACTITEMDELEGATE_ENDEDITHINT_EDITPREVIOUSITEM = 2,
    QABSTRACTITEMDELEGATE_ENDEDITHINT_SUBMITMODELCACHE = 3,
    QABSTRACTITEMDELEGATE_ENDEDITHINT_REVERTMODELCACHE = 4
} QAbstractItemDelegate__EndEditHint;

#endif
