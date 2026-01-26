#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQVCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQVCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html)

/// q_vcandlestickmodelmapper_new constructs a new QVCandlestickModelMapper object.
///
QVCandlestickModelMapper* q_vcandlestickmodelmapper_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html)

/// q_vcandlestickmodelmapper_new2 constructs a new QVCandlestickModelMapper object.
///
/// @param parent QObject*
///
QVCandlestickModelMapper* q_vcandlestickmodelmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QVCandlestickModelMapper*
///
const QMetaObject* q_vcandlestickmodelmapper_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QVCandlestickModelMapper*
/// @param callback const QMetaObject* func()
///
void q_vcandlestickmodelmapper_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QVCandlestickModelMapper*
///
const QMetaObject* q_vcandlestickmodelmapper_qbase_meta_object(void* self);

/// @param self QVCandlestickModelMapper*
/// @param param1 const char*
///
void* q_vcandlestickmodelmapper_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void* func(QVCandlestickModelMapper* self, const char* param1)
///
void q_vcandlestickmodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QVCandlestickModelMapper*
/// @param param1 const char*
///
void* q_vcandlestickmodelmapper_qbase_metacast(void* self, const char* param1);

/// @param self QVCandlestickModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_vcandlestickmodelmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func(QVCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_vcandlestickmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVCandlestickModelMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_vcandlestickmodelmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_vcandlestickmodelmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
///
/// @param self QVCandlestickModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_vcandlestickmodelmapper_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
///
/// Allows for overriding the related default method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_vcandlestickmodelmapper_on_orientation(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#orientation)
///
/// Base class method implementation
///
/// @param self QVCandlestickModelMapper*
///
/// @return enum Qt__Orientation
///
int32_t q_vcandlestickmodelmapper_qbase_orientation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setTimestampRow)
///
/// @param self QVCandlestickModelMapper*
/// @param timestampRow int
///
void q_vcandlestickmodelmapper_set_timestamp_row(void* self, int timestampRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRow)
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_timestamp_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setOpenRow)
///
/// @param self QVCandlestickModelMapper*
/// @param openRow int
///
void q_vcandlestickmodelmapper_set_open_row(void* self, int openRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRow)
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_open_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setHighRow)
///
/// @param self QVCandlestickModelMapper*
/// @param highRow int
///
void q_vcandlestickmodelmapper_set_high_row(void* self, int highRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRow)
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_high_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLowRow)
///
/// @param self QVCandlestickModelMapper*
/// @param lowRow int
///
void q_vcandlestickmodelmapper_set_low_row(void* self, int lowRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRow)
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_low_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setCloseRow)
///
/// @param self QVCandlestickModelMapper*
/// @param closeRow int
///
void q_vcandlestickmodelmapper_set_close_row(void* self, int closeRow);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRow)
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_close_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setFirstSetColumn)
///
/// @param self QVCandlestickModelMapper*
/// @param firstSetColumn int
///
void q_vcandlestickmodelmapper_set_first_set_column(void* self, int firstSetColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumn)
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_first_set_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#setLastSetColumn)
///
/// @param self QVCandlestickModelMapper*
/// @param lastSetColumn int
///
void q_vcandlestickmodelmapper_set_last_set_column(void* self, int lastSetColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumn)
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_last_set_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_timestamp_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#timestampRowChanged)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_timestamp_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_open_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#openRowChanged)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_open_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_high_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#highRowChanged)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_high_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_low_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lowRowChanged)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_low_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_close_row_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#closeRowChanged)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_close_row_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_first_set_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#firstSetColumnChanged)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_first_set_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_last_set_column_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#lastSetColumnChanged)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_last_set_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_vcandlestickmodelmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_vcandlestickmodelmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
///
/// @param self QVCandlestickModelMapper*
/// @param model QAbstractItemModel*
///
void q_vcandlestickmodelmapper_set_model(void* self, void* model);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
///
/// @param self QVCandlestickModelMapper*
///
QAbstractItemModel* q_vcandlestickmodelmapper_model(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
///
/// @param self QVCandlestickModelMapper*
/// @param series QCandlestickSeries*
///
void q_vcandlestickmodelmapper_set_series(void* self, void* series);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
///
/// @param self QVCandlestickModelMapper*
///
QCandlestickSeries* q_vcandlestickmodelmapper_series(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_model_replaced(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_model_replaced(void* self, void (*callback)(void*));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_series_replaced(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_series_replaced(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVCandlestickModelMapper*
///
const char* q_vcandlestickmodelmapper_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVCandlestickModelMapper*
/// @param name char*
///
void q_vcandlestickmodelmapper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QVCandlestickModelMapper*
///
bool q_vcandlestickmodelmapper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QVCandlestickModelMapper*
///
bool q_vcandlestickmodelmapper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QVCandlestickModelMapper*
///
bool q_vcandlestickmodelmapper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QVCandlestickModelMapper*
///
bool q_vcandlestickmodelmapper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVCandlestickModelMapper*
/// @param b bool
///
bool q_vcandlestickmodelmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QVCandlestickModelMapper*
///
QThread* q_vcandlestickmodelmapper_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVCandlestickModelMapper*
/// @param thread QThread*
///
bool q_vcandlestickmodelmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVCandlestickModelMapper*
/// @param interval int
///
int32_t q_vcandlestickmodelmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVCandlestickModelMapper*
/// @param time int64_t of nanoseconds
///
int32_t q_vcandlestickmodelmapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVCandlestickModelMapper*
/// @param id int
///
void q_vcandlestickmodelmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVCandlestickModelMapper*
/// @param id enum Qt__TimerId
///
void q_vcandlestickmodelmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QVCandlestickModelMapper*
///
/// @return libqt_list of QObject*
///
libqt_list q_vcandlestickmodelmapper_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVCandlestickModelMapper*
/// @param parent QObject*
///
void q_vcandlestickmodelmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVCandlestickModelMapper*
/// @param filterObj QObject*
///
void q_vcandlestickmodelmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVCandlestickModelMapper*
/// @param obj QObject*
///
void q_vcandlestickmodelmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_vcandlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVCandlestickModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_vcandlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_vcandlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_vcandlestickmodelmapper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVCandlestickModelMapper*
/// @param name const char*
/// @param value QVariant*
///
bool q_vcandlestickmodelmapper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QVCandlestickModelMapper*
/// @param name const char*
///
QVariant* q_vcandlestickmodelmapper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QVCandlestickModelMapper*
///
const char** q_vcandlestickmodelmapper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVCandlestickModelMapper*
///
QBindingStorage* q_vcandlestickmodelmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVCandlestickModelMapper*
///
const QBindingStorage* q_vcandlestickmodelmapper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self)
///
void q_vcandlestickmodelmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QVCandlestickModelMapper*
///
QObject* q_vcandlestickmodelmapper_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QVCandlestickModelMapper*
/// @param classname const char*
///
bool q_vcandlestickmodelmapper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVCandlestickModelMapper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_vcandlestickmodelmapper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVCandlestickModelMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_vcandlestickmodelmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVCandlestickModelMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_vcandlestickmodelmapper_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_vcandlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVCandlestickModelMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_vcandlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVCandlestickModelMapper*
/// @param param1 QObject*
///
void q_vcandlestickmodelmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, QObject* param1)
///
void q_vcandlestickmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param event QEvent*
///
bool q_vcandlestickmodelmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param event QEvent*
///
bool q_vcandlestickmodelmapper_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback bool func(QVCandlestickModelMapper* self, QEvent* event)
///
void q_vcandlestickmodelmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_vcandlestickmodelmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_vcandlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback bool func(QVCandlestickModelMapper* self, QObject* watched, QEvent* event)
///
void q_vcandlestickmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param event QTimerEvent*
///
void q_vcandlestickmodelmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param event QTimerEvent*
///
void q_vcandlestickmodelmapper_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, QTimerEvent* event)
///
void q_vcandlestickmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param event QChildEvent*
///
void q_vcandlestickmodelmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param event QChildEvent*
///
void q_vcandlestickmodelmapper_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, QChildEvent* event)
///
void q_vcandlestickmodelmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param event QEvent*
///
void q_vcandlestickmodelmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param event QEvent*
///
void q_vcandlestickmodelmapper_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, QEvent* event)
///
void q_vcandlestickmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_vcandlestickmodelmapper_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_vcandlestickmodelmapper_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, QMetaMethod* signal)
///
void q_vcandlestickmodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_vcandlestickmodelmapper_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param signal QMetaMethod*
///
void q_vcandlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, QMetaMethod* signal)
///
void q_vcandlestickmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param timestamp int
///
void q_vcandlestickmodelmapper_set_timestamp(void* self, int timestamp);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param timestamp int
///
void q_vcandlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, int timestamp)
///
void q_vcandlestickmodelmapper_on_set_timestamp(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_timestamp(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_qbase_timestamp(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_vcandlestickmodelmapper_on_timestamp(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param open int
///
void q_vcandlestickmodelmapper_set_open(void* self, int open);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param open int
///
void q_vcandlestickmodelmapper_qbase_set_open(void* self, int open);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, int open)
///
void q_vcandlestickmodelmapper_on_set_open(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_open(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_qbase_open(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_vcandlestickmodelmapper_on_open(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param high int
///
void q_vcandlestickmodelmapper_set_high(void* self, int high);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param high int
///
void q_vcandlestickmodelmapper_qbase_set_high(void* self, int high);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, int high)
///
void q_vcandlestickmodelmapper_on_set_high(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_high(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_qbase_high(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_vcandlestickmodelmapper_on_high(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param low int
///
void q_vcandlestickmodelmapper_set_low(void* self, int low);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param low int
///
void q_vcandlestickmodelmapper_qbase_set_low(void* self, int low);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, int low)
///
void q_vcandlestickmodelmapper_on_set_low(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_low(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_qbase_low(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_vcandlestickmodelmapper_on_low(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param close int
///
void q_vcandlestickmodelmapper_set_close(void* self, int close);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param close int
///
void q_vcandlestickmodelmapper_qbase_set_close(void* self, int close);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, int close)
///
void q_vcandlestickmodelmapper_on_set_close(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_close(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_qbase_close(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_vcandlestickmodelmapper_on_close(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param firstSetSection int
///
void q_vcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param firstSetSection int
///
void q_vcandlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, int firstSetSection)
///
void q_vcandlestickmodelmapper_on_set_first_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_first_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_qbase_first_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_vcandlestickmodelmapper_on_first_set_section(void* self, int32_t (*callback)());

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param lastSetSection int
///
void q_vcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param lastSetSection int
///
void q_vcandlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, int lastSetSection)
///
void q_vcandlestickmodelmapper_on_set_last_set_section(void* self, void (*callback)(void*, int));

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_last_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_qbase_last_set_section(void* self);

/// Inherited from QCandlestickModelMapper
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_vcandlestickmodelmapper_on_last_set_section(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
QObject* q_vcandlestickmodelmapper_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
QObject* q_vcandlestickmodelmapper_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback QObject* func()
///
void q_vcandlestickmodelmapper_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
///
int32_t q_vcandlestickmodelmapper_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func()
///
void q_vcandlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param signal const char*
///
int32_t q_vcandlestickmodelmapper_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param signal const char*
///
int32_t q_vcandlestickmodelmapper_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback int32_t func(QVCandlestickModelMapper* self, const char* signal)
///
void q_vcandlestickmodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param signal QMetaMethod*
///
bool q_vcandlestickmodelmapper_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param signal QMetaMethod*
///
bool q_vcandlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVCandlestickModelMapper*
/// @param callback bool func(QVCandlestickModelMapper* self, QMetaMethod* signal)
///
void q_vcandlestickmodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVCandlestickModelMapper*
/// @param callback void func(QVCandlestickModelMapper* self, const char* objectName)
///
void q_vcandlestickmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvcandlestickmodelmapper-qtcharts.html#dtor.QVCandlestickModelMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QVCandlestickModelMapper*
///
void q_vcandlestickmodelmapper_delete(void* self);

#endif
