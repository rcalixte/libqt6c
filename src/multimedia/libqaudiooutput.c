#include "libqaudiodevice.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqaudiooutput.hpp"
#include "libqaudiooutput.h"

QAudioOutput* q_audiooutput_new() {
    return QAudioOutput_new();
}

QAudioOutput* q_audiooutput_new2(void* device) {
    return QAudioOutput_new2((QAudioDevice*)device);
}

QAudioOutput* q_audiooutput_new3(void* parent) {
    return QAudioOutput_new3((QObject*)parent);
}

QAudioOutput* q_audiooutput_new4(void* device, void* parent) {
    return QAudioOutput_new4((QAudioDevice*)device, (QObject*)parent);
}

const QMetaObject* q_audiooutput_meta_object(void* self) {
    return QAudioOutput_MetaObject((QAudioOutput*)self);
}

void* q_audiooutput_metacast(void* self, const char* param1) {
    return QAudioOutput_Metacast((QAudioOutput*)self, param1);
}

int32_t q_audiooutput_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioOutput_Metacall((QAudioOutput*)self, param1, param2, param3);
}

void q_audiooutput_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QAudioOutput_OnMetacall((QAudioOutput*)self, (intptr_t)callback);
}

int32_t q_audiooutput_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioOutput_QBaseMetacall((QAudioOutput*)self, param1, param2, param3);
}

const char* q_audiooutput_tr(const char* s) {
    libqt_string _str = QAudioOutput_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAudioDevice* q_audiooutput_device(void* self) {
    return QAudioOutput_Device((QAudioOutput*)self);
}

float q_audiooutput_volume(void* self) {
    return QAudioOutput_Volume((QAudioOutput*)self);
}

bool q_audiooutput_is_muted(void* self) {
    return QAudioOutput_IsMuted((QAudioOutput*)self);
}

void q_audiooutput_set_device(void* self, void* device) {
    QAudioOutput_SetDevice((QAudioOutput*)self, (QAudioDevice*)device);
}

void q_audiooutput_set_volume(void* self, float volume) {
    QAudioOutput_SetVolume((QAudioOutput*)self, volume);
}

void q_audiooutput_set_muted(void* self, bool muted) {
    QAudioOutput_SetMuted((QAudioOutput*)self, muted);
}

void q_audiooutput_device_changed(void* self) {
    QAudioOutput_DeviceChanged((QAudioOutput*)self);
}

void q_audiooutput_on_device_changed(void* self, void (*callback)(void*)) {
    QAudioOutput_Connect_DeviceChanged((QAudioOutput*)self, (intptr_t)callback);
}

void q_audiooutput_volume_changed(void* self, float volume) {
    QAudioOutput_VolumeChanged((QAudioOutput*)self, volume);
}

void q_audiooutput_on_volume_changed(void* self, void (*callback)(void*, float)) {
    QAudioOutput_Connect_VolumeChanged((QAudioOutput*)self, (intptr_t)callback);
}

void q_audiooutput_muted_changed(void* self, bool muted) {
    QAudioOutput_MutedChanged((QAudioOutput*)self, muted);
}

void q_audiooutput_on_muted_changed(void* self, void (*callback)(void*, bool)) {
    QAudioOutput_Connect_MutedChanged((QAudioOutput*)self, (intptr_t)callback);
}

const char* q_audiooutput_tr2(const char* s, const char* c) {
    libqt_string _str = QAudioOutput_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiooutput_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAudioOutput_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiooutput_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audiooutput_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_audiooutput_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audiooutput_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audiooutput_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audiooutput_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audiooutput_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audiooutput_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_audiooutput_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audiooutput_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_audiooutput_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_audiooutput_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audiooutput_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audiooutput_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audiooutput_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audiooutput_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audiooutput_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audiooutput_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audiooutput_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audiooutput_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_audiooutput_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audiooutput_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audiooutput_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audiooutput_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audiooutput_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_audiooutput_dynamic_property_names");
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

QBindingStorage* q_audiooutput_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_audiooutput_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audiooutput_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audiooutput_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_audiooutput_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audiooutput_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audiooutput_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_audiooutput_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_audiooutput_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_audiooutput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_audiooutput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_audiooutput_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audiooutput_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_audiooutput_event(void* self, void* event) {
    return QAudioOutput_Event((QAudioOutput*)self, (QEvent*)event);
}

bool q_audiooutput_qbase_event(void* self, void* event) {
    return QAudioOutput_QBaseEvent((QAudioOutput*)self, (QEvent*)event);
}

void q_audiooutput_on_event(void* self, bool (*callback)(void*, void*)) {
    QAudioOutput_OnEvent((QAudioOutput*)self, (intptr_t)callback);
}

bool q_audiooutput_event_filter(void* self, void* watched, void* event) {
    return QAudioOutput_EventFilter((QAudioOutput*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audiooutput_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioOutput_QBaseEventFilter((QAudioOutput*)self, (QObject*)watched, (QEvent*)event);
}

void q_audiooutput_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAudioOutput_OnEventFilter((QAudioOutput*)self, (intptr_t)callback);
}

void q_audiooutput_timer_event(void* self, void* event) {
    QAudioOutput_TimerEvent((QAudioOutput*)self, (QTimerEvent*)event);
}

void q_audiooutput_qbase_timer_event(void* self, void* event) {
    QAudioOutput_QBaseTimerEvent((QAudioOutput*)self, (QTimerEvent*)event);
}

void q_audiooutput_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAudioOutput_OnTimerEvent((QAudioOutput*)self, (intptr_t)callback);
}

void q_audiooutput_child_event(void* self, void* event) {
    QAudioOutput_ChildEvent((QAudioOutput*)self, (QChildEvent*)event);
}

void q_audiooutput_qbase_child_event(void* self, void* event) {
    QAudioOutput_QBaseChildEvent((QAudioOutput*)self, (QChildEvent*)event);
}

void q_audiooutput_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAudioOutput_OnChildEvent((QAudioOutput*)self, (intptr_t)callback);
}

void q_audiooutput_custom_event(void* self, void* event) {
    QAudioOutput_CustomEvent((QAudioOutput*)self, (QEvent*)event);
}

void q_audiooutput_qbase_custom_event(void* self, void* event) {
    QAudioOutput_QBaseCustomEvent((QAudioOutput*)self, (QEvent*)event);
}

void q_audiooutput_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAudioOutput_OnCustomEvent((QAudioOutput*)self, (intptr_t)callback);
}

