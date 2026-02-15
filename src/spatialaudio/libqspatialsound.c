#include "libqaudioengine.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqquaternion.hpp"
#include "../libqurl.hpp"
#include "../libqvectornd.hpp"
#include "libqspatialsound.hpp"
#include "libqspatialsound.h"

QSpatialSound* q_spatialsound_new(void* engine) {
    return QSpatialSound_new((QAudioEngine*)engine);
}

const QMetaObject* q_spatialsound_meta_object(void* self) {
    return QSpatialSound_MetaObject((QSpatialSound*)self);
}

void q_spatialsound_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QSpatialSound_OnMetaObject((QSpatialSound*)self, (intptr_t)callback);
}

const QMetaObject* q_spatialsound_qbase_meta_object(void* self) {
    return QSpatialSound_QBaseMetaObject((QSpatialSound*)self);
}

void* q_spatialsound_metacast(void* self, const char* param1) {
    return QSpatialSound_Metacast((QSpatialSound*)self, param1);
}

void q_spatialsound_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSpatialSound_OnMetacast((QSpatialSound*)self, (intptr_t)callback);
}

void* q_spatialsound_qbase_metacast(void* self, const char* param1) {
    return QSpatialSound_QBaseMetacast((QSpatialSound*)self, param1);
}

int32_t q_spatialsound_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSpatialSound_Metacall((QSpatialSound*)self, param1, param2, param3);
}

void q_spatialsound_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSpatialSound_OnMetacall((QSpatialSound*)self, (intptr_t)callback);
}

int32_t q_spatialsound_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSpatialSound_QBaseMetacall((QSpatialSound*)self, param1, param2, param3);
}

const char* q_spatialsound_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spatialsound_set_source(void* self, void* url) {
    QSpatialSound_SetSource((QSpatialSound*)self, (QUrl*)url);
}

QUrl* q_spatialsound_source(void* self) {
    return QSpatialSound_Source((QSpatialSound*)self);
}

int32_t q_spatialsound_loops(void* self) {
    return QSpatialSound_Loops((QSpatialSound*)self);
}

void q_spatialsound_set_loops(void* self, int loops) {
    QSpatialSound_SetLoops((QSpatialSound*)self, loops);
}

bool q_spatialsound_auto_play(void* self) {
    return QSpatialSound_AutoPlay((QSpatialSound*)self);
}

void q_spatialsound_set_auto_play(void* self, bool autoPlay) {
    QSpatialSound_SetAutoPlay((QSpatialSound*)self, autoPlay);
}

void q_spatialsound_set_position(void* self, void* pos) {
    QSpatialSound_SetPosition((QSpatialSound*)self, (QVector3D*)pos);
}

QVector3D* q_spatialsound_position(void* self) {
    return QSpatialSound_Position((QSpatialSound*)self);
}

void q_spatialsound_set_rotation(void* self, void* q) {
    QSpatialSound_SetRotation((QSpatialSound*)self, (QQuaternion*)q);
}

QQuaternion* q_spatialsound_rotation(void* self) {
    return QSpatialSound_Rotation((QSpatialSound*)self);
}

void q_spatialsound_set_volume(void* self, float volume) {
    QSpatialSound_SetVolume((QSpatialSound*)self, volume);
}

float q_spatialsound_volume(void* self) {
    return QSpatialSound_Volume((QSpatialSound*)self);
}

void q_spatialsound_set_distance_model(void* self, int32_t model) {
    QSpatialSound_SetDistanceModel((QSpatialSound*)self, model);
}

int32_t q_spatialsound_distance_model(void* self) {
    return QSpatialSound_DistanceModel((QSpatialSound*)self);
}

void q_spatialsound_set_size(void* self, float size) {
    QSpatialSound_SetSize((QSpatialSound*)self, size);
}

float q_spatialsound_size(void* self) {
    return QSpatialSound_Size((QSpatialSound*)self);
}

void q_spatialsound_set_distance_cutoff(void* self, float cutoff) {
    QSpatialSound_SetDistanceCutoff((QSpatialSound*)self, cutoff);
}

float q_spatialsound_distance_cutoff(void* self) {
    return QSpatialSound_DistanceCutoff((QSpatialSound*)self);
}

void q_spatialsound_set_manual_attenuation(void* self, float attenuation) {
    QSpatialSound_SetManualAttenuation((QSpatialSound*)self, attenuation);
}

float q_spatialsound_manual_attenuation(void* self) {
    return QSpatialSound_ManualAttenuation((QSpatialSound*)self);
}

void q_spatialsound_set_occlusion_intensity(void* self, float occlusion) {
    QSpatialSound_SetOcclusionIntensity((QSpatialSound*)self, occlusion);
}

float q_spatialsound_occlusion_intensity(void* self) {
    return QSpatialSound_OcclusionIntensity((QSpatialSound*)self);
}

void q_spatialsound_set_directivity(void* self, float alpha) {
    QSpatialSound_SetDirectivity((QSpatialSound*)self, alpha);
}

