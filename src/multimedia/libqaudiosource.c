#include "libqaudiodevice.hpp"
#include "libqaudioformat.hpp"
#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqaudiosource.hpp"
#include "libqaudiosource.h"

QAudioSource* q_audiosource_new() {
    return QAudioSource_new();
}

QAudioSource* q_audiosource_new2(void* audioDeviceInfo) {
    return QAudioSource_new2((QAudioDevice*)audioDeviceInfo);
}

QAudioSource* q_audiosource_new3(void* format) {
    return QAudioSource_new3((QAudioFormat*)format);
}

QAudioSource* q_audiosource_new4(void* format, void* parent) {
    return QAudioSource_new4((QAudioFormat*)format, (QObject*)parent);
}

QAudioSource* q_audiosource_new5(void* audioDeviceInfo, void* format) {
    return QAudioSource_new5((QAudioDevice*)audioDeviceInfo, (QAudioFormat*)format);
}

QAudioSource* q_audiosource_new6(void* audioDeviceInfo, void* format, void* parent) {
    return QAudioSource_new6((QAudioDevice*)audioDeviceInfo, (QAudioFormat*)format, (QObject*)parent);
}

const QMetaObject* q_audiosource_meta_object(void* self) {
    return QAudioSource_MetaObject((QAudioSource*)self);
}

void q_audiosource_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QAudioSource_OnMetaObject((QAudioSource*)self, (intptr_t)callback);
}

const QMetaObject* q_audiosource_qbase_meta_object(void* self) {
    return QAudioSource_QBaseMetaObject((QAudioSource*)self);
}

void* q_audiosource_metacast(void* self, const char* param1) {
    return QAudioSource_Metacast((QAudioSource*)self, param1);
}

void q_audiosource_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAudioSource_OnMetacast((QAudioSource*)self, (intptr_t)callback);
}

void* q_audiosource_qbase_metacast(void* self, const char* param1) {
    return QAudioSource_QBaseMetacast((QAudioSource*)self, param1);
}

int32_t q_audiosource_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioSource_Metacall((QAudioSource*)self, param1, param2, param3);
}

void q_audiosource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAudioSource_OnMetacall((QAudioSource*)self, (intptr_t)callback);
}

int32_t q_audiosource_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioSource_QBaseMetacall((QAudioSource*)self, param1, param2, param3);
}

const char* q_audiosource_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_audiosource_is_null(void* self) {
    return QAudioSource_IsNull((QAudioSource*)self);
}

QAudioFormat* q_audiosource_format(void* self) {
    return QAudioSource_Format((QAudioSource*)self);
}

void q_audiosource_start(void* self, void* device) {
    QAudioSource_Start((QAudioSource*)self, (QIODevice*)device);
}

QIODevice* q_audiosource_start2(void* self) {
    return QAudioSource_Start2((QAudioSource*)self);
}

void q_audiosource_stop(void* self) {
    QAudioSource_Stop((QAudioSource*)self);
}

void q_audiosource_reset(void* self) {
    QAudioSource_Reset((QAudioSource*)self);
}

void q_audiosource_suspend(void* self) {
    QAudioSource_Suspend((QAudioSource*)self);
}

void q_audiosource_resume(void* self) {
    QAudioSource_Resume((QAudioSource*)self);
}

void q_audiosource_set_buffer_size(void* self, int64_t bytes) {
    QAudioSource_SetBufferSize((QAudioSource*)self, bytes);
}

int64_t q_audiosource_buffer_size(void* self) {
    return QAudioSource_BufferSize((QAudioSource*)self);
}

int64_t q_audiosource_bytes_available(void* self) {
    return QAudioSource_BytesAvailable((QAudioSource*)self);
}

void q_audiosource_set_volume(void* self, double volume) {
    QAudioSource_SetVolume((QAudioSource*)self, volume);
}

double q_audiosource_volume(void* self) {
    return QAudioSource_Volume((QAudioSource*)self);
}

long long q_audiosource_processed_u_secs(void* self) {
    return QAudioSource_ProcessedUSecs((QAudioSource*)self);
}

long long q_audiosource_elapsed_u_secs(void* self) {
    return QAudioSource_ElapsedUSecs((QAudioSource*)self);
}

int32_t q_audiosource_error(void* self) {
    return QAudioSource_Error((QAudioSource*)self);
}

int32_t q_audiosource_state(void* self) {
    return QAudioSource_State((QAudioSource*)self);
}

void q_audiosource_state_changed(void* self, int32_t state) {
    QAudioSource_StateChanged((QAudioSource*)self, state);
}

void q_audiosource_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QAudioSource_Connect_StateChanged((QAudioSource*)self, (intptr_t)callback);
}

const char* q_audiosource_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiosource_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiosource_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audiosource_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_audiosource_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audiosource_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audiosource_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audiosource_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audiosource_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audiosource_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_audiosource_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audiosource_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_audiosource_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_audiosource_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_audiosource_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audiosource_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audiosource_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audiosource_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audiosource_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audiosource_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_audiosource_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audiosource_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audiosource_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_audiosource_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audiosource_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_audiosource_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_audiosource_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_audiosource_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audiosource_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audiosource_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audiosource_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audiosource_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_audiosource_dynamic_property_names\n");
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

