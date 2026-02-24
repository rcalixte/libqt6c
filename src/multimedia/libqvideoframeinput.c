#include "../libqcoreevent.hpp"
#include "libqmediacapturesession.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqvideoframe.hpp"
#include "libqvideoframeformat.hpp"
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

void q_videoframeinput_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QVideoFrameInput_OnMetaObject((QVideoFrameInput*)self, (intptr_t)callback);
}

const QMetaObject* q_videoframeinput_super_meta_object(void* self) {
    return QVideoFrameInput_SuperMetaObject((QVideoFrameInput*)self);
}

void* q_videoframeinput_metacast(void* self, const char* param1) {
    return QVideoFrameInput_Metacast((QVideoFrameInput*)self, param1);
}

void q_videoframeinput_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QVideoFrameInput_OnMetacast((QVideoFrameInput*)self, (intptr_t)callback);
}

void* q_videoframeinput_super_metacast(void* self, const char* param1) {
    return QVideoFrameInput_SuperMetacast((QVideoFrameInput*)self, param1);
}

int32_t q_videoframeinput_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVideoFrameInput_Metacall((QVideoFrameInput*)self, param1, param2, param3);
}

void q_videoframeinput_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVideoFrameInput_OnMetacall((QVideoFrameInput*)self, (intptr_t)callback);
}

int32_t q_videoframeinput_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVideoFrameInput_SuperMetacall((QVideoFrameInput*)self, param1, param2, param3);
}

const char* q_videoframeinput_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
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

void q_videoframeinput_on_ready_to_send_video_frame(void* self, void (*callback)(void*)) {
    QVideoFrameInput_Connect_ReadyToSendVideoFrame((QVideoFrameInput*)self, (intptr_t)callback);
}

const char* q_videoframeinput_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_videoframeinput_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
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

void q_videoframeinput_set_object_name(void* self, const char* name) {
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

int32_t q_videoframeinput_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_videoframeinput_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_videoframeinput_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
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

QMetaObject__Connection* q_videoframeinput_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_videoframeinput_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_videoframeinput_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_videoframeinput_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_videoframeinput_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_videoframeinput_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_videoframeinput_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_videoframeinput_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
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
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_videoframeinput_dynamic_property_names\n");
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

QBindingStorage* q_videoframeinput_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_videoframeinput_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_videoframeinput_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_videoframeinput_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
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

int32_t q_videoframeinput_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_videoframeinput_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_videoframeinput_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_videoframeinput_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_videoframeinput_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_videoframeinput_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_videoframeinput_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_videoframeinput_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_videoframeinput_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_videoframeinput_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_videoframeinput_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_videoframeinput_event(void* self, void* event) {
    return QVideoFrameInput_Event((QVideoFrameInput*)self, (QEvent*)event);
}

bool q_videoframeinput_super_event(void* self, void* event) {
    return QVideoFrameInput_SuperEvent((QVideoFrameInput*)self, (QEvent*)event);
}

void q_videoframeinput_on_event(void* self, bool (*callback)(void*, void*)) {
    QVideoFrameInput_OnEvent((QVideoFrameInput*)self, (intptr_t)callback);
}

bool q_videoframeinput_event_filter(void* self, void* watched, void* event) {
    return QVideoFrameInput_EventFilter((QVideoFrameInput*)self, (QObject*)watched, (QEvent*)event);
}

bool q_videoframeinput_super_event_filter(void* self, void* watched, void* event) {
    return QVideoFrameInput_SuperEventFilter((QVideoFrameInput*)self, (QObject*)watched, (QEvent*)event);
}

void q_videoframeinput_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVideoFrameInput_OnEventFilter((QVideoFrameInput*)self, (intptr_t)callback);
}

void q_videoframeinput_timer_event(void* self, void* event) {
    QVideoFrameInput_TimerEvent((QVideoFrameInput*)self, (QTimerEvent*)event);
}

void q_videoframeinput_super_timer_event(void* self, void* event) {
    QVideoFrameInput_SuperTimerEvent((QVideoFrameInput*)self, (QTimerEvent*)event);
}

