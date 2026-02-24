#include "libqaudiodevice.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqaudioinput.hpp"
#include "libqaudioinput.h"

QAudioInput* q_audioinput_new() {
    return QAudioInput_new();
}

QAudioInput* q_audioinput_new2(void* deviceInfo) {
    return QAudioInput_new2((QAudioDevice*)deviceInfo);
}

QAudioInput* q_audioinput_new3(void* parent) {
    return QAudioInput_new3((QObject*)parent);
}

QAudioInput* q_audioinput_new4(void* deviceInfo, void* parent) {
    return QAudioInput_new4((QAudioDevice*)deviceInfo, (QObject*)parent);
}

const QMetaObject* q_audioinput_meta_object(void* self) {
    return QAudioInput_MetaObject((QAudioInput*)self);
}

void q_audioinput_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QAudioInput_OnMetaObject((QAudioInput*)self, (intptr_t)callback);
}

const QMetaObject* q_audioinput_super_meta_object(void* self) {
    return QAudioInput_SuperMetaObject((QAudioInput*)self);
}

void* q_audioinput_metacast(void* self, const char* param1) {
    return QAudioInput_Metacast((QAudioInput*)self, param1);
}

void q_audioinput_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAudioInput_OnMetacast((QAudioInput*)self, (intptr_t)callback);
}

void* q_audioinput_super_metacast(void* self, const char* param1) {
    return QAudioInput_SuperMetacast((QAudioInput*)self, param1);
}

int32_t q_audioinput_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioInput_Metacall((QAudioInput*)self, param1, param2, param3);
}

void q_audioinput_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAudioInput_OnMetacall((QAudioInput*)self, (intptr_t)callback);
}

int32_t q_audioinput_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioInput_SuperMetacall((QAudioInput*)self, param1, param2, param3);
}

const char* q_audioinput_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAudioDevice* q_audioinput_device(void* self) {
    return QAudioInput_Device((QAudioInput*)self);
}

float q_audioinput_volume(void* self) {
    return QAudioInput_Volume((QAudioInput*)self);
}

bool q_audioinput_is_muted(void* self) {
    return QAudioInput_IsMuted((QAudioInput*)self);
}

void q_audioinput_set_device(void* self, void* device) {
    QAudioInput_SetDevice((QAudioInput*)self, (QAudioDevice*)device);
}

void q_audioinput_set_volume(void* self, float volume) {
    QAudioInput_SetVolume((QAudioInput*)self, volume);
}

void q_audioinput_set_muted(void* self, bool muted) {
    QAudioInput_SetMuted((QAudioInput*)self, muted);
}

void q_audioinput_device_changed(void* self) {
    QAudioInput_DeviceChanged((QAudioInput*)self);
}

void q_audioinput_on_device_changed(void* self, void (*callback)(void*)) {
    QAudioInput_Connect_DeviceChanged((QAudioInput*)self, (intptr_t)callback);
}

void q_audioinput_volume_changed(void* self, float volume) {
    QAudioInput_VolumeChanged((QAudioInput*)self, volume);
}

void q_audioinput_on_volume_changed(void* self, void (*callback)(void*, float)) {
    QAudioInput_Connect_VolumeChanged((QAudioInput*)self, (intptr_t)callback);
}

void q_audioinput_muted_changed(void* self, bool muted) {
    QAudioInput_MutedChanged((QAudioInput*)self, muted);
}

void q_audioinput_on_muted_changed(void* self, void (*callback)(void*, bool)) {
    QAudioInput_Connect_MutedChanged((QAudioInput*)self, (intptr_t)callback);
}

const char* q_audioinput_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audioinput_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audioinput_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audioinput_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_audioinput_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audioinput_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audioinput_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audioinput_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audioinput_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audioinput_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_audioinput_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audioinput_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_audioinput_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_audioinput_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_audioinput_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audioinput_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audioinput_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audioinput_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audioinput_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audioinput_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_audioinput_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audioinput_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audioinput_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_audioinput_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audioinput_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_audioinput_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_audioinput_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_audioinput_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audioinput_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audioinput_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audioinput_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audioinput_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_audioinput_dynamic_property_names\n");
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

QBindingStorage* q_audioinput_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_audioinput_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audioinput_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audioinput_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_audioinput_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audioinput_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audioinput_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_audioinput_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_audioinput_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_audioinput_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_audioinput_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_audioinput_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_audioinput_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_audioinput_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_audioinput_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_audioinput_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_audioinput_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audioinput_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_audioinput_event(void* self, void* event) {
    return QAudioInput_Event((QAudioInput*)self, (QEvent*)event);
}

bool q_audioinput_super_event(void* self, void* event) {
    return QAudioInput_SuperEvent((QAudioInput*)self, (QEvent*)event);
}

