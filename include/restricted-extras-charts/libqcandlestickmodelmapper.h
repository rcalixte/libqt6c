#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKMODELMAPPER_H
#define RESTRICTED_EXTRAS_CHARTS_LIBQCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html)

/// q_candlestickmodelmapper_new constructs a new QCandlestickModelMapper object.
///
QCandlestickModelMapper* q_candlestickmodelmapper_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html)

/// q_candlestickmodelmapper_new2 constructs a new QCandlestickModelMapper object.
///
/// @param parent QObject*
///
QCandlestickModelMapper* q_candlestickmodelmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QCandlestickModelMapper*
///
const QMetaObject* q_candlestickmodelmapper_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QCandlestickModelMapper*
/// @param callback const QMetaObject* func(const QCandlestickModelMapper* self)
///
void q_candlestickmodelmapper_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QCandlestickModelMapper*
///
const QMetaObject* q_candlestickmodelmapper_super_meta_object(const void* self);

/// @param self QCandlestickModelMapper*
/// @param param1 const char*
///
void* q_candlestickmodelmapper_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QCandlestickModelMapper*
/// @param callback void* func(QCandlestickModelMapper* self, const char* param1)
///
void q_candlestickmodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QCandlestickModelMapper*
/// @param param1 const char*
///
void* q_candlestickmodelmapper_super_metacast(void* self, const char* param1);

