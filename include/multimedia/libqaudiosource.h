#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOSOURCE_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOSOURCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudiodevice.h"
#include "libqaudioformat.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qaudiosource.html

/// q_audiosource_new constructs a new QAudioSource object.
///
///
QAudioSource* q_audiosource_new();

/// q_audiosource_new2 constructs a new QAudioSource object.
///
/// ``` QAudioDevice* audioDeviceInfo ```
QAudioSource* q_audiosource_new2(void* audioDeviceInfo);

/// q_audiosource_new3 constructs a new QAudioSource object.
///
/// ``` QAudioFormat* format ```
QAudioSource* q_audiosource_new3(void* format);

/// q_audiosource_new4 constructs a new QAudioSource object.
///
/// ``` QAudioFormat* format, QObject* parent ```
QAudioSource* q_audiosource_new4(void* format, void* parent);

/// q_audiosource_new5 constructs a new QAudioSource object.
///
/// ``` QAudioDevice* audioDeviceInfo, QAudioFormat* format ```
QAudioSource* q_audiosource_new5(void* audioDeviceInfo, void* format);

/// q_audiosource_new6 constructs a new QAudioSource object.
///
/// ``` QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent ```
QAudioSource* q_audiosource_new6(void* audioDeviceInfo, void* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioSource* self ```
QMetaObject* q_audiosource_meta_object(void* self);

/// ``` QAudioSource* self, const char* param1 ```
void* q_audiosource_metacast(void* self, const char* param1);

/// ``` QAudioSource* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiosource_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAudioSource* self, int32_t (*slot)(QAudioSource*, enum QMetaObject__Call, int, void*) ```
void q_audiosource_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAudioSource* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiosource_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiosource_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#isNull)
///
/// ``` QAudioSource* self ```
bool q_audiosource_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#format)
///
/// ``` QAudioSource* self ```
QAudioFormat* q_audiosource_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#start)
///
/// ``` QAudioSource* self, QIODevice* device ```
void q_audiosource_start(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#start)
///
/// ``` QAudioSource* self ```
QIODevice* q_audiosource_start2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#stop)
///
/// ``` QAudioSource* self ```
void q_audiosource_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#reset)
///
/// ``` QAudioSource* self ```
void q_audiosource_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#suspend)
///
/// ``` QAudioSource* self ```
void q_audiosource_suspend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#resume)
///
/// ``` QAudioSource* self ```
void q_audiosource_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#setBufferSize)
///
/// ``` QAudioSource* self, int64_t bytes ```
void q_audiosource_set_buffer_size(void* self, int64_t bytes);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#bufferSize)
///
/// ``` QAudioSource* self ```
int64_t q_audiosource_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#bytesAvailable)
///
/// ``` QAudioSource* self ```
int64_t q_audiosource_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#setVolume)
///
/// ``` QAudioSource* self, double volume ```
void q_audiosource_set_volume(void* self, double volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#volume)
///
/// ``` QAudioSource* self ```
double q_audiosource_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#processedUSecs)
///
/// ``` QAudioSource* self ```
long long q_audiosource_processed_u_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#elapsedUSecs)
///
/// ``` QAudioSource* self ```
long long q_audiosource_elapsed_u_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#error)
///
/// ``` QAudioSource* self ```
int64_t q_audiosource_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#state)
///
/// ``` QAudioSource* self ```
int64_t q_audiosource_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#stateChanged)
///
/// ``` QAudioSource* self, enum QAudio__State state ```
void q_audiosource_state_changed(void* self, int64_t state);

/// ``` QAudioSource* self, void (*slot)(QAudioSource*, enum QAudio__State) ```
void q_audiosource_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiosource_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiosource_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioSource* self ```
const char* q_audiosource_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioSource* self, char* name ```
void q_audiosource_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioSource* self ```
bool q_audiosource_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioSource* self ```
bool q_audiosource_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioSource* self ```
bool q_audiosource_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioSource* self ```
bool q_audiosource_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioSource* self, bool b ```
bool q_audiosource_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioSource* self ```
QThread* q_audiosource_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioSource* self, QThread* thread ```
void q_audiosource_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioSource* self, int interval ```
int32_t q_audiosource_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioSource* self, int id ```
void q_audiosource_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioSource* self ```
libqt_list /* of QObject* */ q_audiosource_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioSource* self, QObject* parent ```
void q_audiosource_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioSource* self, QObject* filterObj ```
void q_audiosource_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioSource* self, QObject* obj ```
void q_audiosource_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiosource_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioSource* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiosource_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiosource_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiosource_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioSource* self ```
void q_audiosource_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioSource* self ```
void q_audiosource_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioSource* self, const char* name, QVariant* value ```
bool q_audiosource_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioSource* self, const char* name ```
QVariant* q_audiosource_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioSource* self ```
const char** q_audiosource_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioSource* self ```
QBindingStorage* q_audiosource_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioSource* self ```
QBindingStorage* q_audiosource_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioSource* self ```
void q_audiosource_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QAudioSource* self, void (*slot)(QObject*) ```
void q_audiosource_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioSource* self ```
QObject* q_audiosource_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioSource* self, const char* classname ```
bool q_audiosource_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioSource* self ```
void q_audiosource_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioSource* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiosource_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiosource_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioSource* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiosource_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioSource* self, QObject* param1 ```
void q_audiosource_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QAudioSource* self, void (*slot)(QObject*, QObject*) ```
void q_audiosource_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QEvent* event ```
bool q_audiosource_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QEvent* event ```
bool q_audiosource_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, bool (*slot)(QAudioSource*, QEvent*) ```
void q_audiosource_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QObject* watched, QEvent* event ```
bool q_audiosource_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QObject* watched, QEvent* event ```
bool q_audiosource_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, bool (*slot)(QAudioSource*, QObject*, QEvent*) ```
void q_audiosource_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QTimerEvent* event ```
void q_audiosource_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QTimerEvent* event ```
void q_audiosource_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QTimerEvent*) ```
void q_audiosource_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QChildEvent* event ```
void q_audiosource_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QChildEvent* event ```
void q_audiosource_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QChildEvent*) ```
void q_audiosource_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QEvent* event ```
void q_audiosource_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QEvent* event ```
void q_audiosource_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QEvent*) ```
void q_audiosource_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
void q_audiosource_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
void q_audiosource_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QMetaMethod*) ```
void q_audiosource_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
void q_audiosource_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
void q_audiosource_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QMetaMethod*) ```
void q_audiosource_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self ```
QObject* q_audiosource_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self ```
QObject* q_audiosource_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, QObject* (*slot)() ```
void q_audiosource_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self ```
int32_t q_audiosource_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self ```
int32_t q_audiosource_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, int32_t (*slot)() ```
void q_audiosource_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, const char* signal ```
int32_t q_audiosource_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, const char* signal ```
int32_t q_audiosource_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, int32_t (*slot)(QAudioSource*, const char*) ```
void q_audiosource_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
bool q_audiosource_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
bool q_audiosource_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, bool (*slot)(QAudioSource*, QMetaMethod*) ```
void q_audiosource_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QAudioSource* self ```
void q_audiosource_delete(void* self);

#endif
