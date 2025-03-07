#include "../libqanystringview.hpp"
#include "libqaudioengine.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqquaternion.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqvectornd.hpp"
#include "../libqcoreevent.hpp"
#include "libqspatialsound.hpp"
#include "libqspatialsound.h"

/// https://doc.qt.io/qt-6/qspatialsound.html

/// q_spatialsound_new constructs a new QSpatialSound object.
///
/// ``` QAudioEngine* engine ```
QSpatialSound* q_spatialsound_new(void* engine) {
    return QSpatialSound_new((QAudioEngine*)engine);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSpatialSound* self ```
QMetaObject* q_spatialsound_meta_object(void* self) {
    return QSpatialSound_MetaObject((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, const char* param1 ```
void* q_spatialsound_metacast(void* self, const char* param1) {
    return QSpatialSound_Metacast((QSpatialSound*)self, param1);
}

/// ``` QSpatialSound* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_spatialsound_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSpatialSound_Metacall((QSpatialSound*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSpatialSound* self, int32_t (*slot)(QSpatialSound*, enum QMetaObject__Call, int, void*) ```
void q_spatialsound_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSpatialSound_OnMetacall((QSpatialSound*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSpatialSound* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_spatialsound_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSpatialSound_QBaseMetacall((QSpatialSound*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_spatialsound_tr(const char* s) {
    libqt_string _str = QSpatialSound_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSource)
///
/// ``` QSpatialSound* self, QUrl* url ```
void q_spatialsound_set_source(void* self, void* url) {
    QSpatialSound_SetSource((QSpatialSound*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#source)
///
/// ``` QSpatialSound* self ```
QUrl* q_spatialsound_source(void* self) {
    return QSpatialSound_Source((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loops)
///
/// ``` QSpatialSound* self ```
int32_t q_spatialsound_loops(void* self) {
    return QSpatialSound_Loops((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setLoops)
///
/// ``` QSpatialSound* self, int loops ```
void q_spatialsound_set_loops(void* self, int loops) {
    QSpatialSound_SetLoops((QSpatialSound*)self, loops);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlay)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_auto_play(void* self) {
    return QSpatialSound_AutoPlay((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setAutoPlay)
///
/// ``` QSpatialSound* self, bool autoPlay ```
void q_spatialsound_set_auto_play(void* self, bool autoPlay) {
    QSpatialSound_SetAutoPlay((QSpatialSound*)self, autoPlay);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setPosition)
///
/// ``` QSpatialSound* self, QVector3D* pos ```
void q_spatialsound_set_position(void* self, void* pos) {
    QSpatialSound_SetPosition((QSpatialSound*)self, (QVector3D*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#position)
///
/// ``` QSpatialSound* self ```
QVector3D* q_spatialsound_position(void* self) {
    return QSpatialSound_Position((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setRotation)
///
/// ``` QSpatialSound* self, QQuaternion* q ```
void q_spatialsound_set_rotation(void* self, void* q) {
    QSpatialSound_SetRotation((QSpatialSound*)self, (QQuaternion*)q);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotation)
///
/// ``` QSpatialSound* self ```
QQuaternion* q_spatialsound_rotation(void* self) {
    return QSpatialSound_Rotation((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setVolume)
///
/// ``` QSpatialSound* self, float volume ```
void q_spatialsound_set_volume(void* self, float volume) {
    QSpatialSound_SetVolume((QSpatialSound*)self, volume);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volume)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_volume(void* self) {
    return QSpatialSound_Volume((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceModel)
///
/// ``` QSpatialSound* self, enum QSpatialSound__DistanceModel model ```
void q_spatialsound_set_distance_model(void* self, int64_t model) {
    QSpatialSound_SetDistanceModel((QSpatialSound*)self, model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModel)
///
/// ``` QSpatialSound* self ```
int64_t q_spatialsound_distance_model(void* self) {
    return QSpatialSound_DistanceModel((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setSize)
///
/// ``` QSpatialSound* self, float size ```
void q_spatialsound_set_size(void* self, float size) {
    QSpatialSound_SetSize((QSpatialSound*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#size)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_size(void* self) {
    return QSpatialSound_Size((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDistanceCutoff)
///
/// ``` QSpatialSound* self, float cutoff ```
void q_spatialsound_set_distance_cutoff(void* self, float cutoff) {
    QSpatialSound_SetDistanceCutoff((QSpatialSound*)self, cutoff);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoff)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_distance_cutoff(void* self) {
    return QSpatialSound_DistanceCutoff((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setManualAttenuation)
///
/// ``` QSpatialSound* self, float attenuation ```
void q_spatialsound_set_manual_attenuation(void* self, float attenuation) {
    QSpatialSound_SetManualAttenuation((QSpatialSound*)self, attenuation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuation)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_manual_attenuation(void* self) {
    return QSpatialSound_ManualAttenuation((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setOcclusionIntensity)
///
/// ``` QSpatialSound* self, float occlusion ```
void q_spatialsound_set_occlusion_intensity(void* self, float occlusion) {
    QSpatialSound_SetOcclusionIntensity((QSpatialSound*)self, occlusion);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensity)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_occlusion_intensity(void* self) {
    return QSpatialSound_OcclusionIntensity((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivity)
///
/// ``` QSpatialSound* self, float alpha ```
void q_spatialsound_set_directivity(void* self, float alpha) {
    QSpatialSound_SetDirectivity((QSpatialSound*)self, alpha);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivity)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_directivity(void* self) {
    return QSpatialSound_Directivity((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setDirectivityOrder)
///
/// ``` QSpatialSound* self, float alpha ```
void q_spatialsound_set_directivity_order(void* self, float alpha) {
    QSpatialSound_SetDirectivityOrder((QSpatialSound*)self, alpha);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrder)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_directivity_order(void* self) {
    return QSpatialSound_DirectivityOrder((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#setNearFieldGain)
///
/// ``` QSpatialSound* self, float gain ```
void q_spatialsound_set_near_field_gain(void* self, float gain) {
    QSpatialSound_SetNearFieldGain((QSpatialSound*)self, gain);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGain)
///
/// ``` QSpatialSound* self ```
float q_spatialsound_near_field_gain(void* self) {
    return QSpatialSound_NearFieldGain((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#engine)
///
/// ``` QSpatialSound* self ```
QAudioEngine* q_spatialsound_engine(void* self) {
    return QSpatialSound_Engine((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sourceChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_source_changed(void* self) {
    QSpatialSound_SourceChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_source_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_SourceChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#loopsChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_loops_changed(void* self) {
    QSpatialSound_LoopsChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_loops_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_LoopsChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#autoPlayChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_auto_play_changed(void* self) {
    QSpatialSound_AutoPlayChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_auto_play_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_AutoPlayChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#positionChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_position_changed(void* self) {
    QSpatialSound_PositionChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_position_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_PositionChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#rotationChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_rotation_changed(void* self) {
    QSpatialSound_RotationChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_rotation_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_RotationChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#volumeChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_volume_changed(void* self) {
    QSpatialSound_VolumeChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_volume_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_VolumeChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceModelChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_distance_model_changed(void* self) {
    QSpatialSound_DistanceModelChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_distance_model_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_DistanceModelChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#sizeChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_size_changed(void* self) {
    QSpatialSound_SizeChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_size_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_SizeChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#distanceCutoffChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_distance_cutoff_changed(void* self) {
    QSpatialSound_DistanceCutoffChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_distance_cutoff_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_DistanceCutoffChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#manualAttenuationChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_manual_attenuation_changed(void* self) {
    QSpatialSound_ManualAttenuationChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_manual_attenuation_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_ManualAttenuationChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#occlusionIntensityChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_occlusion_intensity_changed(void* self) {
    QSpatialSound_OcclusionIntensityChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_occlusion_intensity_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_OcclusionIntensityChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_directivity_changed(void* self) {
    QSpatialSound_DirectivityChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_directivity_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_DirectivityChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#directivityOrderChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_directivity_order_changed(void* self) {
    QSpatialSound_DirectivityOrderChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_directivity_order_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_DirectivityOrderChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#nearFieldGainChanged)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_near_field_gain_changed(void* self) {
    QSpatialSound_NearFieldGainChanged((QSpatialSound*)self);
}

/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*) ```
void q_spatialsound_on_near_field_gain_changed(void* self, void (*slot)(void*)) {
    QSpatialSound_Connect_NearFieldGainChanged((QSpatialSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#play)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_play(void* self) {
    QSpatialSound_Play((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#pause)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_pause(void* self) {
    QSpatialSound_Pause((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qspatialsound.html#stop)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_stop(void* self) {
    QSpatialSound_Stop((QSpatialSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_spatialsound_tr2(const char* s, const char* c) {
    libqt_string _str = QSpatialSound_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_spatialsound_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSpatialSound_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSpatialSound* self ```
const char* q_spatialsound_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSpatialSound* self, const char* name ```
void q_spatialsound_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSpatialSound* self ```
bool q_spatialsound_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSpatialSound* self, bool b ```
bool q_spatialsound_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSpatialSound* self ```
QThread* q_spatialsound_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSpatialSound* self, QThread* thread ```
void q_spatialsound_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSpatialSound* self, int interval ```
int32_t q_spatialsound_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSpatialSound* self, int id ```
void q_spatialsound_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSpatialSound* self ```
libqt_list /* of QObject* */ q_spatialsound_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSpatialSound* self, QObject* parent ```
void q_spatialsound_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSpatialSound* self, QObject* filterObj ```
void q_spatialsound_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSpatialSound* self, QObject* obj ```
void q_spatialsound_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_spatialsound_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSpatialSound* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_spatialsound_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_spatialsound_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_spatialsound_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSpatialSound* self, const char* name, QVariant* value ```
bool q_spatialsound_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSpatialSound* self, const char* name ```
QVariant* q_spatialsound_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSpatialSound* self ```
const char** q_spatialsound_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSpatialSound* self ```
QBindingStorage* q_spatialsound_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSpatialSound* self ```
QBindingStorage* q_spatialsound_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSpatialSound* self, void (*slot)(QObject*) ```
void q_spatialsound_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSpatialSound* self ```
QObject* q_spatialsound_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSpatialSound* self, const char* classname ```
bool q_spatialsound_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSpatialSound* self ```
void q_spatialsound_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSpatialSound* self, int interval, enum Qt__TimerType timerType ```
int32_t q_spatialsound_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_spatialsound_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSpatialSound* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_spatialsound_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSpatialSound* self, QObject* param1 ```
void q_spatialsound_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSpatialSound* self, void (*slot)(QObject*, QObject*) ```
void q_spatialsound_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QEvent* event ```
bool q_spatialsound_event(void* self, void* event) {
    return QSpatialSound_Event((QSpatialSound*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QEvent* event ```
bool q_spatialsound_qbase_event(void* self, void* event) {
    return QSpatialSound_QBaseEvent((QSpatialSound*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, bool (*slot)(QSpatialSound*, QEvent*) ```
void q_spatialsound_on_event(void* self, bool (*slot)(void*, void*)) {
    QSpatialSound_OnEvent((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QObject* watched, QEvent* event ```
bool q_spatialsound_event_filter(void* self, void* watched, void* event) {
    return QSpatialSound_EventFilter((QSpatialSound*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QObject* watched, QEvent* event ```
bool q_spatialsound_qbase_event_filter(void* self, void* watched, void* event) {
    return QSpatialSound_QBaseEventFilter((QSpatialSound*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, bool (*slot)(QSpatialSound*, QObject*, QEvent*) ```
void q_spatialsound_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSpatialSound_OnEventFilter((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QTimerEvent* event ```
void q_spatialsound_timer_event(void* self, void* event) {
    QSpatialSound_TimerEvent((QSpatialSound*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QTimerEvent* event ```
void q_spatialsound_qbase_timer_event(void* self, void* event) {
    QSpatialSound_QBaseTimerEvent((QSpatialSound*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QTimerEvent*) ```
void q_spatialsound_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSpatialSound_OnTimerEvent((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QChildEvent* event ```
void q_spatialsound_child_event(void* self, void* event) {
    QSpatialSound_ChildEvent((QSpatialSound*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QChildEvent* event ```
void q_spatialsound_qbase_child_event(void* self, void* event) {
    QSpatialSound_QBaseChildEvent((QSpatialSound*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QChildEvent*) ```
void q_spatialsound_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSpatialSound_OnChildEvent((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QEvent* event ```
void q_spatialsound_custom_event(void* self, void* event) {
    QSpatialSound_CustomEvent((QSpatialSound*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QEvent* event ```
void q_spatialsound_qbase_custom_event(void* self, void* event) {
    QSpatialSound_QBaseCustomEvent((QSpatialSound*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QEvent*) ```
void q_spatialsound_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSpatialSound_OnCustomEvent((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
void q_spatialsound_connect_notify(void* self, void* signal) {
    QSpatialSound_ConnectNotify((QSpatialSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
void q_spatialsound_qbase_connect_notify(void* self, void* signal) {
    QSpatialSound_QBaseConnectNotify((QSpatialSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QMetaMethod*) ```
void q_spatialsound_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSpatialSound_OnConnectNotify((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
void q_spatialsound_disconnect_notify(void* self, void* signal) {
    QSpatialSound_DisconnectNotify((QSpatialSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
void q_spatialsound_qbase_disconnect_notify(void* self, void* signal) {
    QSpatialSound_QBaseDisconnectNotify((QSpatialSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, void (*slot)(QSpatialSound*, QMetaMethod*) ```
void q_spatialsound_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSpatialSound_OnDisconnectNotify((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self ```
QObject* q_spatialsound_sender(void* self) {
    return QSpatialSound_Sender((QSpatialSound*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self ```
QObject* q_spatialsound_qbase_sender(void* self) {
    return QSpatialSound_QBaseSender((QSpatialSound*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, QObject* (*slot)() ```
void q_spatialsound_on_sender(void* self, QObject* (*slot)()) {
    QSpatialSound_OnSender((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self ```
int32_t q_spatialsound_sender_signal_index(void* self) {
    return QSpatialSound_SenderSignalIndex((QSpatialSound*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self ```
int32_t q_spatialsound_qbase_sender_signal_index(void* self) {
    return QSpatialSound_QBaseSenderSignalIndex((QSpatialSound*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, int32_t (*slot)() ```
void q_spatialsound_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSpatialSound_OnSenderSignalIndex((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, const char* signal ```
int32_t q_spatialsound_receivers(void* self, const char* signal) {
    return QSpatialSound_Receivers((QSpatialSound*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, const char* signal ```
int32_t q_spatialsound_qbase_receivers(void* self, const char* signal) {
    return QSpatialSound_QBaseReceivers((QSpatialSound*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, int32_t (*slot)(QSpatialSound*, const char*) ```
void q_spatialsound_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSpatialSound_OnReceivers((QSpatialSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
bool q_spatialsound_is_signal_connected(void* self, void* signal) {
    return QSpatialSound_IsSignalConnected((QSpatialSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSpatialSound* self, QMetaMethod* signal ```
bool q_spatialsound_qbase_is_signal_connected(void* self, void* signal) {
    return QSpatialSound_QBaseIsSignalConnected((QSpatialSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSpatialSound* self, bool (*slot)(QSpatialSound*, QMetaMethod*) ```
void q_spatialsound_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSpatialSound_OnIsSignalConnected((QSpatialSound*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSpatialSound* self ```
void q_spatialsound_delete(void* self) {
    QSpatialSound_Delete((QSpatialSound*)(self));
}