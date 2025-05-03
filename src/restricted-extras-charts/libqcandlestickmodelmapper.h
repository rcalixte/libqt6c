#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqcandlestickseries.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qcandlestickmodelmapper.html

/// q_candlestickmodelmapper_new constructs a new QCandlestickModelMapper object.
///
///
QCandlestickModelMapper* q_candlestickmodelmapper_new();

/// q_candlestickmodelmapper_new2 constructs a new QCandlestickModelMapper object.
///
/// ``` QObject* parent ```
QCandlestickModelMapper* q_candlestickmodelmapper_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCandlestickModelMapper* self ```
QMetaObject* q_candlestickmodelmapper_meta_object(void* self);

/// ``` QCandlestickModelMapper* self, const char* param1 ```
void* q_candlestickmodelmapper_metacast(void* self, const char* param1);

/// ``` QCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)(QCandlestickModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_candlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_candlestickmodelmapper_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
///
/// ``` QCandlestickModelMapper* self, QAbstractItemModel* model ```
void q_candlestickmodelmapper_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
///
/// ``` QCandlestickModelMapper* self ```
QAbstractItemModel* q_candlestickmodelmapper_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
///
/// ``` QCandlestickModelMapper* self, QCandlestickSeries* series ```
void q_candlestickmodelmapper_set_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
///
/// ``` QCandlestickModelMapper* self ```
QCandlestickSeries* q_candlestickmodelmapper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#orientation)
///
/// ``` QCandlestickModelMapper* self ```
int64_t q_candlestickmodelmapper_orientation(void* self);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int64_t (*slot)() ```
void q_candlestickmodelmapper_on_orientation(void* self, int64_t (*slot)());

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int64_t q_candlestickmodelmapper_qbase_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_model_replaced(void* self);

/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*) ```
void q_candlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_series_replaced(void* self);

/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*) ```
void q_candlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// ``` QCandlestickModelMapper* self, int timestamp ```
void q_candlestickmodelmapper_set_timestamp(void* self, int timestamp);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int timestamp ```
void q_candlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_timestamp(void* self);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_timestamp(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// ``` QCandlestickModelMapper* self, int open ```
void q_candlestickmodelmapper_set_open(void* self, int open);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int open ```
void q_candlestickmodelmapper_qbase_set_open(void* self, int open);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_open(void* self);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_open(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_open(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// ``` QCandlestickModelMapper* self, int high ```
void q_candlestickmodelmapper_set_high(void* self, int high);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int high ```
void q_candlestickmodelmapper_qbase_set_high(void* self, int high);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_high(void* self);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_high(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_high(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// ``` QCandlestickModelMapper* self, int low ```
void q_candlestickmodelmapper_set_low(void* self, int low);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int low ```
void q_candlestickmodelmapper_qbase_set_low(void* self, int low);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_low(void* self);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_low(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_low(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// ``` QCandlestickModelMapper* self, int close ```
void q_candlestickmodelmapper_set_close(void* self, int close);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int close ```
void q_candlestickmodelmapper_qbase_set_close(void* self, int close);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_close(void* self);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_close(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// ``` QCandlestickModelMapper* self, int firstSetSection ```
void q_candlestickmodelmapper_set_first_set_section(void* self, int firstSetSection);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int firstSetSection ```
void q_candlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_first_set_section(void* self);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_first_set_section(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// ``` QCandlestickModelMapper* self, int lastSetSection ```
void q_candlestickmodelmapper_set_last_set_section(void* self, int lastSetSection);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int lastSetSection ```
void q_candlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_last_set_section(void* self);

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_last_set_section(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_candlestickmodelmapper_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_candlestickmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCandlestickModelMapper* self ```
const char* q_candlestickmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCandlestickModelMapper* self, char* name ```
void q_candlestickmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCandlestickModelMapper* self ```
bool q_candlestickmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCandlestickModelMapper* self ```
bool q_candlestickmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCandlestickModelMapper* self ```
bool q_candlestickmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCandlestickModelMapper* self ```
bool q_candlestickmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCandlestickModelMapper* self, bool b ```
bool q_candlestickmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCandlestickModelMapper* self ```
QThread* q_candlestickmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCandlestickModelMapper* self, QThread* thread ```
void q_candlestickmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickModelMapper* self, int interval ```
int32_t q_candlestickmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCandlestickModelMapper* self, int id ```
void q_candlestickmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCandlestickModelMapper* self ```
libqt_list /* of QObject* */ q_candlestickmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCandlestickModelMapper* self, QObject* parent ```
void q_candlestickmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCandlestickModelMapper* self, QObject* filterObj ```
void q_candlestickmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCandlestickModelMapper* self, QObject* obj ```
void q_candlestickmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_candlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_candlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_candlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_candlestickmodelmapper_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCandlestickModelMapper* self, const char* name, QVariant* value ```
bool q_candlestickmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCandlestickModelMapper* self, const char* name ```
QVariant* q_candlestickmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCandlestickModelMapper* self ```
const char** q_candlestickmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickModelMapper* self ```
QBindingStorage* q_candlestickmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickModelMapper* self ```
QBindingStorage* q_candlestickmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QObject*) ```
void q_candlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCandlestickModelMapper* self ```
QObject* q_candlestickmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCandlestickModelMapper* self, const char* classname ```
bool q_candlestickmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_candlestickmodelmapper_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickModelMapper* self, QObject* param1 ```
void q_candlestickmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_candlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QEvent* event ```
bool q_candlestickmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QEvent* event ```
bool q_candlestickmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, bool (*slot)(QCandlestickModelMapper*, QEvent*) ```
void q_candlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_candlestickmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_candlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, bool (*slot)(QCandlestickModelMapper*, QObject*, QEvent*) ```
void q_candlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QTimerEvent* event ```
void q_candlestickmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QTimerEvent* event ```
void q_candlestickmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QTimerEvent*) ```
void q_candlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QChildEvent* event ```
void q_candlestickmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QChildEvent* event ```
void q_candlestickmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QChildEvent*) ```
void q_candlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QEvent* event ```
void q_candlestickmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QEvent* event ```
void q_candlestickmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QEvent*) ```
void q_candlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
void q_candlestickmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
void q_candlestickmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QMetaMethod*) ```
void q_candlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
void q_candlestickmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
void q_candlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QMetaMethod*) ```
void q_candlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self ```
QObject* q_candlestickmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self ```
QObject* q_candlestickmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QObject* (*slot)() ```
void q_candlestickmodelmapper_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, const char* signal ```
int32_t q_candlestickmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, const char* signal ```
int32_t q_candlestickmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)(QCandlestickModelMapper*, const char*) ```
void q_candlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_candlestickmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_candlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, bool (*slot)(QCandlestickModelMapper*, QMetaMethod*) ```
void q_candlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_delete(void* self);

#endif
