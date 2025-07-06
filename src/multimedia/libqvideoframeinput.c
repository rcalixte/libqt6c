#include "../libqevent.hpp"
#include "libqmediacapturesession.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "libqvideoframe.hpp"
#include "libqvideoframeformat.hpp"
#include "../libqcoreevent.hpp"
#include "libqvideoframeinput.hpp"
#include "libqvideoframeinput.h"

QVideoFrameInput* q_videoframeinput_new() {
    return QVideoFrameInput_new();
}

QVideoFrameInput* q_videoframeinput_new2(void* format) {
    return QVideoFrameInput_new2((QVideoFrameFormat*)format);
}

QVideoFrameInput* q_videoframeinput_new3(void* parent) {
    return QVideoFrameInput_new3((QObject*)parent);
}

QVideoFrameInput* q_videoframeinput_new4(void* format, void* parent) {
    return QVideoFrameInput_new4((QVideoFrameFormat*)format, (QObject*)parent);
}

const QMetaObject* q_videoframeinput_meta_object(void* self) {
    return QVideoFrameInput_MetaObject((QVideoFrameInput*)self);
}

void* q_videoframeinput_metacast(void* self, const char* param1) {
    return QVideoFrameInput_Metacast((QVideoFrameInput*)self, param1);
}

int32_t q_videoframeinput_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVideoFrameInput_Metacall((QVideoFrameInput*)self, param1, param2, param3);
}

void q_videoframeinput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVideoFrameInput_OnMetacall((QVideoFrameInput*)self, (intptr_t)slot);
}

int32_t q_videoframeinput_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVideoFrameInput_QBaseMetacall((QVideoFrameInput*)self, param1, param2, param3);
}

const char* q_videoframeinput_tr(const char* s) {
    libqt_string _str = QVideoFrameInput_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_videoframeinput_send_video_frame(void* self, void* frame) {
    return QVideoFrameInput_SendVideoFrame((QVideoFrameInput*)self, (QVideoFrame*)frame);
}

QVideoFrameFormat* q_videoframeinput_format(void* self) {
    return QVideoFrameInput_Format((QVideoFrameInput*)self);
}

QMediaCaptureSession* q_videoframeinput_capture_session(void* self) {
    return QVideoFrameInput_CaptureSession((QVideoFrameInput*)self);
}

void q_videoframeinput_ready_to_send_video_frame(void* self) {
    QVideoFrameInput_ReadyToSendVideoFrame((QVideoFrameInput*)self);
}

void q_videoframeinput_on_ready_to_send_video_frame(void* self, void (*slot)(void*)) {
    QVideoFrameInput_Connect_ReadyToSendVideoFrame((QVideoFrameInput*)self, (intptr_t)slot);
}

const char* q_videoframeinput_tr2(const char* s, const char* c) {
    libqt_string _str = QVideoFrameInput_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_videoframeinput_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVideoFrameInput_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_videoframeinput_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videoframeinput_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_videoframeinput_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_videoframeinput_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_videoframeinput_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_videoframeinput_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_videoframeinput_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_videoframeinput_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_videoframeinput_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_videoframeinput_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_videoframeinput_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_videoframeinput_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_videoframeinput_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_videoframeinput_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_videoframeinput_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_videoframeinput_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_videoframeinput_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_videoframeinput_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_videoframeinput_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_videoframeinput_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_videoframeinput_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_videoframeinput_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_videoframeinput_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_videoframeinput_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_videoframeinput_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_videoframeinput_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_videoframeinput_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_videoframeinput_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_videoframeinput_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_videoframeinput_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_videoframeinput_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_videoframeinput_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_videoframeinput_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_videoframeinput_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_videoframeinput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_videoframeinput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_videoframeinput_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_videoframeinput_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_videoframeinput_event(void* self, void* event) {
    return QVideoFrameInput_Event((QVideoFrameInput*)self, (QEvent*)event);
}

bool q_videoframeinput_qbase_event(void* self, void* event) {
    return QVideoFrameInput_QBaseEvent((QVideoFrameInput*)self, (QEvent*)event);
}

void q_videoframeinput_on_event(void* self, bool (*slot)(void*, void*)) {
    QVideoFrameInput_OnEvent((QVideoFrameInput*)self, (intptr_t)slot);
}

bool q_videoframeinput_event_filter(void* self, void* watched, void* event) {
    return QVideoFrameInput_EventFilter((QVideoFrameInput*)self, (QObject*)watched, (QEvent*)event);
}

bool q_videoframeinput_qbase_event_filter(void* self, void* watched, void* event) {
    return QVideoFrameInput_QBaseEventFilter((QVideoFrameInput*)self, (QObject*)watched, (QEvent*)event);
}

void q_videoframeinput_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVideoFrameInput_OnEventFilter((QVideoFrameInput*)self, (intptr_t)slot);
}

void q_videoframeinput_timer_event(void* self, void* event) {
    QVideoFrameInput_TimerEvent((QVideoFrameInput*)self, (QTimerEvent*)event);
}

void q_videoframeinput_qbase_timer_event(void* self, void* event) {
    QVideoFrameInput_QBaseTimerEvent((QVideoFrameInput*)self, (QTimerEvent*)event);
}

void q_videoframeinput_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVideoFrameInput_OnTimerEvent((QVideoFrameInput*)self, (intptr_t)slot);
}