void q_audioinput_on_event(void* self, bool (*callback)(void*, void*)) {
    QAudioInput_OnEvent((QAudioInput*)self, (intptr_t)callback);
}

bool q_audioinput_event_filter(void* self, void* watched, void* event) {
    return QAudioInput_EventFilter((QAudioInput*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audioinput_super_event_filter(void* self, void* watched, void* event) {
    return QAudioInput_SuperEventFilter((QAudioInput*)self, (QObject*)watched, (QEvent*)event);
}

void q_audioinput_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAudioInput_OnEventFilter((QAudioInput*)self, (intptr_t)callback);
}

void q_audioinput_timer_event(void* self, void* event) {
    QAudioInput_TimerEvent((QAudioInput*)self, (QTimerEvent*)event);
}

void q_audioinput_super_timer_event(void* self, void* event) {
    QAudioInput_SuperTimerEvent((QAudioInput*)self, (QTimerEvent*)event);
}

void q_audioinput_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAudioInput_OnTimerEvent((QAudioInput*)self, (intptr_t)callback);
}

void q_audioinput_child_event(void* self, void* event) {
    QAudioInput_ChildEvent((QAudioInput*)self, (QChildEvent*)event);
}

void q_audioinput_super_child_event(void* self, void* event) {
    QAudioInput_SuperChildEvent((QAudioInput*)self, (QChildEvent*)event);
}

void q_audioinput_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAudioInput_OnChildEvent((QAudioInput*)self, (intptr_t)callback);
}

void q_audioinput_custom_event(void* self, void* event) {
    QAudioInput_CustomEvent((QAudioInput*)self, (QEvent*)event);
}

void q_audioinput_super_custom_event(void* self, void* event) {
    QAudioInput_SuperCustomEvent((QAudioInput*)self, (QEvent*)event);
}

void q_audioinput_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAudioInput_OnCustomEvent((QAudioInput*)self, (intptr_t)callback);
}

void q_audioinput_connect_notify(void* self, void* signal) {
    QAudioInput_ConnectNotify((QAudioInput*)self, (QMetaMethod*)signal);
}

void q_audioinput_super_connect_notify(void* self, void* signal) {
    QAudioInput_SuperConnectNotify((QAudioInput*)self, (QMetaMethod*)signal);
}

void q_audioinput_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioInput_OnConnectNotify((QAudioInput*)self, (intptr_t)callback);
}

void q_audioinput_disconnect_notify(void* self, void* signal) {
    QAudioInput_DisconnectNotify((QAudioInput*)self, (QMetaMethod*)signal);
}

void q_audioinput_super_disconnect_notify(void* self, void* signal) {
    QAudioInput_SuperDisconnectNotify((QAudioInput*)self, (QMetaMethod*)signal);
}

void q_audioinput_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioInput_OnDisconnectNotify((QAudioInput*)self, (intptr_t)callback);
}

QObject* q_audioinput_sender(void* self) {
    return QAudioInput_Sender((QAudioInput*)self);
}

QObject* q_audioinput_super_sender(void* self) {
    return QAudioInput_SuperSender((QAudioInput*)self);
}

void q_audioinput_on_sender(void* self, QObject* (*callback)()) {
    QAudioInput_OnSender((QAudioInput*)self, (intptr_t)callback);
}

int32_t q_audioinput_sender_signal_index(void* self) {
    return QAudioInput_SenderSignalIndex((QAudioInput*)self);
}

int32_t q_audioinput_super_sender_signal_index(void* self) {
    return QAudioInput_SuperSenderSignalIndex((QAudioInput*)self);
}

void q_audioinput_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAudioInput_OnSenderSignalIndex((QAudioInput*)self, (intptr_t)callback);
}

int32_t q_audioinput_receivers(void* self, const char* signal) {
    return QAudioInput_Receivers((QAudioInput*)self, signal);
}

int32_t q_audioinput_super_receivers(void* self, const char* signal) {
    return QAudioInput_SuperReceivers((QAudioInput*)self, signal);
}

void q_audioinput_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAudioInput_OnReceivers((QAudioInput*)self, (intptr_t)callback);
}

bool q_audioinput_is_signal_connected(void* self, void* signal) {
    return QAudioInput_IsSignalConnected((QAudioInput*)self, (QMetaMethod*)signal);
}

bool q_audioinput_super_is_signal_connected(void* self, void* signal) {
    return QAudioInput_SuperIsSignalConnected((QAudioInput*)self, (QMetaMethod*)signal);
}

void q_audioinput_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAudioInput_OnIsSignalConnected((QAudioInput*)self, (intptr_t)callback);
}

void q_audioinput_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_audioinput_delete(void* self) {
    QAudioInput_Delete((QAudioInput*)(self));
}
