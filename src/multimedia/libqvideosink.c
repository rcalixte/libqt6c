#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "libqvideoframe.hpp"
#include "libqvideosink.hpp"
#include "libqvideosink.h"

QVideoSink* q_videosink_new() {
    return QVideoSink_new();
}

QVideoSink* q_videosink_new2(void* parent) {
    return QVideoSink_new2((QObject*)parent);
}

const QMetaObject* q_videosink_meta_object(void* self) {
    return QVideoSink_MetaObject((QVideoSink*)self);
}

void q_videosink_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QVideoSink_OnMetaObject((QVideoSink*)self, (intptr_t)callback);
}

const QMetaObject* q_videosink_qbase_meta_object(void* self) {
    return QVideoSink_QBaseMetaObject((QVideoSink*)self);
}

void* q_videosink_metacast(void* self, const char* param1) {
    return QVideoSink_Metacast((QVideoSink*)self, param1);
}

void q_videosink_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QVideoSink_OnMetacast((QVideoSink*)self, (intptr_t)callback);
}

void* q_videosink_qbase_metacast(void* self, const char* param1) {
    return QVideoSink_QBaseMetacast((QVideoSink*)self, param1);
}

int32_t q_videosink_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVideoSink_Metacall((QVideoSink*)self, param1, param2, param3);
}

void q_videosink_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVideoSink_OnMetacall((QVideoSink*)self, (intptr_t)callback);
}

int32_t q_videosink_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVideoSink_QBaseMetacall((QVideoSink*)self, param1, param2, param3);
}

const char* q_videosink_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_videosink_video_size(void* self) {
    return QVideoSink_VideoSize((QVideoSink*)self);
}

const char* q_videosink_subtitle_text(void* self) {
    libqt_string _str = QVideoSink_SubtitleText((QVideoSink*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videosink_set_subtitle_text(void* self, const char* subtitle) {
    QVideoSink_SetSubtitleText((QVideoSink*)self, qstring(subtitle));
}

void q_videosink_set_video_frame(void* self, void* frame) {
    QVideoSink_SetVideoFrame((QVideoSink*)self, (QVideoFrame*)frame);
}

QVideoFrame* q_videosink_video_frame(void* self) {
    return QVideoSink_VideoFrame((QVideoSink*)self);
}

void q_videosink_video_frame_changed(void* self, void* frame) {
    QVideoSink_VideoFrameChanged((QVideoSink*)self, (QVideoFrame*)frame);
}

void q_videosink_on_video_frame_changed(void* self, void (*callback)(void*, void*)) {
    QVideoSink_Connect_VideoFrameChanged((QVideoSink*)self, (intptr_t)callback);
}

void q_videosink_subtitle_text_changed(void* self, const char* subtitleText) {
    QVideoSink_SubtitleTextChanged((QVideoSink*)self, qstring(subtitleText));
}

void q_videosink_on_subtitle_text_changed(void* self, void (*callback)(void*, const char*)) {
    QVideoSink_Connect_SubtitleTextChanged((QVideoSink*)self, (intptr_t)callback);
}

void q_videosink_video_size_changed(void* self) {
    QVideoSink_VideoSizeChanged((QVideoSink*)self);
}

void q_videosink_on_video_size_changed(void* self, void (*callback)(void*)) {
    QVideoSink_Connect_VideoSizeChanged((QVideoSink*)self, (intptr_t)callback);
}

const char* q_videosink_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_videosink_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_videosink_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videosink_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_videosink_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_videosink_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_videosink_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_videosink_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_videosink_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_videosink_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_videosink_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_videosink_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_videosink_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_videosink_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_videosink_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_videosink_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_videosink_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_videosink_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_videosink_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_videosink_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_videosink_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_videosink_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_videosink_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_videosink_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_videosink_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_videosink_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_videosink_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_videosink_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_videosink_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_videosink_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_videosink_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_videosink_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_videosink_dynamic_property_names\n");
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

QBindingStorage* q_videosink_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_videosink_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_videosink_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_videosink_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_videosink_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_videosink_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_videosink_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_videosink_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_videosink_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_videosink_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_videosink_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_videosink_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_videosink_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_videosink_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_videosink_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_videosink_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_videosink_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_videosink_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_videosink_event(void* self, void* event) {
    return QVideoSink_Event((QVideoSink*)self, (QEvent*)event);
}

bool q_videosink_qbase_event(void* self, void* event) {
    return QVideoSink_QBaseEvent((QVideoSink*)self, (QEvent*)event);
}

void q_videosink_on_event(void* self, bool (*callback)(void*, void*)) {
    QVideoSink_OnEvent((QVideoSink*)self, (intptr_t)callback);
}

bool q_videosink_event_filter(void* self, void* watched, void* event) {
    return QVideoSink_EventFilter((QVideoSink*)self, (QObject*)watched, (QEvent*)event);
}

bool q_videosink_qbase_event_filter(void* self, void* watched, void* event) {
    return QVideoSink_QBaseEventFilter((QVideoSink*)self, (QObject*)watched, (QEvent*)event);
}

void q_videosink_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVideoSink_OnEventFilter((QVideoSink*)self, (intptr_t)callback);
}

void q_videosink_timer_event(void* self, void* event) {
    QVideoSink_TimerEvent((QVideoSink*)self, (QTimerEvent*)event);
}

void q_videosink_qbase_timer_event(void* self, void* event) {
    QVideoSink_QBaseTimerEvent((QVideoSink*)self, (QTimerEvent*)event);
}

void q_videosink_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVideoSink_OnTimerEvent((QVideoSink*)self, (intptr_t)callback);
}

void q_videosink_child_event(void* self, void* event) {
    QVideoSink_ChildEvent((QVideoSink*)self, (QChildEvent*)event);
}

void q_videosink_qbase_child_event(void* self, void* event) {
    QVideoSink_QBaseChildEvent((QVideoSink*)self, (QChildEvent*)event);
}

void q_videosink_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVideoSink_OnChildEvent((QVideoSink*)self, (intptr_t)callback);
}