void q_videoframeinput_child_event(void* self, void* event) {
    QVideoFrameInput_ChildEvent((QVideoFrameInput*)self, (QChildEvent*)event);
}

void q_videoframeinput_qbase_child_event(void* self, void* event) {
    QVideoFrameInput_QBaseChildEvent((QVideoFrameInput*)self, (QChildEvent*)event);
}

void q_videoframeinput_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVideoFrameInput_OnChildEvent((QVideoFrameInput*)self, (intptr_t)slot);
}

void q_videoframeinput_custom_event(void* self, void* event) {
    QVideoFrameInput_CustomEvent((QVideoFrameInput*)self, (QEvent*)event);
}

void q_videoframeinput_qbase_custom_event(void* self, void* event) {
    QVideoFrameInput_QBaseCustomEvent((QVideoFrameInput*)self, (QEvent*)event);
}

void q_videoframeinput_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVideoFrameInput_OnCustomEvent((QVideoFrameInput*)self, (intptr_t)slot);
}

void q_videoframeinput_connect_notify(void* self, void* signal) {
    QVideoFrameInput_ConnectNotify((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_qbase_connect_notify(void* self, void* signal) {
    QVideoFrameInput_QBaseConnectNotify((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVideoFrameInput_OnConnectNotify((QVideoFrameInput*)self, (intptr_t)slot);
}

void q_videoframeinput_disconnect_notify(void* self, void* signal) {
    QVideoFrameInput_DisconnectNotify((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_qbase_disconnect_notify(void* self, void* signal) {
    QVideoFrameInput_QBaseDisconnectNotify((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVideoFrameInput_OnDisconnectNotify((QVideoFrameInput*)self, (intptr_t)slot);
}

QObject* q_videoframeinput_sender(void* self) {
    return QVideoFrameInput_Sender((QVideoFrameInput*)self);
}

QObject* q_videoframeinput_qbase_sender(void* self) {
    return QVideoFrameInput_QBaseSender((QVideoFrameInput*)self);
}

void q_videoframeinput_on_sender(void* self, QObject* (*slot)()) {
    QVideoFrameInput_OnSender((QVideoFrameInput*)self, (intptr_t)slot);
}

int32_t q_videoframeinput_sender_signal_index(void* self) {
    return QVideoFrameInput_SenderSignalIndex((QVideoFrameInput*)self);
}

int32_t q_videoframeinput_qbase_sender_signal_index(void* self) {
    return QVideoFrameInput_QBaseSenderSignalIndex((QVideoFrameInput*)self);
}

void q_videoframeinput_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVideoFrameInput_OnSenderSignalIndex((QVideoFrameInput*)self, (intptr_t)slot);
}

int32_t q_videoframeinput_receivers(void* self, const char* signal) {
    return QVideoFrameInput_Receivers((QVideoFrameInput*)self, signal);
}

int32_t q_videoframeinput_qbase_receivers(void* self, const char* signal) {
    return QVideoFrameInput_QBaseReceivers((QVideoFrameInput*)self, signal);
}

void q_videoframeinput_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVideoFrameInput_OnReceivers((QVideoFrameInput*)self, (intptr_t)slot);
}

bool q_videoframeinput_is_signal_connected(void* self, void* signal) {
    return QVideoFrameInput_IsSignalConnected((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

bool q_videoframeinput_qbase_is_signal_connected(void* self, void* signal) {
    return QVideoFrameInput_QBaseIsSignalConnected((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVideoFrameInput_OnIsSignalConnected((QVideoFrameInput*)self, (intptr_t)slot);
}

void q_videoframeinput_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_videoframeinput_delete(void* self) {
    QVideoFrameInput_Delete((QVideoFrameInput*)(self));
}
