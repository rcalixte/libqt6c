#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "libqboxplotmodelmapper.h"
#include "libqboxplotseries.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html

/// q_vboxplotmodelmapper_new constructs a new QVBoxPlotModelMapper object.
///
///
QVBoxPlotModelMapper* q_vboxplotmodelmapper_new();

/// q_vboxplotmodelmapper_new2 constructs a new QVBoxPlotModelMapper object.
///
/// ``` QObject* parent ```
QVBoxPlotModelMapper* q_vboxplotmodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVBoxPlotModelMapper* self ```
const QMetaObject* q_vboxplotmodelmapper_meta_object(void* self);

/// ``` QVBoxPlotModelMapper* self, const char* param1 ```
void* q_vboxplotmodelmapper_metacast(void* self, const char* param1);

/// ``` QVBoxPlotModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vboxplotmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)(QVBoxPlotModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_vboxplotmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QVBoxPlotModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vboxplotmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_vboxplotmodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#model)
///
/// ``` QVBoxPlotModelMapper* self ```
QAbstractItemModel* q_vboxplotmodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setModel)
///
/// ``` QVBoxPlotModelMapper* self, QAbstractItemModel* model ```
void q_vboxplotmodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#series)
///
/// ``` QVBoxPlotModelMapper* self ```
QBoxPlotSeries* q_vboxplotmodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setSeries)
///
/// ``` QVBoxPlotModelMapper* self, QBoxPlotSeries* series ```
void q_vboxplotmodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumn)
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_first_box_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstBoxSetColumn)
///
/// ``` QVBoxPlotModelMapper* self, int firstBoxSetColumn ```
void q_vboxplotmodelmapper_set_first_box_set_column(void* self, int firstBoxSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumn)
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_last_box_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setLastBoxSetColumn)
///
/// ``` QVBoxPlotModelMapper* self, int lastBoxSetColumn ```
void q_vboxplotmodelmapper_set_last_box_set_column(void* self, int lastBoxSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRow)
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_first_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setFirstRow)
///
/// ``` QVBoxPlotModelMapper* self, int firstRow ```
void q_vboxplotmodelmapper_set_first_row(void* self, int firstRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCount)
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#setRowCount)
///
/// ``` QVBoxPlotModelMapper* self, int rowCount ```
void q_vboxplotmodelmapper_set_row_count(void* self, int rowCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_series_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_model_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_first_box_set_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstBoxSetColumnChanged)
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_first_box_set_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_last_box_set_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#lastBoxSetColumnChanged)
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_last_box_set_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_first_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#firstRowChanged)
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_first_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_row_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#rowCountChanged)
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*) ```
void q_vboxplotmodelmapper_on_row_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_vboxplotmodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_vboxplotmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVBoxPlotModelMapper* self ```
const char* q_vboxplotmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVBoxPlotModelMapper* self, char* name ```
void q_vboxplotmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVBoxPlotModelMapper* self ```
bool q_vboxplotmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVBoxPlotModelMapper* self ```
bool q_vboxplotmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVBoxPlotModelMapper* self ```
bool q_vboxplotmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVBoxPlotModelMapper* self ```
bool q_vboxplotmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVBoxPlotModelMapper* self, bool b ```
bool q_vboxplotmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVBoxPlotModelMapper* self ```
QThread* q_vboxplotmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVBoxPlotModelMapper* self, QThread* thread ```
void q_vboxplotmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBoxPlotModelMapper* self, int interval ```
int32_t q_vboxplotmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVBoxPlotModelMapper* self, int id ```
void q_vboxplotmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVBoxPlotModelMapper* self ```
libqt_list /* of QObject* */ q_vboxplotmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVBoxPlotModelMapper* self, QObject* parent ```
void q_vboxplotmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVBoxPlotModelMapper* self, QObject* filterObj ```
void q_vboxplotmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVBoxPlotModelMapper* self, QObject* obj ```
void q_vboxplotmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_vboxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBoxPlotModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_vboxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_vboxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_vboxplotmodelmapper_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVBoxPlotModelMapper* self, const char* name, QVariant* value ```
bool q_vboxplotmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVBoxPlotModelMapper* self, const char* name ```
QVariant* q_vboxplotmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVBoxPlotModelMapper* self ```
const char** q_vboxplotmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVBoxPlotModelMapper* self ```
QBindingStorage* q_vboxplotmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVBoxPlotModelMapper* self ```
const QBindingStorage* q_vboxplotmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QObject*) ```
void q_vboxplotmodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVBoxPlotModelMapper* self ```
QObject* q_vboxplotmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVBoxPlotModelMapper* self, const char* classname ```
bool q_vboxplotmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVBoxPlotModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_vboxplotmodelmapper_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vboxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVBoxPlotModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vboxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBoxPlotModelMapper* self, QObject* param1 ```
void q_vboxplotmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_vboxplotmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QEvent* event ```
bool q_vboxplotmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QEvent* event ```
bool q_vboxplotmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, bool (*slot)(QVBoxPlotModelMapper*, QEvent*) ```
void q_vboxplotmodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QObject* watched, QEvent* event ```
bool q_vboxplotmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QObject* watched, QEvent* event ```
bool q_vboxplotmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, bool (*slot)(QVBoxPlotModelMapper*, QObject*, QEvent*) ```
void q_vboxplotmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QTimerEvent* event ```
void q_vboxplotmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QTimerEvent* event ```
void q_vboxplotmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QTimerEvent*) ```
void q_vboxplotmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QChildEvent* event ```
void q_vboxplotmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QChildEvent* event ```
void q_vboxplotmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QChildEvent*) ```
void q_vboxplotmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QEvent* event ```
void q_vboxplotmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QEvent* event ```
void q_vboxplotmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QEvent*) ```
void q_vboxplotmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_vboxplotmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_vboxplotmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QMetaMethod*) ```
void q_vboxplotmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_vboxplotmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
void q_vboxplotmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, QMetaMethod*) ```
void q_vboxplotmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_first(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_first(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_first(void* self, int32_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int first ```
void q_vboxplotmodelmapper_set_first(void* self, int first);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int first ```
void q_vboxplotmodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, int) ```
void q_vboxplotmodelmapper_on_set_first(void* self, void (*slot)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_count(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_count(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_count(void* self, int32_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int count ```
void q_vboxplotmodelmapper_set_count(void* self, int count);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int count ```
void q_vboxplotmodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, int) ```
void q_vboxplotmodelmapper_on_set_count(void* self, void (*slot)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_first_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_first_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_first_box_set_section(void* self, int32_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int firstBoxSetSection ```
void q_vboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int firstBoxSetSection ```
void q_vboxplotmodelmapper_qbase_set_first_box_set_section(void* self, int firstBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, int) ```
void q_vboxplotmodelmapper_on_set_first_box_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_last_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_last_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_last_box_set_section(void* self, int32_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int lastBoxSetSection ```
void q_vboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int lastBoxSetSection ```
void q_vboxplotmodelmapper_qbase_set_last_box_set_section(void* self, int lastBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, int) ```
void q_vboxplotmodelmapper_on_set_last_box_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int64_t q_vboxplotmodelmapper_orientation(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int64_t q_vboxplotmodelmapper_qbase_orientation(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int64_t (*slot)() ```
void q_vboxplotmodelmapper_on_orientation(void* self, int64_t (*slot)());

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, enum Qt__Orientation orientation ```
void q_vboxplotmodelmapper_set_orientation(void* self, int64_t orientation);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, enum Qt__Orientation orientation ```
void q_vboxplotmodelmapper_qbase_set_orientation(void* self, int64_t orientation);

/// Inherited from QBoxPlotModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QVBoxPlotModelMapper*, enum Qt__Orientation) ```
void q_vboxplotmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
QObject* q_vboxplotmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
QObject* q_vboxplotmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QObject* (*slot)() ```
void q_vboxplotmodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self ```
int32_t q_vboxplotmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)() ```
void q_vboxplotmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, const char* signal ```
int32_t q_vboxplotmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, const char* signal ```
int32_t q_vboxplotmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, int32_t (*slot)(QVBoxPlotModelMapper*, const char*) ```
void q_vboxplotmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
bool q_vboxplotmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, QMetaMethod* signal ```
bool q_vboxplotmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVBoxPlotModelMapper* self, bool (*slot)(QVBoxPlotModelMapper*, QMetaMethod*) ```
void q_vboxplotmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QVBoxPlotModelMapper* self, void (*slot)(QObject*, const char*) ```
void q_vboxplotmodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvboxplotmodelmapper-qtcharts.html#dtor.QVBoxPlotModelMapper)
///
/// Delete this object from C++ memory.
///
/// ``` QVBoxPlotModelMapper* self ```
void q_vboxplotmodelmapper_delete(void* self);

#endif
