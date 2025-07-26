#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html

/// q_vcandlestickmodelmapper_new constructs a new QVCandlestickModelMapper object.
///
///
QVCandlestickModelMapper* q_vcandlestickmodelmapper_new();

/// q_vcandlestickmodelmapper_new2 constructs a new QVCandlestickModelMapper object.
///
/// ``` QObject* parent ```
QVCandlestickModelMapper* q_vcandlestickmodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVCandlestickModelMapper* self ```
const QMetaObject* q_vcandlestickmodelmapper_meta_object(void* self);

/// ``` QVCandlestickModelMapper* self, const char* param1 ```
void* q_vcandlestickmodelmapper_metacast(void* self, const char* param1);

/// ``` QVCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vcandlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)(QVCandlestickModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_vcandlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QVCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_vcandlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_vcandlestickmodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
///
/// ``` QVCandlestickModelMapper* self ```
int64_t q_vcandlestickmodelmapper_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
///
/// Allows for overriding the related default method
///
/// ``` QVCandlestickModelMapper* self, int64_t (*slot)() ```
void q_vcandlestickmodelmapper_on_orientation(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
///
/// Base class method implementation
///
/// ``` QVCandlestickModelMapper* self ```
int64_t q_vcandlestickmodelmapper_qbase_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setTimestampRow)
///
/// ``` QVCandlestickModelMapper* self, int timestampRow ```
void q_vcandlestickmodelmapper_set_timestamp_row(void* self, int timestampRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRow)
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_timestamp_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setOpenRow)
///
/// ``` QVCandlestickModelMapper* self, int openRow ```
void q_vcandlestickmodelmapper_set_open_row(void* self, int openRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRow)
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_open_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setHighRow)
///
/// ``` QVCandlestickModelMapper* self, int highRow ```
void q_vcandlestickmodelmapper_set_high_row(void* self, int highRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRow)
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_high_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLowRow)
///
/// ``` QVCandlestickModelMapper* self, int lowRow ```
void q_vcandlestickmodelmapper_set_low_row(void* self, int lowRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRow)
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_low_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setCloseRow)
///
/// ``` QVCandlestickModelMapper* self, int closeRow ```
void q_vcandlestickmodelmapper_set_close_row(void* self, int closeRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRow)
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_close_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setFirstSetColumn)
///
/// ``` QVCandlestickModelMapper* self, int firstSetColumn ```
void q_vcandlestickmodelmapper_set_first_set_column(void* self, int firstSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumn)
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_first_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLastSetColumn)
///
/// ``` QVCandlestickModelMapper* self, int lastSetColumn ```
void q_vcandlestickmodelmapper_set_last_set_column(void* self, int lastSetColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumn)
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_last_set_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_timestamp_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_timestamp_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_open_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_open_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_high_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_high_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_low_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_low_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_close_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_close_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_first_set_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_first_set_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_last_set_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_last_set_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_vcandlestickmodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_vcandlestickmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
///
/// ``` QVCandlestickModelMapper* self, QAbstractItemModel* model ```
void q_vcandlestickmodelmapper_set_model(void* self, void* model);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
///
/// ``` QVCandlestickModelMapper* self ```
QAbstractItemModel* q_vcandlestickmodelmapper_model(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
///
/// ``` QVCandlestickModelMapper* self, QCandlestickSeries* series ```
void q_vcandlestickmodelmapper_set_series(void* self, void* series);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
///
/// ``` QVCandlestickModelMapper* self ```
QCandlestickSeries* q_vcandlestickmodelmapper_series(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_model_replaced(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_series_replaced(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVCandlestickModelMapper* self ```
const char* q_vcandlestickmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVCandlestickModelMapper* self, char* name ```
void q_vcandlestickmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVCandlestickModelMapper* self ```
bool q_vcandlestickmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVCandlestickModelMapper* self ```
bool q_vcandlestickmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVCandlestickModelMapper* self ```
bool q_vcandlestickmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVCandlestickModelMapper* self ```
bool q_vcandlestickmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVCandlestickModelMapper* self, bool b ```
bool q_vcandlestickmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVCandlestickModelMapper* self ```
QThread* q_vcandlestickmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVCandlestickModelMapper* self, QThread* thread ```
bool q_vcandlestickmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVCandlestickModelMapper* self, int interval ```
int32_t q_vcandlestickmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVCandlestickModelMapper* self, int id ```
void q_vcandlestickmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVCandlestickModelMapper* self, enum Qt__TimerId id ```
void q_vcandlestickmodelmapper_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVCandlestickModelMapper* self ```
libqt_list /* of QObject* */ q_vcandlestickmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVCandlestickModelMapper* self, QObject* parent ```
void q_vcandlestickmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVCandlestickModelMapper* self, QObject* filterObj ```
void q_vcandlestickmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVCandlestickModelMapper* self, QObject* obj ```
void q_vcandlestickmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_vcandlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_vcandlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_vcandlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_vcandlestickmodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVCandlestickModelMapper* self, const char* name, QVariant* value ```
bool q_vcandlestickmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVCandlestickModelMapper* self, const char* name ```
QVariant* q_vcandlestickmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVCandlestickModelMapper* self ```
const char** q_vcandlestickmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVCandlestickModelMapper* self ```
QBindingStorage* q_vcandlestickmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVCandlestickModelMapper* self ```
const QBindingStorage* q_vcandlestickmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*) ```
void q_vcandlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVCandlestickModelMapper* self ```
QObject* q_vcandlestickmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVCandlestickModelMapper* self, const char* classname ```
bool q_vcandlestickmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVCandlestickModelMapper* self, QThread* thread, Disambiguated_t* param2 ```
bool q_vcandlestickmodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVCandlestickModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_vcandlestickmodelmapper_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vcandlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_vcandlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVCandlestickModelMapper* self, QObject* param1 ```
void q_vcandlestickmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, QObject*) ```
void q_vcandlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QEvent* event ```
bool q_vcandlestickmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QEvent* event ```
bool q_vcandlestickmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, bool (*slot)(QVCandlestickModelMapper*, QEvent*) ```
void q_vcandlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_vcandlestickmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_vcandlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, bool (*slot)(QVCandlestickModelMapper*, QObject*, QEvent*) ```
void q_vcandlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QTimerEvent* event ```
void q_vcandlestickmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QTimerEvent* event ```
void q_vcandlestickmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, QTimerEvent*) ```
void q_vcandlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QChildEvent* event ```
void q_vcandlestickmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QChildEvent* event ```
void q_vcandlestickmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, QChildEvent*) ```
void q_vcandlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QEvent* event ```
void q_vcandlestickmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QEvent* event ```
void q_vcandlestickmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, QEvent*) ```
void q_vcandlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QMetaMethod* signal ```
void q_vcandlestickmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QMetaMethod* signal ```
void q_vcandlestickmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, QMetaMethod*) ```
void q_vcandlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QMetaMethod* signal ```
void q_vcandlestickmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QMetaMethod* signal ```
void q_vcandlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, QMetaMethod*) ```
void q_vcandlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int timestamp ```
void q_vcandlestickmodelmapper_set_timestamp(void* self, int timestamp);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int timestamp ```
void q_vcandlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, int) ```
void q_vcandlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_timestamp(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_qbase_timestamp(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)() ```
void q_vcandlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int open ```
void q_vcandlestickmodelmapper_set_open(void* self, int open);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int open ```
void q_vcandlestickmodelmapper_qbase_set_open(void* self, int open);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, int) ```
void q_vcandlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_open(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_qbase_open(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)() ```
void q_vcandlestickmodelmapper_on_open(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int high ```
void q_vcandlestickmodelmapper_set_high(void* self, int high);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int high ```
void q_vcandlestickmodelmapper_qbase_set_high(void* self, int high);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, int) ```
void q_vcandlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_high(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_qbase_high(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)() ```
void q_vcandlestickmodelmapper_on_high(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int low ```
void q_vcandlestickmodelmapper_set_low(void* self, int low);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int low ```
void q_vcandlestickmodelmapper_qbase_set_low(void* self, int low);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, int) ```
void q_vcandlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_low(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_qbase_low(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)() ```
void q_vcandlestickmodelmapper_on_low(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int close ```
void q_vcandlestickmodelmapper_set_close(void* self, int close);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int close ```
void q_vcandlestickmodelmapper_qbase_set_close(void* self, int close);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, int) ```
void q_vcandlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_close(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_qbase_close(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)() ```
void q_vcandlestickmodelmapper_on_close(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int firstSetSection ```
void q_vcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int firstSetSection ```
void q_vcandlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, int) ```
void q_vcandlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_first_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_qbase_first_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)() ```
void q_vcandlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int lastSetSection ```
void q_vcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int lastSetSection ```
void q_vcandlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, int) ```
void q_vcandlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_last_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_qbase_last_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)() ```
void q_vcandlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
QObject* q_vcandlestickmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
QObject* q_vcandlestickmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QObject* (*slot)() ```
void q_vcandlestickmodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self ```
int32_t q_vcandlestickmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)() ```
void q_vcandlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, const char* signal ```
int32_t q_vcandlestickmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, const char* signal ```
int32_t q_vcandlestickmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, int32_t (*slot)(QVCandlestickModelMapper*, const char*) ```
void q_vcandlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_vcandlestickmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_vcandlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVCandlestickModelMapper* self, bool (*slot)(QVCandlestickModelMapper*, QMetaMethod*) ```
void q_vcandlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QVCandlestickModelMapper* self, void (*slot)(QVCandlestickModelMapper*, const char*) ```
void q_vcandlestickmodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#dtor.QVCandlestickModelMapper)
///
/// Delete this object from C++ memory.
///
/// ``` QVCandlestickModelMapper* self ```
void q_vcandlestickmodelmapper_delete(void* self);

#endif