float q_spatialsound_directivity(void* self) {
    return QSpatialSound_Directivity((QSpatialSound*)self);
}

void q_spatialsound_set_directivity_order(void* self, float alpha) {
    QSpatialSound_SetDirectivityOrder((QSpatialSound*)self, alpha);
}

float q_spatialsound_directivity_order(void* self) {
    return QSpatialSound_DirectivityOrder((QSpatialSound*)self);
}

void q_spatialsound_set_near_field_gain(void* self, float gain) {
    QSpatialSound_SetNearFieldGain((QSpatialSound*)self, gain);
}

float q_spatialsound_near_field_gain(void* self) {
    return QSpatialSound_NearFieldGain((QSpatialSound*)self);
}

QAudioEngine* q_spatialsound_engine(void* self) {
    return QSpatialSound_Engine((QSpatialSound*)self);
}

void q_spatialsound_source_changed(void* self) {
    QSpatialSound_SourceChanged((QSpatialSound*)self);
}

void q_spatialsound_on_source_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_SourceChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_loops_changed(void* self) {
    QSpatialSound_LoopsChanged((QSpatialSound*)self);
}

void q_spatialsound_on_loops_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_LoopsChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_auto_play_changed(void* self) {
    QSpatialSound_AutoPlayChanged((QSpatialSound*)self);
}

void q_spatialsound_on_auto_play_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_AutoPlayChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_position_changed(void* self) {
    QSpatialSound_PositionChanged((QSpatialSound*)self);
}

void q_spatialsound_on_position_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_PositionChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_rotation_changed(void* self) {
    QSpatialSound_RotationChanged((QSpatialSound*)self);
}

void q_spatialsound_on_rotation_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_RotationChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_volume_changed(void* self) {
    QSpatialSound_VolumeChanged((QSpatialSound*)self);
}

void q_spatialsound_on_volume_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_VolumeChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_distance_model_changed(void* self) {
    QSpatialSound_DistanceModelChanged((QSpatialSound*)self);
}

void q_spatialsound_on_distance_model_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_DistanceModelChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_size_changed(void* self) {
    QSpatialSound_SizeChanged((QSpatialSound*)self);
}

void q_spatialsound_on_size_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_SizeChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_distance_cutoff_changed(void* self) {
    QSpatialSound_DistanceCutoffChanged((QSpatialSound*)self);
}

void q_spatialsound_on_distance_cutoff_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_DistanceCutoffChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_manual_attenuation_changed(void* self) {
    QSpatialSound_ManualAttenuationChanged((QSpatialSound*)self);
}

void q_spatialsound_on_manual_attenuation_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_ManualAttenuationChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_occlusion_intensity_changed(void* self) {
    QSpatialSound_OcclusionIntensityChanged((QSpatialSound*)self);
}

void q_spatialsound_on_occlusion_intensity_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_OcclusionIntensityChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_directivity_changed(void* self) {
    QSpatialSound_DirectivityChanged((QSpatialSound*)self);
}

void q_spatialsound_on_directivity_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_DirectivityChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_directivity_order_changed(void* self) {
    QSpatialSound_DirectivityOrderChanged((QSpatialSound*)self);
}

void q_spatialsound_on_directivity_order_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_DirectivityOrderChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_near_field_gain_changed(void* self) {
    QSpatialSound_NearFieldGainChanged((QSpatialSound*)self);
}

