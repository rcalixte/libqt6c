#pragma once
#ifndef SRCQT6C_LIBQSTYLEDITEMDELEGATE_H
#define SRCQT6C_LIBQSTYLEDITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
#include "libqabstractitemview.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqitemeditorfactory.h"
#include "libqlocale.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpainter.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qstyleditemdelegate.html

/// q_styleditemdelegate_new constructs a new QStyledItemDelegate object.
///
///
QStyledItemDelegate* q_styleditemdelegate_new();

/// q_styleditemdelegate_new2 constructs a new QStyledItemDelegate object.
///
/// ``` QObject* parent ```
QStyledItemDelegate* q_styleditemdelegate_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStyledItemDelegate* self ```
QMetaObject* q_styleditemdelegate_meta_object(void* self);

/// ``` QStyledItemDelegate* self, const char* param1 ```
void* q_styleditemdelegate_metacast(void* self, const char* param1);

/// ``` QStyledItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_styleditemdelegate_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, int32_t (*slot)(QStyledItemDelegate*, enum QMetaObject__Call, int, void*) ```
void q_styleditemdelegate_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_styleditemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_styleditemdelegate_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#paint)
///
/// ``` QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_styleditemdelegate_paint(void* self, void* painter, void* option, void* index);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_styleditemdelegate_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_styleditemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#sizeHint)
///
/// ``` QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_styleditemdelegate_size_hint(void* self, void* option, void* index);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, QSize* (*slot)(QStyledItemDelegate*, QStyleOptionViewItem*, QModelIndex*) ```
void q_styleditemdelegate_on_size_hint(void* self, QSize* (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_styleditemdelegate_qbase_size_hint(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#createEditor)
///
/// ``` QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_styleditemdelegate_create_editor(void* self, void* parent, void* option, void* index);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, QWidget* (*slot)(QStyledItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_styleditemdelegate_on_create_editor(void* self, QWidget* (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_styleditemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setEditorData)
///
/// ``` QStyledItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_styleditemdelegate_set_editor_data(void* self, void* editor, void* index);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QWidget*, QModelIndex*) ```
void q_styleditemdelegate_on_set_editor_data(void* self, void (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_styleditemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setModelData)
///
/// ``` QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_styleditemdelegate_set_model_data(void* self, void* editor, void* model, void* index);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*) ```
void q_styleditemdelegate_on_set_model_data(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_styleditemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#updateEditorGeometry)
///
/// ``` QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_styleditemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_styleditemdelegate_on_update_editor_geometry(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_styleditemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#itemEditorFactory)
///
/// ``` QStyledItemDelegate* self ```
QItemEditorFactory* q_styleditemdelegate_item_editor_factory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#setItemEditorFactory)
///
/// ``` QStyledItemDelegate* self, QItemEditorFactory* factory ```
void q_styleditemdelegate_set_item_editor_factory(void* self, void* factory);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#displayText)
///
/// ``` QStyledItemDelegate* self, QVariant* value, QLocale* locale ```
const char* q_styleditemdelegate_display_text(void* self, void* value, void* locale);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, const char* (*slot)(QStyledItemDelegate*, QVariant*, QLocale*) ```
void q_styleditemdelegate_on_display_text(void* self, const char* (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QVariant* value, QLocale* locale ```
const char* q_styleditemdelegate_qbase_display_text(void* self, void* value, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#initStyleOption)
///
/// ``` QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
void q_styleditemdelegate_init_style_option(void* self, void* option, void* index);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QStyleOptionViewItem*, QModelIndex*) ```
void q_styleditemdelegate_on_init_style_option(void* self, void (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
void q_styleditemdelegate_qbase_init_style_option(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#eventFilter)
///
/// ``` QStyledItemDelegate* self, QObject* object, QEvent* event ```
bool q_styleditemdelegate_event_filter(void* self, void* object, void* event);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, bool (*slot)(QStyledItemDelegate*, QObject*, QEvent*) ```
void q_styleditemdelegate_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QObject* object, QEvent* event ```
bool q_styleditemdelegate_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleditemdelegate.html#editorEvent)
///
/// ``` QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_styleditemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);

/// Allows for overriding the related default method
///
/// ``` QStyledItemDelegate* self, bool (*slot)(QStyledItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*) ```
void q_styleditemdelegate_on_editor_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_styleditemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_styleditemdelegate_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_styleditemdelegate_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// ``` QStyledItemDelegate* self, QWidget* editor ```
void q_styleditemdelegate_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// ``` QStyledItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_styleditemdelegate_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QStyledItemDelegate* self, QWidget* editor ```
void q_styleditemdelegate_close_editor(void* self, void* editor);

/// Inherited from QAbstractItemDelegate
///
/// ``` QStyledItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_styleditemdelegate_on_close_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// ``` QStyledItemDelegate* self, QModelIndex* param1 ```
void q_styleditemdelegate_size_hint_changed(void* self, void* param1);

/// Inherited from QAbstractItemDelegate
///
/// ``` QStyledItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QModelIndex*) ```
void q_styleditemdelegate_on_size_hint_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QStyledItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_styleditemdelegate_close_editor2(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemDelegate
///
/// ``` QStyledItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_styleditemdelegate_on_close_editor2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStyledItemDelegate* self ```
const char* q_styleditemdelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStyledItemDelegate* self, const char* name ```
void q_styleditemdelegate_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStyledItemDelegate* self ```
bool q_styleditemdelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStyledItemDelegate* self ```
bool q_styleditemdelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStyledItemDelegate* self ```
bool q_styleditemdelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStyledItemDelegate* self ```
bool q_styleditemdelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStyledItemDelegate* self, bool b ```
bool q_styleditemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStyledItemDelegate* self ```
QThread* q_styleditemdelegate_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStyledItemDelegate* self, QThread* thread ```
void q_styleditemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStyledItemDelegate* self, int interval ```
int32_t q_styleditemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStyledItemDelegate* self, int id ```
void q_styleditemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStyledItemDelegate* self ```
libqt_list /* of QObject* */ q_styleditemdelegate_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStyledItemDelegate* self, QObject* parent ```
void q_styleditemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStyledItemDelegate* self, QObject* filterObj ```
void q_styleditemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStyledItemDelegate* self, QObject* obj ```
void q_styleditemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_styleditemdelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStyledItemDelegate* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_styleditemdelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_styleditemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_styleditemdelegate_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStyledItemDelegate* self ```
void q_styleditemdelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStyledItemDelegate* self ```
void q_styleditemdelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStyledItemDelegate* self, const char* name, QVariant* value ```
bool q_styleditemdelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStyledItemDelegate* self, const char* name ```
QVariant* q_styleditemdelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStyledItemDelegate* self ```
const char** q_styleditemdelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStyledItemDelegate* self ```
QBindingStorage* q_styleditemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStyledItemDelegate* self ```
QBindingStorage* q_styleditemdelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyledItemDelegate* self ```
void q_styleditemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QStyledItemDelegate* self, void (*slot)(QObject*) ```
void q_styleditemdelegate_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStyledItemDelegate* self ```
QObject* q_styleditemdelegate_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStyledItemDelegate* self, const char* classname ```
bool q_styleditemdelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStyledItemDelegate* self ```
void q_styleditemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStyledItemDelegate* self, int interval, enum Qt__TimerType timerType ```
int32_t q_styleditemdelegate_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_styleditemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStyledItemDelegate* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_styleditemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyledItemDelegate* self, QObject* param1 ```
void q_styleditemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QStyledItemDelegate* self, void (*slot)(QObject*, QObject*) ```
void q_styleditemdelegate_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_styleditemdelegate_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_styleditemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QWidget*, QModelIndex*) ```
void q_styleditemdelegate_on_destroy_editor(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_styleditemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_styleditemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, bool (*slot)(QStyledItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*) ```
void q_styleditemdelegate_on_help_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self ```
libqt_list /* of int */ q_styleditemdelegate_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self ```
libqt_list /* of int */ q_styleditemdelegate_qbase_painting_roles(void* self);

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, libqt_list /* of int */ (*slot)() ```
void q_styleditemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, QEvent* event ```
bool q_styleditemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QEvent* event ```
bool q_styleditemdelegate_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, bool (*slot)(QStyledItemDelegate*, QEvent*) ```
void q_styleditemdelegate_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, QTimerEvent* event ```
void q_styleditemdelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QTimerEvent* event ```
void q_styleditemdelegate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QTimerEvent*) ```
void q_styleditemdelegate_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, QChildEvent* event ```
void q_styleditemdelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QChildEvent* event ```
void q_styleditemdelegate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QChildEvent*) ```
void q_styleditemdelegate_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, QEvent* event ```
void q_styleditemdelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QEvent* event ```
void q_styleditemdelegate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QEvent*) ```
void q_styleditemdelegate_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, QMetaMethod* signal ```
void q_styleditemdelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QMetaMethod* signal ```
void q_styleditemdelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QMetaMethod*) ```
void q_styleditemdelegate_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, QMetaMethod* signal ```
void q_styleditemdelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QMetaMethod* signal ```
void q_styleditemdelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, void (*slot)(QStyledItemDelegate*, QMetaMethod*) ```
void q_styleditemdelegate_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self ```
QObject* q_styleditemdelegate_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self ```
QObject* q_styleditemdelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QObject* (*slot)() ```
void q_styleditemdelegate_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self ```
int32_t q_styleditemdelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self ```
int32_t q_styleditemdelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, int32_t (*slot)() ```
void q_styleditemdelegate_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, const char* signal ```
int32_t q_styleditemdelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, const char* signal ```
int32_t q_styleditemdelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, int32_t (*slot)(QStyledItemDelegate*, const char*) ```
void q_styleditemdelegate_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyledItemDelegate* self, QMetaMethod* signal ```
bool q_styleditemdelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, QMetaMethod* signal ```
bool q_styleditemdelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyledItemDelegate* self, bool (*slot)(QStyledItemDelegate*, QMetaMethod*) ```
void q_styleditemdelegate_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QStyledItemDelegate* self ```
void q_styleditemdelegate_delete(void* self);

#endif
