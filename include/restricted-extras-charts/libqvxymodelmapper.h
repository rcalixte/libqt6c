#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVXYMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqxymodelmapper.h"
#include "libqxyseries.h"

/// https://doc.qt.io/qt-6/qvxymodelmapper.html

/// q_vxymodelmapper_new constructs a new QVXYModelMapper object.
///
///
QVXYModelMapper* q_vxymodelmapper_new();

/// q_vxymodelmapper_new2 constructs a new QVXYModelMapper object.
///
/// ``` QObject* parent ```
QVXYModelMapper* q_vxymodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVXYModelMapper* self ```
QMetaObject* q_vxymodelmapper_meta_object(void* self);

/// ``` QVXYModelMapper* self, const char* param1 ```
void* q_vxymodelmapper_metacast(void* self, const char* param1);

/// ``` QVXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vxymodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)(QVXYModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_vxymodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QVXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vxymodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_vxymodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#model)
///
/// ``` QVXYModelMapper* self ```
QAbstractItemModel* q_vxymodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setModel)
///
/// ``` QVXYModelMapper* self, QAbstractItemModel* model ```
void q_vxymodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#series)
///
/// ``` QVXYModelMapper* self ```
QXYSeries* q_vxymodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setSeries)
///
/// ``` QVXYModelMapper* self, QXYSeries* series ```
void q_vxymodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#xColumn)
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_x_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setXColumn)
///
/// ``` QVXYModelMapper* self, int xColumn ```
void q_vxymodelmapper_set_x_column(void* self, int xColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#yColumn)
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_y_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setYColumn)
///
/// ``` QVXYModelMapper* self, int yColumn ```
void q_vxymodelmapper_set_y_column(void* self, int yColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#firstRow)
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_first_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setFirstRow)
///
/// ``` QVXYModelMapper* self, int firstRow ```
void q_vxymodelmapper_set_first_row(void* self, int firstRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#rowCount)
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#setRowCount)
///
/// ``` QVXYModelMapper* self, int rowCount ```
void q_vxymodelmapper_set_row_count(void* self, int rowCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#seriesReplaced)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_series_replaced(void* self);

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#modelReplaced)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_model_replaced(void* self);

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#xColumnChanged)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_x_column_changed(void* self);

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_x_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#yColumnChanged)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_y_column_changed(void* self);

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_y_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#firstRowChanged)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_first_row_changed(void* self);

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_first_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvxymodelmapper.html#rowCountChanged)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_row_count_changed(void* self);

/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*) ```
void q_vxymodelmapper_on_row_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_vxymodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_vxymodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVXYModelMapper* self ```
const char* q_vxymodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVXYModelMapper* self, const char* name ```
void q_vxymodelmapper_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVXYModelMapper* self ```
bool q_vxymodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVXYModelMapper* self ```
bool q_vxymodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVXYModelMapper* self ```
bool q_vxymodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVXYModelMapper* self ```
bool q_vxymodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVXYModelMapper* self, bool b ```
bool q_vxymodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVXYModelMapper* self ```
QThread* q_vxymodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVXYModelMapper* self, QThread* thread ```
void q_vxymodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVXYModelMapper* self, int interval ```
int32_t q_vxymodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVXYModelMapper* self, int id ```
void q_vxymodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVXYModelMapper* self ```
libqt_list /* of QObject* */ q_vxymodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVXYModelMapper* self, QObject* parent ```
void q_vxymodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVXYModelMapper* self, QObject* filterObj ```
void q_vxymodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVXYModelMapper* self, QObject* obj ```
void q_vxymodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_vxymodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVXYModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_vxymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_vxymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_vxymodelmapper_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVXYModelMapper* self, const char* name, QVariant* value ```
bool q_vxymodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVXYModelMapper* self, const char* name ```
QVariant* q_vxymodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVXYModelMapper* self ```
const char** q_vxymodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVXYModelMapper* self ```
QBindingStorage* q_vxymodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVXYModelMapper* self ```
QBindingStorage* q_vxymodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QVXYModelMapper* self, void (*slot)(QObject*) ```
void q_vxymodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVXYModelMapper* self ```
QObject* q_vxymodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVXYModelMapper* self, const char* classname ```
bool q_vxymodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVXYModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_vxymodelmapper_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vxymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVXYModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vxymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVXYModelMapper* self, QObject* param1 ```
void q_vxymodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QVXYModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_vxymodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QEvent* event ```
bool q_vxymodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QEvent* event ```
bool q_vxymodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, bool (*slot)(QVXYModelMapper*, QEvent*) ```
void q_vxymodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QObject* watched, QEvent* event ```
bool q_vxymodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QObject* watched, QEvent* event ```
bool q_vxymodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, bool (*slot)(QVXYModelMapper*, QObject*, QEvent*) ```
void q_vxymodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QTimerEvent* event ```
void q_vxymodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QTimerEvent* event ```
void q_vxymodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QTimerEvent*) ```
void q_vxymodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QChildEvent* event ```
void q_vxymodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QChildEvent* event ```
void q_vxymodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QChildEvent*) ```
void q_vxymodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QEvent* event ```
void q_vxymodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QEvent* event ```
void q_vxymodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QEvent*) ```
void q_vxymodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
void q_vxymodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
void q_vxymodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QMetaMethod*) ```
void q_vxymodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
void q_vxymodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
void q_vxymodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, QMetaMethod*) ```
void q_vxymodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_first(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_first(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_first(void* self, int32_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, int first ```
void q_vxymodelmapper_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int first ```
void q_vxymodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, int) ```
void q_vxymodelmapper_on_set_first(void* self, void (*slot)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_count(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_count(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_count(void* self, int32_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, int count ```
void q_vxymodelmapper_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int count ```
void q_vxymodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, int) ```
void q_vxymodelmapper_on_set_count(void* self, void (*slot)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int64_t q_vxymodelmapper_orientation(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int64_t q_vxymodelmapper_qbase_orientation(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int64_t (*slot)() ```
void q_vxymodelmapper_on_orientation(void* self, int64_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, enum Qt__Orientation orientation ```
void q_vxymodelmapper_set_orientation(void* self, int64_t orientation);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, enum Qt__Orientation orientation ```
void q_vxymodelmapper_qbase_set_orientation(void* self, int64_t orientation);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, enum Qt__Orientation) ```
void q_vxymodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_x_section(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_x_section(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_x_section(void* self, int32_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, int xSection ```
void q_vxymodelmapper_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int xSection ```
void q_vxymodelmapper_qbase_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, int) ```
void q_vxymodelmapper_on_set_x_section(void* self, void (*slot)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_y_section(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_y_section(void* self);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_y_section(void* self, int32_t (*slot)());

/// Inherited from QXYModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, int ySection ```
void q_vxymodelmapper_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int ySection ```
void q_vxymodelmapper_qbase_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, void (*slot)(QVXYModelMapper*, int) ```
void q_vxymodelmapper_on_set_y_section(void* self, void (*slot)(void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
QObject* q_vxymodelmapper_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
QObject* q_vxymodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QObject* (*slot)() ```
void q_vxymodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self ```
int32_t q_vxymodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)() ```
void q_vxymodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, const char* signal ```
int32_t q_vxymodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, const char* signal ```
int32_t q_vxymodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, int32_t (*slot)(QVXYModelMapper*, const char*) ```
void q_vxymodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
bool q_vxymodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVXYModelMapper* self, QMetaMethod* signal ```
bool q_vxymodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVXYModelMapper* self, bool (*slot)(QVXYModelMapper*, QMetaMethod*) ```
void q_vxymodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QVXYModelMapper* self ```
void q_vxymodelmapper_delete(void* self);

#endif
