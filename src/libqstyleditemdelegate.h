#pragma once
#ifndef SRCQT6C_LIBQSTYLEDITEMDELEGATE_H
#define SRCQT6C_LIBQSTYLEDITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstyleditemdelegate.html

/// q_styleditemdelegate_new constructs a new QStyledItemDelegate object.
///
QStyledItemDelegate* q_styleditemdelegate_new();

/// q_styleditemdelegate_new2 constructs a new QStyledItemDelegate object.
///
/// @param parent QObject*
QStyledItemDelegate* q_styleditemdelegate_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QStyledItemDelegate*
const QMetaObject* q_styleditemdelegate_meta_object(void* self);

/// @param self QStyledItemDelegate*
/// @param param1 const char*
void* q_styleditemdelegate_metacast(void* self, const char* param1);

/// @param self QStyledItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_styleditemdelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback int32_t fn(QStyledItemDelegate*, enum QMetaObject__Call, int, void*)
void q_styleditemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_styleditemdelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_styleditemdelegate_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#paint)
///
/// @param self QStyledItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_styleditemdelegate_paint(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*)
void q_styleditemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#paint)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param painter QPainter*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_styleditemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#sizeHint)
///
/// @param self QStyledItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
QSize* q_styleditemdelegate_size_hint(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback QSize* fn(QStyledItemDelegate*, QStyleOptionViewItem*, QModelIndex*)
void q_styleditemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
QSize* q_styleditemdelegate_qbase_size_hint(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
///
/// @param self QStyledItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
QWidget* q_styleditemdelegate_create_editor(void* self, void* parent, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback QWidget* fn(QStyledItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*)
void q_styleditemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param parent QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
QWidget* q_styleditemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
void q_styleditemdelegate_set_editor_data(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QWidget*, QModelIndex*)
void q_styleditemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
void q_styleditemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
void q_styleditemdelegate_set_model_data(void* self, void* editor, void* model, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*)
void q_styleditemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
/// @param model QAbstractItemModel*
/// @param index QModelIndex*
void q_styleditemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_styleditemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*)
void q_styleditemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_styleditemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#itemEditorFactory)
///
/// @param self QStyledItemDelegate*
QItemEditorFactory* q_styleditemdelegate_item_editor_factory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setItemEditorFactory)
///
/// @param self QStyledItemDelegate*
/// @param factory QItemEditorFactory*
void q_styleditemdelegate_set_item_editor_factory(void* self, void* factory);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyledItemDelegate*
/// @param value QVariant*
/// @param locale QLocale*
const char* q_styleditemdelegate_display_text(void* self, void* value, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback const char* fn(QStyledItemDelegate*, QVariant*, QLocale*)
void q_styleditemdelegate_on_display_text(void* self, const char* (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param value QVariant*
/// @param locale QLocale*
const char* q_styleditemdelegate_qbase_display_text(void* self, void* value, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
///
/// @param self QStyledItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_styleditemdelegate_init_style_option(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QStyleOptionViewItem*, QModelIndex*)
void q_styleditemdelegate_on_init_style_option(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
void q_styleditemdelegate_qbase_init_style_option(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
///
/// @param self QStyledItemDelegate*
/// @param object QObject*
/// @param event QEvent*
bool q_styleditemdelegate_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback bool fn(QStyledItemDelegate*, QObject*, QEvent*)
void q_styleditemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param object QObject*
/// @param event QEvent*
bool q_styleditemdelegate_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
///
/// @param self QStyledItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
bool q_styleditemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
///
/// Allows for overriding the related default method
///
/// @param self QStyledItemDelegate*
/// @param callback bool fn(QStyledItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*)
void q_styleditemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
///
/// Base class method implementation
///
/// @param self QStyledItemDelegate*
/// @param event QEvent*
/// @param model QAbstractItemModel*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
bool q_styleditemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_styleditemdelegate_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_styleditemdelegate_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
void q_styleditemdelegate_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QWidget*)
void q_styleditemdelegate_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
void q_styleditemdelegate_close_editor(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QWidget*)
void q_styleditemdelegate_on_close_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self QStyledItemDelegate*
/// @param param1 QModelIndex*
void q_styleditemdelegate_size_hint_changed(void* self, void* param1);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QModelIndex*)
void q_styleditemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_styleditemdelegate_close_editor2(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QWidget*, enum QAbstractItemDelegate__EndEditHint)
void q_styleditemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyledItemDelegate*
const char* q_styleditemdelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QStyledItemDelegate*
/// @param name char*
void q_styleditemdelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QStyledItemDelegate*
bool q_styleditemdelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QStyledItemDelegate*
bool q_styleditemdelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QStyledItemDelegate*
bool q_styleditemdelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QStyledItemDelegate*
bool q_styleditemdelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QStyledItemDelegate*
/// @param b bool
bool q_styleditemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QStyledItemDelegate*
QThread* q_styleditemdelegate_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStyledItemDelegate*
/// @param thread QThread*
bool q_styleditemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyledItemDelegate*
/// @param interval int
int32_t q_styleditemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStyledItemDelegate*
/// @param id int
void q_styleditemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStyledItemDelegate*
/// @param id enum Qt__TimerId
void q_styleditemdelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QStyledItemDelegate*
libqt_list /* of QObject* */ q_styleditemdelegate_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QStyledItemDelegate*
/// @param parent QObject*
void q_styleditemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QStyledItemDelegate*
/// @param filterObj QObject*
void q_styleditemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QStyledItemDelegate*
/// @param obj QObject*
void q_styleditemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_styleditemdelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStyledItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_styleditemdelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_styleditemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_styleditemdelegate_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QStyledItemDelegate*
void q_styleditemdelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QStyledItemDelegate*
void q_styleditemdelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QStyledItemDelegate*
/// @param name const char*
/// @param value QVariant*
bool q_styleditemdelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QStyledItemDelegate*
/// @param name const char*
QVariant* q_styleditemdelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyledItemDelegate*
const char** q_styleditemdelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStyledItemDelegate*
QBindingStorage* q_styleditemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStyledItemDelegate*
const QBindingStorage* q_styleditemdelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyledItemDelegate*
void q_styleditemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*)
void q_styleditemdelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QStyledItemDelegate*
QObject* q_styleditemdelegate_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QStyledItemDelegate*
/// @param classname const char*
bool q_styleditemdelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QStyledItemDelegate*
void q_styleditemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStyledItemDelegate*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_styleditemdelegate_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyledItemDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_styleditemdelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_styleditemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStyledItemDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_styleditemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyledItemDelegate*
/// @param param1 QObject*
void q_styleditemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QObject*)
void q_styleditemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
void q_styleditemdelegate_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param editor QWidget*
/// @param index QModelIndex*
void q_styleditemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QWidget*, QModelIndex*)
void q_styleditemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
bool q_styleditemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QHelpEvent*
/// @param view QAbstractItemView*
/// @param option QStyleOptionViewItem*
/// @param index QModelIndex*
bool q_styleditemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback bool fn(QStyledItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*)
void q_styleditemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
libqt_list /* of int */ q_styleditemdelegate_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
libqt_list /* of int */ q_styleditemdelegate_qbase_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback libqt_list /* of int */ fn()
void q_styleditemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QEvent*
bool q_styleditemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QEvent*
bool q_styleditemdelegate_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback bool fn(QStyledItemDelegate*, QEvent*)
void q_styleditemdelegate_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QTimerEvent*
void q_styleditemdelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QTimerEvent*
void q_styleditemdelegate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QTimerEvent*)
void q_styleditemdelegate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QChildEvent*
void q_styleditemdelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QChildEvent*
void q_styleditemdelegate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QChildEvent*)
void q_styleditemdelegate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QEvent*
void q_styleditemdelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param event QEvent*
void q_styleditemdelegate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QEvent*)
void q_styleditemdelegate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param signal QMetaMethod*
void q_styleditemdelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param signal QMetaMethod*
void q_styleditemdelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QMetaMethod*)
void q_styleditemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param signal QMetaMethod*
void q_styleditemdelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param signal QMetaMethod*
void q_styleditemdelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, QMetaMethod*)
void q_styleditemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
QObject* q_styleditemdelegate_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
QObject* q_styleditemdelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback QObject* fn()
void q_styleditemdelegate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
int32_t q_styleditemdelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
int32_t q_styleditemdelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback int32_t fn()
void q_styleditemdelegate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param signal const char*
int32_t q_styleditemdelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param signal const char*
int32_t q_styleditemdelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback int32_t fn(QStyledItemDelegate*, const char*)
void q_styleditemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param signal QMetaMethod*
bool q_styleditemdelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param signal QMetaMethod*
bool q_styleditemdelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyledItemDelegate*
/// @param callback bool fn(QStyledItemDelegate*, QMetaMethod*)
void q_styleditemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStyledItemDelegate*
/// @param callback void fn(QStyledItemDelegate*, const char*)
void q_styleditemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#dtor.QStyledItemDelegate)
///
/// Delete this object from C++ memory.
///
/// @param self QStyledItemDelegate*
void q_styleditemdelegate_delete(void* self);

#endif
