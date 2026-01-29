#include "libqaudiobuffer.hpp"
#include "libqaudioformat.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqaudiobufferoutput.hpp"
#include "libqaudiobufferoutput.h"

QAudioBufferOutput* q_audiobufferoutput_new() {
    return QAudioBufferOutput_new();
}

QAudioBufferOutput* q_audiobufferoutput_new2(void* format) {
    return QAudioBufferOutput_new2((QAudioFormat*)format);
}

QAudioBufferOutput* q_audiobufferoutput_new3(void* parent) {
    return QAudioBufferOutput_new3((QObject*)parent);
}

QAudioBufferOutput* q_audiobufferoutput_new4(void* format, void* parent) {
    return QAudioBufferOutput_new4((QAudioFormat*)format, (QObject*)parent);
}

const QMetaObject* q_audiobufferoutput_meta_object(void* self) {
    return QAudioBufferOutput_MetaObject((QAudioBufferOutput*)self);
}

void q_audiobufferoutput_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QAudioBufferOutput_OnMetaObject((QAudioBufferOutput*)self, (intptr_t)callback);
}

const QMetaObject* q_audiobufferoutput_qbase_meta_object(void* self) {
    return QAudioBufferOutput_QBaseMetaObject((QAudioBufferOutput*)self);
}

void* q_audiobufferoutput_metacast(void* self, const char* param1) {
    return QAudioBufferOutput_Metacast((QAudioBufferOutput*)self, param1);
}

void q_audiobufferoutput_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAudioBufferOutput_OnMetacast((QAudioBufferOutput*)self, (intptr_t)callback);
}

void* q_audiobufferoutput_qbase_metacast(void* self, const char* param1) {
    return QAudioBufferOutput_QBaseMetacast((QAudioBufferOutput*)self, param1);
}

int32_t q_audiobufferoutput_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioBufferOutput_Metacall((QAudioBufferOutput*)self, param1, param2, param3);
}

void q_audiobufferoutput_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAudioBufferOutput_OnMetacall((QAudioBufferOutput*)self, (intptr_t)callback);
}

int32_t q_audiobufferoutput_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioBufferOutput_QBaseMetacall((QAudioBufferOutput*)self, param1, param2, param3);
}

const char* q_audiobufferoutput_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAudioFormat* q_audiobufferoutput_format(void* self) {
    return QAudioBufferOutput_Format((QAudioBufferOutput*)self);
}

void q_audiobufferoutput_audio_buffer_received(void* self, void* buffer) {
    QAudioBufferOutput_AudioBufferReceived((QAudioBufferOutput*)self, (QAudioBuffer*)buffer);
}

void q_audiobufferoutput_on_audio_buffer_received(void* self, void (*callback)(void*, void*)) {
    QAudioBufferOutput_Connect_AudioBufferReceived((QAudioBufferOutput*)self, (intptr_t)callback);
}

const char* q_audiobufferoutput_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiobufferoutput_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiobufferoutput_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audiobufferoutput_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_audiobufferoutput_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audiobufferoutput_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audiobufferoutput_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audiobufferoutput_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audiobufferoutput_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audiobufferoutput_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_audiobufferoutput_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audiobufferoutput_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_audiobufferoutput_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_audiobufferoutput_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_audiobufferoutput_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audiobufferoutput_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audiobufferoutput_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audiobufferoutput_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audiobufferoutput_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audiobufferoutput_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audiobufferoutput_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audiobufferoutput_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audiobufferoutput_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_audiobufferoutput_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audiobufferoutput_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audiobufferoutput_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audiobufferoutput_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audiobufferoutput_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_audiobufferoutput_dynamic_property_names\n");
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

QBindingStorage* q_audiobufferoutput_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_audiobufferoutput_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audiobufferoutput_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audiobufferoutput_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_audiobufferoutput_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audiobufferoutput_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audiobufferoutput_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_audiobufferoutput_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_audiobufferoutput_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_audiobufferoutput_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_audiobufferoutput_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_audiobufferoutput_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audiobufferoutput_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_audiobufferoutput_event(void* self, void* event) {
    return QAudioBufferOutput_Event((QAudioBufferOutput*)self, (QEvent*)event);
}

bool q_audiobufferoutput_qbase_event(void* self, void* event) {
    return QAudioBufferOutput_QBaseEvent((QAudioBufferOutput*)self, (QEvent*)event);
}

void q_audiobufferoutput_on_event(void* self, bool (*callback)(void*, void*)) {
    QAudioBufferOutput_OnEvent((QAudioBufferOutput*)self, (intptr_t)callback);
}

