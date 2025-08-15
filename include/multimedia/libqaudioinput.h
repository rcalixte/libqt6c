#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOINPUT_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOINPUT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudioinput.html

/// q_audioinput_new constructs a new QAudioInput object.
///
QAudioInput* q_audioinput_new();

/// q_audioinput_new2 constructs a new QAudioInput object.
///
/// @param deviceInfo QAudioDevice*
QAudioInput* q_audioinput_new2(void* deviceInfo);

/// q_audioinput_new3 constructs a new QAudioInput object.
///
/// @param parent QObject*
QAudioInput* q_audioinput_new3(void* parent);

/// q_audioinput_new4 constructs a new QAudioInput object.
///
/// @param deviceInfo QAudioDevice*
/// @param parent QObject*
QAudioInput* q_audioinput_new4(void* deviceInfo, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAudioInput*
const QMetaObject* q_audioinput_meta_object(void* self);

/// @param self QAudioInput*
/// @param param1 const char*
void* q_audioinput_metacast(void* self, const char* param1);

/// @param self QAudioInput*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_audioinput_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAudioInput*
/// @param callback int32_t fn(QAudioInput*, enum QMetaObject__Call, int, void*)
void q_audioinput_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QAudioInput*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_audioinput_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_audioinput_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#device)
///
/// @param self QAudioInput*
QAudioDevice* q_audioinput_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#volume)
///
/// @param self QAudioInput*
float q_audioinput_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#isMuted)
///
/// @param self QAudioInput*
bool q_audioinput_is_muted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#setDevice)
///
/// @param self QAudioInput*
/// @param device QAudioDevice*
void q_audioinput_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#setVolume)
///
/// @param self QAudioInput*
/// @param volume float
void q_audioinput_set_volume(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#setMuted)
///
/// @param self QAudioInput*
/// @param muted bool
void q_audioinput_set_muted(void* self, bool muted);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#deviceChanged)
///
/// @param self QAudioInput*
void q_audioinput_device_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#deviceChanged)
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*)
void q_audioinput_on_device_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#volumeChanged)
///
/// @param self QAudioInput*
/// @param volume float
void q_audioinput_volume_changed(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#volumeChanged)
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*, float)
void q_audioinput_on_volume_changed(void* self, void (*callback)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#mutedChanged)
///
/// @param self QAudioInput*
/// @param muted bool
void q_audioinput_muted_changed(void* self, bool muted);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#mutedChanged)
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*, bool)
void q_audioinput_on_muted_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_audioinput_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_audioinput_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAudioInput*
const char* q_audioinput_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAudioInput*
/// @param name char*
void q_audioinput_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAudioInput*
bool q_audioinput_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAudioInput*
bool q_audioinput_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAudioInput*
bool q_audioinput_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAudioInput*
bool q_audioinput_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAudioInput*
/// @param b bool
bool q_audioinput_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAudioInput*
QThread* q_audioinput_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioInput*
/// @param thread QThread*
bool q_audioinput_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioInput*
/// @param interval int
int32_t q_audioinput_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioInput*
/// @param id int
void q_audioinput_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioInput*
/// @param id enum Qt__TimerId
void q_audioinput_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAudioInput*
libqt_list /* of QObject* */ q_audioinput_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAudioInput*
/// @param parent QObject*
void q_audioinput_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAudioInput*
/// @param filterObj QObject*
void q_audioinput_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAudioInput*
/// @param obj QObject*
void q_audioinput_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_audioinput_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioInput*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_audioinput_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_audioinput_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_audioinput_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAudioInput*
void q_audioinput_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAudioInput*
void q_audioinput_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAudioInput*
/// @param name const char*
/// @param value QVariant*
bool q_audioinput_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAudioInput*
/// @param name const char*
QVariant* q_audioinput_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAudioInput*
const char** q_audioinput_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioInput*
QBindingStorage* q_audioinput_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioInput*
const QBindingStorage* q_audioinput_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioInput*
void q_audioinput_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*)
void q_audioinput_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAudioInput*
QObject* q_audioinput_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAudioInput*
/// @param classname const char*
bool q_audioinput_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAudioInput*
void q_audioinput_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioInput*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_audioinput_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioInput*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_audioinput_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_audioinput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioInput*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_audioinput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioInput*
/// @param param1 QObject*
void q_audioinput_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*, QObject*)
void q_audioinput_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
/// @param event QEvent*
bool q_audioinput_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
/// @param event QEvent*
bool q_audioinput_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback bool fn(QAudioInput*, QEvent*)
void q_audioinput_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
/// @param watched QObject*
/// @param event QEvent*
bool q_audioinput_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
/// @param watched QObject*
/// @param event QEvent*
bool q_audioinput_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback bool fn(QAudioInput*, QObject*, QEvent*)
void q_audioinput_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
/// @param event QTimerEvent*
void q_audioinput_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
/// @param event QTimerEvent*
void q_audioinput_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*, QTimerEvent*)
void q_audioinput_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
/// @param event QChildEvent*
void q_audioinput_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
/// @param event QChildEvent*
void q_audioinput_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*, QChildEvent*)
void q_audioinput_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
/// @param event QEvent*
void q_audioinput_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
/// @param event QEvent*
void q_audioinput_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*, QEvent*)
void q_audioinput_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
/// @param signal QMetaMethod*
void q_audioinput_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
/// @param signal QMetaMethod*
void q_audioinput_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*, QMetaMethod*)
void q_audioinput_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
/// @param signal QMetaMethod*
void q_audioinput_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
/// @param signal QMetaMethod*
void q_audioinput_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*, QMetaMethod*)
void q_audioinput_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
QObject* q_audioinput_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
QObject* q_audioinput_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback QObject* fn()
void q_audioinput_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
int32_t q_audioinput_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
int32_t q_audioinput_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback int32_t fn()
void q_audioinput_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
/// @param signal const char*
int32_t q_audioinput_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
/// @param signal const char*
int32_t q_audioinput_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback int32_t fn(QAudioInput*, const char*)
void q_audioinput_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioInput*
/// @param signal QMetaMethod*
bool q_audioinput_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioInput*
/// @param signal QMetaMethod*
bool q_audioinput_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioInput*
/// @param callback bool fn(QAudioInput*, QMetaMethod*)
void q_audioinput_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAudioInput*
/// @param callback void fn(QAudioInput*, const char*)
void q_audioinput_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#dtor.QAudioInput)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioInput*
void q_audioinput_delete(void* self);

#endif
