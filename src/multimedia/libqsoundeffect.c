#include "../libqanystringview.hpp"
#include "libqaudiodevice.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqsoundeffect.hpp"
#include "libqsoundeffect.h"

QSoundEffect* q_soundeffect_new() {
    return QSoundEffect_new();
}

QSoundEffect* q_soundeffect_new2(void* audioDevice) {
    return QSoundEffect_new2((QAudioDevice*)audioDevice);
}

QSoundEffect* q_soundeffect_new3(void* parent) {
    return QSoundEffect_new3((QObject*)parent);
}

QSoundEffect* q_soundeffect_new4(void* audioDevice, void* parent) {
    return QSoundEffect_new4((QAudioDevice*)audioDevice, (QObject*)parent);
}

QMetaObject* q_soundeffect_meta_object(void* self) {
    return QSoundEffect_MetaObject((QSoundEffect*)self);
}

void* q_soundeffect_metacast(void* self, const char* param1) {
    return QSoundEffect_Metacast((QSoundEffect*)self, param1);
}

int32_t q_soundeffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSoundEffect_Metacall((QSoundEffect*)self, param1, param2, param3);
}

void q_soundeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSoundEffect_OnMetacall((QSoundEffect*)self, (intptr_t)slot);
}

int32_t q_soundeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSoundEffect_QBaseMetacall((QSoundEffect*)self, param1, param2, param3);
}

