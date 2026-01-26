#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCANDLESTICKSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQCANDLESTICKSET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html)

/// q_candlestickset_new constructs a new QCandlestickSet object.
///
QCandlestickSet* q_candlestickset_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html)

/// q_candlestickset_new2 constructs a new QCandlestickSet object.
///
/// @param open double
/// @param high double
/// @param low double
/// @param close double
///
QCandlestickSet* q_candlestickset_new2(double open, double high, double low, double close);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html)

/// q_candlestickset_new3 constructs a new QCandlestickSet object.
///
/// @param timestamp double
///
QCandlestickSet* q_candlestickset_new3(double timestamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html)

/// q_candlestickset_new4 constructs a new QCandlestickSet object.
///
/// @param timestamp double
/// @param parent QObject*
///
QCandlestickSet* q_candlestickset_new4(double timestamp, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html)

/// q_candlestickset_new5 constructs a new QCandlestickSet object.
///
/// @param open double
/// @param high double
/// @param low double
/// @param close double
/// @param timestamp double
///
QCandlestickSet* q_candlestickset_new5(double open, double high, double low, double close, double timestamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html)

/// q_candlestickset_new6 constructs a new QCandlestickSet object.
///
/// @param open double
/// @param high double
/// @param low double
/// @param close double
/// @param timestamp double
/// @param parent QObject*
///
QCandlestickSet* q_candlestickset_new6(double open, double high, double low, double close, double timestamp, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QCandlestickSet*
///
const QMetaObject* q_candlestickset_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QCandlestickSet*
/// @param callback const QMetaObject* func()
///
void q_candlestickset_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QCandlestickSet*
///
const QMetaObject* q_candlestickset_qbase_meta_object(void* self);

/// @param self QCandlestickSet*
/// @param param1 const char*
///
void* q_candlestickset_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QCandlestickSet*
/// @param callback void* func(QCandlestickSet* self, const char* param1)
///
void q_candlestickset_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QCandlestickSet*
/// @param param1 const char*
///
void* q_candlestickset_qbase_metacast(void* self, const char* param1);

/// @param self QCandlestickSet*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_candlestickset_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCandlestickSet*
/// @param callback int32_t func(QCandlestickSet* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_candlestickset_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCandlestickSet*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_candlestickset_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_candlestickset_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setTimestamp)
///
/// @param self QCandlestickSet*
/// @param timestamp double
///
void q_candlestickset_set_timestamp(void* self, double timestamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestamp)
///
/// @param self QCandlestickSet*
///
double q_candlestickset_timestamp(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setOpen)
///
/// @param self QCandlestickSet*
/// @param open double
///
void q_candlestickset_set_open(void* self, double open);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#open)
///
/// @param self QCandlestickSet*
///
double q_candlestickset_open(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setHigh)
///
/// @param self QCandlestickSet*
/// @param high double
///
void q_candlestickset_set_high(void* self, double high);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#high)
///
/// @param self QCandlestickSet*
///
double q_candlestickset_high(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setLow)
///
/// @param self QCandlestickSet*
/// @param low double
///
void q_candlestickset_set_low(void* self, double low);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#low)
///
/// @param self QCandlestickSet*
///
double q_candlestickset_low(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setClose)
///
/// @param self QCandlestickSet*
/// @param close double
///
void q_candlestickset_set_close(void* self, double close);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#close)
///
/// @param self QCandlestickSet*
///
double q_candlestickset_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setBrush)
///
/// @param self QCandlestickSet*
/// @param brush QBrush*
///
void q_candlestickset_set_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brush)
///
/// @param self QCandlestickSet*
///
QBrush* q_candlestickset_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setPen)
///
/// @param self QCandlestickSet*
/// @param pen QPen*
///
void q_candlestickset_set_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pen)
///
/// @param self QCandlestickSet*
///
QPen* q_candlestickset_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_clicked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_clicked(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
///
/// @param self QCandlestickSet*
/// @param status bool
///
void q_candlestickset_hovered(void* self, bool status);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self, bool status)
///
void q_candlestickset_on_hovered(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_pressed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_pressed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_released(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_released(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_double_clicked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_double_clicked(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_timestamp_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_timestamp_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_open_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_open_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_high_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_high_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_low_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_low_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_close_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_close_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_brush_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_brush_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_pen_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_pen_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_candlestickset_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_candlestickset_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCandlestickSet*
///
const char* q_candlestickset_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCandlestickSet*
/// @param name char*
///
void q_candlestickset_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QCandlestickSet*
///
bool q_candlestickset_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QCandlestickSet*
///
bool q_candlestickset_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QCandlestickSet*
///
bool q_candlestickset_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QCandlestickSet*
///
bool q_candlestickset_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCandlestickSet*
/// @param b bool
///
bool q_candlestickset_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QCandlestickSet*
///
QThread* q_candlestickset_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCandlestickSet*
/// @param thread QThread*
///
bool q_candlestickset_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickSet*
/// @param interval int
///
int32_t q_candlestickset_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickSet*
/// @param time int64_t of nanoseconds
///
int32_t q_candlestickset_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickSet*
/// @param id int
///
void q_candlestickset_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCandlestickSet*
/// @param id enum Qt__TimerId
///
void q_candlestickset_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QCandlestickSet*
///
/// @return libqt_list of QObject*
///
libqt_list q_candlestickset_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCandlestickSet*
/// @param parent QObject*
///
void q_candlestickset_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCandlestickSet*
/// @param filterObj QObject*
///
void q_candlestickset_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCandlestickSet*
/// @param obj QObject*
///
void q_candlestickset_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_candlestickset_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCandlestickSet*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_candlestickset_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_candlestickset_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_candlestickset_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCandlestickSet*
/// @param name const char*
/// @param value QVariant*
///
bool q_candlestickset_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QCandlestickSet*
/// @param name const char*
///
QVariant* q_candlestickset_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QCandlestickSet*
///
const char** q_candlestickset_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCandlestickSet*
///
QBindingStorage* q_candlestickset_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCandlestickSet*
///
const QBindingStorage* q_candlestickset_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self)
///
void q_candlestickset_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QCandlestickSet*
///
QObject* q_candlestickset_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QCandlestickSet*
/// @param classname const char*
///
bool q_candlestickset_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCandlestickSet*
///
void q_candlestickset_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCandlestickSet*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_candlestickset_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickSet*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_candlestickset_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCandlestickSet*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_candlestickset_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_candlestickset_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCandlestickSet*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_candlestickset_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickSet*
/// @param param1 QObject*
///
void q_candlestickset_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self, QObject* param1)
///
void q_candlestickset_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
/// @param event QEvent*
///
bool q_candlestickset_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param event QEvent*
///
bool q_candlestickset_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback bool func(QCandlestickSet* self, QEvent* event)
///
void q_candlestickset_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_candlestickset_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_candlestickset_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback bool func(QCandlestickSet* self, QObject* watched, QEvent* event)
///
void q_candlestickset_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
/// @param event QTimerEvent*
///
void q_candlestickset_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param event QTimerEvent*
///
void q_candlestickset_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self, QTimerEvent* event)
///
void q_candlestickset_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
/// @param event QChildEvent*
///
void q_candlestickset_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param event QChildEvent*
///
void q_candlestickset_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self, QChildEvent* event)
///
void q_candlestickset_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
/// @param event QEvent*
///
void q_candlestickset_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param event QEvent*
///
void q_candlestickset_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self, QEvent* event)
///
void q_candlestickset_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
/// @param signal QMetaMethod*
///
void q_candlestickset_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param signal QMetaMethod*
///
void q_candlestickset_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self, QMetaMethod* signal)
///
void q_candlestickset_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
/// @param signal QMetaMethod*
///
void q_candlestickset_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param signal QMetaMethod*
///
void q_candlestickset_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self, QMetaMethod* signal)
///
void q_candlestickset_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
///
QObject* q_candlestickset_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
///
QObject* q_candlestickset_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback QObject* func()
///
void q_candlestickset_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
///
int32_t q_candlestickset_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
///
int32_t q_candlestickset_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback int32_t func()
///
void q_candlestickset_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
/// @param signal const char*
///
int32_t q_candlestickset_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param signal const char*
///
int32_t q_candlestickset_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback int32_t func(QCandlestickSet* self, const char* signal)
///
void q_candlestickset_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCandlestickSet*
/// @param signal QMetaMethod*
///
bool q_candlestickset_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param signal QMetaMethod*
///
bool q_candlestickset_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCandlestickSet*
/// @param callback bool func(QCandlestickSet* self, QMetaMethod* signal)
///
void q_candlestickset_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCandlestickSet*
/// @param callback void func(QCandlestickSet* self, const char* objectName)
///
void q_candlestickset_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#dtor.QCandlestickSet)
///
/// Delete this object from C++ memory.
///
/// @param self QCandlestickSet*
///
void q_candlestickset_delete(void* self);

#endif
