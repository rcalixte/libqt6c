#pragma once
#ifndef MULTIMEDIA_LIBQAUDIOBUFFEROUTPUT_H
#define MULTIMEDIA_LIBQAUDIOBUFFEROUTPUT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobufferoutput.html)

/// q_audiobufferoutput_new constructs a new QAudioBufferOutput object.
///
QAudioBufferOutput* q_audiobufferoutput_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobufferoutput.html)

/// q_audiobufferoutput_new2 constructs a new QAudioBufferOutput object.
///
/// @param format QAudioFormat*
///
QAudioBufferOutput* q_audiobufferoutput_new2(const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobufferoutput.html)

/// q_audiobufferoutput_new3 constructs a new QAudioBufferOutput object.
///
/// @param parent QObject*
///
QAudioBufferOutput* q_audiobufferoutput_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobufferoutput.html)

/// q_audiobufferoutput_new4 constructs a new QAudioBufferOutput object.
///
/// @param format QAudioFormat*
/// @param parent QObject*
///
QAudioBufferOutput* q_audiobufferoutput_new4(const void* format, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QAudioBufferOutput*
///
const QMetaObject* q_audiobufferoutput_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QAudioBufferOutput*
/// @param callback const QMetaObject* func(const QAudioBufferOutput* self)
///
void q_audiobufferoutput_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QAudioBufferOutput*
///
const QMetaObject* q_audiobufferoutput_super_meta_object(const void* self);

/// @param self QAudioBufferOutput*
/// @param param1 const char*
///
void* q_audiobufferoutput_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAudioBufferOutput*
/// @param callback void* func(QAudioBufferOutput* self, const char* param1)
///
void q_audiobufferoutput_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAudioBufferOutput*
/// @param param1 const char*
///
void* q_audiobufferoutput_super_metacast(void* self, const char* param1);

/// @param self QAudioBufferOutput*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audiobufferoutput_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAudioBufferOutput*
/// @param callback int32_t func(QAudioBufferOutput* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_audiobufferoutput_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAudioBufferOutput*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audiobufferoutput_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_audiobufferoutput_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobufferoutput.html#format)
///
/// @param self const QAudioBufferOutput*
///
QAudioFormat* q_audiobufferoutput_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobufferoutput.html#audioBufferReceived)
///
/// @param self QAudioBufferOutput*
/// @param buffer QAudioBuffer*
///
void q_audiobufferoutput_audio_buffer_received(void* self, const void* buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobufferoutput.html#audioBufferReceived)
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QAudioBuffer* buffer)
///
void q_audiobufferoutput_on_audio_buffer_received(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_audiobufferoutput_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_audiobufferoutput_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAudioBufferOutput*
///
const char* q_audiobufferoutput_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAudioBufferOutput*
/// @param name const char*
///
void q_audiobufferoutput_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAudioBufferOutput*
///
bool q_audiobufferoutput_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAudioBufferOutput*
///
bool q_audiobufferoutput_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAudioBufferOutput*
///
bool q_audiobufferoutput_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAudioBufferOutput*
///
bool q_audiobufferoutput_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAudioBufferOutput*
/// @param b bool
///
bool q_audiobufferoutput_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QAudioBufferOutput*
///
QThread* q_audiobufferoutput_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioBufferOutput*
/// @param thread QThread*
///
bool q_audiobufferoutput_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioBufferOutput*
/// @param interval int
///
int32_t q_audiobufferoutput_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioBufferOutput*
/// @param time int64_t of nanoseconds
///
int32_t q_audiobufferoutput_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioBufferOutput*
/// @param id int
///
void q_audiobufferoutput_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioBufferOutput*
/// @param id enum Qt__TimerId
///
void q_audiobufferoutput_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QAudioBufferOutput*
///
/// @return libqt_list of QObject*
///
libqt_list q_audiobufferoutput_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAudioBufferOutput*
/// @param parent QObject*
///
void q_audiobufferoutput_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAudioBufferOutput*
/// @param filterObj QObject*
///
void q_audiobufferoutput_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAudioBufferOutput*
/// @param obj QObject*
///
void q_audiobufferoutput_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_audiobufferoutput_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_audiobufferoutput_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAudioBufferOutput*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_audiobufferoutput_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_audiobufferoutput_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_audiobufferoutput_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioBufferOutput*
///
bool q_audiobufferoutput_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioBufferOutput*
/// @param receiver QObject*
///
bool q_audiobufferoutput_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_audiobufferoutput_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAudioBufferOutput*
///
void q_audiobufferoutput_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAudioBufferOutput*
///
void q_audiobufferoutput_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAudioBufferOutput*
/// @param name const char*
/// @param value QVariant*
///
bool q_audiobufferoutput_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAudioBufferOutput*
/// @param name const char*
///
QVariant* q_audiobufferoutput_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAudioBufferOutput*
///
const char** q_audiobufferoutput_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioBufferOutput*
///
QBindingStorage* q_audiobufferoutput_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QAudioBufferOutput*
///
const QBindingStorage* q_audiobufferoutput_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioBufferOutput*
///
void q_audiobufferoutput_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self)
///
void q_audiobufferoutput_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QAudioBufferOutput*
///
QObject* q_audiobufferoutput_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAudioBufferOutput*
/// @param classname const char*
///
bool q_audiobufferoutput_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAudioBufferOutput*
///
void q_audiobufferoutput_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioBufferOutput*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_audiobufferoutput_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioBufferOutput*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_audiobufferoutput_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_audiobufferoutput_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_audiobufferoutput_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAudioBufferOutput*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_audiobufferoutput_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioBufferOutput*
/// @param signal const char*
///
bool q_audiobufferoutput_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioBufferOutput*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_audiobufferoutput_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioBufferOutput*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_audiobufferoutput_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioBufferOutput*
/// @param receiver QObject*
/// @param member const char*
///
bool q_audiobufferoutput_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioBufferOutput*
/// @param param1 QObject*
///
void q_audiobufferoutput_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QObject* param1)
///
void q_audiobufferoutput_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QEvent*
///
bool q_audiobufferoutput_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QEvent*
///
bool q_audiobufferoutput_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback bool func(QAudioBufferOutput* self, QEvent* event)
///
void q_audiobufferoutput_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audiobufferoutput_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audiobufferoutput_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback bool func(QAudioBufferOutput* self, QObject* watched, QEvent* event)
///
void q_audiobufferoutput_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QTimerEvent*
///
void q_audiobufferoutput_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QTimerEvent*
///
void q_audiobufferoutput_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QTimerEvent* event)
///
void q_audiobufferoutput_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QChildEvent*
///
void q_audiobufferoutput_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QChildEvent*
///
void q_audiobufferoutput_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QChildEvent* event)
///
void q_audiobufferoutput_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QEvent*
///
void q_audiobufferoutput_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QEvent*
///
void q_audiobufferoutput_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QEvent* event)
///
void q_audiobufferoutput_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
///
void q_audiobufferoutput_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
///
void q_audiobufferoutput_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QMetaMethod* signal)
///
void q_audiobufferoutput_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
///
void q_audiobufferoutput_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
///
void q_audiobufferoutput_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QMetaMethod* signal)
///
void q_audiobufferoutput_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAudioBufferOutput*
///
QObject* q_audiobufferoutput_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAudioBufferOutput*
///
QObject* q_audiobufferoutput_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAudioBufferOutput*
/// @param callback QObject* func(QAudioBufferOutput* self)
///
void q_audiobufferoutput_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAudioBufferOutput*
///
int32_t q_audiobufferoutput_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAudioBufferOutput*
///
int32_t q_audiobufferoutput_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAudioBufferOutput*
/// @param callback int32_t func(QAudioBufferOutput* self)
///
void q_audiobufferoutput_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAudioBufferOutput*
/// @param signal const char*
///
int32_t q_audiobufferoutput_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAudioBufferOutput*
/// @param signal const char*
///
int32_t q_audiobufferoutput_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAudioBufferOutput*
/// @param callback int32_t func(QAudioBufferOutput* self, const char* signal)
///
void q_audiobufferoutput_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAudioBufferOutput*
/// @param signal QMetaMethod*
///
bool q_audiobufferoutput_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAudioBufferOutput*
/// @param signal QMetaMethod*
///
bool q_audiobufferoutput_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAudioBufferOutput*
/// @param callback bool func(QAudioBufferOutput* self, QMetaMethod* signal)
///
void q_audiobufferoutput_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, const char* objectName)
///
void q_audiobufferoutput_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiobufferoutput.html#dtor.QAudioBufferOutput)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioBufferOutput*
///
void q_audiobufferoutput_delete(void* self);

#endif
