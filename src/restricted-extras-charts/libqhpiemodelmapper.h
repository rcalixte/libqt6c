#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHPIEMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html)

/// q_hpiemodelmapper_new constructs a new QHPieModelMapper object.
///
QHPieModelMapper* q_hpiemodelmapper_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html)

/// q_hpiemodelmapper_new2 constructs a new QHPieModelMapper object.
///
/// @param parent QObject*
///
QHPieModelMapper* q_hpiemodelmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QHPieModelMapper*
///
const QMetaObject* q_hpiemodelmapper_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QHPieModelMapper*
/// @param callback const QMetaObject* func()
///
void q_hpiemodelmapper_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QHPieModelMapper*
///
const QMetaObject* q_hpiemodelmapper_qbase_meta_object(void* self);

/// @param self QHPieModelMapper*
/// @param param1 const char*
///
void* q_hpiemodelmapper_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QHPieModelMapper*
/// @param callback void* func(QHPieModelMapper* self, const char* param1)
///
void q_hpiemodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QHPieModelMapper*
/// @param param1 const char*
///
void* q_hpiemodelmapper_qbase_metacast(void* self, const char* param1);

/// @param self QHPieModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hpiemodelmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHPieModelMapper*
/// @param callback int32_t func(QHPieModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_hpiemodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHPieModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hpiemodelmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_hpiemodelmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#model)
///
/// @param self QHPieModelMapper*
///
QAbstractItemModel* q_hpiemodelmapper_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#setModel)
///
/// @param self QHPieModelMapper*
/// @param model QAbstractItemModel*
///
void q_hpiemodelmapper_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#series)
///
/// @param self QHPieModelMapper*
///
QPieSeries* q_hpiemodelmapper_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#setSeries)
///
/// @param self QHPieModelMapper*
/// @param series QPieSeries*
///
void q_hpiemodelmapper_set_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#valuesRow)
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_values_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#setValuesRow)
///
/// @param self QHPieModelMapper*
/// @param valuesRow int
///
void q_hpiemodelmapper_set_values_row(void* self, int valuesRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#labelsRow)
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_labels_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#setLabelsRow)
///
/// @param self QHPieModelMapper*
/// @param labelsRow int
///
void q_hpiemodelmapper_set_labels_row(void* self, int labelsRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#firstColumn)
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_first_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#setFirstColumn)
///
/// @param self QHPieModelMapper*
/// @param firstColumn int
///
void q_hpiemodelmapper_set_first_column(void* self, int firstColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#columnCount)
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_column_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#setColumnCount)
///
/// @param self QHPieModelMapper*
/// @param columnCount int
///
void q_hpiemodelmapper_set_column_count(void* self, int columnCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_series_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self)
///
void q_hpiemodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_model_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self)
///
void q_hpiemodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#valuesRowChanged)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_values_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#valuesRowChanged)
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self)
///
void q_hpiemodelmapper_on_values_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#labelsRowChanged)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_labels_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#labelsRowChanged)
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self)
///
void q_hpiemodelmapper_on_labels_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#firstColumnChanged)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_first_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#firstColumnChanged)
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self)
///
void q_hpiemodelmapper_on_first_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#columnCountChanged)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_column_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#columnCountChanged)
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self)
///
void q_hpiemodelmapper_on_column_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_hpiemodelmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_hpiemodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHPieModelMapper*
///
const char* q_hpiemodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHPieModelMapper*
/// @param name char*
///
void q_hpiemodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QHPieModelMapper*
///
bool q_hpiemodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QHPieModelMapper*
///
bool q_hpiemodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QHPieModelMapper*
///
bool q_hpiemodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QHPieModelMapper*
///
bool q_hpiemodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHPieModelMapper*
/// @param b bool
///
bool q_hpiemodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QHPieModelMapper*
///
QThread* q_hpiemodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHPieModelMapper*
/// @param thread QThread*
///
bool q_hpiemodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHPieModelMapper*
/// @param interval int
///
int32_t q_hpiemodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHPieModelMapper*
/// @param time int64_t of nanoseconds
///
int32_t q_hpiemodelmapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHPieModelMapper*
/// @param id int
///
void q_hpiemodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHPieModelMapper*
/// @param id enum Qt__TimerId
///
void q_hpiemodelmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QHPieModelMapper*
///
/// @return libqt_list of QObject*
///
libqt_list q_hpiemodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHPieModelMapper*
/// @param parent QObject*
///
void q_hpiemodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHPieModelMapper*
/// @param filterObj QObject*
///
void q_hpiemodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHPieModelMapper*
/// @param obj QObject*
///
void q_hpiemodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_hpiemodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHPieModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_hpiemodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_hpiemodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_hpiemodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHPieModelMapper*
/// @param name const char*
/// @param value QVariant*
///
bool q_hpiemodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QHPieModelMapper*
/// @param name const char*
///
QVariant* q_hpiemodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHPieModelMapper*
///
const char** q_hpiemodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHPieModelMapper*
///
QBindingStorage* q_hpiemodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHPieModelMapper*
///
const QBindingStorage* q_hpiemodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self)
///
void q_hpiemodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QHPieModelMapper*
///
QObject* q_hpiemodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QHPieModelMapper*
/// @param classname const char*
///
bool q_hpiemodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHPieModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_hpiemodelmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHPieModelMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_hpiemodelmapper_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_hpiemodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHPieModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_hpiemodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHPieModelMapper*
/// @param param1 QObject*
///
void q_hpiemodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, QObject* param1)
///
void q_hpiemodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param event QEvent*
///
bool q_hpiemodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param event QEvent*
///
bool q_hpiemodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback bool func(QHPieModelMapper* self, QEvent* event)
///
void q_hpiemodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hpiemodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hpiemodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback bool func(QHPieModelMapper* self, QObject* watched, QEvent* event)
///
void q_hpiemodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param event QTimerEvent*
///
void q_hpiemodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param event QTimerEvent*
///
void q_hpiemodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, QTimerEvent* event)
///
void q_hpiemodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param event QChildEvent*
///
void q_hpiemodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param event QChildEvent*
///
void q_hpiemodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, QChildEvent* event)
///
void q_hpiemodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param event QEvent*
///
void q_hpiemodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param event QEvent*
///
void q_hpiemodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, QEvent* event)
///
void q_hpiemodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param signal QMetaMethod*
///
void q_hpiemodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param signal QMetaMethod*
///
void q_hpiemodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, QMetaMethod* signal)
///
void q_hpiemodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param signal QMetaMethod*
///
void q_hpiemodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param signal QMetaMethod*
///
void q_hpiemodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, QMetaMethod* signal)
///
void q_hpiemodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_first(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_qbase_first(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback int32_t func()
///
void q_hpiemodelmapper_on_first(void* self, int32_t (*callback)());

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param first int
///
void q_hpiemodelmapper_set_first(void* self, int first);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param first int
///
void q_hpiemodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, int first)
///
void q_hpiemodelmapper_on_set_first(void* self, void (*callback)(void*, int));

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_count(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_qbase_count(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback int32_t func()
///
void q_hpiemodelmapper_on_count(void* self, int32_t (*callback)());

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param count int
///
void q_hpiemodelmapper_set_count(void* self, int count);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param count int
///
void q_hpiemodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, int count)
///
void q_hpiemodelmapper_on_set_count(void* self, void (*callback)(void*, int));

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_values_section(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_qbase_values_section(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#valuesSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback int32_t func()
///
void q_hpiemodelmapper_on_values_section(void* self, int32_t (*callback)());

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param valuesSection int
///
void q_hpiemodelmapper_set_values_section(void* self, int valuesSection);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param valuesSection int
///
void q_hpiemodelmapper_qbase_set_values_section(void* self, int valuesSection);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setValuesSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, int valuesSection)
///
void q_hpiemodelmapper_on_set_values_section(void* self, void (*callback)(void*, int));

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_labels_section(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_qbase_labels_section(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#labelsSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback int32_t func()
///
void q_hpiemodelmapper_on_labels_section(void* self, int32_t (*callback)());

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param labelsSection int
///
void q_hpiemodelmapper_set_labels_section(void* self, int labelsSection);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param labelsSection int
///
void q_hpiemodelmapper_qbase_set_labels_section(void* self, int labelsSection);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setLabelsSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, int labelsSection)
///
void q_hpiemodelmapper_on_set_labels_section(void* self, void (*callback)(void*, int));

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_hpiemodelmapper_orientation(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_hpiemodelmapper_qbase_orientation(void* self);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback int32_t func()
///
void q_hpiemodelmapper_on_orientation(void* self, int32_t (*callback)());

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_hpiemodelmapper_set_orientation(void* self, int32_t orientation);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_hpiemodelmapper_qbase_set_orientation(void* self, int32_t orientation);

/// Inherited from QPieModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpiemodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, enum Qt__Orientation orientation)
///
void q_hpiemodelmapper_on_set_orientation(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
///
QObject* q_hpiemodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
///
QObject* q_hpiemodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback QObject* func()
///
void q_hpiemodelmapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
///
int32_t q_hpiemodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback int32_t func()
///
void q_hpiemodelmapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param signal const char*
///
int32_t q_hpiemodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param signal const char*
///
int32_t q_hpiemodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback int32_t func(QHPieModelMapper* self, const char* signal)
///
void q_hpiemodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param signal QMetaMethod*
///
bool q_hpiemodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param signal QMetaMethod*
///
bool q_hpiemodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHPieModelMapper*
/// @param callback bool func(QHPieModelMapper* self, QMetaMethod* signal)
///
void q_hpiemodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHPieModelMapper*
/// @param callback void func(QHPieModelMapper* self, const char* objectName)
///
void q_hpiemodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhpiemodelmapper-qtcharts.html#dtor.QHPieModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QHPieModelMapper*
///
void q_hpiemodelmapper_delete(void* self);

#endif