/// @param self QCandlestickModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_candlestickmodelmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCandlestickModelMapper*
/// @param callback int32_t func(QCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_candlestickmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCandlestickModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_candlestickmodelmapper_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_candlestickmodelmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setModel)
///
/// @param self QCandlestickModelMapper*
/// @param model QAbstractItemModel*
///
void q_candlestickmodelmapper_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#model)
///
/// @param self const QCandlestickModelMapper*
///
QAbstractItemModel* q_candlestickmodelmapper_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setSeries)
///
/// @param self QCandlestickModelMapper*
/// @param series QCandlestickSeries*
///
void q_candlestickmodelmapper_set_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#series)
///
/// @param self const QCandlestickModelMapper*
///
QCandlestickSeries* q_candlestickmodelmapper_series(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#orientation)
///
/// @warning This method must be implemented with `q_candlestickmodelmapper_on_orientation` before it can be called.
///
/// @param self const QCandlestickModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_candlestickmodelmapper_orientation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#orientation)
///
/// Allows for overriding the related default method
///
/// @param self const QCandlestickModelMapper*
/// @param callback int32_t func(const QCandlestickModelMapper* self)
///
void q_candlestickmodelmapper_on_orientation(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QCandlestickModelMapper*
///
void q_candlestickmodelmapper_model_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self)
///
void q_candlestickmodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QCandlestickModelMapper*
///
void q_candlestickmodelmapper_series_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self)
///
void q_candlestickmodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setTimestamp)
///
/// @param self QCandlestickModelMapper*
/// @param timestamp int
///
void q_candlestickmodelmapper_set_timestamp(void* self, int timestamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#timestamp)
///
/// @param self const QCandlestickModelMapper*
///
int32_t q_candlestickmodelmapper_timestamp(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setOpen)
///
/// @param self QCandlestickModelMapper*
/// @param open int
///
void q_candlestickmodelmapper_set_open(void* self, int open);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#open)
///
/// @param self const QCandlestickModelMapper*
///
int32_t q_candlestickmodelmapper_open(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setHigh)
///
/// @param self QCandlestickModelMapper*
/// @param high int
///
void q_candlestickmodelmapper_set_high(void* self, int high);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#high)
///
/// @param self const QCandlestickModelMapper*
///
int32_t q_candlestickmodelmapper_high(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLow)
///
/// @param self QCandlestickModelMapper*
/// @param low int
///
void q_candlestickmodelmapper_set_low(void* self, int low);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#low)
///
/// @param self const QCandlestickModelMapper*
///
int32_t q_candlestickmodelmapper_low(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setClose)
///
/// @param self QCandlestickModelMapper*
/// @param close int
///
void q_candlestickmodelmapper_set_close(void* self, int close);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#close)
///
/// @param self const QCandlestickModelMapper*
///
int32_t q_candlestickmodelmapper_close(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setFirstSetSection)
///
/// @param self QCandlestickModelMapper*
/// @param firstSetSection int
///
void q_candlestickmodelmapper_set_first_set_section(void* self, int firstSetSection);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#firstSetSection)
///
/// @param self const QCandlestickModelMapper*
///
int32_t q_candlestickmodelmapper_first_set_section(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#setLastSetSection)
///
/// @param self QCandlestickModelMapper*
/// @param lastSetSection int
///
void q_candlestickmodelmapper_set_last_set_section(void* self, int lastSetSection);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#lastSetSection)
///
/// @param self const QCandlestickModelMapper*
///
int32_t q_candlestickmodelmapper_last_set_section(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_candlestickmodelmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_candlestickmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCandlestickModelMapper*
///
const char* q_candlestickmodelmapper_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCandlestickModelMapper*
/// @param name const char*
///
void q_candlestickmodelmapper_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QCandlestickModelMapper*
///
bool q_candlestickmodelmapper_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QCandlestickModelMapper*
///
bool q_candlestickmodelmapper_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QCandlestickModelMapper*
///
bool q_candlestickmodelmapper_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QCandlestickModelMapper*
///
bool q_candlestickmodelmapper_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCandlestickModelMapper*
/// @param b bool
///
bool q_candlestickmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QCandlestickModelMapper*
///
QThread* q_candlestickmodelmapper_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCandlestickModelMapper*
/// @param thread QThread*
///
bool q_candlestickmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickModelMapper*
/// @param interval int
///
int32_t q_candlestickmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickModelMapper*
/// @param time int64_t of nanoseconds
///
int32_t q_candlestickmodelmapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickModelMapper*
/// @param id int
///
void q_candlestickmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickModelMapper*
/// @param id enum Qt__TimerId
///
void q_candlestickmodelmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QCandlestickModelMapper*
///
/// @return libqt_list of QObject*
///
libqt_list q_candlestickmodelmapper_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCandlestickModelMapper*
/// @param parent QObject*
///
void q_candlestickmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCandlestickModelMapper*
/// @param filterObj QObject*
///
void q_candlestickmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCandlestickModelMapper*
/// @param obj QObject*
///
void q_candlestickmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_candlestickmodelmapper_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_candlestickmodelmapper_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCandlestickModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_candlestickmodelmapper_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_candlestickmodelmapper_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_candlestickmodelmapper_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickModelMapper*
///
bool q_candlestickmodelmapper_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickModelMapper*
/// @param receiver QObject*
///
bool q_candlestickmodelmapper_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_candlestickmodelmapper_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QCandlestickModelMapper*
///
void q_candlestickmodelmapper_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QCandlestickModelMapper*
///
void q_candlestickmodelmapper_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCandlestickModelMapper*
/// @param name const char*
/// @param value QVariant*
///
bool q_candlestickmodelmapper_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QCandlestickModelMapper*
/// @param name const char*
///
QVariant* q_candlestickmodelmapper_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QCandlestickModelMapper*
///
const char** q_candlestickmodelmapper_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCandlestickModelMapper*
///
QBindingStorage* q_candlestickmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QCandlestickModelMapper*
///
const QBindingStorage* q_candlestickmodelmapper_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickModelMapper*
///
void q_candlestickmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self)
///
void q_candlestickmodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QCandlestickModelMapper*
///
QObject* q_candlestickmodelmapper_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QCandlestickModelMapper*
/// @param classname const char*
///
bool q_candlestickmodelmapper_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCandlestickModelMapper*
///
void q_candlestickmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_candlestickmodelmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickModelMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_candlestickmodelmapper_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_candlestickmodelmapper_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_candlestickmodelmapper_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCandlestickModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_candlestickmodelmapper_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickModelMapper*
/// @param signal const char*
///
bool q_candlestickmodelmapper_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickModelMapper*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_candlestickmodelmapper_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickModelMapper*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_candlestickmodelmapper_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCandlestickModelMapper*
/// @param receiver QObject*
/// @param member const char*
///
bool q_candlestickmodelmapper_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickModelMapper*
/// @param param1 QObject*
///
void q_candlestickmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self, QObject* param1)
///
void q_candlestickmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param event QEvent*
///
bool q_candlestickmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param event QEvent*
///
bool q_candlestickmodelmapper_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param callback bool func(QCandlestickModelMapper* self, QEvent* event)
///
void q_candlestickmodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_candlestickmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_candlestickmodelmapper_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param callback bool func(QCandlestickModelMapper* self, QObject* watched, QEvent* event)
///
void q_candlestickmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param event QTimerEvent*
///
void q_candlestickmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param event QTimerEvent*
///
void q_candlestickmodelmapper_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self, QTimerEvent* event)
///
void q_candlestickmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param event QChildEvent*
///
void q_candlestickmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param event QChildEvent*
///
void q_candlestickmodelmapper_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self, QChildEvent* event)
///
void q_candlestickmodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param event QEvent*
///
void q_candlestickmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param event QEvent*
///
void q_candlestickmodelmapper_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self, QEvent* event)
///
void q_candlestickmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_candlestickmodelmapper_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_candlestickmodelmapper_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self, QMetaMethod* signal)
///
void q_candlestickmodelmapper_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_candlestickmodelmapper_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_candlestickmodelmapper_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self, QMetaMethod* signal)
///
void q_candlestickmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCandlestickModelMapper*
///
QObject* q_candlestickmodelmapper_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCandlestickModelMapper*
///
QObject* q_candlestickmodelmapper_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QCandlestickModelMapper*
/// @param callback QObject* func(QCandlestickModelMapper* self)
///
void q_candlestickmodelmapper_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCandlestickModelMapper*
///
int32_t q_candlestickmodelmapper_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCandlestickModelMapper*
///
int32_t q_candlestickmodelmapper_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QCandlestickModelMapper*
/// @param callback int32_t func(QCandlestickModelMapper* self)
///
void q_candlestickmodelmapper_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCandlestickModelMapper*
/// @param signal const char*
///
int32_t q_candlestickmodelmapper_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCandlestickModelMapper*
/// @param signal const char*
///
int32_t q_candlestickmodelmapper_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QCandlestickModelMapper*
/// @param callback int32_t func(QCandlestickModelMapper* self, const char* signal)
///
void q_candlestickmodelmapper_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCandlestickModelMapper*
/// @param signal QMetaMethod*
///
bool q_candlestickmodelmapper_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCandlestickModelMapper*
/// @param signal QMetaMethod*
///
bool q_candlestickmodelmapper_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QCandlestickModelMapper*
/// @param callback bool func(QCandlestickModelMapper* self, QMetaMethod* signal)
///
void q_candlestickmodelmapper_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCandlestickModelMapper*
/// @param callback void func(QCandlestickModelMapper* self, const char* objectName)
///
void q_candlestickmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper-qtcharts.html#dtor.QCandlestickModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QCandlestickModelMapper*
///
void q_candlestickmodelmapper_delete(void* self);

#endif
