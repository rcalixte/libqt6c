#include "libqaudiobuffer.hpp"
#include "libqaudioformat.hpp"
#include "../libqcoreevent.hpp"
#include "libqmediacapturesession.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqaudiobufferinput.hpp"
#include "libqaudiobufferinput.h"

QAudioBufferInput* q_audiobufferinput_new() {
    return QAudioBufferInput_new();
}

QAudioBufferInput* q_audiobufferinput_new2(void* format) {
    return QAudioBufferInput_new2((QAudioFormat*)format);
}

QAudioBufferInput* q_audiobufferinput_new3(void* parent) {
    return QAudioBufferInput_new3((QObject*)parent);
}

QAudioBufferInput* q_audiobufferinput_new4(void* format, void* parent) {
    return QAudioBufferInput_new4((QAudioFormat*)format, (QObject*)parent);
}

const QMetaObject* q_audiobufferinput_meta_object(void* self) {
    return QAudioBufferInput_MetaObject((QAudioBufferInput*)self);
}

void q_audiobufferinput_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QAudioBufferInput_OnMetaObject((QAudioBufferInput*)self, (intptr_t)callback);
}

const QMetaObject* q_audiobufferinput_qbase_meta_object(void* self) {
    return QAudioBufferInput_QBaseMetaObject((QAudioBufferInput*)self);
}

void* q_audiobufferinput_metacast(void* self, const char* param1) {
    return QAudioBufferInput_Metacast((QAudioBufferInput*)self, param1);
}

void q_audiobufferinput_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAudioBufferInput_OnMetacast((QAudioBufferInput*)self, (intptr_t)callback);
}

void* q_audiobufferinput_qbase_metacast(void* self, const char* param1) {
    return QAudioBufferInput_QBaseMetacast((QAudioBufferInput*)self, param1);
}

int32_t q_audiobufferinput_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioBufferInput_Metacall((QAudioBufferInput*)self, param1, param2, param3);
}

void q_audiobufferinput_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAudioBufferInput_OnMetacall((QAudioBufferInput*)self, (intptr_t)callback);
}

int32_t q_audiobufferinput_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioBufferInput_QBaseMetacall((QAudioBufferInput*)self, param1, param2, param3);
}

const char* q_audiobufferinput_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_audiobufferinput_send_audio_buffer(void* self, void* audioBuffer) {
    return QAudioBufferInput_SendAudioBuffer((QAudioBufferInput*)self, (QAudioBuffer*)audioBuffer);
}

QAudioFormat* q_audiobufferinput_format(void* self) {
    return QAudioBufferInput_Format((QAudioBufferInput*)self);
}

QMediaCaptureSession* q_audiobufferinput_capture_session(void* self) {
    return QAudioBufferInput_CaptureSession((QAudioBufferInput*)self);
}

void q_audiobufferinput_ready_to_send_audio_buffer(void* self) {
    QAudioBufferInput_ReadyToSendAudioBuffer((QAudioBufferInput*)self);
}

void q_audiobufferinput_on_ready_to_send_audio_buffer(void* self, void (*callback)(void*)) {
    QAudioBufferInput_Connect_ReadyToSendAudioBuffer((QAudioBufferInput*)self, (intptr_t)callback);
}

const char* q_audiobufferinput_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiobufferinput_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiobufferinput_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audiobufferinput_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_audiobufferinput_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audiobufferinput_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audiobufferinput_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audiobufferinput_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audiobufferinput_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audiobufferinput_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_audiobufferinput_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audiobufferinput_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_audiobufferinput_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_audiobufferinput_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_audiobufferinput_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audiobufferinput_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audiobufferinput_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audiobufferinput_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audiobufferinput_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audiobufferinput_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_audiobufferinput_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audiobufferinput_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audiobufferinput_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_audiobufferinput_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audiobufferinput_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_audiobufferinput_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_audiobufferinput_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_audiobufferinput_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audiobufferinput_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audiobufferinput_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audiobufferinput_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audiobufferinput_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_audiobufferinput_dynamic_property_names\n");
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

QBindingStorage* q_audiobufferinput_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_audiobufferinput_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audiobufferinput_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audiobufferinput_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_audiobufferinput_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audiobufferinput_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audiobufferinput_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_audiobufferinput_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_audiobufferinput_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_audiobufferinput_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_audiobufferinput_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_audiobufferinput_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_audiobufferinput_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_audiobufferinput_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_audiobufferinput_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_audiobufferinput_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_audiobufferinput_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audiobufferinput_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_audiobufferinput_event(void* self, void* event) {
    return QAudioBufferInput_Event((QAudioBufferInput*)self, (QEvent*)event);
}

bool q_audiobufferinput_qbase_event(void* self, void* event) {
    return QAudioBufferInput_QBaseEvent((QAudioBufferInput*)self, (QEvent*)event);
}

void q_audiobufferinput_on_event(void* self, bool (*callback)(void*, void*)) {
    QAudioBufferInput_OnEvent((QAudioBufferInput*)self, (intptr_t)callback);
}

