#pragma once
#ifndef RESTRICTED_EXTRAS_CHARTS_LIBQBOXSET_H
#define RESTRICTED_EXTRAS_CHARTS_LIBQBOXSET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html)

/// q_boxset_new constructs a new QBoxSet object.
///
QBoxSet* q_boxset_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html)

/// q_boxset_new2 constructs a new QBoxSet object.
///
/// @param le double
/// @param lq double
/// @param m double
/// @param uq double
/// @param ue double
///
QBoxSet* q_boxset_new2(double le, double lq, double m, double uq, double ue);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html)

/// q_boxset_new3 constructs a new QBoxSet object.
///
/// @param label const char*
///
QBoxSet* q_boxset_new3(const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html)

/// q_boxset_new4 constructs a new QBoxSet object.
///
/// @param label const char*
/// @param parent QObject*
///
QBoxSet* q_boxset_new4(const char* label, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html)

/// q_boxset_new5 constructs a new QBoxSet object.
///
/// @param le double
/// @param lq double
/// @param m double
/// @param uq double
/// @param ue double
/// @param label const char*
///
QBoxSet* q_boxset_new5(double le, double lq, double m, double uq, double ue, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html)

/// q_boxset_new6 constructs a new QBoxSet object.
///
/// @param le double
/// @param lq double
/// @param m double
/// @param uq double
/// @param ue double
/// @param label const char*
/// @param parent QObject*
///
QBoxSet* q_boxset_new6(double le, double lq, double m, double uq, double ue, const char* label, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QBoxSet*
///
const QMetaObject* q_boxset_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QBoxSet*
/// @param callback const QMetaObject* func(const QBoxSet* self)
///
void q_boxset_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QBoxSet*
///
const QMetaObject* q_boxset_super_meta_object(const void* self);

/// @param self QBoxSet*
/// @param param1 const char*
///
void* q_boxset_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBoxSet*
/// @param callback void* func(QBoxSet* self, const char* param1)
///
void q_boxset_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QBoxSet*
/// @param param1 const char*
///
void* q_boxset_super_metacast(void* self, const char* param1);

/// @param self QBoxSet*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_boxset_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBoxSet*
/// @param callback int32_t func(QBoxSet* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_boxset_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBoxSet*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_boxset_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_boxset_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#append)
///
/// @param self QBoxSet*
/// @param value double
///
void q_boxset_append(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#append)
///
/// @param self QBoxSet*
/// @param values libqt_list of double
///
void q_boxset_append2(void* self, libqt_list values);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#clear)
///
/// @param self QBoxSet*
///
void q_boxset_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#setLabel)
///
/// @param self QBoxSet*
/// @param label const char*
///
void q_boxset_set_label(void* self, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBoxSet*
///
const char* q_boxset_label(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#operator-lt-lt)
///
/// @param self QBoxSet*
/// @param value double*
///
QBoxSet* q_boxset_operator_shift_left(void* self, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#setValue)
///
/// @param self QBoxSet*
/// @param index int
/// @param value double
///
void q_boxset_set_value(void* self, int index, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#at)
///
/// @param self const QBoxSet*
/// @param index int
///
double q_boxset_at(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#operator-5b-5d)
///
/// @param self const QBoxSet*
/// @param index int
///
double q_boxset_operator_subscript(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#count)
///
/// @param self const QBoxSet*
///
int32_t q_boxset_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#setPen)
///
/// @param self QBoxSet*
/// @param pen QPen*
///
void q_boxset_set_pen(void* self, const void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#pen)
///
/// @param self const QBoxSet*
///
QPen* q_boxset_pen(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#setBrush)
///
/// @param self QBoxSet*
/// @param brush QBrush*
///
void q_boxset_set_brush(void* self, const void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#brush)
///
/// @param self const QBoxSet*
///
QBrush* q_boxset_brush(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#clicked)
///
/// @param self QBoxSet*
///
void q_boxset_clicked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#clicked)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self)
///
void q_boxset_on_clicked(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#hovered)
///
/// @param self QBoxSet*
/// @param status bool
///
void q_boxset_hovered(void* self, bool status);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#hovered)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self, bool status)
///
void q_boxset_on_hovered(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#pressed)
///
/// @param self QBoxSet*
///
void q_boxset_pressed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#pressed)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self)
///
void q_boxset_on_pressed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#released)
///
/// @param self QBoxSet*
///
void q_boxset_released(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#released)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self)
///
void q_boxset_on_released(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#doubleClicked)
///
/// @param self QBoxSet*
///
void q_boxset_double_clicked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#doubleClicked)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self)
///
void q_boxset_on_double_clicked(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#penChanged)
///
/// @param self QBoxSet*
///
void q_boxset_pen_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#penChanged)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self)
///
void q_boxset_on_pen_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#brushChanged)
///
/// @param self QBoxSet*
///
void q_boxset_brush_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#brushChanged)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self)
///
void q_boxset_on_brush_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#valuesChanged)
///
/// @param self QBoxSet*
///
void q_boxset_values_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#valuesChanged)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self)
///
void q_boxset_on_values_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#valueChanged)
///
/// @param self QBoxSet*
/// @param index int
///
void q_boxset_value_changed(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#valueChanged)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self, int index)
///
void q_boxset_on_value_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#cleared)
///
/// @param self QBoxSet*
///
void q_boxset_cleared(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#cleared)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self)
///
void q_boxset_on_cleared(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_boxset_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_boxset_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBoxSet*
///
const char* q_boxset_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBoxSet*
/// @param name const char*
///
void q_boxset_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QBoxSet*
///
bool q_boxset_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QBoxSet*
///
bool q_boxset_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QBoxSet*
///
bool q_boxset_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QBoxSet*
///
bool q_boxset_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBoxSet*
/// @param b bool
///
bool q_boxset_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QBoxSet*
///
QThread* q_boxset_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBoxSet*
/// @param thread QThread*
///
bool q_boxset_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxSet*
/// @param interval int
///
int32_t q_boxset_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxSet*
/// @param time int64_t of nanoseconds
///
int32_t q_boxset_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBoxSet*
/// @param id int
///
void q_boxset_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBoxSet*
/// @param id enum Qt__TimerId
///
void q_boxset_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QBoxSet*
///
/// @return libqt_list of QObject*
///
libqt_list q_boxset_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBoxSet*
/// @param parent QObject*
///
void q_boxset_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBoxSet*
/// @param filterObj QObject*
///
void q_boxset_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBoxSet*
/// @param obj QObject*
///
void q_boxset_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_boxset_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_boxset_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBoxSet*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_boxset_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_boxset_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_boxset_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBoxSet*
///
bool q_boxset_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBoxSet*
/// @param receiver QObject*
///
bool q_boxset_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_boxset_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QBoxSet*
///
void q_boxset_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QBoxSet*
///
void q_boxset_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBoxSet*
/// @param name const char*
/// @param value QVariant*
///
bool q_boxset_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QBoxSet*
/// @param name const char*
///
QVariant* q_boxset_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QBoxSet*
///
const char** q_boxset_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBoxSet*
///
QBindingStorage* q_boxset_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QBoxSet*
///
const QBindingStorage* q_boxset_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxSet*
///
void q_boxset_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self)
///
void q_boxset_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QBoxSet*
///
QObject* q_boxset_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QBoxSet*
/// @param classname const char*
///
bool q_boxset_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBoxSet*
///
void q_boxset_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxSet*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_boxset_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBoxSet*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_boxset_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_boxset_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_boxset_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBoxSet*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_boxset_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBoxSet*
/// @param signal const char*
///
bool q_boxset_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBoxSet*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_boxset_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBoxSet*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_boxset_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBoxSet*
/// @param receiver QObject*
/// @param member const char*
///
bool q_boxset_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxSet*
/// @param param1 QObject*
///
void q_boxset_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self, QObject* param1)
///
void q_boxset_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxSet*
/// @param event QEvent*
///
bool q_boxset_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxSet*
/// @param event QEvent*
///
bool q_boxset_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxSet*
/// @param callback bool func(QBoxSet* self, QEvent* event)
///
void q_boxset_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxSet*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_boxset_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxSet*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_boxset_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxSet*
/// @param callback bool func(QBoxSet* self, QObject* watched, QEvent* event)
///
void q_boxset_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxSet*
/// @param event QTimerEvent*
///
void q_boxset_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxSet*
/// @param event QTimerEvent*
///
void q_boxset_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self, QTimerEvent* event)
///
void q_boxset_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxSet*
/// @param event QChildEvent*
///
void q_boxset_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxSet*
/// @param event QChildEvent*
///
void q_boxset_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self, QChildEvent* event)
///
void q_boxset_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxSet*
/// @param event QEvent*
///
void q_boxset_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxSet*
/// @param event QEvent*
///
void q_boxset_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self, QEvent* event)
///
void q_boxset_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxSet*
/// @param signal QMetaMethod*
///
void q_boxset_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxSet*
/// @param signal QMetaMethod*
///
void q_boxset_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self, QMetaMethod* signal)
///
void q_boxset_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBoxSet*
/// @param signal QMetaMethod*
///
void q_boxset_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBoxSet*
/// @param signal QMetaMethod*
///
void q_boxset_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self, QMetaMethod* signal)
///
void q_boxset_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBoxSet*
///
QObject* q_boxset_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBoxSet*
///
QObject* q_boxset_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBoxSet*
/// @param callback QObject* func(QBoxSet* self)
///
void q_boxset_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBoxSet*
///
int32_t q_boxset_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBoxSet*
///
int32_t q_boxset_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBoxSet*
/// @param callback int32_t func(QBoxSet* self)
///
void q_boxset_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBoxSet*
/// @param signal const char*
///
int32_t q_boxset_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBoxSet*
/// @param signal const char*
///
int32_t q_boxset_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBoxSet*
/// @param callback int32_t func(QBoxSet* self, const char* signal)
///
void q_boxset_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBoxSet*
/// @param signal QMetaMethod*
///
bool q_boxset_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBoxSet*
/// @param signal QMetaMethod*
///
bool q_boxset_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBoxSet*
/// @param callback bool func(QBoxSet* self, QMetaMethod* signal)
///
void q_boxset_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBoxSet*
/// @param callback void func(QBoxSet* self, const char* objectName)
///
void q_boxset_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#dtor.QBoxSet)
///
/// Delete this object from C++ memory.
///
/// @param self QBoxSet*
///
void q_boxset_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qboxset-qtcharts.html#public-types)

typedef enum {
    QBOXSET_VALUEPOSITIONS_LOWEREXTREME = 0,
    QBOXSET_VALUEPOSITIONS_LOWERQUARTILE = 1,
    QBOXSET_VALUEPOSITIONS_MEDIAN = 2,
    QBOXSET_VALUEPOSITIONS_UPPERQUARTILE = 3,
    QBOXSET_VALUEPOSITIONS_UPPEREXTREME = 4
} QBoxSet__ValuePositions;

#endif
