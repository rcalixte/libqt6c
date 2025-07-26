#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVPIEMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html

/// q_vpiemodelmapper_new constructs a new QVPieModelMapper object.
///
///
QVPieModelMapper* q_vpiemodelmapper_new();

/// q_vpiemodelmapper_new2 constructs a new QVPieModelMapper object.
///
/// ``` QObject* parent ```
QVPieModelMapper* q_vpiemodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVPieModelMapper* self ```
const QMetaObject* q_vpiemodelmapper_meta_object(void* self);

/// ``` QVPieModelMapper* self, const char* param1 ```
void* q_vpiemodelmapper_metacast(void* self, const char* param1);

/// ``` QVPieModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vpiemodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QVPieModelMapper* self, int32_t (*slot)(QVPieModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_vpiemodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QVPieModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vpiemodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_vpiemodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#model)
///
/// ``` QVPieModelMapper* self ```
QAbstractItemModel* q_vpiemodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setModel)
///
/// ``` QVPieModelMapper* self, QAbstractItemModel* model ```
void q_vpiemodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#series)
///
/// ``` QVPieModelMapper* self ```
QPieSeries* q_vpiemodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setSeries)
///
/// ``` QVPieModelMapper* self, QPieSeries* series ```
void q_vpiemodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#valuesColumn)
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_values_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setValuesColumn)
///
/// ``` QVPieModelMapper* self, int valuesColumn ```
void q_vpiemodelmapper_set_values_column(void* self, int valuesColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#labelsColumn)
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_labels_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setLabelsColumn)
///
/// ``` QVPieModelMapper* self, int labelsColumn ```
void q_vpiemodelmapper_set_labels_column(void* self, int labelsColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#firstRow)
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_first_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setFirstRow)
///
/// ``` QVPieModelMapper* self, int firstRow ```
void q_vpiemodelmapper_set_first_row(void* self, int firstRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#rowCount)
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#setRowCount)
///
/// ``` QVPieModelMapper* self, int rowCount ```
void q_vpiemodelmapper_set_row_count(void* self, int rowCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_series_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#seriesReplaced)
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*) ```
void q_vpiemodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_model_replaced(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#modelReplaced)
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*) ```
void q_vpiemodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#valuesColumnChanged)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_values_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#valuesColumnChanged)
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*) ```
void q_vpiemodelmapper_on_values_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#labelsColumnChanged)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_labels_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#labelsColumnChanged)
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*) ```
void q_vpiemodelmapper_on_labels_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#firstRowChanged)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_first_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#firstRowChanged)
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*) ```
void q_vpiemodelmapper_on_first_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#rowCountChanged)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_row_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#rowCountChanged)
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*) ```
void q_vpiemodelmapper_on_row_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_vpiemodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_vpiemodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVPieModelMapper* self ```
const char* q_vpiemodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVPieModelMapper* self, char* name ```
void q_vpiemodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVPieModelMapper* self ```
bool q_vpiemodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVPieModelMapper* self ```
bool q_vpiemodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVPieModelMapper* self ```
bool q_vpiemodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVPieModelMapper* self ```
bool q_vpiemodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVPieModelMapper* self, bool b ```
bool q_vpiemodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVPieModelMapper* self ```
QThread* q_vpiemodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVPieModelMapper* self, QThread* thread ```
bool q_vpiemodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVPieModelMapper* self, int interval ```
int32_t q_vpiemodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVPieModelMapper* self, int id ```
void q_vpiemodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVPieModelMapper* self, enum Qt__TimerId id ```
void q_vpiemodelmapper_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVPieModelMapper* self ```
libqt_list /* of QObject* */ q_vpiemodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVPieModelMapper* self, QObject* parent ```
void q_vpiemodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVPieModelMapper* self, QObject* filterObj ```
void q_vpiemodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVPieModelMapper* self, QObject* obj ```
void q_vpiemodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_vpiemodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVPieModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_vpiemodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_vpiemodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_vpiemodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVPieModelMapper* self, const char* name, QVariant* value ```
bool q_vpiemodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVPieModelMapper* self, const char* name ```
QVariant* q_vpiemodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVPieModelMapper* self ```
const char** q_vpiemodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVPieModelMapper* self ```
QBindingStorage* q_vpiemodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVPieModelMapper* self ```
const QBindingStorage* q_vpiemodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*) ```
void q_vpiemodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVPieModelMapper* self ```
QObject* q_vpiemodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVPieModelMapper* self, const char* classname ```
bool q_vpiemodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVPieModelMapper* self, QThread* thread, Disambiguated_t* param2 ```
bool q_vpiemodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVPieModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_vpiemodelmapper_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vpiemodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVPieModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vpiemodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVPieModelMapper* self, QObject* param1 ```
void q_vpiemodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, QObject*) ```
void q_vpiemodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, QEvent* event ```
bool q_vpiemodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, QEvent* event ```
bool q_vpiemodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, bool (*slot)(QVPieModelMapper*, QEvent*) ```
void q_vpiemodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, QObject* watched, QEvent* event ```
bool q_vpiemodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, QObject* watched, QEvent* event ```
bool q_vpiemodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, bool (*slot)(QVPieModelMapper*, QObject*, QEvent*) ```
void q_vpiemodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, QTimerEvent* event ```
void q_vpiemodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, QTimerEvent* event ```
void q_vpiemodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, QTimerEvent*) ```
void q_vpiemodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, QChildEvent* event ```
void q_vpiemodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, QChildEvent* event ```
void q_vpiemodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, QChildEvent*) ```
void q_vpiemodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, QEvent* event ```
void q_vpiemodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, QEvent* event ```
void q_vpiemodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, QEvent*) ```
void q_vpiemodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, QMetaMethod* signal ```
void q_vpiemodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, QMetaMethod* signal ```
void q_vpiemodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, QMetaMethod*) ```
void q_vpiemodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, QMetaMethod* signal ```
void q_vpiemodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, QMetaMethod* signal ```
void q_vpiemodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, QMetaMethod*) ```
void q_vpiemodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_first(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_qbase_first(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int32_t (*slot)() ```
void q_vpiemodelmapper_on_first(void* self, int32_t (*slot)());

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, int first ```
void q_vpiemodelmapper_set_first(void* self, int first);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int first ```
void q_vpiemodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, int) ```
void q_vpiemodelmapper_on_set_first(void* self, void (*slot)(void*, int));

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_count(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_qbase_count(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int32_t (*slot)() ```
void q_vpiemodelmapper_on_count(void* self, int32_t (*slot)());

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, int count ```
void q_vpiemodelmapper_set_count(void* self, int count);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int count ```
void q_vpiemodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, int) ```
void q_vpiemodelmapper_on_set_count(void* self, void (*slot)(void*, int));

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_values_section(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_qbase_values_section(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int32_t (*slot)() ```
void q_vpiemodelmapper_on_values_section(void* self, int32_t (*slot)());

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, int valuesSection ```
void q_vpiemodelmapper_set_values_section(void* self, int valuesSection);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int valuesSection ```
void q_vpiemodelmapper_qbase_set_values_section(void* self, int valuesSection);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, int) ```
void q_vpiemodelmapper_on_set_values_section(void* self, void (*slot)(void*, int));

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_labels_section(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_qbase_labels_section(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int32_t (*slot)() ```
void q_vpiemodelmapper_on_labels_section(void* self, int32_t (*slot)());

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, int labelsSection ```
void q_vpiemodelmapper_set_labels_section(void* self, int labelsSection);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int labelsSection ```
void q_vpiemodelmapper_qbase_set_labels_section(void* self, int labelsSection);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, int) ```
void q_vpiemodelmapper_on_set_labels_section(void* self, void (*slot)(void*, int));

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int64_t q_vpiemodelmapper_orientation(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int64_t q_vpiemodelmapper_qbase_orientation(void* self);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int64_t (*slot)() ```
void q_vpiemodelmapper_on_orientation(void* self, int64_t (*slot)());

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, enum Qt__Orientation orientation ```
void q_vpiemodelmapper_set_orientation(void* self, int64_t orientation);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, enum Qt__Orientation orientation ```
void q_vpiemodelmapper_qbase_set_orientation(void* self, int64_t orientation);

/// Inherited from QPieModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, enum Qt__Orientation) ```
void q_vpiemodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self ```
QObject* q_vpiemodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self ```
QObject* q_vpiemodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, QObject* (*slot)() ```
void q_vpiemodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self ```
int32_t q_vpiemodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int32_t (*slot)() ```
void q_vpiemodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, const char* signal ```
int32_t q_vpiemodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, const char* signal ```
int32_t q_vpiemodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, int32_t (*slot)(QVPieModelMapper*, const char*) ```
void q_vpiemodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVPieModelMapper* self, QMetaMethod* signal ```
bool q_vpiemodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVPieModelMapper* self, QMetaMethod* signal ```
bool q_vpiemodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVPieModelMapper* self, bool (*slot)(QVPieModelMapper*, QMetaMethod*) ```
void q_vpiemodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QVPieModelMapper* self, void (*slot)(QVPieModelMapper*, const char*) ```
void q_vpiemodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvpiemodelmapper-qtcharts.html#dtor.QVPieModelMapper)
///
/// Delete this object from C++ memory.
///
/// ``` QVPieModelMapper* self ```
void q_vpiemodelmapper_delete(void* self);

#endif
