#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQAUDIOROOM_H
#define SRC_SPATIALAUDIOQT6C_LIBQAUDIOROOM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudioroom.html

/// q_audioroom_new constructs a new QAudioRoom object.
///
/// ``` QAudioEngine* engine ```
QAudioRoom* q_audioroom_new(void* engine);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioRoom* self ```
const QMetaObject* q_audioroom_meta_object(void* self);

/// ``` QAudioRoom* self, const char* param1 ```
void* q_audioroom_metacast(void* self, const char* param1);

/// ``` QAudioRoom* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioroom_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAudioRoom* self, int32_t (*slot)(QAudioRoom*, enum QMetaObject__Call, int, void*) ```
void q_audioroom_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAudioRoom* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioroom_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audioroom_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setPosition)
///
/// ``` QAudioRoom* self, QVector3D* pos ```
void q_audioroom_set_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#position)
///
/// ``` QAudioRoom* self ```
QVector3D* q_audioroom_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setDimensions)
///
/// ``` QAudioRoom* self, QVector3D* dim ```
void q_audioroom_set_dimensions(void* self, void* dim);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#dimensions)
///
/// ``` QAudioRoom* self ```
QVector3D* q_audioroom_dimensions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setRotation)
///
/// ``` QAudioRoom* self, QQuaternion* q ```
void q_audioroom_set_rotation(void* self, void* q);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#rotation)
///
/// ``` QAudioRoom* self ```
QQuaternion* q_audioroom_rotation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setWallMaterial)
///
/// ``` QAudioRoom* self, enum QAudioRoom__Wall wall, enum QAudioRoom__Material material ```
void q_audioroom_set_wall_material(void* self, int64_t wall, int64_t material);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#wallMaterial)
///
/// ``` QAudioRoom* self, enum QAudioRoom__Wall wall ```
int64_t q_audioroom_wall_material(void* self, int64_t wall);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setReflectionGain)
///
/// ``` QAudioRoom* self, float factor ```
void q_audioroom_set_reflection_gain(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGain)
///
/// ``` QAudioRoom* self ```
float q_audioroom_reflection_gain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setReverbGain)
///
/// ``` QAudioRoom* self, float factor ```
void q_audioroom_set_reverb_gain(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbGain)
///
/// ``` QAudioRoom* self ```
float q_audioroom_reverb_gain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setReverbTime)
///
/// ``` QAudioRoom* self, float factor ```
void q_audioroom_set_reverb_time(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbTime)
///
/// ``` QAudioRoom* self ```
float q_audioroom_reverb_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setReverbBrightness)
///
/// ``` QAudioRoom* self, float factor ```
void q_audioroom_set_reverb_brightness(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightness)
///
/// ``` QAudioRoom* self ```
float q_audioroom_reverb_brightness(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#positionChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_position_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#positionChanged)
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_position_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#dimensionsChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_dimensions_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#dimensionsChanged)
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_dimensions_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#rotationChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_rotation_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#rotationChanged)
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_rotation_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#wallsChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_walls_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#wallsChanged)
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_walls_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGainChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_reflection_gain_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGainChanged)
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_reflection_gain_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbGainChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_reverb_gain_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbGainChanged)
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_reverb_gain_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbTimeChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_reverb_time_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbTimeChanged)
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_reverb_time_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightnessChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_reverb_brightness_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightnessChanged)
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_reverb_brightness_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audioroom_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audioroom_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioRoom* self ```
const char* q_audioroom_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioRoom* self, char* name ```
void q_audioroom_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioRoom* self ```
bool q_audioroom_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioRoom* self ```
bool q_audioroom_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioRoom* self ```
bool q_audioroom_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioRoom* self ```
bool q_audioroom_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioRoom* self, bool b ```
bool q_audioroom_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioRoom* self ```
QThread* q_audioroom_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioRoom* self, QThread* thread ```
bool q_audioroom_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioRoom* self, int interval ```
int32_t q_audioroom_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioRoom* self, int id ```
void q_audioroom_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioRoom* self, enum Qt__TimerId id ```
void q_audioroom_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioRoom* self ```
libqt_list /* of QObject* */ q_audioroom_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioRoom* self, QObject* parent ```
void q_audioroom_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioRoom* self, QObject* filterObj ```
void q_audioroom_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioRoom* self, QObject* obj ```
void q_audioroom_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audioroom_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioRoom* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audioroom_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audioroom_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audioroom_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioRoom* self ```
void q_audioroom_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioRoom* self ```
void q_audioroom_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioRoom* self, const char* name, QVariant* value ```
bool q_audioroom_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioRoom* self, const char* name ```
QVariant* q_audioroom_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioRoom* self ```
const char** q_audioroom_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioRoom* self ```
QBindingStorage* q_audioroom_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioRoom* self ```
const QBindingStorage* q_audioroom_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioRoom* self ```
void q_audioroom_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioRoom* self, void (*slot)(QObject*) ```
void q_audioroom_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioRoom* self ```
QObject* q_audioroom_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioRoom* self, const char* classname ```
bool q_audioroom_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioRoom* self ```
void q_audioroom_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioRoom* self, QThread* thread, Disambiguated_t* param2 ```
bool q_audioroom_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioRoom* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audioroom_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioroom_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioRoom* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioroom_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioRoom* self, QObject* param1 ```
void q_audioroom_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioRoom* self, void (*slot)(QObject*, QObject*) ```
void q_audioroom_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QEvent* event ```
bool q_audioroom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QEvent* event ```
bool q_audioroom_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, bool (*slot)(QAudioRoom*, QEvent*) ```
void q_audioroom_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QObject* watched, QEvent* event ```
bool q_audioroom_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QObject* watched, QEvent* event ```
bool q_audioroom_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, bool (*slot)(QAudioRoom*, QObject*, QEvent*) ```
void q_audioroom_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QTimerEvent* event ```
void q_audioroom_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QTimerEvent* event ```
void q_audioroom_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QTimerEvent*) ```
void q_audioroom_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QChildEvent* event ```
void q_audioroom_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QChildEvent* event ```
void q_audioroom_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QChildEvent*) ```
void q_audioroom_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QEvent* event ```
void q_audioroom_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QEvent* event ```
void q_audioroom_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QEvent*) ```
void q_audioroom_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
void q_audioroom_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
void q_audioroom_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QMetaMethod*) ```
void q_audioroom_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
void q_audioroom_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
void q_audioroom_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QMetaMethod*) ```
void q_audioroom_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self ```
QObject* q_audioroom_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self ```
QObject* q_audioroom_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, QObject* (*slot)() ```
void q_audioroom_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self ```
int32_t q_audioroom_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self ```
int32_t q_audioroom_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, int32_t (*slot)() ```
void q_audioroom_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, const char* signal ```
int32_t q_audioroom_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, const char* signal ```
int32_t q_audioroom_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, int32_t (*slot)(QAudioRoom*, const char*) ```
void q_audioroom_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
bool q_audioroom_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
bool q_audioroom_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, bool (*slot)(QAudioRoom*, QMetaMethod*) ```
void q_audioroom_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAudioRoom* self, void (*slot)(QObject*, const char*) ```
void q_audioroom_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#dtor.QAudioRoom)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioRoom* self ```
void q_audioroom_delete(void* self);

