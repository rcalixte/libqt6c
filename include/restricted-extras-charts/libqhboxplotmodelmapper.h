#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHBOXPLOTMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html)

/// q_hboxplotmodelmapper_new constructs a new QHBoxPlotModelMapper object.
///
QHBoxPlotModelMapper* q_hboxplotmodelmapper_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html)

/// q_hboxplotmodelmapper_new2 constructs a new QHBoxPlotModelMapper object.
///
/// @param parent QObject*
///
QHBoxPlotModelMapper* q_hboxplotmodelmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QHBoxPlotModelMapper*
///
const QMetaObject* q_hboxplotmodelmapper_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback const QMetaObject* func()
///
void q_hboxplotmodelmapper_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QHBoxPlotModelMapper*
///
const QMetaObject* q_hboxplotmodelmapper_qbase_meta_object(void* self);

/// @param self QHBoxPlotModelMapper*
/// @param param1 const char*
///
void* q_hboxplotmodelmapper_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void* func(QHBoxPlotModelMapper* self, const char* param1)
///
void q_hboxplotmodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QHBoxPlotModelMapper*
/// @param param1 const char*
///
void* q_hboxplotmodelmapper_qbase_metacast(void* self, const char* param1);

/// @param self QHBoxPlotModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hboxplotmodelmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback int32_t func(QHBoxPlotModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_hboxplotmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHBoxPlotModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hboxplotmodelmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_hboxplotmodelmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#model)
///
/// @param self QHBoxPlotModelMapper*
///
QAbstractItemModel* q_hboxplotmodelmapper_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setModel)
///
/// @param self QHBoxPlotModelMapper*
/// @param model QAbstractItemModel*
///
void q_hboxplotmodelmapper_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#series)
///
/// @param self QHBoxPlotModelMapper*
///
QBoxPlotSeries* q_hboxplotmodelmapper_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setSeries)
///
/// @param self QHBoxPlotModelMapper*
/// @param series QBoxPlotSeries*
///
void q_hboxplotmodelmapper_set_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRow)
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_first_box_set_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setFirstBoxSetRow)
///
/// @param self QHBoxPlotModelMapper*
/// @param firstBoxSetRow int
///
void q_hboxplotmodelmapper_set_first_box_set_row(void* self, int firstBoxSetRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRow)
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_last_box_set_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setLastBoxSetRow)
///
/// @param self QHBoxPlotModelMapper*
/// @param lastBoxSetRow int
///
void q_hboxplotmodelmapper_set_last_box_set_row(void* self, int lastBoxSetRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumn)
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_first_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setFirstColumn)
///
/// @param self QHBoxPlotModelMapper*
/// @param firstColumn int
///
void q_hboxplotmodelmapper_set_first_column(void* self, int firstColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCount)
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_column_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#setColumnCount)
///
/// @param self QHBoxPlotModelMapper*
/// @param rowCount int
///
void q_hboxplotmodelmapper_set_column_count(void* self, int rowCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_series_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self)
///
void q_hboxplotmodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_model_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self)
///
void q_hboxplotmodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRowChanged)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_first_box_set_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstBoxSetRowChanged)
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self)
///
void q_hboxplotmodelmapper_on_first_box_set_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRowChanged)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_last_box_set_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#lastBoxSetRowChanged)
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self)
///
void q_hboxplotmodelmapper_on_last_box_set_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumnChanged)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_first_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#firstColumnChanged)
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self)
///
void q_hboxplotmodelmapper_on_first_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCountChanged)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_column_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#columnCountChanged)
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self)
///
void q_hboxplotmodelmapper_on_column_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_hboxplotmodelmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_hboxplotmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHBoxPlotModelMapper*
///
const char* q_hboxplotmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHBoxPlotModelMapper*
/// @param name char*
///
void q_hboxplotmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QHBoxPlotModelMapper*
///
bool q_hboxplotmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QHBoxPlotModelMapper*
///
bool q_hboxplotmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QHBoxPlotModelMapper*
///
bool q_hboxplotmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QHBoxPlotModelMapper*
///
bool q_hboxplotmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHBoxPlotModelMapper*
/// @param b bool
///
bool q_hboxplotmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QHBoxPlotModelMapper*
///
QThread* q_hboxplotmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHBoxPlotModelMapper*
/// @param thread QThread*
///
bool q_hboxplotmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHBoxPlotModelMapper*
/// @param interval int
///
int32_t q_hboxplotmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHBoxPlotModelMapper*
/// @param time int64_t of nanoseconds
///
int32_t q_hboxplotmodelmapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHBoxPlotModelMapper*
/// @param id int
///
void q_hboxplotmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHBoxPlotModelMapper*
/// @param id enum Qt__TimerId
///
void q_hboxplotmodelmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QHBoxPlotModelMapper*
///
/// @return libqt_list of QObject*
///
libqt_list q_hboxplotmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHBoxPlotModelMapper*
/// @param parent QObject*
///
void q_hboxplotmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHBoxPlotModelMapper*
/// @param filterObj QObject*
///
void q_hboxplotmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHBoxPlotModelMapper*
/// @param obj QObject*
///
void q_hboxplotmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_hboxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHBoxPlotModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_hboxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_hboxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_hboxplotmodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHBoxPlotModelMapper*
/// @param name const char*
/// @param value QVariant*
///
bool q_hboxplotmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QHBoxPlotModelMapper*
/// @param name const char*
///
QVariant* q_hboxplotmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHBoxPlotModelMapper*
///
const char** q_hboxplotmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHBoxPlotModelMapper*
///
QBindingStorage* q_hboxplotmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHBoxPlotModelMapper*
///
const QBindingStorage* q_hboxplotmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self)
///
void q_hboxplotmodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QHBoxPlotModelMapper*
///
QObject* q_hboxplotmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QHBoxPlotModelMapper*
/// @param classname const char*
///
bool q_hboxplotmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHBoxPlotModelMapper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_hboxplotmodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHBoxPlotModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_hboxplotmodelmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHBoxPlotModelMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_hboxplotmodelmapper_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_hboxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHBoxPlotModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_hboxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHBoxPlotModelMapper*
/// @param param1 QObject*
///
void q_hboxplotmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, QObject* param1)
///
void q_hboxplotmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param event QEvent*
///
bool q_hboxplotmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param event QEvent*
///
bool q_hboxplotmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback bool func(QHBoxPlotModelMapper* self, QEvent* event)
///
void q_hboxplotmodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hboxplotmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hboxplotmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback bool func(QHBoxPlotModelMapper* self, QObject* watched, QEvent* event)
///
void q_hboxplotmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param event QTimerEvent*
///
void q_hboxplotmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param event QTimerEvent*
///
void q_hboxplotmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, QTimerEvent* event)
///
void q_hboxplotmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param event QChildEvent*
///
void q_hboxplotmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param event QChildEvent*
///
void q_hboxplotmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, QChildEvent* event)
///
void q_hboxplotmodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param event QEvent*
///
void q_hboxplotmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param event QEvent*
///
void q_hboxplotmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, QEvent* event)
///
void q_hboxplotmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param signal QMetaMethod*
///
void q_hboxplotmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param signal QMetaMethod*
///
void q_hboxplotmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, QMetaMethod* signal)
///
void q_hboxplotmodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param signal QMetaMethod*
///
void q_hboxplotmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param signal QMetaMethod*
///
void q_hboxplotmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, QMetaMethod* signal)
///
void q_hboxplotmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_first(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_qbase_first(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback int32_t func()
///
void q_hboxplotmodelmapper_on_first(void* self, int32_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param first int
///
void q_hboxplotmodelmapper_set_first(void* self, int first);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param first int
///
void q_hboxplotmodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, int first)
///
void q_hboxplotmodelmapper_on_set_first(void* self, void (*callback)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_count(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_qbase_count(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback int32_t func()
///
void q_hboxplotmodelmapper_on_count(void* self, int32_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param count int
///
void q_hboxplotmodelmapper_set_count(void* self, int count);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param count int
///
void q_hboxplotmodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, int count)
///
void q_hboxplotmodelmapper_on_set_count(void* self, void (*callback)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_first_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_qbase_first_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#firstBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback int32_t func()
///
void q_hboxplotmodelmapper_on_first_box_set_section(void* self, int32_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param firstBoxSetSection int
///
void q_hboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param firstBoxSetSection int
///
void q_hboxplotmodelmapper_qbase_set_first_box_set_section(void* self, int firstBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setFirstBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, int firstBoxSetSection)
///
void q_hboxplotmodelmapper_on_set_first_box_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_last_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_qbase_last_box_set_section(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#lastBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback int32_t func()
///
void q_hboxplotmodelmapper_on_last_box_set_section(void* self, int32_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param lastBoxSetSection int
///
void q_hboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param lastBoxSetSection int
///
void q_hboxplotmodelmapper_qbase_set_last_box_set_section(void* self, int lastBoxSetSection);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setLastBoxSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, int lastBoxSetSection)
///
void q_hboxplotmodelmapper_on_set_last_box_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_hboxplotmodelmapper_orientation(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_hboxplotmodelmapper_qbase_orientation(void* self);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback int32_t func()
///
void q_hboxplotmodelmapper_on_orientation(void* self, int32_t (*callback)());

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_hboxplotmodelmapper_set_orientation(void* self, int32_t orientation);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_hboxplotmodelmapper_qbase_set_orientation(void* self, int32_t orientation);

/// Inherited from QBoxPlotModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qboxplotmodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, enum Qt__Orientation orientation)
///
void q_hboxplotmodelmapper_on_set_orientation(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
QObject* q_hboxplotmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
QObject* q_hboxplotmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback QObject* func()
///
void q_hboxplotmodelmapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
///
int32_t q_hboxplotmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback int32_t func()
///
void q_hboxplotmodelmapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param signal const char*
///
int32_t q_hboxplotmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param signal const char*
///
int32_t q_hboxplotmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback int32_t func(QHBoxPlotModelMapper* self, const char* signal)
///
void q_hboxplotmodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param signal QMetaMethod*
///
bool q_hboxplotmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param signal QMetaMethod*
///
bool q_hboxplotmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHBoxPlotModelMapper*
/// @param callback bool func(QHBoxPlotModelMapper* self, QMetaMethod* signal)
///
void q_hboxplotmodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHBoxPlotModelMapper*
/// @param callback void func(QHBoxPlotModelMapper* self, const char* objectName)
///
void q_hboxplotmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhboxplotmodelmapper-qtcharts.html#dtor.QHBoxPlotModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QHBoxPlotModelMapper*
///
void q_hboxplotmodelmapper_delete(void* self);

#endif
