#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQAUDIODECODER_H
#define SRC_MULTIMEDIA_QT6C_LIBQAUDIODECODER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html)

/// q_audiodecoder_new constructs a new QAudioDecoder object.
///
QAudioDecoder* q_audiodecoder_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html)

/// q_audiodecoder_new2 constructs a new QAudioDecoder object.
///
/// @param parent QObject*
///
QAudioDecoder* q_audiodecoder_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAudioDecoder*
///
const QMetaObject* q_audiodecoder_meta_object(void* self);

/// @param self QAudioDecoder*
/// @param param1 const char*
///
void* q_audiodecoder_metacast(void* self, const char* param1);

/// @param self QAudioDecoder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audiodecoder_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAudioDecoder*
/// @param callback int32_t func(QAudioDecoder* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_audiodecoder_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAudioDecoder*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audiodecoder_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_audiodecoder_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#isSupported)
///
/// @param self QAudioDecoder*
///
bool q_audiodecoder_is_supported(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#isDecoding)
///
/// @param self QAudioDecoder*
///
bool q_audiodecoder_is_decoding(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#source)
///
/// @param self QAudioDecoder*
///
QUrl* q_audiodecoder_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#setSource)
///
/// @param self QAudioDecoder*
/// @param fileName QUrl*
///
void q_audiodecoder_set_source(void* self, void* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#sourceDevice)
///
/// @param self QAudioDecoder*
///
QIODevice* q_audiodecoder_source_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#setSourceDevice)
///
/// @param self QAudioDecoder*
/// @param device QIODevice*
///
void q_audiodecoder_set_source_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#audioFormat)
///
/// @param self QAudioDecoder*
///
QAudioFormat* q_audiodecoder_audio_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#setAudioFormat)
///
/// @param self QAudioDecoder*
/// @param format QAudioFormat*
///
void q_audiodecoder_set_audio_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#error)
///
/// @param self QAudioDecoder*
///
/// @return enum QAudioDecoder__Error
///
int32_t q_audiodecoder_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAudioDecoder*
///
const char* q_audiodecoder_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#read)
///
/// @param self QAudioDecoder*
///
QAudioBuffer* q_audiodecoder_read(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferAvailable)
///
/// @param self QAudioDecoder*
///
bool q_audiodecoder_buffer_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#position)
///
/// @param self QAudioDecoder*
///
long long q_audiodecoder_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#duration)
///
/// @param self QAudioDecoder*
///
long long q_audiodecoder_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#start)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#stop)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferAvailableChanged)
///
/// @param self QAudioDecoder*
/// @param param1 bool
///
void q_audiodecoder_buffer_available_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferReady)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_buffer_ready(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#finished)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#isDecodingChanged)
///
/// @param self QAudioDecoder*
/// @param param1 bool
///
void q_audiodecoder_is_decoding_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#formatChanged)
///
/// @param self QAudioDecoder*
/// @param format QAudioFormat*
///
void q_audiodecoder_format_changed(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#error)
///
/// @param self QAudioDecoder*
/// @param error enum QAudioDecoder__Error
///
void q_audiodecoder_error2(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#sourceChanged)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_source_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#positionChanged)
///
/// @param self QAudioDecoder*
/// @param position long long
///
void q_audiodecoder_position_changed(void* self, long long position);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#durationChanged)
///
/// @param self QAudioDecoder*
/// @param duration long long
///
void q_audiodecoder_duration_changed(void* self, long long duration);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_audiodecoder_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_audiodecoder_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAudioDecoder*
///
const char* q_audiodecoder_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAudioDecoder*
/// @param name char*
///
void q_audiodecoder_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAudioDecoder*
///
bool q_audiodecoder_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAudioDecoder*
///
bool q_audiodecoder_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAudioDecoder*
///
bool q_audiodecoder_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAudioDecoder*
///
bool q_audiodecoder_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAudioDecoder*
/// @param b bool
///
bool q_audiodecoder_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAudioDecoder*
///
QThread* q_audiodecoder_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioDecoder*
/// @param thread QThread*
///
bool q_audiodecoder_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioDecoder*
/// @param interval int
///
int32_t q_audiodecoder_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioDecoder*
/// @param id int
///
void q_audiodecoder_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioDecoder*
/// @param id enum Qt__TimerId
///
void q_audiodecoder_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAudioDecoder*
///
/// @return libqt_list of QObject*
///
libqt_list q_audiodecoder_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAudioDecoder*
/// @param parent QObject*
///
void q_audiodecoder_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAudioDecoder*
/// @param filterObj QObject*
///
void q_audiodecoder_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAudioDecoder*
/// @param obj QObject*
///
void q_audiodecoder_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_audiodecoder_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioDecoder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_audiodecoder_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_audiodecoder_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_audiodecoder_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAudioDecoder*
/// @param name const char*
/// @param value QVariant*
///
bool q_audiodecoder_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAudioDecoder*
/// @param name const char*
///
QVariant* q_audiodecoder_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAudioDecoder*
///
const char** q_audiodecoder_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioDecoder*
///
QBindingStorage* q_audiodecoder_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioDecoder*
///
const QBindingStorage* q_audiodecoder_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self)
///
void q_audiodecoder_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAudioDecoder*
///
QObject* q_audiodecoder_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAudioDecoder*
/// @param classname const char*
///
bool q_audiodecoder_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioDecoder*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_audiodecoder_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioDecoder*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_audiodecoder_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_audiodecoder_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioDecoder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_audiodecoder_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioDecoder*
/// @param param1 QObject*
///
void q_audiodecoder_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, QObject* param1)
///
void q_audiodecoder_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param event QEvent*
///
bool q_audiodecoder_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param event QEvent*
///
bool q_audiodecoder_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback bool func(QAudioDecoder* self, QEvent* event)
///
void q_audiodecoder_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audiodecoder_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audiodecoder_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback bool func(QAudioDecoder* self, QObject* watched, QEvent* event)
///
void q_audiodecoder_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param event QTimerEvent*
///
void q_audiodecoder_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param event QTimerEvent*
///
void q_audiodecoder_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, QTimerEvent* event)
///
void q_audiodecoder_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param event QChildEvent*
///
void q_audiodecoder_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param event QChildEvent*
///
void q_audiodecoder_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, QChildEvent* event)
///
void q_audiodecoder_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param event QEvent*
///
void q_audiodecoder_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param event QEvent*
///
void q_audiodecoder_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, QEvent* event)
///
void q_audiodecoder_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal QMetaMethod*
///
void q_audiodecoder_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal QMetaMethod*
///
void q_audiodecoder_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, QMetaMethod* signal)
///
void q_audiodecoder_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal QMetaMethod*
///
void q_audiodecoder_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal QMetaMethod*
///
void q_audiodecoder_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, QMetaMethod* signal)
///
void q_audiodecoder_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
///
QObject* q_audiodecoder_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
///
QObject* q_audiodecoder_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback QObject* func()
///
void q_audiodecoder_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
///
int32_t q_audiodecoder_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
///
int32_t q_audiodecoder_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback int32_t func()
///
void q_audiodecoder_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal const char*
///
int32_t q_audiodecoder_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal const char*
///
int32_t q_audiodecoder_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback int32_t func(QAudioDecoder* self, const char* signal)
///
void q_audiodecoder_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal QMetaMethod*
///
bool q_audiodecoder_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal QMetaMethod*
///
bool q_audiodecoder_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback bool func(QAudioDecoder* self, QMetaMethod* signal)
///
void q_audiodecoder_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, const char* objectName)
///
void q_audiodecoder_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#dtor.QAudioDecoder)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#public-types)

typedef enum {
    QAUDIODECODER_ERROR_NOERROR = 0,
    QAUDIODECODER_ERROR_RESOURCEERROR = 1,
    QAUDIODECODER_ERROR_FORMATERROR = 2,
    QAUDIODECODER_ERROR_ACCESSDENIEDERROR = 3,
    QAUDIODECODER_ERROR_NOTSUPPORTEDERROR = 4
} QAudioDecoder__Error;

#endif