void q_audiooutput_connect_notify(void* self, void* signal) {
    QAudioOutput_ConnectNotify((QAudioOutput*)self, (QMetaMethod*)signal);
}

void q_audiooutput_qbase_connect_notify(void* self, void* signal) {
    QAudioOutput_QBaseConnectNotify((QAudioOutput*)self, (QMetaMethod*)signal);
}

void q_audiooutput_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioOutput_OnConnectNotify((QAudioOutput*)self, (intptr_t)callback);
}

void q_audiooutput_disconnect_notify(void* self, void* signal) {
    QAudioOutput_DisconnectNotify((QAudioOutput*)self, (QMetaMethod*)signal);
}

void q_audiooutput_qbase_disconnect_notify(void* self, void* signal) {
    QAudioOutput_QBaseDisconnectNotify((QAudioOutput*)self, (QMetaMethod*)signal);
}

void q_audiooutput_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioOutput_OnDisconnectNotify((QAudioOutput*)self, (intptr_t)callback);
}

QObject* q_audiooutput_sender(void* self) {
    return QAudioOutput_Sender((QAudioOutput*)self);
}

QObject* q_audiooutput_qbase_sender(void* self) {
    return QAudioOutput_QBaseSender((QAudioOutput*)self);
}

void q_audiooutput_on_sender(void* self, QObject* (*callback)()) {
    QAudioOutput_OnSender((QAudioOutput*)self, (intptr_t)callback);
}

int32_t q_audiooutput_sender_signal_index(void* self) {
    return QAudioOutput_SenderSignalIndex((QAudioOutput*)self);
}

int32_t q_audiooutput_qbase_sender_signal_index(void* self) {
    return QAudioOutput_QBaseSenderSignalIndex((QAudioOutput*)self);
}

void q_audiooutput_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAudioOutput_OnSenderSignalIndex((QAudioOutput*)self, (intptr_t)callback);
}

int32_t q_audiooutput_receivers(void* self, const char* signal) {
    return QAudioOutput_Receivers((QAudioOutput*)self, signal);
}

int32_t q_audiooutput_qbase_receivers(void* self, const char* signal) {
    return QAudioOutput_QBaseReceivers((QAudioOutput*)self, signal);
}

void q_audiooutput_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAudioOutput_OnReceivers((QAudioOutput*)self, (intptr_t)callback);
}

bool q_audiooutput_is_signal_connected(void* self, void* signal) {
    return QAudioOutput_IsSignalConnected((QAudioOutput*)self, (QMetaMethod*)signal);
}

bool q_audiooutput_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioOutput_QBaseIsSignalConnected((QAudioOutput*)self, (QMetaMethod*)signal);
}

void q_audiooutput_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAudioOutput_OnIsSignalConnected((QAudioOutput*)self, (intptr_t)callback);
}

void q_audiooutput_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_audiooutput_delete(void* self) {
    QAudioOutput_Delete((QAudioOutput*)(self));
}
