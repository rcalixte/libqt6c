#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQAUDIOBUFFEROUTPUT_H
#define SRC_MULTIMEDIA_QT6C_LIBQAUDIOBUFFEROUTPUT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudiobufferoutput.html

/// q_audiobufferoutput_new constructs a new QAudioBufferOutput object.
///
QAudioBufferOutput* q_audiobufferoutput_new();

/// q_audiobufferoutput_new2 constructs a new QAudioBufferOutput object.
///
/// @param format QAudioFormat*
QAudioBufferOutput* q_audiobufferoutput_new2(void* format);

/// q_audiobufferoutput_new3 constructs a new QAudioBufferOutput object.
///
/// @param parent QObject*
QAudioBufferOutput* q_audiobufferoutput_new3(void* parent);

/// q_audiobufferoutput_new4 constructs a new QAudioBufferOutput object.
///
/// @param format QAudioFormat*
/// @param parent QObject*
QAudioBufferOutput* q_audiobufferoutput_new4(void* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAudioBufferOutput*
const QMetaObject* q_audiobufferoutput_meta_object(void* self);

/// @param self QAudioBufferOutput*
/// @param param1 const char*
void* q_audiobufferoutput_metacast(void* self, const char* param1);

/// @param self QAudioBufferOutput*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_audiobufferoutput_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAudioBufferOutput*
/// @param callback int32_t func(QAudioBufferOutput* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_audiobufferoutput_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAudioBufferOutput*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_audiobufferoutput_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_audiobufferoutput_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferoutput.html#format)
///
/// @param self QAudioBufferOutput*
QAudioFormat* q_audiobufferoutput_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferoutput.html#audioBufferReceived)
///
/// @param self QAudioBufferOutput*
/// @param buffer QAudioBuffer*
void q_audiobufferoutput_audio_buffer_received(void* self, void* buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferoutput.html#audioBufferReceived)
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QAudioBuffer* buffer)
void q_audiobufferoutput_on_audio_buffer_received(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_audiobufferoutput_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_audiobufferoutput_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAudioBufferOutput*
const char* q_audiobufferoutput_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAudioBufferOutput*
/// @param name char*
void q_audiobufferoutput_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAudioBufferOutput*
bool q_audiobufferoutput_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAudioBufferOutput*
bool q_audiobufferoutput_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAudioBufferOutput*
bool q_audiobufferoutput_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAudioBufferOutput*
bool q_audiobufferoutput_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAudioBufferOutput*
/// @param b bool
bool q_audiobufferoutput_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAudioBufferOutput*
QThread* q_audiobufferoutput_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioBufferOutput*
/// @param thread QThread*
bool q_audiobufferoutput_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioBufferOutput*
/// @param interval int
int32_t q_audiobufferoutput_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioBufferOutput*
/// @param id int
void q_audiobufferoutput_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioBufferOutput*
/// @param id enum Qt__TimerId
void q_audiobufferoutput_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAudioBufferOutput*
libqt_list /* of QObject* */ q_audiobufferoutput_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAudioBufferOutput*
/// @param parent QObject*
void q_audiobufferoutput_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAudioBufferOutput*
/// @param filterObj QObject*
void q_audiobufferoutput_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAudioBufferOutput*
/// @param obj QObject*
void q_audiobufferoutput_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_audiobufferoutput_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioBufferOutput*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_audiobufferoutput_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_audiobufferoutput_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_audiobufferoutput_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAudioBufferOutput*
void q_audiobufferoutput_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAudioBufferOutput*
void q_audiobufferoutput_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAudioBufferOutput*
/// @param name const char*
/// @param value QVariant*
bool q_audiobufferoutput_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAudioBufferOutput*
/// @param name const char*
QVariant* q_audiobufferoutput_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAudioBufferOutput*
const char** q_audiobufferoutput_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioBufferOutput*
QBindingStorage* q_audiobufferoutput_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioBufferOutput*
const QBindingStorage* q_audiobufferoutput_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioBufferOutput*
void q_audiobufferoutput_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self)
void q_audiobufferoutput_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAudioBufferOutput*
QObject* q_audiobufferoutput_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAudioBufferOutput*
/// @param classname const char*
bool q_audiobufferoutput_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAudioBufferOutput*
void q_audiobufferoutput_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioBufferOutput*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_audiobufferoutput_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioBufferOutput*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_audiobufferoutput_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_audiobufferoutput_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioBufferOutput*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_audiobufferoutput_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioBufferOutput*
/// @param param1 QObject*
void q_audiobufferoutput_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QObject* param1)
void q_audiobufferoutput_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QEvent*
bool q_audiobufferoutput_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QEvent*
bool q_audiobufferoutput_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback bool func(QAudioBufferOutput* self, QEvent* event)
void q_audiobufferoutput_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param watched QObject*
/// @param event QEvent*
bool q_audiobufferoutput_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param watched QObject*
/// @param event QEvent*
bool q_audiobufferoutput_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback bool func(QAudioBufferOutput* self, QObject* watched, QEvent* event)
void q_audiobufferoutput_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QTimerEvent*
void q_audiobufferoutput_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QTimerEvent*
void q_audiobufferoutput_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QTimerEvent* event)
void q_audiobufferoutput_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QChildEvent*
void q_audiobufferoutput_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QChildEvent*
void q_audiobufferoutput_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QChildEvent* event)
void q_audiobufferoutput_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QEvent*
void q_audiobufferoutput_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param event QEvent*
void q_audiobufferoutput_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QEvent* event)
void q_audiobufferoutput_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
void q_audiobufferoutput_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
void q_audiobufferoutput_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QMetaMethod* signal)
void q_audiobufferoutput_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
void q_audiobufferoutput_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
void q_audiobufferoutput_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, QMetaMethod* signal)
void q_audiobufferoutput_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
QObject* q_audiobufferoutput_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
QObject* q_audiobufferoutput_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback QObject* func()
void q_audiobufferoutput_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
int32_t q_audiobufferoutput_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
int32_t q_audiobufferoutput_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback int32_t func()
void q_audiobufferoutput_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal const char*
int32_t q_audiobufferoutput_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal const char*
int32_t q_audiobufferoutput_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback int32_t func(QAudioBufferOutput* self, const char* signal)
void q_audiobufferoutput_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
bool q_audiobufferoutput_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param signal QMetaMethod*
bool q_audiobufferoutput_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioBufferOutput*
/// @param callback bool func(QAudioBufferOutput* self, QMetaMethod* signal)
void q_audiobufferoutput_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAudioBufferOutput*
/// @param callback void func(QAudioBufferOutput* self, const char* objectName)
void q_audiobufferoutput_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferoutput.html#dtor.QAudioBufferOutput)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioBufferOutput*
void q_audiobufferoutput_delete(void* self);

#endif