const char* q_soundeffect_tr(const char* s) {
    libqt_string _str = QSoundEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_soundeffect_supported_mime_types() {
    libqt_list _arr = QSoundEffect_SupportedMimeTypes();
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

QUrl* q_soundeffect_source(void* self) {
    return QSoundEffect_Source((QSoundEffect*)self);
}

void q_soundeffect_set_source(void* self, void* url) {
    QSoundEffect_SetSource((QSoundEffect*)self, (QUrl*)url);
}

int32_t q_soundeffect_loop_count(void* self) {
    return QSoundEffect_LoopCount((QSoundEffect*)self);
}

int32_t q_soundeffect_loops_remaining(void* self) {
    return QSoundEffect_LoopsRemaining((QSoundEffect*)self);
}

void q_soundeffect_set_loop_count(void* self, int loopCount) {
    QSoundEffect_SetLoopCount((QSoundEffect*)self, loopCount);
}

QAudioDevice* q_soundeffect_audio_device(void* self) {
    return QSoundEffect_AudioDevice((QSoundEffect*)self);
}

void q_soundeffect_set_audio_device(void* self, void* device) {
    QSoundEffect_SetAudioDevice((QSoundEffect*)self, (QAudioDevice*)device);
}

float q_soundeffect_volume(void* self) {
    return QSoundEffect_Volume((QSoundEffect*)self);
}

void q_soundeffect_set_volume(void* self, float volume) {
    QSoundEffect_SetVolume((QSoundEffect*)self, volume);
}

bool q_soundeffect_is_muted(void* self) {
    return QSoundEffect_IsMuted((QSoundEffect*)self);
}

void q_soundeffect_set_muted(void* self, bool muted) {
    QSoundEffect_SetMuted((QSoundEffect*)self, muted);
}

bool q_soundeffect_is_loaded(void* self) {
    return QSoundEffect_IsLoaded((QSoundEffect*)self);
}

bool q_soundeffect_is_playing(void* self) {
    return QSoundEffect_IsPlaying((QSoundEffect*)self);
}

int64_t q_soundeffect_status(void* self) {
    return QSoundEffect_Status((QSoundEffect*)self);
}

void q_soundeffect_source_changed(void* self) {
    QSoundEffect_SourceChanged((QSoundEffect*)self);
}

void q_soundeffect_on_source_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_SourceChanged((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_loop_count_changed(void* self) {
    QSoundEffect_LoopCountChanged((QSoundEffect*)self);
}

void q_soundeffect_on_loop_count_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_LoopCountChanged((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_loops_remaining_changed(void* self) {
    QSoundEffect_LoopsRemainingChanged((QSoundEffect*)self);
}

void q_soundeffect_on_loops_remaining_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_LoopsRemainingChanged((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_volume_changed(void* self) {
    QSoundEffect_VolumeChanged((QSoundEffect*)self);
}

void q_soundeffect_on_volume_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_VolumeChanged((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_muted_changed(void* self) {
    QSoundEffect_MutedChanged((QSoundEffect*)self);
}

void q_soundeffect_on_muted_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_MutedChanged((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_loaded_changed(void* self) {
    QSoundEffect_LoadedChanged((QSoundEffect*)self);
}

void q_soundeffect_on_loaded_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_LoadedChanged((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_playing_changed(void* self) {
    QSoundEffect_PlayingChanged((QSoundEffect*)self);
}

void q_soundeffect_on_playing_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_PlayingChanged((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_status_changed(void* self) {
    QSoundEffect_StatusChanged((QSoundEffect*)self);
}

void q_soundeffect_on_status_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_StatusChanged((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_audio_device_changed(void* self) {
    QSoundEffect_AudioDeviceChanged((QSoundEffect*)self);
}

void q_soundeffect_on_audio_device_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_AudioDeviceChanged((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_play(void* self) {
    QSoundEffect_Play((QSoundEffect*)self);
}

void q_soundeffect_stop(void* self) {
    QSoundEffect_Stop((QSoundEffect*)self);
}

const char* q_soundeffect_tr2(const char* s, const char* c) {
    libqt_string _str = QSoundEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_soundeffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSoundEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_soundeffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_soundeffect_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_soundeffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_soundeffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_soundeffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_soundeffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_soundeffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_soundeffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_soundeffect_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_soundeffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_soundeffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_soundeffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_soundeffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_soundeffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_soundeffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_soundeffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_soundeffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_soundeffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_soundeffect_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_soundeffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_soundeffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_soundeffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_soundeffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_soundeffect_dynamic_property_names(void* self) {
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

QBindingStorage* q_soundeffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_soundeffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_soundeffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_soundeffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_soundeffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_soundeffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_soundeffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_soundeffect_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_soundeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_soundeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_soundeffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_soundeffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_soundeffect_event(void* self, void* event) {
    return QSoundEffect_Event((QSoundEffect*)self, (QEvent*)event);
}

bool q_soundeffect_qbase_event(void* self, void* event) {
    return QSoundEffect_QBaseEvent((QSoundEffect*)self, (QEvent*)event);
}

void q_soundeffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QSoundEffect_OnEvent((QSoundEffect*)self, (intptr_t)slot);
}

bool q_soundeffect_event_filter(void* self, void* watched, void* event) {
    return QSoundEffect_EventFilter((QSoundEffect*)self, (QObject*)watched, (QEvent*)event);
}

bool q_soundeffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QSoundEffect_QBaseEventFilter((QSoundEffect*)self, (QObject*)watched, (QEvent*)event);
}

void q_soundeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSoundEffect_OnEventFilter((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_timer_event(void* self, void* event) {
    QSoundEffect_TimerEvent((QSoundEffect*)self, (QTimerEvent*)event);
}

void q_soundeffect_qbase_timer_event(void* self, void* event) {
    QSoundEffect_QBaseTimerEvent((QSoundEffect*)self, (QTimerEvent*)event);
}

void q_soundeffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnTimerEvent((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_child_event(void* self, void* event) {
    QSoundEffect_ChildEvent((QSoundEffect*)self, (QChildEvent*)event);
}

void q_soundeffect_qbase_child_event(void* self, void* event) {
    QSoundEffect_QBaseChildEvent((QSoundEffect*)self, (QChildEvent*)event);
}

void q_soundeffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnChildEvent((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_custom_event(void* self, void* event) {
    QSoundEffect_CustomEvent((QSoundEffect*)self, (QEvent*)event);
}

void q_soundeffect_qbase_custom_event(void* self, void* event) {
    QSoundEffect_QBaseCustomEvent((QSoundEffect*)self, (QEvent*)event);
}

void q_soundeffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnCustomEvent((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_connect_notify(void* self, void* signal) {
    QSoundEffect_ConnectNotify((QSoundEffect*)self, (QMetaMethod*)signal);
}

void q_soundeffect_qbase_connect_notify(void* self, void* signal) {
    QSoundEffect_QBaseConnectNotify((QSoundEffect*)self, (QMetaMethod*)signal);
}

void q_soundeffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnConnectNotify((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_disconnect_notify(void* self, void* signal) {
    QSoundEffect_DisconnectNotify((QSoundEffect*)self, (QMetaMethod*)signal);
}

void q_soundeffect_qbase_disconnect_notify(void* self, void* signal) {
    QSoundEffect_QBaseDisconnectNotify((QSoundEffect*)self, (QMetaMethod*)signal);
}

void q_soundeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnDisconnectNotify((QSoundEffect*)self, (intptr_t)slot);
}

QObject* q_soundeffect_sender(void* self) {
    return QSoundEffect_Sender((QSoundEffect*)self);
}

QObject* q_soundeffect_qbase_sender(void* self) {
    return QSoundEffect_QBaseSender((QSoundEffect*)self);
}

void q_soundeffect_on_sender(void* self, QObject* (*slot)()) {
    QSoundEffect_OnSender((QSoundEffect*)self, (intptr_t)slot);
}

int32_t q_soundeffect_sender_signal_index(void* self) {
    return QSoundEffect_SenderSignalIndex((QSoundEffect*)self);
}

int32_t q_soundeffect_qbase_sender_signal_index(void* self) {
    return QSoundEffect_QBaseSenderSignalIndex((QSoundEffect*)self);
}

void q_soundeffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSoundEffect_OnSenderSignalIndex((QSoundEffect*)self, (intptr_t)slot);
}

int32_t q_soundeffect_receivers(void* self, const char* signal) {
    return QSoundEffect_Receivers((QSoundEffect*)self, signal);
}

int32_t q_soundeffect_qbase_receivers(void* self, const char* signal) {
    return QSoundEffect_QBaseReceivers((QSoundEffect*)self, signal);
}

void q_soundeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSoundEffect_OnReceivers((QSoundEffect*)self, (intptr_t)slot);
}

bool q_soundeffect_is_signal_connected(void* self, void* signal) {
    return QSoundEffect_IsSignalConnected((QSoundEffect*)self, (QMetaMethod*)signal);
}

bool q_soundeffect_qbase_is_signal_connected(void* self, void* signal) {
    return QSoundEffect_QBaseIsSignalConnected((QSoundEffect*)self, (QMetaMethod*)signal);
}

void q_soundeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSoundEffect_OnIsSignalConnected((QSoundEffect*)self, (intptr_t)slot);
}

void q_soundeffect_delete(void* self) {
    QSoundEffect_Delete((QSoundEffect*)(self));
}
