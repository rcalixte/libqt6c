#include "../libqanystringview.hpp"
#include "libqaudiodevice.hpp"
#include "libqaudioformat.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqaudiosink.hpp"
#include "libqaudiosink.h"

QAudioSink* q_audiosink_new() {
    return QAudioSink_new();
}

QAudioSink* q_audiosink_new2(void* audioDeviceInfo) {
    return QAudioSink_new2((QAudioDevice*)audioDeviceInfo);
}

QAudioSink* q_audiosink_new3(void* format) {
    return QAudioSink_new3((QAudioFormat*)format);
}

QAudioSink* q_audiosink_new4(void* format, void* parent) {
    return QAudioSink_new4((QAudioFormat*)format, (QObject*)parent);
}

QAudioSink* q_audiosink_new5(void* audioDeviceInfo, void* format) {
    return QAudioSink_new5((QAudioDevice*)audioDeviceInfo, (QAudioFormat*)format);
}

QAudioSink* q_audiosink_new6(void* audioDeviceInfo, void* format, void* parent) {
    return QAudioSink_new6((QAudioDevice*)audioDeviceInfo, (QAudioFormat*)format, (QObject*)parent);
}

QMetaObject* q_audiosink_meta_object(void* self) {
    return QAudioSink_MetaObject((QAudioSink*)self);
}

void* q_audiosink_metacast(void* self, const char* param1) {
    return QAudioSink_Metacast((QAudioSink*)self, param1);
}

int32_t q_audiosink_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioSink_Metacall((QAudioSink*)self, param1, param2, param3);
}

void q_audiosink_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAudioSink_OnMetacall((QAudioSink*)self, (intptr_t)slot);
}

int32_t q_audiosink_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioSink_QBaseMetacall((QAudioSink*)self, param1, param2, param3);
}

const char* q_audiosink_tr(const char* s) {
    libqt_string _str = QAudioSink_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_audiosink_is_null(void* self) {
    return QAudioSink_IsNull((QAudioSink*)self);
}

QAudioFormat* q_audiosink_format(void* self) {
    return QAudioSink_Format((QAudioSink*)self);
}

void q_audiosink_start(void* self, void* device) {
    QAudioSink_Start((QAudioSink*)self, (QIODevice*)device);
}

QIODevice* q_audiosink_start2(void* self) {
    return QAudioSink_Start2((QAudioSink*)self);
}

void q_audiosink_stop(void* self) {
    QAudioSink_Stop((QAudioSink*)self);
}

void q_audiosink_reset(void* self) {
    QAudioSink_Reset((QAudioSink*)self);
}

void q_audiosink_suspend(void* self) {
    QAudioSink_Suspend((QAudioSink*)self);
}

void q_audiosink_resume(void* self) {
    QAudioSink_Resume((QAudioSink*)self);
}

void q_audiosink_set_buffer_size(void* self, int64_t bytes) {
    QAudioSink_SetBufferSize((QAudioSink*)self, bytes);
}

int64_t q_audiosink_buffer_size(void* self) {
    return QAudioSink_BufferSize((QAudioSink*)self);
}

int64_t q_audiosink_bytes_free(void* self) {
    return QAudioSink_BytesFree((QAudioSink*)self);
}

long long q_audiosink_processed_u_secs(void* self) {
    return QAudioSink_ProcessedUSecs((QAudioSink*)self);
}

long long q_audiosink_elapsed_u_secs(void* self) {
    return QAudioSink_ElapsedUSecs((QAudioSink*)self);
}

int64_t q_audiosink_error(void* self) {
    return QAudioSink_Error((QAudioSink*)self);
}

int64_t q_audiosink_state(void* self) {
    return QAudioSink_State((QAudioSink*)self);
}

void q_audiosink_set_volume(void* self, double volume) {
    QAudioSink_SetVolume((QAudioSink*)self, volume);
}

double q_audiosink_volume(void* self) {
    return QAudioSink_Volume((QAudioSink*)self);
}

void q_audiosink_state_changed(void* self, int64_t state) {
    QAudioSink_StateChanged((QAudioSink*)self, state);
}

void q_audiosink_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QAudioSink_Connect_StateChanged((QAudioSink*)self, (intptr_t)slot);
}

