#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQAMBIENTSOUND_H
#define SRC_SPATIALAUDIOQT6C_LIBQAMBIENTSOUND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qambientsound.html

/// q_ambientsound_new constructs a new QAmbientSound object.
///
/// ``` QAudioEngine* engine ```
QAmbientSound* q_ambientsound_new(void* engine);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAmbientSound* self ```
const QMetaObject* q_ambientsound_meta_object(void* self);

/// ``` QAmbientSound* self, const char* param1 ```
void* q_ambientsound_metacast(void* self, const char* param1);

/// ``` QAmbientSound* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_ambientsound_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAmbientSound* self, int32_t (*slot)(QAmbientSound*, enum QMetaObject__Call, int, void*) ```
void q_ambientsound_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAmbientSound* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_ambientsound_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_ambientsound_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#setSource)
///
/// ``` QAmbientSound* self, QUrl* url ```
void q_ambientsound_set_source(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#source)
///
/// ``` QAmbientSound* self ```
QUrl* q_ambientsound_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#loops)
///
/// ``` QAmbientSound* self ```
int32_t q_ambientsound_loops(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#setLoops)
///
/// ``` QAmbientSound* self, int loops ```
void q_ambientsound_set_loops(void* self, int loops);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#autoPlay)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_auto_play(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#setAutoPlay)
///
/// ``` QAmbientSound* self, bool autoPlay ```
void q_ambientsound_set_auto_play(void* self, bool autoPlay);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#setVolume)
///
/// ``` QAmbientSound* self, float volume ```
void q_ambientsound_set_volume(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#volume)
///
/// ``` QAmbientSound* self ```
float q_ambientsound_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#engine)
///
/// ``` QAmbientSound* self ```
QAudioEngine* q_ambientsound_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#sourceChanged)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_source_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#sourceChanged)
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*) ```
void q_ambientsound_on_source_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#loopsChanged)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_loops_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#loopsChanged)
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*) ```
void q_ambientsound_on_loops_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#autoPlayChanged)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_auto_play_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#autoPlayChanged)
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*) ```
void q_ambientsound_on_auto_play_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#volumeChanged)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_volume_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#volumeChanged)
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*) ```
void q_ambientsound_on_volume_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#play)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_play(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#pause)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#stop)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_ambientsound_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_ambientsound_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAmbientSound* self ```
const char* q_ambientsound_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAmbientSound* self, char* name ```
void q_ambientsound_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAmbientSound* self, bool b ```
bool q_ambientsound_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAmbientSound* self ```
QThread* q_ambientsound_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAmbientSound* self, QThread* thread ```
bool q_ambientsound_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAmbientSound* self, int interval ```
int32_t q_ambientsound_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAmbientSound* self, int id ```
void q_ambientsound_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAmbientSound* self, enum Qt__TimerId id ```
void q_ambientsound_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAmbientSound* self ```
libqt_list /* of QObject* */ q_ambientsound_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAmbientSound* self, QObject* parent ```
void q_ambientsound_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAmbientSound* self, QObject* filterObj ```
void q_ambientsound_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAmbientSound* self, QObject* obj ```
void q_ambientsound_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_ambientsound_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAmbientSound* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_ambientsound_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_ambientsound_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_ambientsound_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAmbientSound* self, const char* name, QVariant* value ```
bool q_ambientsound_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAmbientSound* self, const char* name ```
QVariant* q_ambientsound_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAmbientSound* self ```
const char** q_ambientsound_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAmbientSound* self ```
QBindingStorage* q_ambientsound_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAmbientSound* self ```
const QBindingStorage* q_ambientsound_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAmbientSound* self, void (*slot)(QObject*) ```
void q_ambientsound_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAmbientSound* self ```
QObject* q_ambientsound_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAmbientSound* self, const char* classname ```
bool q_ambientsound_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAmbientSound* self, QThread* thread, Disambiguated_t* param2 ```
bool q_ambientsound_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAmbientSound* self, int interval, enum Qt__TimerType timerType ```
int32_t q_ambientsound_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_ambientsound_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAmbientSound* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_ambientsound_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAmbientSound* self, QObject* param1 ```
void q_ambientsound_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAmbientSound* self, void (*slot)(QObject*, QObject*) ```
void q_ambientsound_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QEvent* event ```
bool q_ambientsound_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QEvent* event ```
bool q_ambientsound_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, bool (*slot)(QAmbientSound*, QEvent*) ```
void q_ambientsound_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QObject* watched, QEvent* event ```
bool q_ambientsound_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QObject* watched, QEvent* event ```
bool q_ambientsound_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, bool (*slot)(QAmbientSound*, QObject*, QEvent*) ```
void q_ambientsound_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QTimerEvent* event ```
void q_ambientsound_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QTimerEvent* event ```
void q_ambientsound_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QTimerEvent*) ```
void q_ambientsound_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QChildEvent* event ```
void q_ambientsound_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QChildEvent* event ```
void q_ambientsound_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QChildEvent*) ```
void q_ambientsound_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QEvent* event ```
void q_ambientsound_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QEvent* event ```
void q_ambientsound_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QEvent*) ```
void q_ambientsound_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
void q_ambientsound_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
void q_ambientsound_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QMetaMethod*) ```
void q_ambientsound_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
void q_ambientsound_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
void q_ambientsound_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QMetaMethod*) ```
void q_ambientsound_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self ```
QObject* q_ambientsound_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self ```
QObject* q_ambientsound_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, QObject* (*slot)() ```
void q_ambientsound_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self ```
int32_t q_ambientsound_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self ```
int32_t q_ambientsound_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, int32_t (*slot)() ```
void q_ambientsound_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, const char* signal ```
int32_t q_ambientsound_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, const char* signal ```
int32_t q_ambientsound_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, int32_t (*slot)(QAmbientSound*, const char*) ```
void q_ambientsound_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
bool q_ambientsound_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
bool q_ambientsound_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, bool (*slot)(QAmbientSound*, QMetaMethod*) ```
void q_ambientsound_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAmbientSound* self, void (*slot)(QObject*, const char*) ```
void q_ambientsound_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#dtor.QAmbientSound)
///
/// Delete this object from C++ memory.
///
/// ``` QAmbientSound* self ```
void q_ambientsound_delete(void* self);

/// https://doc.qt.io/qt-6/qambientsound.html#types

typedef enum {
    QAMBIENTSOUND_LOOPS_INFINITE = -1,
    QAMBIENTSOUND_LOOPS_ONCE = 1
} QAmbientSound__Loops;

#endif