QBindingStorage* q_audiosource_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_audiosource_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audiosource_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audiosource_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_audiosource_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audiosource_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audiosource_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_audiosource_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_audiosource_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_audiosource_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_audiosource_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_audiosource_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_audiosource_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_audiosource_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_audiosource_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_audiosource_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_audiosource_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audiosource_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_audiosource_event(void* self, void* event) {
    return QAudioSource_Event((QAudioSource*)self, (QEvent*)event);
}

bool q_audiosource_qbase_event(void* self, void* event) {
    return QAudioSource_QBaseEvent((QAudioSource*)self, (QEvent*)event);
}

void q_audiosource_on_event(void* self, bool (*callback)(void*, void*)) {
    QAudioSource_OnEvent((QAudioSource*)self, (intptr_t)callback);
}

bool q_audiosource_event_filter(void* self, void* watched, void* event) {
    return QAudioSource_EventFilter((QAudioSource*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audiosource_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioSource_QBaseEventFilter((QAudioSource*)self, (QObject*)watched, (QEvent*)event);
}

void q_audiosource_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAudioSource_OnEventFilter((QAudioSource*)self, (intptr_t)callback);
}

void q_audiosource_timer_event(void* self, void* event) {
    QAudioSource_TimerEvent((QAudioSource*)self, (QTimerEvent*)event);
}

void q_audiosource_qbase_timer_event(void* self, void* event) {
    QAudioSource_QBaseTimerEvent((QAudioSource*)self, (QTimerEvent*)event);
}

void q_audiosource_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAudioSource_OnTimerEvent((QAudioSource*)self, (intptr_t)callback);
}

void q_audiosource_child_event(void* self, void* event) {
    QAudioSource_ChildEvent((QAudioSource*)self, (QChildEvent*)event);
}

void q_audiosource_qbase_child_event(void* self, void* event) {
    QAudioSource_QBaseChildEvent((QAudioSource*)self, (QChildEvent*)event);
}

void q_audiosource_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAudioSource_OnChildEvent((QAudioSource*)self, (intptr_t)callback);
}

void q_audiosource_custom_event(void* self, void* event) {
    QAudioSource_CustomEvent((QAudioSource*)self, (QEvent*)event);
}

void q_audiosource_qbase_custom_event(void* self, void* event) {
    QAudioSource_QBaseCustomEvent((QAudioSource*)self, (QEvent*)event);
}

void q_audiosource_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAudioSource_OnCustomEvent((QAudioSource*)self, (intptr_t)callback);
}

void q_audiosource_connect_notify(void* self, void* signal) {
    QAudioSource_ConnectNotify((QAudioSource*)self, (QMetaMethod*)signal);
}

void q_audiosource_qbase_connect_notify(void* self, void* signal) {
    QAudioSource_QBaseConnectNotify((QAudioSource*)self, (QMetaMethod*)signal);
}

void q_audiosource_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioSource_OnConnectNotify((QAudioSource*)self, (intptr_t)callback);
}

void q_audiosource_disconnect_notify(void* self, void* signal) {
    QAudioSource_DisconnectNotify((QAudioSource*)self, (QMetaMethod*)signal);
}

void q_audiosource_qbase_disconnect_notify(void* self, void* signal) {
    QAudioSource_QBaseDisconnectNotify((QAudioSource*)self, (QMetaMethod*)signal);
}

void q_audiosource_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioSource_OnDisconnectNotify((QAudioSource*)self, (intptr_t)callback);
}

QObject* q_audiosource_sender(void* self) {
    return QAudioSource_Sender((QAudioSource*)self);
}

QObject* q_audiosource_qbase_sender(void* self) {
    return QAudioSource_QBaseSender((QAudioSource*)self);
}

void q_audiosource_on_sender(void* self, QObject* (*callback)()) {
    QAudioSource_OnSender((QAudioSource*)self, (intptr_t)callback);
}

int32_t q_audiosource_sender_signal_index(void* self) {
    return QAudioSource_SenderSignalIndex((QAudioSource*)self);
}

int32_t q_audiosource_qbase_sender_signal_index(void* self) {
    return QAudioSource_QBaseSenderSignalIndex((QAudioSource*)self);
}

void q_audiosource_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAudioSource_OnSenderSignalIndex((QAudioSource*)self, (intptr_t)callback);
}

int32_t q_audiosource_receivers(void* self, const char* signal) {
    return QAudioSource_Receivers((QAudioSource*)self, signal);
}

int32_t q_audiosource_qbase_receivers(void* self, const char* signal) {
    return QAudioSource_QBaseReceivers((QAudioSource*)self, signal);
}

void q_audiosource_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAudioSource_OnReceivers((QAudioSource*)self, (intptr_t)callback);
}

bool q_audiosource_is_signal_connected(void* self, void* signal) {
    return QAudioSource_IsSignalConnected((QAudioSource*)self, (QMetaMethod*)signal);
}

bool q_audiosource_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioSource_QBaseIsSignalConnected((QAudioSource*)self, (QMetaMethod*)signal);
}

void q_audiosource_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAudioSource_OnIsSignalConnected((QAudioSource*)self, (intptr_t)callback);
}

void q_audiosource_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_audiosource_delete(void* self) {
    QAudioSource_Delete((QAudioSource*)(self));
}