void q_videosink_custom_event(void* self, void* event) {
    QVideoSink_CustomEvent((QVideoSink*)self, (QEvent*)event);
}

void q_videosink_qbase_custom_event(void* self, void* event) {
    QVideoSink_QBaseCustomEvent((QVideoSink*)self, (QEvent*)event);
}

void q_videosink_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVideoSink_OnCustomEvent((QVideoSink*)self, (intptr_t)callback);
}

void q_videosink_connect_notify(void* self, void* signal) {
    QVideoSink_ConnectNotify((QVideoSink*)self, (QMetaMethod*)signal);
}

void q_videosink_qbase_connect_notify(void* self, void* signal) {
    QVideoSink_QBaseConnectNotify((QVideoSink*)self, (QMetaMethod*)signal);
}

void q_videosink_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QVideoSink_OnConnectNotify((QVideoSink*)self, (intptr_t)callback);
}

void q_videosink_disconnect_notify(void* self, void* signal) {
    QVideoSink_DisconnectNotify((QVideoSink*)self, (QMetaMethod*)signal);
}

void q_videosink_qbase_disconnect_notify(void* self, void* signal) {
    QVideoSink_QBaseDisconnectNotify((QVideoSink*)self, (QMetaMethod*)signal);
}

void q_videosink_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QVideoSink_OnDisconnectNotify((QVideoSink*)self, (intptr_t)callback);
}

QObject* q_videosink_sender(void* self) {
    return QVideoSink_Sender((QVideoSink*)self);
}

QObject* q_videosink_qbase_sender(void* self) {
    return QVideoSink_QBaseSender((QVideoSink*)self);
}

void q_videosink_on_sender(void* self, QObject* (*callback)()) {
    QVideoSink_OnSender((QVideoSink*)self, (intptr_t)callback);
}

int32_t q_videosink_sender_signal_index(void* self) {
    return QVideoSink_SenderSignalIndex((QVideoSink*)self);
}

int32_t q_videosink_qbase_sender_signal_index(void* self) {
    return QVideoSink_QBaseSenderSignalIndex((QVideoSink*)self);
}

void q_videosink_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QVideoSink_OnSenderSignalIndex((QVideoSink*)self, (intptr_t)callback);
}

int32_t q_videosink_receivers(void* self, const char* signal) {
    return QVideoSink_Receivers((QVideoSink*)self, signal);
}

int32_t q_videosink_qbase_receivers(void* self, const char* signal) {
    return QVideoSink_QBaseReceivers((QVideoSink*)self, signal);
}

void q_videosink_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QVideoSink_OnReceivers((QVideoSink*)self, (intptr_t)callback);
}

bool q_videosink_is_signal_connected(void* self, void* signal) {
    return QVideoSink_IsSignalConnected((QVideoSink*)self, (QMetaMethod*)signal);
}

bool q_videosink_qbase_is_signal_connected(void* self, void* signal) {
    return QVideoSink_QBaseIsSignalConnected((QVideoSink*)self, (QMetaMethod*)signal);
}

void q_videosink_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QVideoSink_OnIsSignalConnected((QVideoSink*)self, (intptr_t)callback);
}

void q_videosink_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_videosink_delete(void* self) {
    QVideoSink_Delete((QVideoSink*)(self));
}
