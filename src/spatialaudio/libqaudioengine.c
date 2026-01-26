#include "../multimedia/libqaudiodevice.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqaudioengine.hpp"
#include "libqaudioengine.h"

QAudioEngine* q_audioengine_new() {
    return QAudioEngine_new();
}

QAudioEngine* q_audioengine_new2(void* parent) {
    return QAudioEngine_new2((QObject*)parent);
}

QAudioEngine* q_audioengine_new3(int sampleRate) {
    return QAudioEngine_new3(sampleRate);
}

QAudioEngine* q_audioengine_new4(int sampleRate, void* parent) {
    return QAudioEngine_new4(sampleRate, (QObject*)parent);
}

const QMetaObject* q_audioengine_meta_object(void* self) {
    return QAudioEngine_MetaObject((QAudioEngine*)self);
}

void q_audioengine_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QAudioEngine_OnMetaObject((QAudioEngine*)self, (intptr_t)callback);
}

const QMetaObject* q_audioengine_qbase_meta_object(void* self) {
    return QAudioEngine_QBaseMetaObject((QAudioEngine*)self);
}

void* q_audioengine_metacast(void* self, const char* param1) {
    return QAudioEngine_Metacast((QAudioEngine*)self, param1);
}

void q_audioengine_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAudioEngine_OnMetacast((QAudioEngine*)self, (intptr_t)callback);
}

void* q_audioengine_qbase_metacast(void* self, const char* param1) {
    return QAudioEngine_QBaseMetacast((QAudioEngine*)self, param1);
}

int32_t q_audioengine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioEngine_Metacall((QAudioEngine*)self, param1, param2, param3);
}

void q_audioengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAudioEngine_OnMetacall((QAudioEngine*)self, (intptr_t)callback);
}

int32_t q_audioengine_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioEngine_QBaseMetacall((QAudioEngine*)self, param1, param2, param3);
}

const char* q_audioengine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audioengine_set_output_mode(void* self, int32_t mode) {
    QAudioEngine_SetOutputMode((QAudioEngine*)self, mode);
}

int32_t q_audioengine_output_mode(void* self) {
    return QAudioEngine_OutputMode((QAudioEngine*)self);
}

int32_t q_audioengine_sample_rate(void* self) {
    return QAudioEngine_SampleRate((QAudioEngine*)self);
}

void q_audioengine_set_output_device(void* self, void* device) {
    QAudioEngine_SetOutputDevice((QAudioEngine*)self, (QAudioDevice*)device);
}

QAudioDevice* q_audioengine_output_device(void* self) {
    return QAudioEngine_OutputDevice((QAudioEngine*)self);
}

void q_audioengine_set_master_volume(void* self, float volume) {
    QAudioEngine_SetMasterVolume((QAudioEngine*)self, volume);
}

float q_audioengine_master_volume(void* self) {
    return QAudioEngine_MasterVolume((QAudioEngine*)self);
}

void q_audioengine_set_paused(void* self, bool paused) {
    QAudioEngine_SetPaused((QAudioEngine*)self, paused);
}

bool q_audioengine_paused(void* self) {
    return QAudioEngine_Paused((QAudioEngine*)self);
}

void q_audioengine_set_room_effects_enabled(void* self, bool enabled) {
    QAudioEngine_SetRoomEffectsEnabled((QAudioEngine*)self, enabled);
}

bool q_audioengine_room_effects_enabled(void* self) {
    return QAudioEngine_RoomEffectsEnabled((QAudioEngine*)self);
}

void q_audioengine_set_distance_scale(void* self, float scale) {
    QAudioEngine_SetDistanceScale((QAudioEngine*)self, scale);
}

float q_audioengine_distance_scale(void* self) {
    return QAudioEngine_DistanceScale((QAudioEngine*)self);
}

void q_audioengine_output_mode_changed(void* self) {
    QAudioEngine_OutputModeChanged((QAudioEngine*)self);
}