void q_spatialsound_on_near_field_gain_changed(void* self, void (*callback)(void*)) {
    QSpatialSound_Connect_NearFieldGainChanged((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_play(void* self) {
    QSpatialSound_Play((QSpatialSound*)self);
}

void q_spatialsound_pause(void* self) {
    QSpatialSound_Pause((QSpatialSound*)self);
}

void q_spatialsound_stop(void* self) {
    QSpatialSound_Stop((QSpatialSound*)self);
}

const char* q_spatialsound_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_spatialsound_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_spatialsound_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spatialsound_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_spatialsound_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_spatialsound_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_spatialsound_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_spatialsound_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_spatialsound_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_spatialsound_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_spatialsound_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_spatialsound_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_spatialsound_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_spatialsound_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_spatialsound_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_spatialsound_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_spatialsound_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_spatialsound_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_spatialsound_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_spatialsound_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_spatialsound_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_spatialsound_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_spatialsound_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_spatialsound_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_spatialsound_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_spatialsound_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_spatialsound_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_spatialsound_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_spatialsound_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_spatialsound_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_spatialsound_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_spatialsound_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_spatialsound_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_spatialsound_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_spatialsound_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_spatialsound_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_spatialsound_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_spatialsound_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_spatialsound_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_spatialsound_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_spatialsound_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_spatialsound_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_spatialsound_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_spatialsound_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_spatialsound_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_spatialsound_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_spatialsound_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_spatialsound_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_spatialsound_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_spatialsound_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_spatialsound_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_spatialsound_event(void* self, void* event) {
    return QSpatialSound_Event((QSpatialSound*)self, (QEvent*)event);
}

bool q_spatialsound_qbase_event(void* self, void* event) {
    return QSpatialSound_QBaseEvent((QSpatialSound*)self, (QEvent*)event);
}

void q_spatialsound_on_event(void* self, bool (*callback)(void*, void*)) {
    QSpatialSound_OnEvent((QSpatialSound*)self, (intptr_t)callback);
}

bool q_spatialsound_event_filter(void* self, void* watched, void* event) {
    return QSpatialSound_EventFilter((QSpatialSound*)self, (QObject*)watched, (QEvent*)event);
}

bool q_spatialsound_qbase_event_filter(void* self, void* watched, void* event) {
    return QSpatialSound_QBaseEventFilter((QSpatialSound*)self, (QObject*)watched, (QEvent*)event);
}

void q_spatialsound_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSpatialSound_OnEventFilter((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_timer_event(void* self, void* event) {
    QSpatialSound_TimerEvent((QSpatialSound*)self, (QTimerEvent*)event);
}

void q_spatialsound_qbase_timer_event(void* self, void* event) {
    QSpatialSound_QBaseTimerEvent((QSpatialSound*)self, (QTimerEvent*)event);
}

void q_spatialsound_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSpatialSound_OnTimerEvent((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_child_event(void* self, void* event) {
    QSpatialSound_ChildEvent((QSpatialSound*)self, (QChildEvent*)event);
}

void q_spatialsound_qbase_child_event(void* self, void* event) {
    QSpatialSound_QBaseChildEvent((QSpatialSound*)self, (QChildEvent*)event);
}

void q_spatialsound_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSpatialSound_OnChildEvent((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_custom_event(void* self, void* event) {
    QSpatialSound_CustomEvent((QSpatialSound*)self, (QEvent*)event);
}

void q_spatialsound_qbase_custom_event(void* self, void* event) {
    QSpatialSound_QBaseCustomEvent((QSpatialSound*)self, (QEvent*)event);
}

void q_spatialsound_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSpatialSound_OnCustomEvent((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_connect_notify(void* self, void* signal) {
    QSpatialSound_ConnectNotify((QSpatialSound*)self, (QMetaMethod*)signal);
}

void q_spatialsound_qbase_connect_notify(void* self, void* signal) {
    QSpatialSound_QBaseConnectNotify((QSpatialSound*)self, (QMetaMethod*)signal);
}

void q_spatialsound_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSpatialSound_OnConnectNotify((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_disconnect_notify(void* self, void* signal) {
    QSpatialSound_DisconnectNotify((QSpatialSound*)self, (QMetaMethod*)signal);
}

void q_spatialsound_qbase_disconnect_notify(void* self, void* signal) {
    QSpatialSound_QBaseDisconnectNotify((QSpatialSound*)self, (QMetaMethod*)signal);
}

void q_spatialsound_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSpatialSound_OnDisconnectNotify((QSpatialSound*)self, (intptr_t)callback);
}

QObject* q_spatialsound_sender(void* self) {
    return QSpatialSound_Sender((QSpatialSound*)self);
}

QObject* q_spatialsound_qbase_sender(void* self) {
    return QSpatialSound_QBaseSender((QSpatialSound*)self);
}

void q_spatialsound_on_sender(void* self, QObject* (*callback)()) {
    QSpatialSound_OnSender((QSpatialSound*)self, (intptr_t)callback);
}

int32_t q_spatialsound_sender_signal_index(void* self) {
    return QSpatialSound_SenderSignalIndex((QSpatialSound*)self);
}

int32_t q_spatialsound_qbase_sender_signal_index(void* self) {
    return QSpatialSound_QBaseSenderSignalIndex((QSpatialSound*)self);
}

void q_spatialsound_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSpatialSound_OnSenderSignalIndex((QSpatialSound*)self, (intptr_t)callback);
}

int32_t q_spatialsound_receivers(void* self, const char* signal) {
    return QSpatialSound_Receivers((QSpatialSound*)self, signal);
}

int32_t q_spatialsound_qbase_receivers(void* self, const char* signal) {
    return QSpatialSound_QBaseReceivers((QSpatialSound*)self, signal);
}

void q_spatialsound_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSpatialSound_OnReceivers((QSpatialSound*)self, (intptr_t)callback);
}

bool q_spatialsound_is_signal_connected(void* self, void* signal) {
    return QSpatialSound_IsSignalConnected((QSpatialSound*)self, (QMetaMethod*)signal);
}

bool q_spatialsound_qbase_is_signal_connected(void* self, void* signal) {
    return QSpatialSound_QBaseIsSignalConnected((QSpatialSound*)self, (QMetaMethod*)signal);
}

void q_spatialsound_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSpatialSound_OnIsSignalConnected((QSpatialSound*)self, (intptr_t)callback);
}

void q_spatialsound_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_spatialsound_delete(void* self) {
    QSpatialSound_Delete((QSpatialSound*)(self));
}
