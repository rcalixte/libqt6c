#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQSPATIALSOUND_H
#define SRC_SPATIALAUDIOQT6C_LIBQSPATIALSOUND_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qspatialsound.html

/// q_spatialsound_new constructs a new QSpatialSound object.
///
/// @param engine QAudioEngine*
QSpatialSound* q_spatialsound_new(void* engine);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSpatialSound*
const QMetaObject* q_spatialsound_meta_object(void* self);

/// @param self QSpatialSound*
/// @param param1 const char*
void* q_spatialsound_metacast(void* self, const char* param1);

/// @param self QSpatialSound*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_spatialsound_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSpatialSound*
/// @param callback int32_t fn(QSpatialSound*, enum QMetaObject__Call, int, void*)
void q_spatialsound_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QSpatialSound*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_spatialsound_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_spatialsound_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSource)
///
/// @param self QSpatialSound*
/// @param url QUrl*
void q_spatialsound_set_source(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#source)
///
/// @param self QSpatialSound*
QUrl* q_spatialsound_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loops)
///
/// @param self QSpatialSound*
int32_t q_spatialsound_loops(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setLoops)
///
/// @param self QSpatialSound*
/// @param loops int
void q_spatialsound_set_loops(void* self, int loops);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlay)
///
/// @param self QSpatialSound*
bool q_spatialsound_auto_play(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setAutoPlay)
///
/// @param self QSpatialSound*
/// @param autoPlay bool
void q_spatialsound_set_auto_play(void* self, bool autoPlay);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setPosition)
///
/// @param self QSpatialSound*
/// @param pos QVector3D*
void q_spatialsound_set_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#position)
///
/// @param self QSpatialSound*
QVector3D* q_spatialsound_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setRotation)
///
/// @param self QSpatialSound*
/// @param q QQuaternion*
void q_spatialsound_set_rotation(void* self, void* q);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotation)
///
/// @param self QSpatialSound*
QQuaternion* q_spatialsound_rotation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setVolume)
///
/// @param self QSpatialSound*
/// @param volume float
void q_spatialsound_set_volume(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volume)
///
/// @param self QSpatialSound*
float q_spatialsound_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceModel)
///
/// @param self QSpatialSound*
/// @param model enum QSpatialSound__DistanceModel
void q_spatialsound_set_distance_model(void* self, int64_t model);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModel)
///
/// @param self QSpatialSound*
///
/// @return enum QSpatialSound__DistanceModel
int64_t q_spatialsound_distance_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSize)
///
/// @param self QSpatialSound*
/// @param size float
void q_spatialsound_set_size(void* self, float size);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#size)
///
/// @param self QSpatialSound*
float q_spatialsound_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceCutoff)
///
/// @param self QSpatialSound*
/// @param cutoff float
void q_spatialsound_set_distance_cutoff(void* self, float cutoff);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoff)
///
/// @param self QSpatialSound*
float q_spatialsound_distance_cutoff(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setManualAttenuation)
///
/// @param self QSpatialSound*
/// @param attenuation float
void q_spatialsound_set_manual_attenuation(void* self, float attenuation);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuation)
///
/// @param self QSpatialSound*
float q_spatialsound_manual_attenuation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setOcclusionIntensity)
///
/// @param self QSpatialSound*
/// @param occlusion float
void q_spatialsound_set_occlusion_intensity(void* self, float occlusion);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensity)
///
/// @param self QSpatialSound*
float q_spatialsound_occlusion_intensity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivity)
///
/// @param self QSpatialSound*
/// @param alpha float
void q_spatialsound_set_directivity(void* self, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivity)
///
/// @param self QSpatialSound*
float q_spatialsound_directivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivityOrder)
///
/// @param self QSpatialSound*
/// @param alpha float
void q_spatialsound_set_directivity_order(void* self, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrder)
///
/// @param self QSpatialSound*
float q_spatialsound_directivity_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setNearFieldGain)
///
/// @param self QSpatialSound*
/// @param gain float
void q_spatialsound_set_near_field_gain(void* self, float gain);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGain)
///
/// @param self QSpatialSound*
float q_spatialsound_near_field_gain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#engine)
///
/// @param self QSpatialSound*
QAudioEngine* q_spatialsound_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_source_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_source_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_loops_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_loops_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_auto_play_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_auto_play_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_position_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_position_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_rotation_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_rotation_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_volume_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_volume_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_distance_model_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_distance_model_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_size_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_size_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_distance_cutoff_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_distance_cutoff_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_manual_attenuation_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_manual_attenuation_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_occlusion_intensity_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_occlusion_intensity_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_directivity_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_directivity_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_directivity_order_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_directivity_order_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
///
/// @param self QSpatialSound*
void q_spatialsound_near_field_gain_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_near_field_gain_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#play)
///
/// @param self QSpatialSound*
void q_spatialsound_play(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#pause)
///
/// @param self QSpatialSound*
void q_spatialsound_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#stop)
///
/// @param self QSpatialSound*
void q_spatialsound_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_spatialsound_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_spatialsound_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSpatialSound*
const char* q_spatialsound_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSpatialSound*
/// @param name char*
void q_spatialsound_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSpatialSound*
bool q_spatialsound_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSpatialSound*
bool q_spatialsound_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSpatialSound*
bool q_spatialsound_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSpatialSound*
bool q_spatialsound_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSpatialSound*
/// @param b bool
bool q_spatialsound_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSpatialSound*
QThread* q_spatialsound_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSpatialSound*
/// @param thread QThread*
bool q_spatialsound_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSpatialSound*
/// @param interval int
int32_t q_spatialsound_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSpatialSound*
/// @param id int
void q_spatialsound_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSpatialSound*
/// @param id enum Qt__TimerId
void q_spatialsound_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSpatialSound*
libqt_list /* of QObject* */ q_spatialsound_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSpatialSound*
/// @param parent QObject*
void q_spatialsound_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSpatialSound*
/// @param filterObj QObject*
void q_spatialsound_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSpatialSound*
/// @param obj QObject*
void q_spatialsound_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_spatialsound_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSpatialSound*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_spatialsound_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_spatialsound_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_spatialsound_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSpatialSound*
void q_spatialsound_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSpatialSound*
void q_spatialsound_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSpatialSound*
/// @param name const char*
/// @param value QVariant*
bool q_spatialsound_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSpatialSound*
/// @param name const char*
QVariant* q_spatialsound_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSpatialSound*
const char** q_spatialsound_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSpatialSound*
QBindingStorage* q_spatialsound_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSpatialSound*
const QBindingStorage* q_spatialsound_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSpatialSound*
void q_spatialsound_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*)
void q_spatialsound_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSpatialSound*
QObject* q_spatialsound_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSpatialSound*
/// @param classname const char*
bool q_spatialsound_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSpatialSound*
void q_spatialsound_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSpatialSound*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_spatialsound_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSpatialSound*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_spatialsound_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_spatialsound_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSpatialSound*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_spatialsound_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSpatialSound*
/// @param param1 QObject*
void q_spatialsound_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*, QObject*)
void q_spatialsound_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
/// @param event QEvent*
bool q_spatialsound_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param event QEvent*
bool q_spatialsound_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback bool fn(QSpatialSound*, QEvent*)
void q_spatialsound_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
/// @param watched QObject*
/// @param event QEvent*
bool q_spatialsound_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param watched QObject*
/// @param event QEvent*
bool q_spatialsound_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback bool fn(QSpatialSound*, QObject*, QEvent*)
void q_spatialsound_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
/// @param event QTimerEvent*
void q_spatialsound_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param event QTimerEvent*
void q_spatialsound_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*, QTimerEvent*)
void q_spatialsound_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
/// @param event QChildEvent*
void q_spatialsound_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param event QChildEvent*
void q_spatialsound_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*, QChildEvent*)
void q_spatialsound_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
/// @param event QEvent*
void q_spatialsound_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param event QEvent*
void q_spatialsound_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*, QEvent*)
void q_spatialsound_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
/// @param signal QMetaMethod*
void q_spatialsound_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param signal QMetaMethod*
void q_spatialsound_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*, QMetaMethod*)
void q_spatialsound_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
/// @param signal QMetaMethod*
void q_spatialsound_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param signal QMetaMethod*
void q_spatialsound_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*, QMetaMethod*)
void q_spatialsound_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
QObject* q_spatialsound_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
QObject* q_spatialsound_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback QObject* fn()
void q_spatialsound_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
int32_t q_spatialsound_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
int32_t q_spatialsound_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback int32_t fn()
void q_spatialsound_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
/// @param signal const char*
int32_t q_spatialsound_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param signal const char*
int32_t q_spatialsound_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback int32_t fn(QSpatialSound*, const char*)
void q_spatialsound_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSpatialSound*
/// @param signal QMetaMethod*
bool q_spatialsound_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param signal QMetaMethod*
bool q_spatialsound_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSpatialSound*
/// @param callback bool fn(QSpatialSound*, QMetaMethod*)
void q_spatialsound_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSpatialSound*
/// @param callback void fn(QSpatialSound*, const char*)
void q_spatialsound_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#dtor.QSpatialSound)
///
/// Delete this object from C++ memory.
///
/// @param self QSpatialSound*
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
