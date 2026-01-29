#include "libqaudiodevice.hpp"
#include "libqcameradevice.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqmediadevices.hpp"
#include "libqmediadevices.h"

QMediaDevices* q_mediadevices_new() {
    return QMediaDevices_new();
}

QMediaDevices* q_mediadevices_new2(void* parent) {
    return QMediaDevices_new2((QObject*)parent);
}

const QMetaObject* q_mediadevices_meta_object(void* self) {
    return QMediaDevices_MetaObject((QMediaDevices*)self);
}

void q_mediadevices_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QMediaDevices_OnMetaObject((QMediaDevices*)self, (intptr_t)callback);
}

const QMetaObject* q_mediadevices_qbase_meta_object(void* self) {
    return QMediaDevices_QBaseMetaObject((QMediaDevices*)self);
}

void* q_mediadevices_metacast(void* self, const char* param1) {
    return QMediaDevices_Metacast((QMediaDevices*)self, param1);
}

void q_mediadevices_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QMediaDevices_OnMetacast((QMediaDevices*)self, (intptr_t)callback);
}

void* q_mediadevices_qbase_metacast(void* self, const char* param1) {
    return QMediaDevices_QBaseMetacast((QMediaDevices*)self, param1);
}

int32_t q_mediadevices_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMediaDevices_Metacall((QMediaDevices*)self, param1, param2, param3);
}

void q_mediadevices_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QMediaDevices_OnMetacall((QMediaDevices*)self, (intptr_t)callback);
}

int32_t q_mediadevices_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMediaDevices_QBaseMetacall((QMediaDevices*)self, param1, param2, param3);
}

const char* q_mediadevices_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAudioDevice* */ q_mediadevices_audio_inputs() {
    libqt_list _arr = QMediaDevices_AudioInputs();
    return _arr;
}

libqt_list /* of QAudioDevice* */ q_mediadevices_audio_outputs() {
    libqt_list _arr = QMediaDevices_AudioOutputs();
    return _arr;
}

libqt_list /* of QCameraDevice* */ q_mediadevices_video_inputs() {
    libqt_list _arr = QMediaDevices_VideoInputs();
    return _arr;
}

QAudioDevice* q_mediadevices_default_audio_input() {
    return QMediaDevices_DefaultAudioInput();
}

QAudioDevice* q_mediadevices_default_audio_output() {
    return QMediaDevices_DefaultAudioOutput();
}

QCameraDevice* q_mediadevices_default_video_input() {
    return QMediaDevices_DefaultVideoInput();
}

void q_mediadevices_audio_inputs_changed(void* self) {
    QMediaDevices_AudioInputsChanged((QMediaDevices*)self);
}

void q_mediadevices_on_audio_inputs_changed(void* self, void (*callback)(void*)) {
    QMediaDevices_Connect_AudioInputsChanged((QMediaDevices*)self, (intptr_t)callback);
}

void q_mediadevices_audio_outputs_changed(void* self) {
    QMediaDevices_AudioOutputsChanged((QMediaDevices*)self);
}

void q_mediadevices_on_audio_outputs_changed(void* self, void (*callback)(void*)) {
    QMediaDevices_Connect_AudioOutputsChanged((QMediaDevices*)self, (intptr_t)callback);
}

void q_mediadevices_video_inputs_changed(void* self) {
    QMediaDevices_VideoInputsChanged((QMediaDevices*)self);
}

void q_mediadevices_on_video_inputs_changed(void* self, void (*callback)(void*)) {
    QMediaDevices_Connect_VideoInputsChanged((QMediaDevices*)self, (intptr_t)callback);
}

void q_mediadevices_connect_notify(void* self, void* signal) {
    QMediaDevices_ConnectNotify((QMediaDevices*)self, (QMetaMethod*)signal);
}

void q_mediadevices_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QMediaDevices_OnConnectNotify((QMediaDevices*)self, (intptr_t)callback);
}

void q_mediadevices_qbase_connect_notify(void* self, void* signal) {
    QMediaDevices_QBaseConnectNotify((QMediaDevices*)self, (QMetaMethod*)signal);
}

const char* q_mediadevices_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediadevices_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_mediadevices_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_mediadevices_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_mediadevices_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_mediadevices_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_mediadevices_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_mediadevices_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_mediadevices_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_mediadevices_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_mediadevices_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_mediadevices_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_mediadevices_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_mediadevices_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_mediadevices_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_mediadevices_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_mediadevices_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_mediadevices_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_mediadevices_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_mediadevices_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_mediadevices_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_mediadevices_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_mediadevices_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_mediadevices_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_mediadevices_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_mediadevices_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_mediadevices_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_mediadevices_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_mediadevices_dynamic_property_names\n");
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

QBindingStorage* q_mediadevices_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_mediadevices_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_mediadevices_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_mediadevices_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_mediadevices_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_mediadevices_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_mediadevices_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_mediadevices_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_mediadevices_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_mediadevices_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_mediadevices_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_mediadevices_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_mediadevices_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_mediadevices_event(void* self, void* event) {
    return QMediaDevices_Event((QMediaDevices*)self, (QEvent*)event);
}