/// https://doc.qt.io/qt-6/qaudioroom.html#types

typedef enum {
    QAUDIOROOM_MATERIAL_TRANSPARENT = 0,
    QAUDIOROOM_MATERIAL_ACOUSTICCEILINGTILES = 1,
    QAUDIOROOM_MATERIAL_BRICKBARE = 2,
    QAUDIOROOM_MATERIAL_BRICKPAINTED = 3,
    QAUDIOROOM_MATERIAL_CONCRETEBLOCKCOARSE = 4,
    QAUDIOROOM_MATERIAL_CONCRETEBLOCKPAINTED = 5,
    QAUDIOROOM_MATERIAL_CURTAINHEAVY = 6,
    QAUDIOROOM_MATERIAL_FIBERGLASSINSULATION = 7,
    QAUDIOROOM_MATERIAL_GLASSTHIN = 8,
    QAUDIOROOM_MATERIAL_GLASSTHICK = 9,
    QAUDIOROOM_MATERIAL_GRASS = 10,
    QAUDIOROOM_MATERIAL_LINOLEUMONCONCRETE = 11,
    QAUDIOROOM_MATERIAL_MARBLE = 12,
    QAUDIOROOM_MATERIAL_METAL = 13,
    QAUDIOROOM_MATERIAL_PARQUETONCONCRETE = 14,
    QAUDIOROOM_MATERIAL_PLASTERROUGH = 15,
    QAUDIOROOM_MATERIAL_PLASTERSMOOTH = 16,
    QAUDIOROOM_MATERIAL_PLYWOODPANEL = 17,
    QAUDIOROOM_MATERIAL_POLISHEDCONCRETEORTILE = 18,
    QAUDIOROOM_MATERIAL_SHEETROCK = 19,
    QAUDIOROOM_MATERIAL_WATERORICESURFACE = 20,
    QAUDIOROOM_MATERIAL_WOODCEILING = 21,
    QAUDIOROOM_MATERIAL_WOODPANEL = 22,
    QAUDIOROOM_MATERIAL_UNIFORMMATERIAL = 23
} QAudioRoom__Material;

typedef enum {
    QAUDIOROOM_WALL_LEFTWALL = 0,
    QAUDIOROOM_WALL_RIGHTWALL = 1,
    QAUDIOROOM_WALL_FLOOR = 2,
    QAUDIOROOM_WALL_CEILING = 3,
    QAUDIOROOM_WALL_FRONTWALL = 4,
    QAUDIOROOM_WALL_BACKWALL = 5
} QAudioRoom__Wall;

#endif
