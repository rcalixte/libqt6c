#pragma once
#ifndef SRCQT6C_LIBQABSTRACTITEMDELEGATE_H
#define SRCQT6C_LIBQABSTRACTITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractitemdelegate.html

/// q_abstractitemdelegate_new constructs a new QAbstractItemDelegate object.
///
QAbstractItemDelegate* q_abstractitemdelegate_new();

/// q_abstractitemdelegate_new2 constructs a new QAbstractItemDelegate object.
///
/// @param parent QObject*
QAbstractItemDelegate* q_abstractitemdelegate_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractItemDelegate*
const QMetaObject* q_abstractitemdelegate_meta_object(void* self);

/// @param self QAbstractItemDelegate*
/// @param param1 const char*
void* q_abstractitemdelegate_metacast(void* self, const char* param1);

/// @param self QAbstractItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_abstractitemdelegate_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback int32_t fn(QAbstractItemDelegate*, enum QMetaObject__Call, int, void*)
void q_abstractitemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_abstractitemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_abstractitemdelegate_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// @param self QAbstractItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_abstractitemdelegate_paint(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*)
void q_abstractitemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_abstractitemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// @param self QAbstractItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
QSize* q_abstractitemdelegate_size_hint(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback QSize* fn(QAbstractItemDelegate*, QStyleOptionViewItem*, QModelIndex*)
void q_abstractitemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
QSize* q_abstractitemdelegate_qbase_size_hint(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// @param self QAbstractItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
QWidget* q_abstractitemdelegate_create_editor(void* self, void* parent, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback QWidget* fn(QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*)
void q_abstractitemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
QWidget* q_abstractitemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
void q_abstractitemdelegate_destroy_editor(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QWidget*, QModelIndex*)
void q_abstractitemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
void q_abstractitemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
void q_abstractitemdelegate_set_editor_data(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QWidget*, QModelIndex*)
void q_abstractitemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
void q_abstractitemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
void q_abstractitemdelegate_set_model_data(void* self, void* editor, void* model, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*)
void q_abstractitemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
void q_abstractitemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_abstractitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*)
void q_abstractitemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_abstractitemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
bool q_abstractitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool fn(QAbstractItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*)
void q_abstractitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
bool q_abstractitemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// @param self QAbstractItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
bool q_abstractitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool fn(QAbstractItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*)
void q_abstractitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
bool q_abstractitemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// @param self QAbstractItemDelegate*
libqt_list /* of int */ q_abstractitemdelegate_painting_roles(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemDelegate*
/// @param callback libqt_list /* of int */ fn()
void q_abstractitemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Base class method implementation
///
/// @param self QAbstractItemDelegate*
libqt_list /* of int */ q_abstractitemdelegate_qbase_painting_roles(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
void q_abstractitemdelegate_commit_data(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QWidget*)
void q_abstractitemdelegate_on_commit_data(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
void q_abstractitemdelegate_close_editor(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QWidget*)
void q_abstractitemdelegate_on_close_editor(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self QAbstractItemDelegate*
/// @param param1 QModelIndex*
void q_abstractitemdelegate_size_hint_changed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QModelIndex*)
void q_abstractitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_abstractitemdelegate_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_abstractitemdelegate_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QAbstractItemDelegate*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_abstractitemdelegate_close_editor2(void* self, void* editor, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QWidget*, enum QAbstractItemDelegate__EndEditHint)
void q_abstractitemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemDelegate*
const char* q_abstractitemdelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractItemDelegate*
/// @param name char*
void q_abstractitemdelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractItemDelegate*
bool q_abstractitemdelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractItemDelegate*
bool q_abstractitemdelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractItemDelegate*
bool q_abstractitemdelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractItemDelegate*
bool q_abstractitemdelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractItemDelegate*
/// @param b bool
bool q_abstractitemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractItemDelegate*
QThread* q_abstractitemdelegate_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractItemDelegate*
/// @param thread QThread*
bool q_abstractitemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemDelegate*
/// @param interval int
int32_t q_abstractitemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractItemDelegate*
/// @param id int
void q_abstractitemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractItemDelegate*
/// @param id enum Qt__TimerId
void q_abstractitemdelegate_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractItemDelegate*
libqt_list /* of QObject* */ q_abstractitemdelegate_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractItemDelegate*
/// @param parent QObject*
void q_abstractitemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractItemDelegate*
/// @param filterObj QObject*
void q_abstractitemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractItemDelegate*
/// @param obj QObject*
void q_abstractitemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_abstractitemdelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_abstractitemdelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_abstractitemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_abstractitemdelegate_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractItemDelegate*
void q_abstractitemdelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractItemDelegate*
void q_abstractitemdelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractItemDelegate*
/// @param name const char*
/// @param value QVariant*
bool q_abstractitemdelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractItemDelegate*
/// @param name const char*
QVariant* q_abstractitemdelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemDelegate*
const char** q_abstractitemdelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractItemDelegate*
QBindingStorage* q_abstractitemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractItemDelegate*
const QBindingStorage* q_abstractitemdelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemDelegate*
void q_abstractitemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*)
void q_abstractitemdelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractItemDelegate*
QObject* q_abstractitemdelegate_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractItemDelegate*
/// @param classname const char*
bool q_abstractitemdelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractItemDelegate*
void q_abstractitemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractItemDelegate*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_abstractitemdelegate_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_abstractitemdelegate_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_abstractitemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_abstractitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemDelegate*
/// @param param1 QObject*
void q_abstractitemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QObject*)
void q_abstractitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
bool q_abstractitemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
bool q_abstractitemdelegate_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool fn(QAbstractItemDelegate*, QEvent*)
void q_abstractitemdelegate_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param watched QObject*
/// @param event QEvent*
bool q_abstractitemdelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param watched QObject*
/// @param event QEvent*
bool q_abstractitemdelegate_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool fn(QAbstractItemDelegate*, QObject*, QEvent*)
void q_abstractitemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QTimerEvent*
void q_abstractitemdelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QTimerEvent*
void q_abstractitemdelegate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QTimerEvent*)
void q_abstractitemdelegate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QChildEvent*
void q_abstractitemdelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QChildEvent*
void q_abstractitemdelegate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QChildEvent*)
void q_abstractitemdelegate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
void q_abstractitemdelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param event QEvent*
void q_abstractitemdelegate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QEvent*)
void q_abstractitemdelegate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
void q_abstractitemdelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
void q_abstractitemdelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QMetaMethod*)
void q_abstractitemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
void q_abstractitemdelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
void q_abstractitemdelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, QMetaMethod*)
void q_abstractitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
QObject* q_abstractitemdelegate_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
QObject* q_abstractitemdelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback QObject* fn()
void q_abstractitemdelegate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
int32_t q_abstractitemdelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
int32_t q_abstractitemdelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback int32_t fn()
void q_abstractitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal const char*
int32_t q_abstractitemdelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal const char*
int32_t q_abstractitemdelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback int32_t fn(QAbstractItemDelegate*, const char*)
void q_abstractitemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
bool q_abstractitemdelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param signal QMetaMethod*
bool q_abstractitemdelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemDelegate*
/// @param callback bool fn(QAbstractItemDelegate*, QMetaMethod*)
void q_abstractitemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemDelegate*
/// @param callback void fn(QAbstractItemDelegate*, const char*)
void q_abstractitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#dtor.QAbstractItemDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractItemDelegate*
void q_abstractitemdelegate_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractitemdelegate.html#types

typedef enum {
    QABSTRACTITEMDELEGATE_ENDEDITHINT_NOHINT = 0,
    QABSTRACTITEMDELEGATE_ENDEDITHINT_EDITNEXTITEM = 1,
    QABSTRACTITEMDELEGATE_ENDEDITHINT_EDITPREVIOUSITEM = 2,
    QABSTRACTITEMDELEGATE_ENDEDITHINT_SUBMITMODELCACHE = 3,
    QABSTRACTITEMDELEGATE_ENDEDITHINT_REVERTMODELCACHE = 4
} QAbstractItemDelegate__EndEditHint;

#endif