bool q_audiobufferinput_event_filter(void* self, void* watched, void* event) {
    return QAudioBufferInput_EventFilter((QAudioBufferInput*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audiobufferinput_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioBufferInput_QBaseEventFilter((QAudioBufferInput*)self, (QObject*)watched, (QEvent*)event);
}

void q_audiobufferinput_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAudioBufferInput_OnEventFilter((QAudioBufferInput*)self, (intptr_t)callback);
}

void q_audiobufferinput_timer_event(void* self, void* event) {
    QAudioBufferInput_TimerEvent((QAudioBufferInput*)self, (QTimerEvent*)event);
}

void q_audiobufferinput_qbase_timer_event(void* self, void* event) {
    QAudioBufferInput_QBaseTimerEvent((QAudioBufferInput*)self, (QTimerEvent*)event);
}

void q_audiobufferinput_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAudioBufferInput_OnTimerEvent((QAudioBufferInput*)self, (intptr_t)callback);
}

void q_audiobufferinput_child_event(void* self, void* event) {
    QAudioBufferInput_ChildEvent((QAudioBufferInput*)self, (QChildEvent*)event);
}

void q_audiobufferinput_qbase_child_event(void* self, void* event) {
    QAudioBufferInput_QBaseChildEvent((QAudioBufferInput*)self, (QChildEvent*)event);
}

void q_audiobufferinput_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAudioBufferInput_OnChildEvent((QAudioBufferInput*)self, (intptr_t)callback);
}

void q_audiobufferinput_custom_event(void* self, void* event) {
    QAudioBufferInput_CustomEvent((QAudioBufferInput*)self, (QEvent*)event);
}

void q_audiobufferinput_qbase_custom_event(void* self, void* event) {
    QAudioBufferInput_QBaseCustomEvent((QAudioBufferInput*)self, (QEvent*)event);
}

void q_audiobufferinput_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAudioBufferInput_OnCustomEvent((QAudioBufferInput*)self, (intptr_t)callback);
}

void q_audiobufferinput_connect_notify(void* self, void* signal) {
    QAudioBufferInput_ConnectNotify((QAudioBufferInput*)self, (QMetaMethod*)signal);
}

void q_audiobufferinput_qbase_connect_notify(void* self, void* signal) {
    QAudioBufferInput_QBaseConnectNotify((QAudioBufferInput*)self, (QMetaMethod*)signal);
}

void q_audiobufferinput_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioBufferInput_OnConnectNotify((QAudioBufferInput*)self, (intptr_t)callback);
}

void q_audiobufferinput_disconnect_notify(void* self, void* signal) {
    QAudioBufferInput_DisconnectNotify((QAudioBufferInput*)self, (QMetaMethod*)signal);
}

void q_audiobufferinput_qbase_disconnect_notify(void* self, void* signal) {
    QAudioBufferInput_QBaseDisconnectNotify((QAudioBufferInput*)self, (QMetaMethod*)signal);
}

void q_audiobufferinput_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioBufferInput_OnDisconnectNotify((QAudioBufferInput*)self, (intptr_t)callback);
}

QObject* q_audiobufferinput_sender(void* self) {
    return QAudioBufferInput_Sender((QAudioBufferInput*)self);
}

QObject* q_audiobufferinput_qbase_sender(void* self) {
    return QAudioBufferInput_QBaseSender((QAudioBufferInput*)self);
}

void q_audiobufferinput_on_sender(void* self, QObject* (*callback)()) {
    QAudioBufferInput_OnSender((QAudioBufferInput*)self, (intptr_t)callback);
}

int32_t q_audiobufferinput_sender_signal_index(void* self) {
    return QAudioBufferInput_SenderSignalIndex((QAudioBufferInput*)self);
}

int32_t q_audiobufferinput_qbase_sender_signal_index(void* self) {
    return QAudioBufferInput_QBaseSenderSignalIndex((QAudioBufferInput*)self);
}

void q_audiobufferinput_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAudioBufferInput_OnSenderSignalIndex((QAudioBufferInput*)self, (intptr_t)callback);
}

int32_t q_audiobufferinput_receivers(void* self, const char* signal) {
    return QAudioBufferInput_Receivers((QAudioBufferInput*)self, signal);
}

int32_t q_audiobufferinput_qbase_receivers(void* self, const char* signal) {
    return QAudioBufferInput_QBaseReceivers((QAudioBufferInput*)self, signal);
}

void q_audiobufferinput_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAudioBufferInput_OnReceivers((QAudioBufferInput*)self, (intptr_t)callback);
}

bool q_audiobufferinput_is_signal_connected(void* self, void* signal) {
    return QAudioBufferInput_IsSignalConnected((QAudioBufferInput*)self, (QMetaMethod*)signal);
}

bool q_audiobufferinput_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioBufferInput_QBaseIsSignalConnected((QAudioBufferInput*)self, (QMetaMethod*)signal);
}

void q_audiobufferinput_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAudioBufferInput_OnIsSignalConnected((QAudioBufferInput*)self, (intptr_t)callback);
}

void q_audiobufferinput_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_audiobufferinput_delete(void* self) {
    QAudioBufferInput_Delete((QAudioBufferInput*)(self));
}