bool q_audiobufferoutput_event_filter(void* self, void* watched, void* event) {
    return QAudioBufferOutput_EventFilter((QAudioBufferOutput*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audiobufferoutput_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioBufferOutput_QBaseEventFilter((QAudioBufferOutput*)self, (QObject*)watched, (QEvent*)event);
}

void q_audiobufferoutput_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAudioBufferOutput_OnEventFilter((QAudioBufferOutput*)self, (intptr_t)callback);
}

void q_audiobufferoutput_timer_event(void* self, void* event) {
    QAudioBufferOutput_TimerEvent((QAudioBufferOutput*)self, (QTimerEvent*)event);
}

void q_audiobufferoutput_qbase_timer_event(void* self, void* event) {
    QAudioBufferOutput_QBaseTimerEvent((QAudioBufferOutput*)self, (QTimerEvent*)event);
}

void q_audiobufferoutput_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAudioBufferOutput_OnTimerEvent((QAudioBufferOutput*)self, (intptr_t)callback);
}

void q_audiobufferoutput_child_event(void* self, void* event) {
    QAudioBufferOutput_ChildEvent((QAudioBufferOutput*)self, (QChildEvent*)event);
}

void q_audiobufferoutput_qbase_child_event(void* self, void* event) {
    QAudioBufferOutput_QBaseChildEvent((QAudioBufferOutput*)self, (QChildEvent*)event);
}

void q_audiobufferoutput_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAudioBufferOutput_OnChildEvent((QAudioBufferOutput*)self, (intptr_t)callback);
}

void q_audiobufferoutput_custom_event(void* self, void* event) {
    QAudioBufferOutput_CustomEvent((QAudioBufferOutput*)self, (QEvent*)event);
}

void q_audiobufferoutput_qbase_custom_event(void* self, void* event) {
    QAudioBufferOutput_QBaseCustomEvent((QAudioBufferOutput*)self, (QEvent*)event);
}

void q_audiobufferoutput_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAudioBufferOutput_OnCustomEvent((QAudioBufferOutput*)self, (intptr_t)callback);
}

void q_audiobufferoutput_connect_notify(void* self, void* signal) {
    QAudioBufferOutput_ConnectNotify((QAudioBufferOutput*)self, (QMetaMethod*)signal);
}

void q_audiobufferoutput_qbase_connect_notify(void* self, void* signal) {
    QAudioBufferOutput_QBaseConnectNotify((QAudioBufferOutput*)self, (QMetaMethod*)signal);
}

void q_audiobufferoutput_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioBufferOutput_OnConnectNotify((QAudioBufferOutput*)self, (intptr_t)callback);
}

void q_audiobufferoutput_disconnect_notify(void* self, void* signal) {
    QAudioBufferOutput_DisconnectNotify((QAudioBufferOutput*)self, (QMetaMethod*)signal);
}

void q_audiobufferoutput_qbase_disconnect_notify(void* self, void* signal) {
    QAudioBufferOutput_QBaseDisconnectNotify((QAudioBufferOutput*)self, (QMetaMethod*)signal);
}

void q_audiobufferoutput_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioBufferOutput_OnDisconnectNotify((QAudioBufferOutput*)self, (intptr_t)callback);
}

QObject* q_audiobufferoutput_sender(void* self) {
    return QAudioBufferOutput_Sender((QAudioBufferOutput*)self);
}

QObject* q_audiobufferoutput_qbase_sender(void* self) {
    return QAudioBufferOutput_QBaseSender((QAudioBufferOutput*)self);
}

void q_audiobufferoutput_on_sender(void* self, QObject* (*callback)()) {
    QAudioBufferOutput_OnSender((QAudioBufferOutput*)self, (intptr_t)callback);
}

int32_t q_audiobufferoutput_sender_signal_index(void* self) {
    return QAudioBufferOutput_SenderSignalIndex((QAudioBufferOutput*)self);
}

int32_t q_audiobufferoutput_qbase_sender_signal_index(void* self) {
    return QAudioBufferOutput_QBaseSenderSignalIndex((QAudioBufferOutput*)self);
}

void q_audiobufferoutput_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAudioBufferOutput_OnSenderSignalIndex((QAudioBufferOutput*)self, (intptr_t)callback);
}

int32_t q_audiobufferoutput_receivers(void* self, const char* signal) {
    return QAudioBufferOutput_Receivers((QAudioBufferOutput*)self, signal);
}

int32_t q_audiobufferoutput_qbase_receivers(void* self, const char* signal) {
    return QAudioBufferOutput_QBaseReceivers((QAudioBufferOutput*)self, signal);
}

void q_audiobufferoutput_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAudioBufferOutput_OnReceivers((QAudioBufferOutput*)self, (intptr_t)callback);
}

bool q_audiobufferoutput_is_signal_connected(void* self, void* signal) {
    return QAudioBufferOutput_IsSignalConnected((QAudioBufferOutput*)self, (QMetaMethod*)signal);
}

bool q_audiobufferoutput_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioBufferOutput_QBaseIsSignalConnected((QAudioBufferOutput*)self, (QMetaMethod*)signal);
}

void q_audiobufferoutput_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAudioBufferOutput_OnIsSignalConnected((QAudioBufferOutput*)self, (intptr_t)callback);
}

void q_audiobufferoutput_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_audiobufferoutput_delete(void* self) {
    QAudioBufferOutput_Delete((QAudioBufferOutput*)(self));
}
