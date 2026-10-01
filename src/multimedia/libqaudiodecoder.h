#pragma once
#ifndef MULTIMEDIA_LIBQAUDIODECODER_H
#define MULTIMEDIA_LIBQAUDIODECODER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
/// @param self const QAudioDecoder*
///
const QMetaObject* q_audiodecoder_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QAudioDecoder*
/// @param callback const QMetaObject* func(const QAudioDecoder* self)
///
void q_audiodecoder_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QAudioDecoder*
///
const QMetaObject* q_audiodecoder_super_meta_object(const void* self);

/// @param self QAudioDecoder*
/// @param param1 const char*
///
void* q_audiodecoder_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAudioDecoder*
/// @param callback void* func(QAudioDecoder* self, const char* param1)
///
void q_audiodecoder_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAudioDecoder*
/// @param param1 const char*
///
void* q_audiodecoder_super_metacast(void* self, const char* param1);

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
int32_t q_audiodecoder_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_audiodecoder_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#isSupported)
///
/// @param self const QAudioDecoder*
///
bool q_audiodecoder_is_supported(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#isDecoding)
///
/// @param self const QAudioDecoder*
///
bool q_audiodecoder_is_decoding(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#source)
///
/// @param self const QAudioDecoder*
///
QUrl* q_audiodecoder_source(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#setSource)
///
/// @param self QAudioDecoder*
/// @param fileName QUrl*
///
void q_audiodecoder_set_source(void* self, const void* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#sourceDevice)
///
/// @param self const QAudioDecoder*
///
QIODevice* q_audiodecoder_source_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#setSourceDevice)
///
/// @param self QAudioDecoder*
/// @param device QIODevice*
///
void q_audiodecoder_set_source_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#audioFormat)
///
/// @param self const QAudioDecoder*
///
QAudioFormat* q_audiodecoder_audio_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#setAudioFormat)
///
/// @param self QAudioDecoder*
/// @param format QAudioFormat*
///
void q_audiodecoder_set_audio_format(void* self, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#error)
///
/// @param self const QAudioDecoder*
///
/// @return enum QAudioDecoder__Error
///
int32_t q_audiodecoder_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAudioDecoder*
///
const char* q_audiodecoder_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#read)
///
/// @param self const QAudioDecoder*
///
QAudioBuffer* q_audiodecoder_read(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferAvailable)
///
/// @param self const QAudioDecoder*
///
bool q_audiodecoder_buffer_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#position)
///
/// @param self const QAudioDecoder*
///
int64_t q_audiodecoder_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#duration)
///
/// @param self const QAudioDecoder*
///
int64_t q_audiodecoder_duration(const void* self);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferAvailableChanged)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, bool param1)
///
void q_audiodecoder_on_buffer_available_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferReady)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_buffer_ready(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferReady)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self)
///
void q_audiodecoder_on_buffer_ready(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#finished)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#finished)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self)
///
void q_audiodecoder_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#isDecodingChanged)
///
/// @param self QAudioDecoder*
/// @param param1 bool
///
void q_audiodecoder_is_decoding_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#isDecodingChanged)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, bool param1)
///
void q_audiodecoder_on_is_decoding_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#formatChanged)
///
/// @param self QAudioDecoder*
/// @param format QAudioFormat*
///
void q_audiodecoder_format_changed(void* self, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#formatChanged)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, QAudioFormat* format)
///
void q_audiodecoder_on_format_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#error)
///
/// @param self QAudioDecoder*
/// @param error enum QAudioDecoder__Error
///
void q_audiodecoder_error2(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#error)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, enum QAudioDecoder__Error error)
///
void q_audiodecoder_on_error2(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#sourceChanged)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_source_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#sourceChanged)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self)
///
void q_audiodecoder_on_source_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#positionChanged)
///
/// @param self QAudioDecoder*
/// @param position int64_t
///
void q_audiodecoder_position_changed(void* self, int64_t position);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#positionChanged)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, int64_t position)
///
void q_audiodecoder_on_position_changed(void* self, void (*callback)(void*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#durationChanged)
///
/// @param self QAudioDecoder*
/// @param duration int64_t
///
void q_audiodecoder_duration_changed(void* self, int64_t duration);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiodecoder.html#durationChanged)
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, int64_t duration)
///
void q_audiodecoder_on_duration_changed(void* self, void (*callback)(void*, int64_t));

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
/// @param self const QAudioDecoder*
///
const char* q_audiodecoder_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAudioDecoder*
/// @param name const char*
///
void q_audiodecoder_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QAudioDecoder*
///
bool q_audiodecoder_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAudioDecoder*
///
bool q_audiodecoder_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAudioDecoder*
///
bool q_audiodecoder_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAudioDecoder*
///
bool q_audiodecoder_signals_blocked(const void* self);

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
/// @param self const QAudioDecoder*
///
QThread* q_audiodecoder_thread(const void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioDecoder*
/// @param time int64_t of nanoseconds
///
int32_t q_audiodecoder_start_timer2(void* self, int64_t time);

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
/// @param self const QAudioDecoder*
///
/// @return libqt_list of QObject*
///
libqt_list q_audiodecoder_children(const void* self);

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
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_audiodecoder_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_audiodecoder_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAudioDecoder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_audiodecoder_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_audiodecoder_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_audiodecoder_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioDecoder*
///
bool q_audiodecoder_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioDecoder*
/// @param receiver QObject*
///
bool q_audiodecoder_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_audiodecoder_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAudioDecoder*
///
void q_audiodecoder_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAudioDecoder*
///
void q_audiodecoder_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAudioDecoder*
/// @param name const char*
/// @param value QVariant*
///
bool q_audiodecoder_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAudioDecoder*
/// @param name const char*
///
QVariant* q_audiodecoder_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAudioDecoder*
///
const char** q_audiodecoder_dynamic_property_names(const void* self);

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
/// @param self const QAudioDecoder*
///
const QBindingStorage* q_audiodecoder_binding_storage2(const void* self);

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
/// @param self const QAudioDecoder*
///
QObject* q_audiodecoder_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAudioDecoder*
/// @param classname const char*
///
bool q_audiodecoder_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAudioDecoder*
///
void q_audiodecoder_delete_later(void* self);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioDecoder*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_audiodecoder_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_audiodecoder_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_audiodecoder_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAudioDecoder*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_audiodecoder_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioDecoder*
/// @param signal const char*
///
bool q_audiodecoder_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioDecoder*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_audiodecoder_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioDecoder*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_audiodecoder_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAudioDecoder*
/// @param receiver QObject*
/// @param member const char*
///
bool q_audiodecoder_disconnect23(const void* self, const void* receiver, const char* member);

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
bool q_audiodecoder_super_event(void* self, void* event);

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
bool q_audiodecoder_super_event_filter(void* self, void* watched, void* event);

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
void q_audiodecoder_super_timer_event(void* self, void* event);

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
void q_audiodecoder_super_child_event(void* self, void* event);

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
void q_audiodecoder_super_custom_event(void* self, void* event);

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
void q_audiodecoder_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal QMetaMethod*
///
void q_audiodecoder_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, QMetaMethod* signal)
///
void q_audiodecoder_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal QMetaMethod*
///
void q_audiodecoder_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param signal QMetaMethod*
///
void q_audiodecoder_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback void func(QAudioDecoder* self, QMetaMethod* signal)
///
void q_audiodecoder_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAudioDecoder*
///
QObject* q_audiodecoder_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAudioDecoder*
///
QObject* q_audiodecoder_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback QObject* func(QAudioDecoder* self)
///
void q_audiodecoder_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAudioDecoder*
///
int32_t q_audiodecoder_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAudioDecoder*
///
int32_t q_audiodecoder_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback int32_t func(QAudioDecoder* self)
///
void q_audiodecoder_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAudioDecoder*
/// @param signal const char*
///
int32_t q_audiodecoder_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAudioDecoder*
/// @param signal const char*
///
int32_t q_audiodecoder_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback int32_t func(QAudioDecoder* self, const char* signal)
///
void q_audiodecoder_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAudioDecoder*
/// @param signal QMetaMethod*
///
bool q_audiodecoder_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAudioDecoder*
/// @param signal QMetaMethod*
///
bool q_audiodecoder_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioDecoder*
/// @param callback bool func(QAudioDecoder* self, QMetaMethod* signal)
///
void q_audiodecoder_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

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
