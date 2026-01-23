#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html)

/// q_hcandlestickmodelmapper_new constructs a new QHCandlestickModelMapper object.
///
QHCandlestickModelMapper* q_hcandlestickmodelmapper_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html)

/// q_hcandlestickmodelmapper_new2 constructs a new QHCandlestickModelMapper object.
///
/// @param parent QObject*
///
QHCandlestickModelMapper* q_hcandlestickmodelmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QHCandlestickModelMapper*
///
const QMetaObject* q_hcandlestickmodelmapper_meta_object(void* self);

/// @param self QHCandlestickModelMapper*
/// @param param1 const char*
///
void* q_hcandlestickmodelmapper_metacast(void* self, const char* param1);

/// @param self QHCandlestickModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hcandlestickmodelmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func(QHCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_hcandlestickmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHCandlestickModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_hcandlestickmodelmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_hcandlestickmodelmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
///
/// @param self QHCandlestickModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_hcandlestickmodelmapper_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
///
/// Allows for overriding the related default method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_hcandlestickmodelmapper_on_orientation(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#orientation)
///
/// Base class method implementation
///
/// @param self QHCandlestickModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_hcandlestickmodelmapper_qbase_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setTimestampColumn)
///
/// @param self QHCandlestickModelMapper*
/// @param timestampColumn int
///
void q_hcandlestickmodelmapper_set_timestamp_column(void* self, int timestampColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumn)
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_timestamp_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setOpenColumn)
///
/// @param self QHCandlestickModelMapper*
/// @param openColumn int
///
void q_hcandlestickmodelmapper_set_open_column(void* self, int openColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumn)
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_open_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setHighColumn)
///
/// @param self QHCandlestickModelMapper*
/// @param highColumn int
///
void q_hcandlestickmodelmapper_set_high_column(void* self, int highColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumn)
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_high_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLowColumn)
///
/// @param self QHCandlestickModelMapper*
/// @param lowColumn int
///
void q_hcandlestickmodelmapper_set_low_column(void* self, int lowColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumn)
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_low_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setCloseColumn)
///
/// @param self QHCandlestickModelMapper*
/// @param closeColumn int
///
void q_hcandlestickmodelmapper_set_close_column(void* self, int closeColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumn)
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_close_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setFirstSetRow)
///
/// @param self QHCandlestickModelMapper*
/// @param firstSetRow int
///
void q_hcandlestickmodelmapper_set_first_set_row(void* self, int firstSetRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRow)
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_first_set_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#setLastSetRow)
///
/// @param self QHCandlestickModelMapper*
/// @param lastSetRow int
///
void q_hcandlestickmodelmapper_set_last_set_row(void* self, int lastSetRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRow)
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_last_set_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_timestamp_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#timestampColumnChanged)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_timestamp_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_open_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#openColumnChanged)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_open_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_high_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#highColumnChanged)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_high_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_low_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lowColumnChanged)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_low_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_close_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#closeColumnChanged)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_close_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_first_set_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#firstSetRowChanged)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_first_set_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_last_set_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#lastSetRowChanged)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_last_set_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_hcandlestickmodelmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_hcandlestickmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
///
/// @param self QHCandlestickModelMapper*
/// @param model QAbstractItemModel*
///
void q_hcandlestickmodelmapper_set_model(void* self, void* model);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
///
/// @param self QHCandlestickModelMapper*
///
QAbstractItemModel* q_hcandlestickmodelmapper_model(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
///
/// @param self QHCandlestickModelMapper*
/// @param series QCandlestickSeries*
///
void q_hcandlestickmodelmapper_set_series(void* self, void* series);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
///
/// @param self QHCandlestickModelMapper*
///
QCandlestickSeries* q_hcandlestickmodelmapper_series(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_model_replaced(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_series_replaced(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHCandlestickModelMapper*
///
const char* q_hcandlestickmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHCandlestickModelMapper*
/// @param name char*
///
void q_hcandlestickmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QHCandlestickModelMapper*
///
bool q_hcandlestickmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QHCandlestickModelMapper*
///
bool q_hcandlestickmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QHCandlestickModelMapper*
///
bool q_hcandlestickmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QHCandlestickModelMapper*
///
bool q_hcandlestickmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHCandlestickModelMapper*
/// @param b bool
///
bool q_hcandlestickmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QHCandlestickModelMapper*
///
QThread* q_hcandlestickmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHCandlestickModelMapper*
/// @param thread QThread*
///
bool q_hcandlestickmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHCandlestickModelMapper*
/// @param interval int
///
int32_t q_hcandlestickmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHCandlestickModelMapper*
/// @param time int64_t of nanoseconds
///
int32_t q_hcandlestickmodelmapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHCandlestickModelMapper*
/// @param id int
///
void q_hcandlestickmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHCandlestickModelMapper*
/// @param id enum Qt__TimerId
///
void q_hcandlestickmodelmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QHCandlestickModelMapper*
///
/// @return libqt_list of QObject*
///
libqt_list q_hcandlestickmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHCandlestickModelMapper*
/// @param parent QObject*
///
void q_hcandlestickmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHCandlestickModelMapper*
/// @param filterObj QObject*
///
void q_hcandlestickmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHCandlestickModelMapper*
/// @param obj QObject*
///
void q_hcandlestickmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_hcandlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHCandlestickModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_hcandlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_hcandlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_hcandlestickmodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHCandlestickModelMapper*
/// @param name const char*
/// @param value QVariant*
///
bool q_hcandlestickmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QHCandlestickModelMapper*
/// @param name const char*
///
QVariant* q_hcandlestickmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHCandlestickModelMapper*
///
const char** q_hcandlestickmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHCandlestickModelMapper*
///
QBindingStorage* q_hcandlestickmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHCandlestickModelMapper*
///
const QBindingStorage* q_hcandlestickmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self)
///
void q_hcandlestickmodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QHCandlestickModelMapper*
///
QObject* q_hcandlestickmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QHCandlestickModelMapper*
/// @param classname const char*
///
bool q_hcandlestickmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHCandlestickModelMapper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_hcandlestickmodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHCandlestickModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_hcandlestickmodelmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHCandlestickModelMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_hcandlestickmodelmapper_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_hcandlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHCandlestickModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_hcandlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHCandlestickModelMapper*
/// @param param1 QObject*
///
void q_hcandlestickmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, QObject* param1)
///
void q_hcandlestickmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param event QEvent*
///
bool q_hcandlestickmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param event QEvent*
///
bool q_hcandlestickmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback bool func(QHCandlestickModelMapper* self, QEvent* event)
///
void q_hcandlestickmodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hcandlestickmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_hcandlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback bool func(QHCandlestickModelMapper* self, QObject* watched, QEvent* event)
///
void q_hcandlestickmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param event QTimerEvent*
///
void q_hcandlestickmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param event QTimerEvent*
///
void q_hcandlestickmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, QTimerEvent* event)
///
void q_hcandlestickmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param event QChildEvent*
///
void q_hcandlestickmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param event QChildEvent*
///
void q_hcandlestickmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, QChildEvent* event)
///
void q_hcandlestickmodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param event QEvent*
///
void q_hcandlestickmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param event QEvent*
///
void q_hcandlestickmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, QEvent* event)
///
void q_hcandlestickmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_hcandlestickmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_hcandlestickmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, QMetaMethod* signal)
///
void q_hcandlestickmodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_hcandlestickmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_hcandlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, QMetaMethod* signal)
///
void q_hcandlestickmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param timestamp int
///
void q_hcandlestickmodelmapper_set_timestamp(void* self, int timestamp);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param timestamp int
///
void q_hcandlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, int timestamp)
///
void q_hcandlestickmodelmapper_on_set_timestamp(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_timestamp(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_qbase_timestamp(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_hcandlestickmodelmapper_on_timestamp(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param open int
///
void q_hcandlestickmodelmapper_set_open(void* self, int open);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param open int
///
void q_hcandlestickmodelmapper_qbase_set_open(void* self, int open);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, int open)
///
void q_hcandlestickmodelmapper_on_set_open(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_open(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_qbase_open(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_hcandlestickmodelmapper_on_open(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param high int
///
void q_hcandlestickmodelmapper_set_high(void* self, int high);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param high int
///
void q_hcandlestickmodelmapper_qbase_set_high(void* self, int high);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, int high)
///
void q_hcandlestickmodelmapper_on_set_high(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_high(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_qbase_high(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_hcandlestickmodelmapper_on_high(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param low int
///
void q_hcandlestickmodelmapper_set_low(void* self, int low);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param low int
///
void q_hcandlestickmodelmapper_qbase_set_low(void* self, int low);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, int low)
///
void q_hcandlestickmodelmapper_on_set_low(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_low(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_qbase_low(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_hcandlestickmodelmapper_on_low(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param close int
///
void q_hcandlestickmodelmapper_set_close(void* self, int close);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param close int
///
void q_hcandlestickmodelmapper_qbase_set_close(void* self, int close);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, int close)
///
void q_hcandlestickmodelmapper_on_set_close(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_close(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_qbase_close(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_hcandlestickmodelmapper_on_close(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param firstSetSection int
///
void q_hcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param firstSetSection int
///
void q_hcandlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, int firstSetSection)
///
void q_hcandlestickmodelmapper_on_set_first_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_first_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_qbase_first_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_hcandlestickmodelmapper_on_first_set_section(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param lastSetSection int
///
void q_hcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param lastSetSection int
///
void q_hcandlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, int lastSetSection)
///
void q_hcandlestickmodelmapper_on_set_last_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_last_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_qbase_last_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_hcandlestickmodelmapper_on_last_set_section(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
QObject* q_hcandlestickmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
QObject* q_hcandlestickmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback QObject* func()
///
void q_hcandlestickmodelmapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
///
int32_t q_hcandlestickmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_hcandlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param signal const char*
///
int32_t q_hcandlestickmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param signal const char*
///
int32_t q_hcandlestickmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback int32_t func(QHCandlestickModelMapper* self, const char* signal)
///
void q_hcandlestickmodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param signal QMetaMethod*
///
bool q_hcandlestickmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param signal QMetaMethod*
///
bool q_hcandlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHCandlestickModelMapper*
/// @param callback bool func(QHCandlestickModelMapper* self, QMetaMethod* signal)
///
void q_hcandlestickmodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHCandlestickModelMapper*
/// @param callback void func(QHCandlestickModelMapper* self, const char* objectName)
///
void q_hcandlestickmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhcandlestickmodelmapper-qtcharts.html#dtor.QHCandlestickModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QHCandlestickModelMapper*
///
void q_hcandlestickmodelmapper_delete(void* self);

#endif
