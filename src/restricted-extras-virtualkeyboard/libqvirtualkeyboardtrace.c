#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqvariant.hpp"
#include "libqvirtualkeyboardtrace.hpp"
#include "libqvirtualkeyboardtrace.h"

QVirtualKeyboardTrace* q_virtualkeyboardtrace_new() {
    return QVirtualKeyboardTrace_New();
}

QVirtualKeyboardTrace* q_virtualkeyboardtrace_new2(void* parent) {
    return QVirtualKeyboardTrace_New2((QObject*)parent);
}

const QMetaObject* q_virtualkeyboardtrace_meta_object(const void* self) {
    return QVirtualKeyboardTrace_MetaObject((QVirtualKeyboardTrace*)self);
}

void q_virtualkeyboardtrace_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QVirtualKeyboardTrace_OnMetaObject((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

const QMetaObject* q_virtualkeyboardtrace_super_meta_object(const void* self) {
    return QVirtualKeyboardTrace_SuperMetaObject((QVirtualKeyboardTrace*)self);
}

void* q_virtualkeyboardtrace_metacast(void* self, const char* param1) {
    return QVirtualKeyboardTrace_Metacast((QVirtualKeyboardTrace*)self, param1);
}

void q_virtualkeyboardtrace_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QVirtualKeyboardTrace_OnMetacast((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void* q_virtualkeyboardtrace_super_metacast(void* self, const char* param1) {
    return QVirtualKeyboardTrace_SuperMetacast((QVirtualKeyboardTrace*)self, param1);
}

int32_t q_virtualkeyboardtrace_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardTrace_Metacall((QVirtualKeyboardTrace*)self, param1, param2, param3);
}

void q_virtualkeyboardtrace_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVirtualKeyboardTrace_OnMetacall((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

int32_t q_virtualkeyboardtrace_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardTrace_SuperMetacall((QVirtualKeyboardTrace*)self, param1, param2, param3);
}

const char* q_virtualkeyboardtrace_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_virtualkeyboardtrace_trace_id(const void* self) {
    return QVirtualKeyboardTrace_TraceId((QVirtualKeyboardTrace*)self);
}

void q_virtualkeyboardtrace_set_trace_id(void* self, int id) {
    QVirtualKeyboardTrace_SetTraceId((QVirtualKeyboardTrace*)self, id);
}

const char** q_virtualkeyboardtrace_channels(const void* self) {
    libqt_list _arr = QVirtualKeyboardTrace_Channels((QVirtualKeyboardTrace*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboardtrace_channels\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_virtualkeyboardtrace_set_channels(void* self, const char* channels[static 1]) {
    size_t channels_len = libqt_strv_length(channels);
    libqt_string* channels_qstr = (libqt_string*)malloc(channels_len * sizeof(libqt_string));
    if (channels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboardtrace_set_channels\n");
        abort();
    }
    for (size_t i = 0; i < channels_len; ++i)
        channels_qstr[i] = qstring(channels[i]);
    libqt_list channels_list = qlist(channels_qstr, channels_len);
    QVirtualKeyboardTrace_SetChannels((QVirtualKeyboardTrace*)self, channels_list);
    free(channels_qstr);
}

int32_t q_virtualkeyboardtrace_length(const void* self) {
    return QVirtualKeyboardTrace_Length((QVirtualKeyboardTrace*)self);
}

libqt_list /* of QVariant* */ q_virtualkeyboardtrace_points(const void* self) {
    libqt_list _arr = QVirtualKeyboardTrace_Points((QVirtualKeyboardTrace*)self);
    return _arr;
}

int32_t q_virtualkeyboardtrace_add_point(void* self, const void* point) {
    return QVirtualKeyboardTrace_AddPoint((QVirtualKeyboardTrace*)self, (QPointF*)point);
}

void q_virtualkeyboardtrace_set_channel_data(void* self, const char* channel, int index, const void* data) {
    QVirtualKeyboardTrace_SetChannelData((QVirtualKeyboardTrace*)self, qstring(channel), index, (QVariant*)data);
}

libqt_list /* of QVariant* */ q_virtualkeyboardtrace_channel_data(const void* self, const char* channel) {
    libqt_list _arr = QVirtualKeyboardTrace_ChannelData((QVirtualKeyboardTrace*)self, qstring(channel));
    return _arr;
}

bool q_virtualkeyboardtrace_is_final(const void* self) {
    return QVirtualKeyboardTrace_IsFinal((QVirtualKeyboardTrace*)self);
}

void q_virtualkeyboardtrace_set_final(void* self, bool final) {
    QVirtualKeyboardTrace_SetFinal((QVirtualKeyboardTrace*)self, final);
}

bool q_virtualkeyboardtrace_is_canceled(const void* self) {
    return QVirtualKeyboardTrace_IsCanceled((QVirtualKeyboardTrace*)self);
}

void q_virtualkeyboardtrace_set_canceled(void* self, bool canceled) {
    QVirtualKeyboardTrace_SetCanceled((QVirtualKeyboardTrace*)self, canceled);
}

double q_virtualkeyboardtrace_opacity(const void* self) {
    return QVirtualKeyboardTrace_Opacity((QVirtualKeyboardTrace*)self);
}

void q_virtualkeyboardtrace_set_opacity(void* self, double opacity) {
    QVirtualKeyboardTrace_SetOpacity((QVirtualKeyboardTrace*)self, opacity);
}

void q_virtualkeyboardtrace_start_hide_timer(void* self, int delayMs) {
    QVirtualKeyboardTrace_StartHideTimer((QVirtualKeyboardTrace*)self, delayMs);
}

void q_virtualkeyboardtrace_timer_event(void* self, void* event) {
    QVirtualKeyboardTrace_TimerEvent((QVirtualKeyboardTrace*)self, (QTimerEvent*)event);
}

void q_virtualkeyboardtrace_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardTrace_OnTimerEvent((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_super_timer_event(void* self, void* event) {
    QVirtualKeyboardTrace_SuperTimerEvent((QVirtualKeyboardTrace*)self, (QTimerEvent*)event);
}

void q_virtualkeyboardtrace_trace_id_changed(void* self, int traceId) {
    QVirtualKeyboardTrace_TraceIdChanged((QVirtualKeyboardTrace*)self, traceId);
}

void q_virtualkeyboardtrace_on_trace_id_changed(void* self, void (*callback)(void*, int)) {
    QVirtualKeyboardTrace_Connect_TraceIdChanged((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_channels_changed(void* self) {
    QVirtualKeyboardTrace_ChannelsChanged((QVirtualKeyboardTrace*)self);
}

void q_virtualkeyboardtrace_on_channels_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardTrace_Connect_ChannelsChanged((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_length_changed(void* self, int length) {
    QVirtualKeyboardTrace_LengthChanged((QVirtualKeyboardTrace*)self, length);
}

void q_virtualkeyboardtrace_on_length_changed(void* self, void (*callback)(void*, int)) {
    QVirtualKeyboardTrace_Connect_LengthChanged((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_final_changed(void* self, bool isFinal) {
    QVirtualKeyboardTrace_FinalChanged((QVirtualKeyboardTrace*)self, isFinal);
}

void q_virtualkeyboardtrace_on_final_changed(void* self, void (*callback)(void*, bool)) {
    QVirtualKeyboardTrace_Connect_FinalChanged((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_canceled_changed(void* self, bool isCanceled) {
    QVirtualKeyboardTrace_CanceledChanged((QVirtualKeyboardTrace*)self, isCanceled);
}

void q_virtualkeyboardtrace_on_canceled_changed(void* self, void (*callback)(void*, bool)) {
    QVirtualKeyboardTrace_Connect_CanceledChanged((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_opacity_changed(void* self, double opacity) {
    QVirtualKeyboardTrace_OpacityChanged((QVirtualKeyboardTrace*)self, opacity);
}

void q_virtualkeyboardtrace_on_opacity_changed(void* self, void (*callback)(void*, double)) {
    QVirtualKeyboardTrace_Connect_OpacityChanged((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

const char* q_virtualkeyboardtrace_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_virtualkeyboardtrace_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QVariant* */ q_virtualkeyboardtrace_points1(const void* self, int pos) {
    libqt_list _arr = QVirtualKeyboardTrace_Points1((QVirtualKeyboardTrace*)self, pos);
    return _arr;
}

libqt_list /* of QVariant* */ q_virtualkeyboardtrace_points2(const void* self, int pos, int count) {
    libqt_list _arr = QVirtualKeyboardTrace_Points2((QVirtualKeyboardTrace*)self, pos, count);
    return _arr;
}

libqt_list /* of QVariant* */ q_virtualkeyboardtrace_channel_data2(const void* self, const char* channel, int pos) {
    libqt_list _arr = QVirtualKeyboardTrace_ChannelData2((QVirtualKeyboardTrace*)self, qstring(channel), pos);
    return _arr;
}

libqt_list /* of QVariant* */ q_virtualkeyboardtrace_channel_data3(const void* self, const char* channel, int pos, int count) {
    libqt_list _arr = QVirtualKeyboardTrace_ChannelData3((QVirtualKeyboardTrace*)self, qstring(channel), pos, count);
    return _arr;
}

const char* q_virtualkeyboardtrace_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_virtualkeyboardtrace_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_virtualkeyboardtrace_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_virtualkeyboardtrace_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_virtualkeyboardtrace_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_virtualkeyboardtrace_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_virtualkeyboardtrace_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_virtualkeyboardtrace_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_virtualkeyboardtrace_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_virtualkeyboardtrace_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_virtualkeyboardtrace_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_virtualkeyboardtrace_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_virtualkeyboardtrace_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_virtualkeyboardtrace_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_virtualkeyboardtrace_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_virtualkeyboardtrace_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_virtualkeyboardtrace_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_virtualkeyboardtrace_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_virtualkeyboardtrace_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_virtualkeyboardtrace_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_virtualkeyboardtrace_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardtrace_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_virtualkeyboardtrace_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_virtualkeyboardtrace_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_virtualkeyboardtrace_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_virtualkeyboardtrace_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_virtualkeyboardtrace_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_virtualkeyboardtrace_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_virtualkeyboardtrace_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_virtualkeyboardtrace_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboardtrace_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_virtualkeyboardtrace_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_virtualkeyboardtrace_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_virtualkeyboardtrace_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_virtualkeyboardtrace_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboardtrace_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_virtualkeyboardtrace_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_virtualkeyboardtrace_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_virtualkeyboardtrace_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_virtualkeyboardtrace_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_virtualkeyboardtrace_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_virtualkeyboardtrace_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_virtualkeyboardtrace_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_virtualkeyboardtrace_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_virtualkeyboardtrace_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_virtualkeyboardtrace_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardtrace_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_virtualkeyboardtrace_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_virtualkeyboardtrace_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_virtualkeyboardtrace_event(void* self, void* event) {
    return QVirtualKeyboardTrace_Event((QVirtualKeyboardTrace*)self, (QEvent*)event);
}

bool q_virtualkeyboardtrace_super_event(void* self, void* event) {
    return QVirtualKeyboardTrace_SuperEvent((QVirtualKeyboardTrace*)self, (QEvent*)event);
}

void q_virtualkeyboardtrace_on_event(void* self, bool (*callback)(void*, void*)) {
    QVirtualKeyboardTrace_OnEvent((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

bool q_virtualkeyboardtrace_event_filter(void* self, void* watched, void* event) {
    return QVirtualKeyboardTrace_EventFilter((QVirtualKeyboardTrace*)self, (QObject*)watched, (QEvent*)event);
}

bool q_virtualkeyboardtrace_super_event_filter(void* self, void* watched, void* event) {
    return QVirtualKeyboardTrace_SuperEventFilter((QVirtualKeyboardTrace*)self, (QObject*)watched, (QEvent*)event);
}

void q_virtualkeyboardtrace_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVirtualKeyboardTrace_OnEventFilter((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_child_event(void* self, void* event) {
    QVirtualKeyboardTrace_ChildEvent((QVirtualKeyboardTrace*)self, (QChildEvent*)event);
}

void q_virtualkeyboardtrace_super_child_event(void* self, void* event) {
    QVirtualKeyboardTrace_SuperChildEvent((QVirtualKeyboardTrace*)self, (QChildEvent*)event);
}

void q_virtualkeyboardtrace_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardTrace_OnChildEvent((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_custom_event(void* self, void* event) {
    QVirtualKeyboardTrace_CustomEvent((QVirtualKeyboardTrace*)self, (QEvent*)event);
}

void q_virtualkeyboardtrace_super_custom_event(void* self, void* event) {
    QVirtualKeyboardTrace_SuperCustomEvent((QVirtualKeyboardTrace*)self, (QEvent*)event);
}

void q_virtualkeyboardtrace_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardTrace_OnCustomEvent((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_connect_notify(void* self, const void* signal) {
    QVirtualKeyboardTrace_ConnectNotify((QVirtualKeyboardTrace*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardtrace_super_connect_notify(void* self, const void* signal) {
    QVirtualKeyboardTrace_SuperConnectNotify((QVirtualKeyboardTrace*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardtrace_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QVirtualKeyboardTrace_OnConnectNotify((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_disconnect_notify(void* self, const void* signal) {
    QVirtualKeyboardTrace_DisconnectNotify((QVirtualKeyboardTrace*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardtrace_super_disconnect_notify(void* self, const void* signal) {
    QVirtualKeyboardTrace_SuperDisconnectNotify((QVirtualKeyboardTrace*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardtrace_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QVirtualKeyboardTrace_OnDisconnectNotify((QVirtualKeyboardTrace*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboardtrace_sender(const void* self) {
    return QVirtualKeyboardTrace_Sender((QVirtualKeyboardTrace*)self);
}

int32_t q_virtualkeyboardtrace_sender_signal_index(const void* self) {
    return QVirtualKeyboardTrace_SenderSignalIndex((QVirtualKeyboardTrace*)self);
}

int32_t q_virtualkeyboardtrace_receivers(const void* self, const char* signal) {
    return QVirtualKeyboardTrace_Receivers((QVirtualKeyboardTrace*)self, signal);
}

bool q_virtualkeyboardtrace_is_signal_connected(const void* self, const void* signal) {
    return QVirtualKeyboardTrace_IsSignalConnected((QVirtualKeyboardTrace*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardtrace_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_virtualkeyboardtrace_delete(void* self) {
    QVirtualKeyboardTrace_Delete((QVirtualKeyboardTrace*)(self));
}
