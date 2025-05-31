#pragma once
#ifndef SRCQT6C_LIBQDATAWIDGETMAPPER_H
#define SRCQT6C_LIBQDATAWIDGETMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qdatawidgetmapper.html

/// q_datawidgetmapper_new constructs a new QDataWidgetMapper object.
///
///
QDataWidgetMapper* q_datawidgetmapper_new();

/// q_datawidgetmapper_new2 constructs a new QDataWidgetMapper object.
///
/// ``` QObject* parent ```
QDataWidgetMapper* q_datawidgetmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDataWidgetMapper* self ```
const QMetaObject* q_datawidgetmapper_meta_object(void* self);

/// ``` QDataWidgetMapper* self, const char* param1 ```
void* q_datawidgetmapper_metacast(void* self, const char* param1);

/// ``` QDataWidgetMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datawidgetmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QDataWidgetMapper* self, int32_t (*slot)(QDataWidgetMapper*, enum QMetaObject__Call, int, void*) ```
void q_datawidgetmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QDataWidgetMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datawidgetmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_datawidgetmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setModel)
///
/// ``` QDataWidgetMapper* self, QAbstractItemModel* model ```
void q_datawidgetmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#model)
///
/// ``` QDataWidgetMapper* self ```
QAbstractItemModel* q_datawidgetmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setItemDelegate)
///
/// ``` QDataWidgetMapper* self, QAbstractItemDelegate* delegate ```
void q_datawidgetmapper_set_item_delegate(void* self, void* delegate);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#itemDelegate)
///
/// ``` QDataWidgetMapper* self ```
QAbstractItemDelegate* q_datawidgetmapper_item_delegate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setRootIndex)
///
/// ``` QDataWidgetMapper* self, QModelIndex* index ```
void q_datawidgetmapper_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#rootIndex)
///
/// ``` QDataWidgetMapper* self ```
QModelIndex* q_datawidgetmapper_root_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setOrientation)
///
/// ``` QDataWidgetMapper* self, enum Qt__Orientation aOrientation ```
void q_datawidgetmapper_set_orientation(void* self, int64_t aOrientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#orientation)
///
/// ``` QDataWidgetMapper* self ```
int64_t q_datawidgetmapper_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setSubmitPolicy)
///
/// ``` QDataWidgetMapper* self, enum QDataWidgetMapper__SubmitPolicy policy ```
void q_datawidgetmapper_set_submit_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#submitPolicy)
///
/// ``` QDataWidgetMapper* self ```
int64_t q_datawidgetmapper_submit_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#addMapping)
///
/// ``` QDataWidgetMapper* self, QWidget* widget, int section ```
void q_datawidgetmapper_add_mapping(void* self, void* widget, int section);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#addMapping)
///
/// ``` QDataWidgetMapper* self, QWidget* widget, int section, const char* propertyName ```
void q_datawidgetmapper_add_mapping2(void* self, void* widget, int section, const char* propertyName);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#removeMapping)
///
/// ``` QDataWidgetMapper* self, QWidget* widget ```
void q_datawidgetmapper_remove_mapping(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedSection)
///
/// ``` QDataWidgetMapper* self, QWidget* widget ```
int32_t q_datawidgetmapper_mapped_section(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedPropertyName)
///
/// ``` QDataWidgetMapper* self, QWidget* widget ```
char* q_datawidgetmapper_mapped_property_name(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#mappedWidgetAt)
///
/// ``` QDataWidgetMapper* self, int section ```
QWidget* q_datawidgetmapper_mapped_widget_at(void* self, int section);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#clearMapping)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_clear_mapping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndex)
///
/// ``` QDataWidgetMapper* self ```
int32_t q_datawidgetmapper_current_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#revert)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_revert(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#submit)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_submit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toFirst)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_to_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toLast)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_to_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toNext)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_to_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#toPrevious)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_to_previous(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
///
/// ``` QDataWidgetMapper* self, int index ```
void q_datawidgetmapper_set_current_index(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
///
/// Allows for overriding the related default method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, int) ```
void q_datawidgetmapper_on_set_current_index(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentIndex)
///
/// Base class method implementation
///
/// ``` QDataWidgetMapper* self, int index ```
void q_datawidgetmapper_qbase_set_current_index(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#setCurrentModelIndex)
///
/// ``` QDataWidgetMapper* self, QModelIndex* index ```
void q_datawidgetmapper_set_current_model_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndexChanged)
///
/// ``` QDataWidgetMapper* self, int index ```
void q_datawidgetmapper_current_index_changed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#currentIndexChanged)
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, int) ```
void q_datawidgetmapper_on_current_index_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_datawidgetmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_datawidgetmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDataWidgetMapper* self ```
const char* q_datawidgetmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDataWidgetMapper* self, char* name ```
void q_datawidgetmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDataWidgetMapper* self ```
bool q_datawidgetmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDataWidgetMapper* self, bool b ```
bool q_datawidgetmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDataWidgetMapper* self ```
QThread* q_datawidgetmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDataWidgetMapper* self, QThread* thread ```
void q_datawidgetmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDataWidgetMapper* self, int interval ```
int32_t q_datawidgetmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDataWidgetMapper* self, int id ```
void q_datawidgetmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDataWidgetMapper* self ```
const libqt_list /* of QObject* */ q_datawidgetmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDataWidgetMapper* self, QObject* parent ```
void q_datawidgetmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDataWidgetMapper* self, QObject* filterObj ```
void q_datawidgetmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDataWidgetMapper* self, QObject* obj ```
void q_datawidgetmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_datawidgetmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDataWidgetMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_datawidgetmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_datawidgetmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_datawidgetmapper_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDataWidgetMapper* self, const char* name, QVariant* value ```
bool q_datawidgetmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDataWidgetMapper* self, const char* name ```
QVariant* q_datawidgetmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDataWidgetMapper* self ```
const char** q_datawidgetmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDataWidgetMapper* self ```
QBindingStorage* q_datawidgetmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDataWidgetMapper* self ```
const QBindingStorage* q_datawidgetmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDataWidgetMapper* self, void (*slot)(QObject*) ```
void q_datawidgetmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDataWidgetMapper* self ```
QObject* q_datawidgetmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDataWidgetMapper* self, const char* classname ```
bool q_datawidgetmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDataWidgetMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_datawidgetmapper_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datawidgetmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDataWidgetMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datawidgetmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDataWidgetMapper* self, QObject* param1 ```
void q_datawidgetmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDataWidgetMapper* self, void (*slot)(QObject*, QObject*) ```
void q_datawidgetmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QEvent* event ```
bool q_datawidgetmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QEvent* event ```
bool q_datawidgetmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, bool (*slot)(QDataWidgetMapper*, QEvent*) ```
void q_datawidgetmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QObject* watched, QEvent* event ```
bool q_datawidgetmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QObject* watched, QEvent* event ```
bool q_datawidgetmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, bool (*slot)(QDataWidgetMapper*, QObject*, QEvent*) ```
void q_datawidgetmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QTimerEvent* event ```
void q_datawidgetmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QTimerEvent* event ```
void q_datawidgetmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QTimerEvent*) ```
void q_datawidgetmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QChildEvent* event ```
void q_datawidgetmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QChildEvent* event ```
void q_datawidgetmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QChildEvent*) ```
void q_datawidgetmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QEvent* event ```
void q_datawidgetmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QEvent* event ```
void q_datawidgetmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QEvent*) ```
void q_datawidgetmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
void q_datawidgetmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
void q_datawidgetmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QMetaMethod*) ```
void q_datawidgetmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
void q_datawidgetmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
void q_datawidgetmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, void (*slot)(QDataWidgetMapper*, QMetaMethod*) ```
void q_datawidgetmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self ```
QObject* q_datawidgetmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self ```
QObject* q_datawidgetmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QObject* (*slot)() ```
void q_datawidgetmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self ```
int32_t q_datawidgetmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self ```
int32_t q_datawidgetmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, int32_t (*slot)() ```
void q_datawidgetmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, const char* signal ```
int32_t q_datawidgetmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, const char* signal ```
int32_t q_datawidgetmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, int32_t (*slot)(QDataWidgetMapper*, const char*) ```
void q_datawidgetmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
bool q_datawidgetmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, QMetaMethod* signal ```
bool q_datawidgetmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDataWidgetMapper* self, bool (*slot)(QDataWidgetMapper*, QMetaMethod*) ```
void q_datawidgetmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QDataWidgetMapper* self, void (*slot)(QObject*, const char*) ```
void q_datawidgetmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdatawidgetmapper.html#dtor.QDataWidgetMapper)
///
/// Delete this object from C++ memory.
///
/// ``` QDataWidgetMapper* self ```
void q_datawidgetmapper_delete(void* self);

/// https://doc.qt.io/qt-6/qdatawidgetmapper.html#types

typedef enum {
    QDATAWIDGETMAPPER_SUBMITPOLICY_AUTOSUBMIT = 0,
    QDATAWIDGETMAPPER_SUBMITPOLICY_MANUALSUBMIT = 1
} QDataWidgetMapper__SubmitPolicy;

#endif
