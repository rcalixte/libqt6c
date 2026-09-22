#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDTRACE_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDTRACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html)

/// q_virtualkeyboardtrace_new constructs a new QVirtualKeyboardTrace object.
///
QVirtualKeyboardTrace* q_virtualkeyboardtrace_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html)

/// q_virtualkeyboardtrace_new2 constructs a new QVirtualKeyboardTrace object.
///
/// @param parent QObject*
///
QVirtualKeyboardTrace* q_virtualkeyboardtrace_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QVirtualKeyboardTrace*
///
const QMetaObject* q_virtualkeyboardtrace_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback const QMetaObject* func()
///
void q_virtualkeyboardtrace_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardTrace*
///
const QMetaObject* q_virtualkeyboardtrace_super_meta_object(void* self);

/// @param self QVirtualKeyboardTrace*
/// @param param1 const char*
///
void* q_virtualkeyboardtrace_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void* func(QVirtualKeyboardTrace* self, const char* param1)
///
void q_virtualkeyboardtrace_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QVirtualKeyboardTrace*
/// @param param1 const char*
///
void* q_virtualkeyboardtrace_super_metacast(void* self, const char* param1);

/// @param self QVirtualKeyboardTrace*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardtrace_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback int32_t func(QVirtualKeyboardTrace* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_virtualkeyboardtrace_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVirtualKeyboardTrace*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardtrace_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_virtualkeyboardtrace_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#traceId)
///
/// @param self QVirtualKeyboardTrace*
///
int32_t q_virtualkeyboardtrace_trace_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setTraceId)
///
/// @param self QVirtualKeyboardTrace*
/// @param id int
///
void q_virtualkeyboardtrace_set_trace_id(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channels)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QVirtualKeyboardTrace*
///
const char** q_virtualkeyboardtrace_channels(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setChannels)
///
/// @param self QVirtualKeyboardTrace*
/// @param channels const char**
///
void q_virtualkeyboardtrace_set_channels(void* self, const char* channels[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#length)
///
/// @param self QVirtualKeyboardTrace*
///
int32_t q_virtualkeyboardtrace_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#points)
///
/// @param self QVirtualKeyboardTrace*
///
/// @return libqt_list of QVariant*
///
libqt_list q_virtualkeyboardtrace_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#addPoint)
///
/// @param self QVirtualKeyboardTrace*
/// @param point QPointF*
///
int32_t q_virtualkeyboardtrace_add_point(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setChannelData)
///
/// @param self QVirtualKeyboardTrace*
/// @param channel const char*
/// @param index int
/// @param data QVariant*
///
void q_virtualkeyboardtrace_set_channel_data(void* self, const char* channel, int index, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelData)
///
/// @param self QVirtualKeyboardTrace*
/// @param channel const char*
///
/// @return libqt_list of QVariant*
///
libqt_list q_virtualkeyboardtrace_channel_data(void* self, const char* channel);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#isFinal)
///
/// @param self QVirtualKeyboardTrace*
///
bool q_virtualkeyboardtrace_is_final(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setFinal)
///
/// @param self QVirtualKeyboardTrace*
/// @param final bool
///
void q_virtualkeyboardtrace_set_final(void* self, bool final);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#isCanceled)
///
/// @param self QVirtualKeyboardTrace*
///
bool q_virtualkeyboardtrace_is_canceled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setCanceled)
///
/// @param self QVirtualKeyboardTrace*
/// @param canceled bool
///
void q_virtualkeyboardtrace_set_canceled(void* self, bool canceled);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#opacity)
///
/// @param self QVirtualKeyboardTrace*
///
double q_virtualkeyboardtrace_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#setOpacity)
///
/// @param self QVirtualKeyboardTrace*
/// @param opacity double
///
void q_virtualkeyboardtrace_set_opacity(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#startHideTimer)
///
/// @param self QVirtualKeyboardTrace*
/// @param delayMs int
///
void q_virtualkeyboardtrace_start_hide_timer(void* self, int delayMs);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#timerEvent)
///
/// @param self QVirtualKeyboardTrace*
/// @param event QTimerEvent*
///
void q_virtualkeyboardtrace_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, QTimerEvent* event)
///
void q_virtualkeyboardtrace_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QVirtualKeyboardTrace*
/// @param event QTimerEvent*
///
void q_virtualkeyboardtrace_super_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#traceIdChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param traceId int
///
void q_virtualkeyboardtrace_trace_id_changed(void* self, int traceId);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#traceIdChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, int traceId)
///
void q_virtualkeyboardtrace_on_trace_id_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelsChanged)
///
/// @param self QVirtualKeyboardTrace*
///
void q_virtualkeyboardtrace_channels_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelsChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self)
///
void q_virtualkeyboardtrace_on_channels_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#lengthChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param length int
///
void q_virtualkeyboardtrace_length_changed(void* self, int length);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#lengthChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, int length)
///
void q_virtualkeyboardtrace_on_length_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#finalChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param isFinal bool
///
void q_virtualkeyboardtrace_final_changed(void* self, bool isFinal);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#finalChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, bool isFinal)
///
void q_virtualkeyboardtrace_on_final_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#canceledChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param isCanceled bool
///
void q_virtualkeyboardtrace_canceled_changed(void* self, bool isCanceled);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#canceledChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, bool isCanceled)
///
void q_virtualkeyboardtrace_on_canceled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#opacityChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param opacity double
///
void q_virtualkeyboardtrace_opacity_changed(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#opacityChanged)
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, double opacity)
///
void q_virtualkeyboardtrace_on_opacity_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_virtualkeyboardtrace_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_virtualkeyboardtrace_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#points)
///
/// @param self QVirtualKeyboardTrace*
/// @param pos int
///
/// @return libqt_list of QVariant*
///
libqt_list q_virtualkeyboardtrace_points1(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#points)
///
/// @param self QVirtualKeyboardTrace*
/// @param pos int
/// @param count int
///
/// @return libqt_list of QVariant*
///
libqt_list q_virtualkeyboardtrace_points2(void* self, int pos, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelData)
///
/// @param self QVirtualKeyboardTrace*
/// @param channel const char*
/// @param pos int
///
/// @return libqt_list of QVariant*
///
libqt_list q_virtualkeyboardtrace_channel_data2(void* self, const char* channel, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#channelData)
///
/// @param self QVirtualKeyboardTrace*
/// @param channel const char*
/// @param pos int
/// @param count int
///
/// @return libqt_list of QVariant*
///
libqt_list q_virtualkeyboardtrace_channel_data3(void* self, const char* channel, int pos, int count);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVirtualKeyboardTrace*
///
const char* q_virtualkeyboardtrace_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVirtualKeyboardTrace*
/// @param name const char*
///
void q_virtualkeyboardtrace_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QVirtualKeyboardTrace*
///
bool q_virtualkeyboardtrace_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QVirtualKeyboardTrace*
///
bool q_virtualkeyboardtrace_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QVirtualKeyboardTrace*
///
bool q_virtualkeyboardtrace_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QVirtualKeyboardTrace*
///
bool q_virtualkeyboardtrace_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVirtualKeyboardTrace*
/// @param b bool
///
bool q_virtualkeyboardtrace_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QVirtualKeyboardTrace*
///
QThread* q_virtualkeyboardtrace_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVirtualKeyboardTrace*
/// @param thread QThread*
///
bool q_virtualkeyboardtrace_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardTrace*
/// @param interval int
///
int32_t q_virtualkeyboardtrace_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardTrace*
/// @param time int64_t of nanoseconds
///
int32_t q_virtualkeyboardtrace_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardTrace*
/// @param id int
///
void q_virtualkeyboardtrace_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardTrace*
/// @param id enum Qt__TimerId
///
void q_virtualkeyboardtrace_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QVirtualKeyboardTrace*
///
/// @return libqt_list of QObject*
///
libqt_list q_virtualkeyboardtrace_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVirtualKeyboardTrace*
/// @param parent QObject*
///
void q_virtualkeyboardtrace_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVirtualKeyboardTrace*
/// @param filterObj QObject*
///
void q_virtualkeyboardtrace_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVirtualKeyboardTrace*
/// @param obj QObject*
///
void q_virtualkeyboardtrace_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardtrace_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_virtualkeyboardtrace_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVirtualKeyboardTrace*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardtrace_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardtrace_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_virtualkeyboardtrace_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardTrace*
///
bool q_virtualkeyboardtrace_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardTrace*
/// @param receiver QObject*
///
bool q_virtualkeyboardtrace_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_virtualkeyboardtrace_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QVirtualKeyboardTrace*
///
void q_virtualkeyboardtrace_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QVirtualKeyboardTrace*
///
void q_virtualkeyboardtrace_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVirtualKeyboardTrace*
/// @param name const char*
/// @param value QVariant*
///
bool q_virtualkeyboardtrace_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QVirtualKeyboardTrace*
/// @param name const char*
///
QVariant* q_virtualkeyboardtrace_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QVirtualKeyboardTrace*
///
const char** q_virtualkeyboardtrace_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardTrace*
///
QBindingStorage* q_virtualkeyboardtrace_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardTrace*
///
const QBindingStorage* q_virtualkeyboardtrace_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardTrace*
///
void q_virtualkeyboardtrace_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self)
///
void q_virtualkeyboardtrace_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QVirtualKeyboardTrace*
///
QObject* q_virtualkeyboardtrace_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QVirtualKeyboardTrace*
/// @param classname const char*
///
bool q_virtualkeyboardtrace_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVirtualKeyboardTrace*
///
void q_virtualkeyboardtrace_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardTrace*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardtrace_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardTrace*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardtrace_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_virtualkeyboardtrace_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_virtualkeyboardtrace_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QVirtualKeyboardTrace*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_virtualkeyboardtrace_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardTrace*
/// @param signal const char*
///
bool q_virtualkeyboardtrace_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardTrace*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_virtualkeyboardtrace_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardTrace*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardtrace_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QVirtualKeyboardTrace*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardtrace_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardTrace*
/// @param param1 QObject*
///
void q_virtualkeyboardtrace_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, QObject* param1)
///
void q_virtualkeyboardtrace_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param event QEvent*
///
bool q_virtualkeyboardtrace_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param event QEvent*
///
bool q_virtualkeyboardtrace_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback bool func(QVirtualKeyboardTrace* self, QEvent* event)
///
void q_virtualkeyboardtrace_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardtrace_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardtrace_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback bool func(QVirtualKeyboardTrace* self, QObject* watched, QEvent* event)
///
void q_virtualkeyboardtrace_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param event QChildEvent*
///
void q_virtualkeyboardtrace_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param event QChildEvent*
///
void q_virtualkeyboardtrace_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, QChildEvent* event)
///
void q_virtualkeyboardtrace_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param event QEvent*
///
void q_virtualkeyboardtrace_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param event QEvent*
///
void q_virtualkeyboardtrace_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, QEvent* event)
///
void q_virtualkeyboardtrace_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardtrace_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardtrace_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, QMetaMethod* signal)
///
void q_virtualkeyboardtrace_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardtrace_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardtrace_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, QMetaMethod* signal)
///
void q_virtualkeyboardtrace_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
///
QObject* q_virtualkeyboardtrace_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
///
QObject* q_virtualkeyboardtrace_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback QObject* func()
///
void q_virtualkeyboardtrace_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
///
int32_t q_virtualkeyboardtrace_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
///
int32_t q_virtualkeyboardtrace_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback int32_t func()
///
void q_virtualkeyboardtrace_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param signal const char*
///
int32_t q_virtualkeyboardtrace_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param signal const char*
///
int32_t q_virtualkeyboardtrace_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback int32_t func(QVirtualKeyboardTrace* self, const char* signal)
///
void q_virtualkeyboardtrace_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param signal QMetaMethod*
///
bool q_virtualkeyboardtrace_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param signal QMetaMethod*
///
bool q_virtualkeyboardtrace_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardTrace*
/// @param callback bool func(QVirtualKeyboardTrace* self, QMetaMethod* signal)
///
void q_virtualkeyboardtrace_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardTrace*
/// @param callback void func(QVirtualKeyboardTrace* self, const char* objectName)
///
void q_virtualkeyboardtrace_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardtrace.html#dtor.QVirtualKeyboardTrace)
///
/// Delete this object from C++ memory.
///
/// @param self QVirtualKeyboardTrace*
///
void q_virtualkeyboardtrace_delete(void* self);

#endif
