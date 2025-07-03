#pragma once
#ifndef SRCQT6C_LIBQABSTRACTITEMDELEGATE_H
#define SRCQT6C_LIBQABSTRACTITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemmodel.h"
#include "libqabstractitemview.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpainter.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qabstractitemdelegate.html

/// q_abstractitemdelegate_new constructs a new QAbstractItemDelegate object.
///
///
QAbstractItemDelegate* q_abstractitemdelegate_new();

/// q_abstractitemdelegate_new2 constructs a new QAbstractItemDelegate object.
///
/// ``` QObject* parent ```
QAbstractItemDelegate* q_abstractitemdelegate_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractItemDelegate* self ```
const QMetaObject* q_abstractitemdelegate_meta_object(void* self);

/// ``` QAbstractItemDelegate* self, const char* param1 ```
void* q_abstractitemdelegate_metacast(void* self, const char* param1);

/// ``` QAbstractItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemdelegate_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, int32_t (*slot)(QAbstractItemDelegate*, enum QMetaObject__Call, int, void*) ```
void q_abstractitemdelegate_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractitemdelegate_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// ``` QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_abstractitemdelegate_paint(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paint)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_abstractitemdelegate_qbase_paint(void* self, void* painter, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// ``` QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_abstractitemdelegate_size_hint(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, QSize* (*slot)(QAbstractItemDelegate*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_size_hint(void* self, QSize* (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_abstractitemdelegate_qbase_size_hint(void* self, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// ``` QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_abstractitemdelegate_create_editor(void* self, void* parent, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, QWidget* (*slot)(QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_create_editor(void* self, QWidget* (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#createEditor)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_abstractitemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_abstractitemdelegate_destroy_editor(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, QModelIndex*) ```
void q_abstractitemdelegate_on_destroy_editor(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_abstractitemdelegate_qbase_destroy_editor(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_abstractitemdelegate_set_editor_data(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, QModelIndex*) ```
void q_abstractitemdelegate_on_set_editor_data(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setEditorData)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_abstractitemdelegate_qbase_set_editor_data(void* self, void* editor, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_abstractitemdelegate_set_model_data(void* self, void* editor, void* model, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*) ```
void q_abstractitemdelegate_on_set_model_data(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#setModelData)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_abstractitemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_abstractitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_update_editor_geometry(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#updateEditorGeometry)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_abstractitemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// ``` QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_abstractitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_editor_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#editorEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_abstractitemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// ``` QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_abstractitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*) ```
void q_abstractitemdelegate_on_help_event(void* self, bool (*slot)(void*, void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_abstractitemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// ``` QAbstractItemDelegate* self ```
libqt_list /* of int */ q_abstractitemdelegate_painting_roles(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemDelegate* self, libqt_list /* of int */ (*slot)() ```
void q_abstractitemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Base class method implementation
///
/// ``` QAbstractItemDelegate* self ```
libqt_list /* of int */ q_abstractitemdelegate_qbase_painting_roles(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor ```
void q_abstractitemdelegate_commit_data(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_abstractitemdelegate_on_commit_data(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor ```
void q_abstractitemdelegate_close_editor(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_abstractitemdelegate_on_close_editor(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// ``` QAbstractItemDelegate* self, QModelIndex* param1 ```
void q_abstractitemdelegate_size_hint_changed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QModelIndex*) ```
void q_abstractitemdelegate_on_size_hint_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractitemdelegate_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractitemdelegate_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QAbstractItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_abstractitemdelegate_close_editor2(void* self, void* editor, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_abstractitemdelegate_on_close_editor2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractItemDelegate* self ```
const char* q_abstractitemdelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractItemDelegate* self, char* name ```
void q_abstractitemdelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractItemDelegate* self ```
bool q_abstractitemdelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractItemDelegate* self ```
bool q_abstractitemdelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractItemDelegate* self ```
bool q_abstractitemdelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractItemDelegate* self ```
bool q_abstractitemdelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractItemDelegate* self, bool b ```
bool q_abstractitemdelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractItemDelegate* self ```
QThread* q_abstractitemdelegate_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractItemDelegate* self, QThread* thread ```
void q_abstractitemdelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemDelegate* self, int interval ```
int32_t q_abstractitemdelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractItemDelegate* self, int id ```
void q_abstractitemdelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractItemDelegate* self ```
libqt_list /* of QObject* */ q_abstractitemdelegate_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractItemDelegate* self, QObject* parent ```
void q_abstractitemdelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractItemDelegate* self, QObject* filterObj ```
void q_abstractitemdelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractItemDelegate* self, QObject* obj ```
void q_abstractitemdelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractitemdelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemDelegate* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractitemdelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractitemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractitemdelegate_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractItemDelegate* self ```
void q_abstractitemdelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractItemDelegate* self ```
void q_abstractitemdelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractItemDelegate* self, const char* name, QVariant* value ```
bool q_abstractitemdelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractItemDelegate* self, const char* name ```
QVariant* q_abstractitemdelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractItemDelegate* self ```
const char** q_abstractitemdelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemDelegate* self ```
QBindingStorage* q_abstractitemdelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemDelegate* self ```
const QBindingStorage* q_abstractitemdelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemDelegate* self ```
void q_abstractitemdelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QObject*) ```
void q_abstractitemdelegate_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractItemDelegate* self ```
QObject* q_abstractitemdelegate_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractItemDelegate* self, const char* classname ```
bool q_abstractitemdelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractItemDelegate* self ```
void q_abstractitemdelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemDelegate* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractitemdelegate_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemDelegate* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemDelegate* self, QObject* param1 ```
void q_abstractitemdelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QObject*, QObject*) ```
void q_abstractitemdelegate_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QEvent* event ```
bool q_abstractitemdelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QEvent* event ```
bool q_abstractitemdelegate_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QEvent*) ```
void q_abstractitemdelegate_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QObject* watched, QEvent* event ```
bool q_abstractitemdelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QObject* watched, QEvent* event ```
bool q_abstractitemdelegate_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QObject*, QEvent*) ```
void q_abstractitemdelegate_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QTimerEvent* event ```
void q_abstractitemdelegate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QTimerEvent* event ```
void q_abstractitemdelegate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QTimerEvent*) ```
void q_abstractitemdelegate_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QChildEvent* event ```
void q_abstractitemdelegate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QChildEvent* event ```
void q_abstractitemdelegate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QChildEvent*) ```
void q_abstractitemdelegate_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QEvent* event ```
void q_abstractitemdelegate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QEvent* event ```
void q_abstractitemdelegate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QEvent*) ```
void q_abstractitemdelegate_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
void q_abstractitemdelegate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
void q_abstractitemdelegate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QMetaMethod*) ```
void q_abstractitemdelegate_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
void q_abstractitemdelegate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
void q_abstractitemdelegate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QMetaMethod*) ```
void q_abstractitemdelegate_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self ```
QObject* q_abstractitemdelegate_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self ```
QObject* q_abstractitemdelegate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QObject* (*slot)() ```
void q_abstractitemdelegate_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self ```
int32_t q_abstractitemdelegate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self ```
int32_t q_abstractitemdelegate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, int32_t (*slot)() ```
void q_abstractitemdelegate_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, const char* signal ```
int32_t q_abstractitemdelegate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, const char* signal ```
int32_t q_abstractitemdelegate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, int32_t (*slot)(QAbstractItemDelegate*, const char*) ```
void q_abstractitemdelegate_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
bool q_abstractitemdelegate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, QMetaMethod* signal ```
bool q_abstractitemdelegate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemDelegate* self, bool (*slot)(QAbstractItemDelegate*, QMetaMethod*) ```
void q_abstractitemdelegate_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemDelegate* self, void (*slot)(QObject*, const char*) ```
void q_abstractitemdelegate_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#dtor.QAbstractItemDelegate)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractItemDelegate* self ```
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
