#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOSINK_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOSINK_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudiosink.html

/// q_audiosink_new constructs a new QAudioSink object.
///
QAudioSink* q_audiosink_new();

/// q_audiosink_new2 constructs a new QAudioSink object.
///
/// @param audioDeviceInfo QAudioDevice*
QAudioSink* q_audiosink_new2(void* audioDeviceInfo);

/// q_audiosink_new3 constructs a new QAudioSink object.
///
/// @param format QAudioFormat*
QAudioSink* q_audiosink_new3(void* format);

/// q_audiosink_new4 constructs a new QAudioSink object.
///
/// @param format QAudioFormat*
/// @param parent QObject*
QAudioSink* q_audiosink_new4(void* format, void* parent);

/// q_audiosink_new5 constructs a new QAudioSink object.
///
/// @param audioDeviceInfo QAudioDevice*
/// @param format QAudioFormat*
QAudioSink* q_audiosink_new5(void* audioDeviceInfo, void* format);

/// q_audiosink_new6 constructs a new QAudioSink object.
///
/// @param audioDeviceInfo QAudioDevice*
/// @param format QAudioFormat*
/// @param parent QObject*
QAudioSink* q_audiosink_new6(void* audioDeviceInfo, void* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAudioSink*
const QMetaObject* q_audiosink_meta_object(void* self);

/// @param self QAudioSink*
/// @param param1 const char*
void* q_audiosink_metacast(void* self, const char* param1);

/// @param self QAudioSink*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_audiosink_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAudioSink*
/// @param callback int32_t fn(QAudioSink*, enum QMetaObject__Call, int, void*)
void q_audiosink_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QAudioSink*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_audiosink_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_audiosink_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#isNull)
///
/// @param self QAudioSink*
bool q_audiosink_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#format)
///
/// @param self QAudioSink*
QAudioFormat* q_audiosink_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#start)
///
/// @param self QAudioSink*
/// @param device QIODevice*
void q_audiosink_start(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#start)
///
/// @param self QAudioSink*
QIODevice* q_audiosink_start2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#stop)
///
/// @param self QAudioSink*
void q_audiosink_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#reset)
///
/// @param self QAudioSink*
void q_audiosink_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#suspend)
///
/// @param self QAudioSink*
void q_audiosink_suspend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#resume)
///
/// @param self QAudioSink*
void q_audiosink_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#setBufferSize)
///
/// @param self QAudioSink*
/// @param bytes int64_t
void q_audiosink_set_buffer_size(void* self, int64_t bytes);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#bufferSize)
///
/// @param self QAudioSink*
int64_t q_audiosink_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#bytesFree)
///
/// @param self QAudioSink*
int64_t q_audiosink_bytes_free(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#processedUSecs)
///
/// @param self QAudioSink*
long long q_audiosink_processed_u_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#elapsedUSecs)
///
/// @param self QAudioSink*
long long q_audiosink_elapsed_u_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#error)
///
/// @param self QAudioSink*
///
/// @return enum QAudio__Error
int64_t q_audiosink_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#state)
///
/// @param self QAudioSink*
///
/// @return enum QAudio__State
int64_t q_audiosink_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#setVolume)
///
/// @param self QAudioSink*
/// @param volume double
void q_audiosink_set_volume(void* self, double volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#volume)
///
/// @param self QAudioSink*
double q_audiosink_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#stateChanged)
///
/// @param self QAudioSink*
/// @param state enum QAudio__State
void q_audiosink_state_changed(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#stateChanged)
///
/// @param self QAudioSink*
/// @param callback void fn(QAudioSink*, enum QAudio__State)
void q_audiosink_on_state_changed(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_audiosink_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_audiosink_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAudioSink*
const char* q_audiosink_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAudioSink*
/// @param name char*
void q_audiosink_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAudioSink*
bool q_audiosink_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAudioSink*
bool q_audiosink_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAudioSink*
bool q_audiosink_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAudioSink*
bool q_audiosink_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAudioSink*
/// @param b bool
bool q_audiosink_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAudioSink*
QThread* q_audiosink_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioSink*
/// @param thread QThread*
bool q_audiosink_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioSink*
/// @param interval int
int32_t q_audiosink_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioSink*
/// @param id int
void q_audiosink_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioSink*
/// @param id enum Qt__TimerId
void q_audiosink_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAudioSink*
libqt_list /* of QObject* */ q_audiosink_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAudioSink*
/// @param parent QObject*
void q_audiosink_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAudioSink*
/// @param filterObj QObject*
void q_audiosink_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAudioSink*
/// @param obj QObject*
void q_audiosink_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_audiosink_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioSink*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_audiosink_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_audiosink_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_audiosink_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAudioSink*
void q_audiosink_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAudioSink*
void q_audiosink_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAudioSink*
/// @param name const char*
/// @param value QVariant*
bool q_audiosink_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAudioSink*
/// @param name const char*
QVariant* q_audiosink_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAudioSink*
const char** q_audiosink_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioSink*
QBindingStorage* q_audiosink_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioSink*
const QBindingStorage* q_audiosink_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioSink*
void q_audiosink_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioSink*
/// @param callback void fn(QAudioSink*)
void q_audiosink_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAudioSink*
QObject* q_audiosink_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAudioSink*
/// @param classname const char*
bool q_audiosink_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAudioSink*
void q_audiosink_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioSink*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_audiosink_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioSink*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_audiosink_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_audiosink_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioSink*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_audiosink_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioSink*
/// @param param1 QObject*
void q_audiosink_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioSink*
/// @param callback void fn(QAudioSink*, QObject*)
void q_audiosink_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
/// @param event QEvent*
bool q_audiosink_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
/// @param event QEvent*
bool q_audiosink_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback bool fn(QAudioSink*, QEvent*)
void q_audiosink_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
/// @param watched QObject*
/// @param event QEvent*
bool q_audiosink_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
/// @param watched QObject*
/// @param event QEvent*
bool q_audiosink_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback bool fn(QAudioSink*, QObject*, QEvent*)
void q_audiosink_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
/// @param event QTimerEvent*
void q_audiosink_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
/// @param event QTimerEvent*
void q_audiosink_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback void fn(QAudioSink*, QTimerEvent*)
void q_audiosink_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
/// @param event QChildEvent*
void q_audiosink_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
/// @param event QChildEvent*
void q_audiosink_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback void fn(QAudioSink*, QChildEvent*)
void q_audiosink_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
/// @param event QEvent*
void q_audiosink_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
/// @param event QEvent*
void q_audiosink_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback void fn(QAudioSink*, QEvent*)
void q_audiosink_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
/// @param signal QMetaMethod*
void q_audiosink_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
/// @param signal QMetaMethod*
void q_audiosink_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback void fn(QAudioSink*, QMetaMethod*)
void q_audiosink_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
/// @param signal QMetaMethod*
void q_audiosink_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
/// @param signal QMetaMethod*
void q_audiosink_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback void fn(QAudioSink*, QMetaMethod*)
void q_audiosink_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
QObject* q_audiosink_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
QObject* q_audiosink_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback QObject* fn()
void q_audiosink_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
int32_t q_audiosink_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
int32_t q_audiosink_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback int32_t fn()
void q_audiosink_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
/// @param signal const char*
int32_t q_audiosink_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
/// @param signal const char*
int32_t q_audiosink_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback int32_t fn(QAudioSink*, const char*)
void q_audiosink_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioSink*
/// @param signal QMetaMethod*
bool q_audiosink_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioSink*
/// @param signal QMetaMethod*
bool q_audiosink_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioSink*
/// @param callback bool fn(QAudioSink*, QMetaMethod*)
void q_audiosink_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAudioSink*
/// @param callback void fn(QAudioSink*, const char*)
void q_audiosink_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#dtor.QAudioSink)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioSink*
void q_audiosink_delete(void* self);

#endif
