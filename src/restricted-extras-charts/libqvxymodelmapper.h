#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQVXYMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQVXYMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html)

/// q_vxymodelmapper_new constructs a new QVXYModelMapper object.
///
QVXYModelMapper* q_vxymodelmapper_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html)

/// q_vxymodelmapper_new2 constructs a new QVXYModelMapper object.
///
/// @param parent QObject*
///
QVXYModelMapper* q_vxymodelmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QVXYModelMapper*
///
const QMetaObject* q_vxymodelmapper_meta_object(void* self);

/// @param self QVXYModelMapper*
/// @param param1 const char*
///
void* q_vxymodelmapper_metacast(void* self, const char* param1);

/// @param self QVXYModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_vxymodelmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_vxymodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVXYModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_vxymodelmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_vxymodelmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#model)
///
/// @param self QVXYModelMapper*
///
QAbstractItemModel* q_vxymodelmapper_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setModel)
///
/// @param self QVXYModelMapper*
/// @param model QAbstractItemModel*
///
void q_vxymodelmapper_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#series)
///
/// @param self QVXYModelMapper*
///
QXYSeries* q_vxymodelmapper_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setSeries)
///
/// @param self QVXYModelMapper*
/// @param series QXYSeries*
///
void q_vxymodelmapper_set_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumn)
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_x_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setXColumn)
///
/// @param self QVXYModelMapper*
/// @param xColumn int
///
void q_vxymodelmapper_set_x_column(void* self, int xColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumn)
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_y_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setYColumn)
///
/// @param self QVXYModelMapper*
/// @param yColumn int
///
void q_vxymodelmapper_set_y_column(void* self, int yColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRow)
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_first_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setFirstRow)
///
/// @param self QVXYModelMapper*
/// @param firstRow int
///
void q_vxymodelmapper_set_first_row(void* self, int firstRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCount)
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_row_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#setRowCount)
///
/// @param self QVXYModelMapper*
/// @param rowCount int
///
void q_vxymodelmapper_set_row_count(void* self, int rowCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_series_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#seriesReplaced)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_model_replaced(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#modelReplaced)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumnChanged)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_x_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#xColumnChanged)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_x_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumnChanged)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_y_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#yColumnChanged)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_y_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRowChanged)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_first_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#firstRowChanged)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_first_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCountChanged)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_row_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#rowCountChanged)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_row_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_vxymodelmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_vxymodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVXYModelMapper*
///
const char* q_vxymodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVXYModelMapper*
/// @param name char*
///
void q_vxymodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QVXYModelMapper*
///
bool q_vxymodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QVXYModelMapper*
///
bool q_vxymodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QVXYModelMapper*
///
bool q_vxymodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QVXYModelMapper*
///
bool q_vxymodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVXYModelMapper*
/// @param b bool
///
bool q_vxymodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QVXYModelMapper*
///
QThread* q_vxymodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVXYModelMapper*
/// @param thread QThread*
///
bool q_vxymodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVXYModelMapper*
/// @param interval int
///
int32_t q_vxymodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVXYModelMapper*
/// @param time int64_t of nanoseconds
///
int32_t q_vxymodelmapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVXYModelMapper*
/// @param id int
///
void q_vxymodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVXYModelMapper*
/// @param id enum Qt__TimerId
///
void q_vxymodelmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QVXYModelMapper*
///
/// @return libqt_list of QObject*
///
libqt_list q_vxymodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVXYModelMapper*
/// @param parent QObject*
///
void q_vxymodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVXYModelMapper*
/// @param filterObj QObject*
///
void q_vxymodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVXYModelMapper*
/// @param obj QObject*
///
void q_vxymodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_vxymodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVXYModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_vxymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_vxymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_vxymodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVXYModelMapper*
/// @param name const char*
/// @param value QVariant*
///
bool q_vxymodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QVXYModelMapper*
/// @param name const char*
///
QVariant* q_vxymodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QVXYModelMapper*
///
const char** q_vxymodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVXYModelMapper*
///
QBindingStorage* q_vxymodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVXYModelMapper*
///
const QBindingStorage* q_vxymodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self)
///
void q_vxymodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QVXYModelMapper*
///
QObject* q_vxymodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QVXYModelMapper*
/// @param classname const char*
///
bool q_vxymodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVXYModelMapper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_vxymodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVXYModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_vxymodelmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVXYModelMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_vxymodelmapper_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_vxymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVXYModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_vxymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVXYModelMapper*
/// @param param1 QObject*
///
void q_vxymodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QObject* param1)
///
void q_vxymodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QEvent*
///
bool q_vxymodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QEvent*
///
bool q_vxymodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback bool func(QVXYModelMapper* self, QEvent* event)
///
void q_vxymodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_vxymodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_vxymodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback bool func(QVXYModelMapper* self, QObject* watched, QEvent* event)
///
void q_vxymodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QTimerEvent*
///
void q_vxymodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QTimerEvent*
///
void q_vxymodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QTimerEvent* event)
///
void q_vxymodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QChildEvent*
///
void q_vxymodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QChildEvent*
///
void q_vxymodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QChildEvent* event)
///
void q_vxymodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QEvent*
///
void q_vxymodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param event QEvent*
///
void q_vxymodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QEvent* event)
///
void q_vxymodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
void q_vxymodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
void q_vxymodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QMetaMethod* signal)
///
void q_vxymodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
void q_vxymodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
void q_vxymodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, QMetaMethod* signal)
///
void q_vxymodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_first(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_qbase_first(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#first)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback int32_t func()
///
void q_vxymodelmapper_on_first(void* self, int32_t (*callback)());

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param first int
///
void q_vxymodelmapper_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param first int
///
void q_vxymodelmapper_qbase_set_first(void* self, int first);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setFirst)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, int first)
///
void q_vxymodelmapper_on_set_first(void* self, void (*callback)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_count(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_qbase_count(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#count)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback int32_t func()
///
void q_vxymodelmapper_on_count(void* self, int32_t (*callback)());

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param count int
///
void q_vxymodelmapper_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param count int
///
void q_vxymodelmapper_qbase_set_count(void* self, int count);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, int count)
///
void q_vxymodelmapper_on_set_count(void* self, void (*callback)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_vxymodelmapper_orientation(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_vxymodelmapper_qbase_orientation(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#orientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback int32_t func()
///
void q_vxymodelmapper_on_orientation(void* self, int32_t (*callback)());

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_vxymodelmapper_set_orientation(void* self, int32_t orientation);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param orientation enum Qt__Orientation
///
void q_vxymodelmapper_qbase_set_orientation(void* self, int32_t orientation);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, enum Qt__Orientation orientation)
///
void q_vxymodelmapper_on_set_orientation(void* self, void (*callback)(void*, int32_t));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_x_section(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_qbase_x_section(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#xSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback int32_t func()
///
void q_vxymodelmapper_on_x_section(void* self, int32_t (*callback)());

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param xSection int
///
void q_vxymodelmapper_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param xSection int
///
void q_vxymodelmapper_qbase_set_x_section(void* self, int xSection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setXSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, int xSection)
///
void q_vxymodelmapper_on_set_x_section(void* self, void (*callback)(void*, int));

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_y_section(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_qbase_y_section(void* self);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#ySection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback int32_t func()
///
void q_vxymodelmapper_on_y_section(void* self, int32_t (*callback)());

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param ySection int
///
void q_vxymodelmapper_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param ySection int
///
void q_vxymodelmapper_qbase_set_y_section(void* self, int ySection);

/// Inherited from QXYModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qxymodelmapper.html#setYSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, int ySection)
///
void q_vxymodelmapper_on_set_y_section(void* self, void (*callback)(void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
///
QObject* q_vxymodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
///
QObject* q_vxymodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback QObject* func()
///
void q_vxymodelmapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
///
int32_t q_vxymodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback int32_t func()
///
void q_vxymodelmapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal const char*
///
int32_t q_vxymodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal const char*
///
int32_t q_vxymodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback int32_t func(QVXYModelMapper* self, const char* signal)
///
void q_vxymodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
bool q_vxymodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param signal QMetaMethod*
///
bool q_vxymodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVXYModelMapper*
/// @param callback bool func(QVXYModelMapper* self, QMetaMethod* signal)
///
void q_vxymodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVXYModelMapper*
/// @param callback void func(QVXYModelMapper* self, const char* objectName)
///
void q_vxymodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvxymodelmapper-qtcharts.html#dtor.QVXYModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QVXYModelMapper*
///
void q_vxymodelmapper_delete(void* self);

#endif