void q_audioengine_on_output_mode_changed(void* self, void (*callback)(void*)) {
    QAudioEngine_Connect_OutputModeChanged((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_output_device_changed(void* self) {
    QAudioEngine_OutputDeviceChanged((QAudioEngine*)self);
}

void q_audioengine_on_output_device_changed(void* self, void (*callback)(void*)) {
    QAudioEngine_Connect_OutputDeviceChanged((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_master_volume_changed(void* self) {
    QAudioEngine_MasterVolumeChanged((QAudioEngine*)self);
}

void q_audioengine_on_master_volume_changed(void* self, void (*callback)(void*)) {
    QAudioEngine_Connect_MasterVolumeChanged((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_paused_changed(void* self) {
    QAudioEngine_PausedChanged((QAudioEngine*)self);
}

void q_audioengine_on_paused_changed(void* self, void (*callback)(void*)) {
    QAudioEngine_Connect_PausedChanged((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_distance_scale_changed(void* self) {
    QAudioEngine_DistanceScaleChanged((QAudioEngine*)self);
}

void q_audioengine_on_distance_scale_changed(void* self, void (*callback)(void*)) {
    QAudioEngine_Connect_DistanceScaleChanged((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_start(void* self) {
    QAudioEngine_Start((QAudioEngine*)self);
}

void q_audioengine_stop(void* self) {
    QAudioEngine_Stop((QAudioEngine*)self);
}

void q_audioengine_pause(void* self) {
    QAudioEngine_Pause((QAudioEngine*)self);
}

void q_audioengine_resume(void* self) {
    QAudioEngine_Resume((QAudioEngine*)self);
}

const char* q_audioengine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audioengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audioengine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audioengine_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_audioengine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audioengine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audioengine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audioengine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audioengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audioengine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_audioengine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audioengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_audioengine_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_audioengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_audioengine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audioengine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audioengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audioengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audioengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audioengine_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audioengine_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audioengine_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audioengine_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_audioengine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audioengine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audioengine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audioengine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audioengine_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_audioengine_dynamic_property_names\n");
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

QBindingStorage* q_audioengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_audioengine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audioengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audioengine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_audioengine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audioengine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audioengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_audioengine_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_audioengine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_audioengine_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_audioengine_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_audioengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_audioengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audioengine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_audioengine_event(void* self, void* event) {
    return QAudioEngine_Event((QAudioEngine*)self, (QEvent*)event);
}

bool q_audioengine_qbase_event(void* self, void* event) {
    return QAudioEngine_QBaseEvent((QAudioEngine*)self, (QEvent*)event);
}

void q_audioengine_on_event(void* self, bool (*callback)(void*, void*)) {
    QAudioEngine_OnEvent((QAudioEngine*)self, (intptr_t)callback);
}

bool q_audioengine_event_filter(void* self, void* watched, void* event) {
    return QAudioEngine_EventFilter((QAudioEngine*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audioengine_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioEngine_QBaseEventFilter((QAudioEngine*)self, (QObject*)watched, (QEvent*)event);
}

void q_audioengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAudioEngine_OnEventFilter((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_timer_event(void* self, void* event) {
    QAudioEngine_TimerEvent((QAudioEngine*)self, (QTimerEvent*)event);
}

void q_audioengine_qbase_timer_event(void* self, void* event) {
    QAudioEngine_QBaseTimerEvent((QAudioEngine*)self, (QTimerEvent*)event);
}

void q_audioengine_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAudioEngine_OnTimerEvent((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_child_event(void* self, void* event) {
    QAudioEngine_ChildEvent((QAudioEngine*)self, (QChildEvent*)event);
}

void q_audioengine_qbase_child_event(void* self, void* event) {
    QAudioEngine_QBaseChildEvent((QAudioEngine*)self, (QChildEvent*)event);
}

void q_audioengine_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAudioEngine_OnChildEvent((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_custom_event(void* self, void* event) {
    QAudioEngine_CustomEvent((QAudioEngine*)self, (QEvent*)event);
}

void q_audioengine_qbase_custom_event(void* self, void* event) {
    QAudioEngine_QBaseCustomEvent((QAudioEngine*)self, (QEvent*)event);
}

void q_audioengine_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAudioEngine_OnCustomEvent((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_connect_notify(void* self, void* signal) {
    QAudioEngine_ConnectNotify((QAudioEngine*)self, (QMetaMethod*)signal);
}

void q_audioengine_qbase_connect_notify(void* self, void* signal) {
    QAudioEngine_QBaseConnectNotify((QAudioEngine*)self, (QMetaMethod*)signal);
}

void q_audioengine_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioEngine_OnConnectNotify((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_disconnect_notify(void* self, void* signal) {
    QAudioEngine_DisconnectNotify((QAudioEngine*)self, (QMetaMethod*)signal);
}

void q_audioengine_qbase_disconnect_notify(void* self, void* signal) {
    QAudioEngine_QBaseDisconnectNotify((QAudioEngine*)self, (QMetaMethod*)signal);
}

void q_audioengine_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioEngine_OnDisconnectNotify((QAudioEngine*)self, (intptr_t)callback);
}

QObject* q_audioengine_sender(void* self) {
    return QAudioEngine_Sender((QAudioEngine*)self);
}

QObject* q_audioengine_qbase_sender(void* self) {
    return QAudioEngine_QBaseSender((QAudioEngine*)self);
}

void q_audioengine_on_sender(void* self, QObject* (*callback)()) {
    QAudioEngine_OnSender((QAudioEngine*)self, (intptr_t)callback);
}

int32_t q_audioengine_sender_signal_index(void* self) {
    return QAudioEngine_SenderSignalIndex((QAudioEngine*)self);
}

int32_t q_audioengine_qbase_sender_signal_index(void* self) {
    return QAudioEngine_QBaseSenderSignalIndex((QAudioEngine*)self);
}

void q_audioengine_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAudioEngine_OnSenderSignalIndex((QAudioEngine*)self, (intptr_t)callback);
}

int32_t q_audioengine_receivers(void* self, const char* signal) {
    return QAudioEngine_Receivers((QAudioEngine*)self, signal);
}

int32_t q_audioengine_qbase_receivers(void* self, const char* signal) {
    return QAudioEngine_QBaseReceivers((QAudioEngine*)self, signal);
}

void q_audioengine_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAudioEngine_OnReceivers((QAudioEngine*)self, (intptr_t)callback);
}

bool q_audioengine_is_signal_connected(void* self, void* signal) {
    return QAudioEngine_IsSignalConnected((QAudioEngine*)self, (QMetaMethod*)signal);
}

bool q_audioengine_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioEngine_QBaseIsSignalConnected((QAudioEngine*)self, (QMetaMethod*)signal);
}

void q_audioengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAudioEngine_OnIsSignalConnected((QAudioEngine*)self, (intptr_t)callback);
}

void q_audioengine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_audioengine_delete(void* self) {
    QAudioEngine_Delete((QAudioEngine*)(self));
}