void q_videoframeinput_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVideoFrameInput_OnTimerEvent((QVideoFrameInput*)self, (intptr_t)callback);
}

void q_videoframeinput_child_event(void* self, void* event) {
    QVideoFrameInput_ChildEvent((QVideoFrameInput*)self, (QChildEvent*)event);
}

void q_videoframeinput_super_child_event(void* self, void* event) {
    QVideoFrameInput_SuperChildEvent((QVideoFrameInput*)self, (QChildEvent*)event);
}

void q_videoframeinput_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVideoFrameInput_OnChildEvent((QVideoFrameInput*)self, (intptr_t)callback);
}

void q_videoframeinput_custom_event(void* self, void* event) {
    QVideoFrameInput_CustomEvent((QVideoFrameInput*)self, (QEvent*)event);
}

void q_videoframeinput_super_custom_event(void* self, void* event) {
    QVideoFrameInput_SuperCustomEvent((QVideoFrameInput*)self, (QEvent*)event);
}

void q_videoframeinput_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVideoFrameInput_OnCustomEvent((QVideoFrameInput*)self, (intptr_t)callback);
}

void q_videoframeinput_connect_notify(void* self, void* signal) {
    QVideoFrameInput_ConnectNotify((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_super_connect_notify(void* self, void* signal) {
    QVideoFrameInput_SuperConnectNotify((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QVideoFrameInput_OnConnectNotify((QVideoFrameInput*)self, (intptr_t)callback);
}

void q_videoframeinput_disconnect_notify(void* self, void* signal) {
    QVideoFrameInput_DisconnectNotify((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_super_disconnect_notify(void* self, void* signal) {
    QVideoFrameInput_SuperDisconnectNotify((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QVideoFrameInput_OnDisconnectNotify((QVideoFrameInput*)self, (intptr_t)callback);
}

QObject* q_videoframeinput_sender(void* self) {
    return QVideoFrameInput_Sender((QVideoFrameInput*)self);
}

QObject* q_videoframeinput_super_sender(void* self) {
    return QVideoFrameInput_SuperSender((QVideoFrameInput*)self);
}

void q_videoframeinput_on_sender(void* self, QObject* (*callback)()) {
    QVideoFrameInput_OnSender((QVideoFrameInput*)self, (intptr_t)callback);
}

int32_t q_videoframeinput_sender_signal_index(void* self) {
    return QVideoFrameInput_SenderSignalIndex((QVideoFrameInput*)self);
}

int32_t q_videoframeinput_super_sender_signal_index(void* self) {
    return QVideoFrameInput_SuperSenderSignalIndex((QVideoFrameInput*)self);
}

void q_videoframeinput_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QVideoFrameInput_OnSenderSignalIndex((QVideoFrameInput*)self, (intptr_t)callback);
}

int32_t q_videoframeinput_receivers(void* self, const char* signal) {
    return QVideoFrameInput_Receivers((QVideoFrameInput*)self, signal);
}

int32_t q_videoframeinput_super_receivers(void* self, const char* signal) {
    return QVideoFrameInput_SuperReceivers((QVideoFrameInput*)self, signal);
}

void q_videoframeinput_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QVideoFrameInput_OnReceivers((QVideoFrameInput*)self, (intptr_t)callback);
}

bool q_videoframeinput_is_signal_connected(void* self, void* signal) {
    return QVideoFrameInput_IsSignalConnected((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

bool q_videoframeinput_super_is_signal_connected(void* self, void* signal) {
    return QVideoFrameInput_SuperIsSignalConnected((QVideoFrameInput*)self, (QMetaMethod*)signal);
}

void q_videoframeinput_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QVideoFrameInput_OnIsSignalConnected((QVideoFrameInput*)self, (intptr_t)callback);
}

void q_videoframeinput_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_videoframeinput_delete(void* self) {
    QVideoFrameInput_Delete((QVideoFrameInput*)(self));
}
