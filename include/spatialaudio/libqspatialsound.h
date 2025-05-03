#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQSPATIALSOUND_H
#define SRC_SPATIALAUDIOQT6C_LIBQSPATIALSOUND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudioengine.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqquaternion.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"
#include "../libqvectornd.h"

/// https://doc.qt.io/qt-6/qspatialsound.html

/// q_spatialsound_new constructs a new QSpatialSound object.
///
/// ``` QAudioEngine* engine ```
QSpatialSound* q_spatialsound_new(void* engine);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSpatialSound* self ```
QMetaObject* q_spatialsound_meta_object(void* self);

/// ``` QSpatialSound* self, const char* param1 ```
void* q_spatialsound_metacast(void* self, const char* param1);

/// ``` QSpatialSound* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_spatialsound_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSpatialSound* self, int32_t (*slot)(QSpatialSound*, enum QMetaObject__Call, int, void*) ```
void q_spatialsound_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSpatialSound* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_spatialsound_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_spatialsound_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSource)
///
/// ``` QSpatialSound* self, QUrl* url ```
void q_spatialsound_set_source(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#source)
///
/// ``` QSpatialSound* self ```
QUrl* q_spatialsound_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loops)
///
/// ``` QSpatialSound* self ```
int32_t q_spatialsound_loops(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setLoops)
///
/// ``` QSpatialSound* self, int loops ```
void q_spatialsound_set_loops(void* self, int loops);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlay)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_auto_play(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setAutoPlay)
///
/// ``` QSpatialSound* self, bool autoPlay ```
void q_spatialsound_set_auto_play(void* self, bool autoPlay);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setPosition)
///
/// ``` QSpatialSound* self, QVector3D* pos ```
void q_spatialsound_set_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#position)
///
/// ``` QSpatialSound* self ```
QVector3D* q_spatialsound_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setRotation)
///
/// ``` QSpatialSound* self, QQuaternion* q ```
void q_spatialsound_set_rotation(void* self, void* q);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotation)
///
/// ``` QSpatialSound* self ```
QQuaternion* q_spatialsound_rotation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setVolume)
///
/// ``` QSpatialSound* self, float volume ```
void q_spatialsound_set_volume(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volume)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceModel)
///
/// ``` QSpatialSound* self, enum QSpatialSound__DistanceModel model ```
void q_spatialsound_set_distance_model(void* self, int64_t model);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModel)
///
/// ``` QSpatialSound* self ```
int64_t q_spatialsound_distance_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSize)
///
/// ``` QSpatialSound* self, float size ```
void q_spatialsound_set_size(void* self, float size);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#size)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceCutoff)
///
/// ``` QSpatialSound* self, float cutoff ```
void q_spatialsound_set_distance_cutoff(void* self, float cutoff);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoff)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_distance_cutoff(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setManualAttenuation)
///
/// ``` QSpatialSound* self, float attenuation ```
void q_spatialsound_set_manual_attenuation(void* self, float attenuation);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuation)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_manual_attenuation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setOcclusionIntensity)
///
/// ``` QSpatialSound* self, float occlusion ```
void q_spatialsound_set_occlusion_intensity(void* self, float occlusion);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensity)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_occlusion_intensity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivity)
///
/// ``` QSpatialSound* self, float alpha ```
void q_spatialsound_set_directivity(void* self, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivity)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_directivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivityOrder)
///
/// ``` QSpatialSound* self, float alpha ```
void q_spatialsound_set_directivity_order(void* self, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrder)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_directivity_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setNearFieldGain)
///
/// ``` QSpatialSound* self, float gain ```
void q_spatialsound_set_near_field_gain(void* self, float gain);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGain)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_near_field_gain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#engine)
///
/// ``` QSpatialSound* self ```
QAudioEngine* q_spatialsound_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_source_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_source_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_loops_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_loops_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_auto_play_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_auto_play_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_position_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_position_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_rotation_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_rotation_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_volume_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_volume_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_distance_model_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_distance_model_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_size_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_size_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_distance_cutoff_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_distance_cutoff_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_manual_attenuation_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_manual_attenuation_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_occlusion_intensity_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_occlusion_intensity_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_directivity_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_directivity_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_directivity_order_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_directivity_order_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_near_field_gain_changed(void* self);

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_near_field_gain_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#play)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_play(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#pause)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#stop)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_spatialsound_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_spatialsound_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSpatialSound* self ```
const char* q_spatialsound_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSpatialSound* self, char* name ```
void q_spatialsound_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSpatialSound* self, bool b ```
bool q_spatialsound_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSpatialSound* self ```
QThread* q_spatialsound_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSpatialSound* self, QThread* thread ```
void q_spatialsound_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSpatialSound* self, int interval ```
int32_t q_spatialsound_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSpatialSound* self, int id ```
void q_spatialsound_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSpatialSound* self ```
libqt_list /* of QObject* */ q_spatialsound_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSpatialSound* self, QObject* parent ```
void q_spatialsound_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSpatialSound* self, QObject* filterObj ```
void q_spatialsound_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSpatialSound* self, QObject* obj ```
void q_spatialsound_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_spatialsound_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSpatialSound* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_spatialsound_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_spatialsound_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_spatialsound_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSpatialSound* self, const char* name, QVariant* value ```
bool q_spatialsound_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSpatialSound* self, const char* name ```
QVariant* q_spatialsound_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSpatialSound* self ```
const char** q_spatialsound_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSpatialSound* self ```
QBindingStorage* q_spatialsound_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSpatialSound* self ```
QBindingStorage* q_spatialsound_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QSpatialSound* self, void (*slot)(QObject*) ```
void q_spatialsound_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSpatialSound* self ```
QObject* q_spatialsound_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSpatialSound* self, const char* classname ```
bool q_spatialsound_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSpatialSound* self, int interval, enum Qt__TimerType timerType ```
int32_t q_spatialsound_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_spatialsound_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSpatialSound* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_spatialsound_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSpatialSound* self, QObject* param1 ```
void q_spatialsound_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QSpatialSound* self, void (*slot)(QObject*, QObject*) ```
void q_spatialsound_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QEvent* event ```
bool q_spatialsound_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QEvent* event ```
bool q_spatialsound_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, bool (*slot)(QSpatialSound*, QEvent*) ```
void q_spatialsound_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QObject* watched, QEvent* event ```
bool q_spatialsound_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QObject* watched, QEvent* event ```
bool q_spatialsound_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, bool (*slot)(QSpatialSound*, QObject*, QEvent*) ```
void q_spatialsound_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QTimerEvent* event ```
void q_spatialsound_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QTimerEvent* event ```
void q_spatialsound_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QTimerEvent*) ```
void q_spatialsound_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QChildEvent* event ```
void q_spatialsound_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QChildEvent* event ```
void q_spatialsound_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QChildEvent*) ```
void q_spatialsound_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QEvent* event ```
void q_spatialsound_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QEvent* event ```
void q_spatialsound_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QEvent*) ```
void q_spatialsound_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
void q_spatialsound_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
void q_spatialsound_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QMetaMethod*) ```
void q_spatialsound_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
void q_spatialsound_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
void q_spatialsound_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QMetaMethod*) ```
void q_spatialsound_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self ```
QObject* q_spatialsound_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self ```
QObject* q_spatialsound_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, QObject* (*slot)() ```
void q_spatialsound_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self ```
int32_t q_spatialsound_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self ```
int32_t q_spatialsound_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, int32_t (*slot)() ```
void q_spatialsound_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, const char* signal ```
int32_t q_spatialsound_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, const char* signal ```
int32_t q_spatialsound_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, int32_t (*slot)(QSpatialSound*, const char*) ```
void q_spatialsound_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
bool q_spatialsound_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
bool q_spatialsound_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, bool (*slot)(QSpatialSound*, QMetaMethod*) ```
void q_spatialsound_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QSpatialSound* self ```
void q_spatialsound_delete(void* self);

/// https://doc.qt.io/qt-6/qspatialsound.html#types

typedef enum {
    QSPATIALSOUND_LOOPS_INFINITE = -1,
    QSPATIALSOUND_LOOPS_ONCE = 1
} QSpatialSound__Loops;

typedef enum {
    QSPATIALSOUND_DISTANCEMODEL_LOGARITHMIC = 0,
    QSPATIALSOUND_DISTANCEMODEL_LINEAR = 1,
    QSPATIALSOUND_DISTANCEMODEL_MANUALATTENUATION = 2
} QSpatialSound__DistanceModel;

#endif