bool q_mediadevices_qbase_event(void* self, void* event) {
    return QMediaDevices_QBaseEvent((QMediaDevices*)self, (QEvent*)event);
}

void q_mediadevices_on_event(void* self, bool (*callback)(void*, void*)) {
    QMediaDevices_OnEvent((QMediaDevices*)self, (intptr_t)callback);
}

bool q_mediadevices_event_filter(void* self, void* watched, void* event) {
    return QMediaDevices_EventFilter((QMediaDevices*)self, (QObject*)watched, (QEvent*)event);
}

bool q_mediadevices_qbase_event_filter(void* self, void* watched, void* event) {
    return QMediaDevices_QBaseEventFilter((QMediaDevices*)self, (QObject*)watched, (QEvent*)event);
}

void q_mediadevices_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QMediaDevices_OnEventFilter((QMediaDevices*)self, (intptr_t)callback);
}

void q_mediadevices_timer_event(void* self, void* event) {
    QMediaDevices_TimerEvent((QMediaDevices*)self, (QTimerEvent*)event);
}

void q_mediadevices_qbase_timer_event(void* self, void* event) {
    QMediaDevices_QBaseTimerEvent((QMediaDevices*)self, (QTimerEvent*)event);
}

void q_mediadevices_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QMediaDevices_OnTimerEvent((QMediaDevices*)self, (intptr_t)callback);
}

void q_mediadevices_child_event(void* self, void* event) {
    QMediaDevices_ChildEvent((QMediaDevices*)self, (QChildEvent*)event);
}

void q_mediadevices_qbase_child_event(void* self, void* event) {
    QMediaDevices_QBaseChildEvent((QMediaDevices*)self, (QChildEvent*)event);
}

void q_mediadevices_on_child_event(void* self, void (*callback)(void*, void*)) {
    QMediaDevices_OnChildEvent((QMediaDevices*)self, (intptr_t)callback);
}

void q_mediadevices_custom_event(void* self, void* event) {
    QMediaDevices_CustomEvent((QMediaDevices*)self, (QEvent*)event);
}

void q_mediadevices_qbase_custom_event(void* self, void* event) {
    QMediaDevices_QBaseCustomEvent((QMediaDevices*)self, (QEvent*)event);
}

void q_mediadevices_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QMediaDevices_OnCustomEvent((QMediaDevices*)self, (intptr_t)callback);
}

void q_mediadevices_disconnect_notify(void* self, void* signal) {
    QMediaDevices_DisconnectNotify((QMediaDevices*)self, (QMetaMethod*)signal);
}

void q_mediadevices_qbase_disconnect_notify(void* self, void* signal) {
    QMediaDevices_QBaseDisconnectNotify((QMediaDevices*)self, (QMetaMethod*)signal);
}

void q_mediadevices_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QMediaDevices_OnDisconnectNotify((QMediaDevices*)self, (intptr_t)callback);
}

QObject* q_mediadevices_sender(void* self) {
    return QMediaDevices_Sender((QMediaDevices*)self);
}

QObject* q_mediadevices_qbase_sender(void* self) {
    return QMediaDevices_QBaseSender((QMediaDevices*)self);
}

void q_mediadevices_on_sender(void* self, QObject* (*callback)()) {
    QMediaDevices_OnSender((QMediaDevices*)self, (intptr_t)callback);
}

int32_t q_mediadevices_sender_signal_index(void* self) {
    return QMediaDevices_SenderSignalIndex((QMediaDevices*)self);
}

int32_t q_mediadevices_qbase_sender_signal_index(void* self) {
    return QMediaDevices_QBaseSenderSignalIndex((QMediaDevices*)self);
}

void q_mediadevices_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QMediaDevices_OnSenderSignalIndex((QMediaDevices*)self, (intptr_t)callback);
}

int32_t q_mediadevices_receivers(void* self, const char* signal) {
    return QMediaDevices_Receivers((QMediaDevices*)self, signal);
}

int32_t q_mediadevices_qbase_receivers(void* self, const char* signal) {
    return QMediaDevices_QBaseReceivers((QMediaDevices*)self, signal);
}

void q_mediadevices_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QMediaDevices_OnReceivers((QMediaDevices*)self, (intptr_t)callback);
}

bool q_mediadevices_is_signal_connected(void* self, void* signal) {
    return QMediaDevices_IsSignalConnected((QMediaDevices*)self, (QMetaMethod*)signal);
}

bool q_mediadevices_qbase_is_signal_connected(void* self, void* signal) {
    return QMediaDevices_QBaseIsSignalConnected((QMediaDevices*)self, (QMetaMethod*)signal);
}

void q_mediadevices_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QMediaDevices_OnIsSignalConnected((QMediaDevices*)self, (intptr_t)callback);
}

void q_mediadevices_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_mediadevices_delete(void* self) {
    QMediaDevices_Delete((QMediaDevices*)(self));
}
