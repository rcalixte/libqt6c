#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqcandlestickmodelmapper.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html

/// q_hcandlestickmodelmapper_new constructs a new QHCandlestickModelMapper object.
///
///
QHCandlestickModelMapper* q_hcandlestickmodelmapper_new();

/// q_hcandlestickmodelmapper_new2 constructs a new QHCandlestickModelMapper object.
///
/// ``` QObject* parent ```
QHCandlestickModelMapper* q_hcandlestickmodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHCandlestickModelMapper* self ```
const QMetaObject* q_hcandlestickmodelmapper_meta_object(void* self);

/// ``` QHCandlestickModelMapper* self, const char* param1 ```
void* q_hcandlestickmodelmapper_metacast(void* self, const char* param1);

/// ``` QHCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hcandlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)(QHCandlestickModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_hcandlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QHCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hcandlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hcandlestickmodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
///
/// ``` QHCandlestickModelMapper* self ```
int64_t q_hcandlestickmodelmapper_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
///
/// Allows for overriding the related default method
///
/// ``` QHCandlestickModelMapper* self, int64_t (*slot)() ```
void q_hcandlestickmodelmapper_on_orientation(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
///
/// Base class method implementation
///
/// ``` QHCandlestickModelMapper* self ```
int64_t q_hcandlestickmodelmapper_qbase_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setTimestampColumn)
///
/// ``` QHCandlestickModelMapper* self, int timestampColumn ```
void q_hcandlestickmodelmapper_set_timestamp_column(void* self, int timestampColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_timestamp_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setOpenColumn)
///
/// ``` QHCandlestickModelMapper* self, int openColumn ```
void q_hcandlestickmodelmapper_set_open_column(void* self, int openColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_open_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setHighColumn)
///
/// ``` QHCandlestickModelMapper* self, int highColumn ```
void q_hcandlestickmodelmapper_set_high_column(void* self, int highColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_high_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLowColumn)
///
/// ``` QHCandlestickModelMapper* self, int lowColumn ```
void q_hcandlestickmodelmapper_set_low_column(void* self, int lowColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_low_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setCloseColumn)
///
/// ``` QHCandlestickModelMapper* self, int closeColumn ```
void q_hcandlestickmodelmapper_set_close_column(void* self, int closeColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_close_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setFirstSetRow)
///
/// ``` QHCandlestickModelMapper* self, int firstSetRow ```
void q_hcandlestickmodelmapper_set_first_set_row(void* self, int firstSetRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRow)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_first_set_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLastSetRow)
///
/// ``` QHCandlestickModelMapper* self, int lastSetRow ```
void q_hcandlestickmodelmapper_set_last_set_row(void* self, int lastSetRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRow)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_last_set_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_timestamp_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_timestamp_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_open_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_open_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_high_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_high_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_low_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_low_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_close_column_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_close_column_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_first_set_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_first_set_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_last_set_row_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_last_set_row_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hcandlestickmodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hcandlestickmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
///
/// ``` QHCandlestickModelMapper* self, QAbstractItemModel* model ```
void q_hcandlestickmodelmapper_set_model(void* self, void* model);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
///
/// ``` QHCandlestickModelMapper* self ```
QAbstractItemModel* q_hcandlestickmodelmapper_model(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
///
/// ``` QHCandlestickModelMapper* self, QCandlestickSeries* series ```
void q_hcandlestickmodelmapper_set_series(void* self, void* series);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
///
/// ``` QHCandlestickModelMapper* self ```
QCandlestickSeries* q_hcandlestickmodelmapper_series(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_model_replaced(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_series_replaced(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHCandlestickModelMapper* self ```
const char* q_hcandlestickmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHCandlestickModelMapper* self, char* name ```
void q_hcandlestickmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHCandlestickModelMapper* self ```
bool q_hcandlestickmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHCandlestickModelMapper* self ```
bool q_hcandlestickmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHCandlestickModelMapper* self ```
bool q_hcandlestickmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHCandlestickModelMapper* self ```
bool q_hcandlestickmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHCandlestickModelMapper* self, bool b ```
bool q_hcandlestickmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHCandlestickModelMapper* self ```
QThread* q_hcandlestickmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHCandlestickModelMapper* self, QThread* thread ```
void q_hcandlestickmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHCandlestickModelMapper* self, int interval ```
int32_t q_hcandlestickmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHCandlestickModelMapper* self, int id ```
void q_hcandlestickmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHCandlestickModelMapper* self ```
libqt_list /* of QObject* */ q_hcandlestickmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHCandlestickModelMapper* self, QObject* parent ```
void q_hcandlestickmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHCandlestickModelMapper* self, QObject* filterObj ```
void q_hcandlestickmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHCandlestickModelMapper* self, QObject* obj ```
void q_hcandlestickmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hcandlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hcandlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hcandlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hcandlestickmodelmapper_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHCandlestickModelMapper* self, const char* name, QVariant* value ```
bool q_hcandlestickmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHCandlestickModelMapper* self, const char* name ```
QVariant* q_hcandlestickmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHCandlestickModelMapper* self ```
const char** q_hcandlestickmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHCandlestickModelMapper* self ```
QBindingStorage* q_hcandlestickmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHCandlestickModelMapper* self ```
const QBindingStorage* q_hcandlestickmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QObject*) ```
void q_hcandlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHCandlestickModelMapper* self ```
QObject* q_hcandlestickmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHCandlestickModelMapper* self, const char* classname ```
bool q_hcandlestickmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHCandlestickModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hcandlestickmodelmapper_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hcandlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hcandlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHCandlestickModelMapper* self, QObject* param1 ```
void q_hcandlestickmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_hcandlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QEvent* event ```
bool q_hcandlestickmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QEvent* event ```
bool q_hcandlestickmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, bool (*slot)(QHCandlestickModelMapper*, QEvent*) ```
void q_hcandlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_hcandlestickmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_hcandlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, bool (*slot)(QHCandlestickModelMapper*, QObject*, QEvent*) ```
void q_hcandlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QTimerEvent* event ```
void q_hcandlestickmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QTimerEvent* event ```
void q_hcandlestickmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QTimerEvent*) ```
void q_hcandlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QChildEvent* event ```
void q_hcandlestickmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QChildEvent* event ```
void q_hcandlestickmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QChildEvent*) ```
void q_hcandlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QEvent* event ```
void q_hcandlestickmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QEvent* event ```
void q_hcandlestickmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QEvent*) ```
void q_hcandlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
void q_hcandlestickmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
void q_hcandlestickmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QMetaMethod*) ```
void q_hcandlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
void q_hcandlestickmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
void q_hcandlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QMetaMethod*) ```
void q_hcandlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int timestamp ```
void q_hcandlestickmodelmapper_set_timestamp(void* self, int timestamp);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int timestamp ```
void q_hcandlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_timestamp(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_timestamp(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int open ```
void q_hcandlestickmodelmapper_set_open(void* self, int open);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int open ```
void q_hcandlestickmodelmapper_qbase_set_open(void* self, int open);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_open(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_open(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_open(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int high ```
void q_hcandlestickmodelmapper_set_high(void* self, int high);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int high ```
void q_hcandlestickmodelmapper_qbase_set_high(void* self, int high);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_high(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_high(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_high(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int low ```
void q_hcandlestickmodelmapper_set_low(void* self, int low);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int low ```
void q_hcandlestickmodelmapper_qbase_set_low(void* self, int low);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_low(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_low(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_low(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int close ```
void q_hcandlestickmodelmapper_set_close(void* self, int close);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int close ```
void q_hcandlestickmodelmapper_qbase_set_close(void* self, int close);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_close(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_close(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_close(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int firstSetSection ```
void q_hcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int firstSetSection ```
void q_hcandlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_first_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_first_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)());

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int lastSetSection ```
void q_hcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int lastSetSection ```
void q_hcandlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_last_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_last_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
QObject* q_hcandlestickmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
QObject* q_hcandlestickmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QObject* (*slot)() ```
void q_hcandlestickmodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, const char* signal ```
int32_t q_hcandlestickmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, const char* signal ```
int32_t q_hcandlestickmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)(QHCandlestickModelMapper*, const char*) ```
void q_hcandlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_hcandlestickmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_hcandlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, bool (*slot)(QHCandlestickModelMapper*, QMetaMethod*) ```
void q_hcandlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QObject*, const char*) ```
void q_hcandlestickmodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#dtor.QHCandlestickModelMapper)
///
/// Delete this object from C++ memory.
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_delete(void* self);

#endif
