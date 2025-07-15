#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html

/// q_hboxplotmodelmapper_new constructs a new QHBoxPlotModelMapper object.
///
///
QHBoxPlotModelMapper* q_hboxplotmodelmapper_new();

/// q_hboxplotmodelmapper_new2 constructs a new QHBoxPlotModelMapper object.
///
/// ``` QObject* parent ```
QHBoxPlotModelMapper* q_hboxplotmodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHBoxPlotModelMapper* self ```
const QMetaObject* q_hboxplotmodelmapper_meta_object(void* self);

/// ``` QHBoxPlotModelMapper* self, const char* param1 ```
void* q_hboxplotmodelmapper_metacast(void* self, const char* param1);

/// ``` QHBoxPlotModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hboxplotmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)(QHBoxPlotModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_hboxplotmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QHBoxPlotModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hboxplotmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hboxplotmodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#model)
///
/// ``` QHBoxPlotModelMapper* self ```
QAbstractItemModel* q_hboxplotmodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setModel)
///
/// ``` QHBoxPlotModelMapper* self, QAbstractItemModel* model ```
void q_hboxplotmodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#series)
///
/// ``` QHBoxPlotModelMapper* self ```
QBoxPlotSeries* q_hboxplotmodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setSeries)
///
/// ``` QHBoxPlotModelMapper* self, QBoxPlotSeries* series ```
void q_hboxplotmodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRow)
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_first_box_set_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setFirstBoxSetRow)
///
/// ``` QHBoxPlotModelMapper* self, int firstBoxSetRow ```
void q_hboxplotmodelmapper_set_first_box_set_row(void* self, int firstBoxSetRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRow)
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_last_box_set_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setLastBoxSetRow)
///
/// ``` QHBoxPlotModelMapper* self, int lastBoxSetRow ```
void q_hboxplotmodelmapper_set_last_box_set_row(void* self, int lastBoxSetRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumn)
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_first_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setFirstColumn)
///
/// ``` QHBoxPlotModelMapper* self, int firstColumn ```
void q_hboxplotmodelmapper_set_first_column(void* self, int firstColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCount)
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setColumnCount)
///
/// ``` QHBoxPlotModelMapper* self, int rowCount ```
void q_hboxplotmodelmapper_set_column_count(void* self, int rowCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_series_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_model_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRowChanged)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_first_box_set_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRowChanged)
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_first_box_set_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRowChanged)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_last_box_set_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRowChanged)
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_last_box_set_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumnChanged)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_first_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumnChanged)
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_first_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCountChanged)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_column_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCountChanged)
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*) ```
void q_hboxplotmodelmapper_on_column_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hboxplotmodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hboxplotmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHBoxPlotModelMapper* self ```
const char* q_hboxplotmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHBoxPlotModelMapper* self, char* name ```
void q_hboxplotmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHBoxPlotModelMapper* self ```
bool q_hboxplotmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHBoxPlotModelMapper* self ```
bool q_hboxplotmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHBoxPlotModelMapper* self ```
bool q_hboxplotmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHBoxPlotModelMapper* self ```
bool q_hboxplotmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHBoxPlotModelMapper* self, bool b ```
bool q_hboxplotmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHBoxPlotModelMapper* self ```
QThread* q_hboxplotmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHBoxPlotModelMapper* self, QThread* thread ```
bool q_hboxplotmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBoxPlotModelMapper* self, int interval ```
int32_t q_hboxplotmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHBoxPlotModelMapper* self, int id ```
void q_hboxplotmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHBoxPlotModelMapper* self, enum Qt__TimerId id ```
void q_hboxplotmodelmapper_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHBoxPlotModelMapper* self ```
libqt_list /* of QObject* */ q_hboxplotmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHBoxPlotModelMapper* self, QObject* parent ```
void q_hboxplotmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHBoxPlotModelMapper* self, QObject* filterObj ```
void q_hboxplotmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHBoxPlotModelMapper* self, QObject* obj ```
void q_hboxplotmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hboxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBoxPlotModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hboxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hboxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hboxplotmodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHBoxPlotModelMapper* self, const char* name, QVariant* value ```
bool q_hboxplotmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHBoxPlotModelMapper* self, const char* name ```
QVariant* q_hboxplotmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHBoxPlotModelMapper* self ```
const char** q_hboxplotmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHBoxPlotModelMapper* self ```
QBindingStorage* q_hboxplotmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHBoxPlotModelMapper* self ```
const QBindingStorage* q_hboxplotmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QObject*) ```
void q_hboxplotmodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHBoxPlotModelMapper* self ```
QObject* q_hboxplotmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHBoxPlotModelMapper* self, const char* classname ```
bool q_hboxplotmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHBoxPlotModelMapper* self, QThread* thread, Disambiguated_t* param2 ```
bool q_hboxplotmodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHBoxPlotModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hboxplotmodelmapper_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hboxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHBoxPlotModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hboxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBoxPlotModelMapper* self, QObject* param1 ```
void q_hboxplotmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_hboxplotmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QEvent* event ```
bool q_hboxplotmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QEvent* event ```
bool q_hboxplotmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, bool (*slot)(QHBoxPlotModelMapper*, QEvent*) ```
void q_hboxplotmodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QObject* watched, QEvent* event ```
bool q_hboxplotmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QObject* watched, QEvent* event ```
bool q_hboxplotmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, bool (*slot)(QHBoxPlotModelMapper*, QObject*, QEvent*) ```
void q_hboxplotmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QTimerEvent* event ```
void q_hboxplotmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QTimerEvent* event ```
void q_hboxplotmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QTimerEvent*) ```
void q_hboxplotmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QChildEvent* event ```
void q_hboxplotmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QChildEvent* event ```
void q_hboxplotmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QChildEvent*) ```
void q_hboxplotmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QEvent* event ```
void q_hboxplotmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QEvent* event ```
void q_hboxplotmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QEvent*) ```
void q_hboxplotmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_hboxplotmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_hboxplotmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QMetaMethod*) ```
void q_hboxplotmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_hboxplotmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_hboxplotmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, QMetaMethod*) ```
void q_hboxplotmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_first(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_first(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_first(void* self, int32_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int first ```
void q_hboxplotmodelmapper_set_first(void* self, int first);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int first ```
void q_hboxplotmodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, int) ```
void q_hboxplotmodelmapper_on_set_first(void* self, void (*slot)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_count(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_count(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_count(void* self, int32_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int count ```
void q_hboxplotmodelmapper_set_count(void* self, int count);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int count ```
void q_hboxplotmodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, int) ```
void q_hboxplotmodelmapper_on_set_count(void* self, void (*slot)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_first_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_first_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_first_box_set_section(void* self, int32_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int firstBoxSetSection ```
void q_hboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int firstBoxSetSection ```
void q_hboxplotmodelmapper_qbase_set_first_box_set_section(void* self, int firstBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, int) ```
void q_hboxplotmodelmapper_on_set_first_box_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_last_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_last_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_last_box_set_section(void* self, int32_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int lastBoxSetSection ```
void q_hboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int lastBoxSetSection ```
void q_hboxplotmodelmapper_qbase_set_last_box_set_section(void* self, int lastBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, int) ```
void q_hboxplotmodelmapper_on_set_last_box_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int64_t q_hboxplotmodelmapper_orientation(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int64_t q_hboxplotmodelmapper_qbase_orientation(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int64_t (*slot)() ```
void q_hboxplotmodelmapper_on_orientation(void* self, int64_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, enum Qt__Orientation orientation ```
void q_hboxplotmodelmapper_set_orientation(void* self, int64_t orientation);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, enum Qt__Orientation orientation ```
void q_hboxplotmodelmapper_qbase_set_orientation(void* self, int64_t orientation);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QHBoxPlotModelMapper*, enum Qt__Orientation) ```
void q_hboxplotmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
QObject* q_hboxplotmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
QObject* q_hboxplotmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QObject* (*slot)() ```
void q_hboxplotmodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self ```
int32_t q_hboxplotmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_hboxplotmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, const char* signal ```
int32_t q_hboxplotmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, const char* signal ```
int32_t q_hboxplotmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, int32_t (*slot)(QHBoxPlotModelMapper*, const char*) ```
void q_hboxplotmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
bool q_hboxplotmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, QMetaMethod* signal ```
bool q_hboxplotmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHBoxPlotModelMapper* self, bool (*slot)(QHBoxPlotModelMapper*, QMetaMethod*) ```
void q_hboxplotmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QHBoxPlotModelMapper* self, void (*slot)(QObject*, const char*) ```
void q_hboxplotmodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#dtor.QHBoxPlotModelMapper)
///
/// Delete this object from C++ memory.
///
/// ``` QHBoxPlotModelMapper* self ```
void q_hboxplotmodelmapper_delete(void* self);

#endif