const char* q_audiosink_tr2(const char* s, const char* c) {
    libqt_string _str = QAudioSink_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiosink_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAudioSink_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiosink_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audiosink_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_audiosink_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audiosink_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audiosink_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audiosink_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audiosink_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audiosink_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_audiosink_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audiosink_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_audiosink_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audiosink_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audiosink_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audiosink_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audiosink_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audiosink_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audiosink_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audiosink_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audiosink_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_audiosink_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audiosink_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audiosink_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audiosink_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audiosink_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_audiosink_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_audiosink_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audiosink_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audiosink_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_audiosink_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audiosink_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audiosink_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_audiosink_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_audiosink_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_audiosink_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_audiosink_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audiosink_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_audiosink_event(void* self, void* event) {
    return QAudioSink_Event((QAudioSink*)self, (QEvent*)event);
}

bool q_audiosink_qbase_event(void* self, void* event) {
    return QAudioSink_QBaseEvent((QAudioSink*)self, (QEvent*)event);
}

void q_audiosink_on_event(void* self, bool (*slot)(void*, void*)) {
    QAudioSink_OnEvent((QAudioSink*)self, (intptr_t)slot);
}

bool q_audiosink_event_filter(void* self, void* watched, void* event) {
    return QAudioSink_EventFilter((QAudioSink*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audiosink_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioSink_QBaseEventFilter((QAudioSink*)self, (QObject*)watched, (QEvent*)event);
}

void q_audiosink_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAudioSink_OnEventFilter((QAudioSink*)self, (intptr_t)slot);
}

void q_audiosink_timer_event(void* self, void* event) {
    QAudioSink_TimerEvent((QAudioSink*)self, (QTimerEvent*)event);
}

void q_audiosink_qbase_timer_event(void* self, void* event) {
    QAudioSink_QBaseTimerEvent((QAudioSink*)self, (QTimerEvent*)event);
}

void q_audiosink_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAudioSink_OnTimerEvent((QAudioSink*)self, (intptr_t)slot);
}

void q_audiosink_child_event(void* self, void* event) {
    QAudioSink_ChildEvent((QAudioSink*)self, (QChildEvent*)event);
}

void q_audiosink_qbase_child_event(void* self, void* event) {
    QAudioSink_QBaseChildEvent((QAudioSink*)self, (QChildEvent*)event);
}

void q_audiosink_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAudioSink_OnChildEvent((QAudioSink*)self, (intptr_t)slot);
}

void q_audiosink_custom_event(void* self, void* event) {
    QAudioSink_CustomEvent((QAudioSink*)self, (QEvent*)event);
}

void q_audiosink_qbase_custom_event(void* self, void* event) {
    QAudioSink_QBaseCustomEvent((QAudioSink*)self, (QEvent*)event);
}

void q_audiosink_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAudioSink_OnCustomEvent((QAudioSink*)self, (intptr_t)slot);
}

void q_audiosink_connect_notify(void* self, void* signal) {
    QAudioSink_ConnectNotify((QAudioSink*)self, (QMetaMethod*)signal);
}

void q_audiosink_qbase_connect_notify(void* self, void* signal) {
    QAudioSink_QBaseConnectNotify((QAudioSink*)self, (QMetaMethod*)signal);
}

void q_audiosink_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioSink_OnConnectNotify((QAudioSink*)self, (intptr_t)slot);
}

void q_audiosink_disconnect_notify(void* self, void* signal) {
    QAudioSink_DisconnectNotify((QAudioSink*)self, (QMetaMethod*)signal);
}

void q_audiosink_qbase_disconnect_notify(void* self, void* signal) {
    QAudioSink_QBaseDisconnectNotify((QAudioSink*)self, (QMetaMethod*)signal);
}

void q_audiosink_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioSink_OnDisconnectNotify((QAudioSink*)self, (intptr_t)slot);
}

QObject* q_audiosink_sender(void* self) {
    return QAudioSink_Sender((QAudioSink*)self);
}

QObject* q_audiosink_qbase_sender(void* self) {
    return QAudioSink_QBaseSender((QAudioSink*)self);
}

void q_audiosink_on_sender(void* self, QObject* (*slot)()) {
    QAudioSink_OnSender((QAudioSink*)self, (intptr_t)slot);
}

int32_t q_audiosink_sender_signal_index(void* self) {
    return QAudioSink_SenderSignalIndex((QAudioSink*)self);
}

int32_t q_audiosink_qbase_sender_signal_index(void* self) {
    return QAudioSink_QBaseSenderSignalIndex((QAudioSink*)self);
}

void q_audiosink_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAudioSink_OnSenderSignalIndex((QAudioSink*)self, (intptr_t)slot);
}

int32_t q_audiosink_receivers(void* self, const char* signal) {
    return QAudioSink_Receivers((QAudioSink*)self, signal);
}

int32_t q_audiosink_qbase_receivers(void* self, const char* signal) {
    return QAudioSink_QBaseReceivers((QAudioSink*)self, signal);
}

void q_audiosink_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAudioSink_OnReceivers((QAudioSink*)self, (intptr_t)slot);
}

bool q_audiosink_is_signal_connected(void* self, void* signal) {
    return QAudioSink_IsSignalConnected((QAudioSink*)self, (QMetaMethod*)signal);
}

bool q_audiosink_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioSink_QBaseIsSignalConnected((QAudioSink*)self, (QMetaMethod*)signal);
}

void q_audiosink_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAudioSink_OnIsSignalConnected((QAudioSink*)self, (intptr_t)slot);
}

void q_audiosink_delete(void* self) {
    QAudioSink_Delete((QAudioSink*)(self));
}
