#include "libqaudiobuffer.hpp"
#include "libqaudioformat.hpp"
#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqaudiodecoder.hpp"
#include "libqaudiodecoder.h"

QAudioDecoder* q_audiodecoder_new() {
    return QAudioDecoder_new();
}

QAudioDecoder* q_audiodecoder_new2(void* parent) {
    return QAudioDecoder_new2((QObject*)parent);
}

const QMetaObject* q_audiodecoder_meta_object(void* self) {
    return QAudioDecoder_MetaObject((QAudioDecoder*)self);
}

void* q_audiodecoder_metacast(void* self, const char* param1) {
    return QAudioDecoder_Metacast((QAudioDecoder*)self, param1);
}

int32_t q_audiodecoder_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioDecoder_Metacall((QAudioDecoder*)self, param1, param2, param3);
}

void q_audiodecoder_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAudioDecoder_OnMetacall((QAudioDecoder*)self, (intptr_t)callback);
}

int32_t q_audiodecoder_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAudioDecoder_QBaseMetacall((QAudioDecoder*)self, param1, param2, param3);
}

const char* q_audiodecoder_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_audiodecoder_is_supported(void* self) {
    return QAudioDecoder_IsSupported((QAudioDecoder*)self);
}

bool q_audiodecoder_is_decoding(void* self) {
    return QAudioDecoder_IsDecoding((QAudioDecoder*)self);
}

QUrl* q_audiodecoder_source(void* self) {
    return QAudioDecoder_Source((QAudioDecoder*)self);
}

void q_audiodecoder_set_source(void* self, void* fileName) {
    QAudioDecoder_SetSource((QAudioDecoder*)self, (QUrl*)fileName);
}

QIODevice* q_audiodecoder_source_device(void* self) {
    return QAudioDecoder_SourceDevice((QAudioDecoder*)self);
}

void q_audiodecoder_set_source_device(void* self, void* device) {
    QAudioDecoder_SetSourceDevice((QAudioDecoder*)self, (QIODevice*)device);
}

QAudioFormat* q_audiodecoder_audio_format(void* self) {
    return QAudioDecoder_AudioFormat((QAudioDecoder*)self);
}

void q_audiodecoder_set_audio_format(void* self, void* format) {
    QAudioDecoder_SetAudioFormat((QAudioDecoder*)self, (QAudioFormat*)format);
}

int32_t q_audiodecoder_error(void* self) {
    return QAudioDecoder_Error((QAudioDecoder*)self);
}

const char* q_audiodecoder_error_string(void* self) {
    libqt_string _str = QAudioDecoder_ErrorString((QAudioDecoder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAudioBuffer* q_audiodecoder_read(void* self) {
    return QAudioDecoder_Read((QAudioDecoder*)self);
}

bool q_audiodecoder_buffer_available(void* self) {
    return QAudioDecoder_BufferAvailable((QAudioDecoder*)self);
}

long long q_audiodecoder_position(void* self) {
    return QAudioDecoder_Position((QAudioDecoder*)self);
}

long long q_audiodecoder_duration(void* self) {
    return QAudioDecoder_Duration((QAudioDecoder*)self);
}

void q_audiodecoder_start(void* self) {
    QAudioDecoder_Start((QAudioDecoder*)self);
}

void q_audiodecoder_stop(void* self) {
    QAudioDecoder_Stop((QAudioDecoder*)self);
}

void q_audiodecoder_buffer_available_changed(void* self, bool param1) {
    QAudioDecoder_BufferAvailableChanged((QAudioDecoder*)self, param1);
}

void q_audiodecoder_buffer_ready(void* self) {
    QAudioDecoder_BufferReady((QAudioDecoder*)self);
}

void q_audiodecoder_finished(void* self) {
    QAudioDecoder_Finished((QAudioDecoder*)self);
}

void q_audiodecoder_is_decoding_changed(void* self, bool param1) {
    QAudioDecoder_IsDecodingChanged((QAudioDecoder*)self, param1);
}

void q_audiodecoder_format_changed(void* self, void* format) {
    QAudioDecoder_FormatChanged((QAudioDecoder*)self, (QAudioFormat*)format);
}

void q_audiodecoder_error2(void* self, int32_t error) {
    QAudioDecoder_Error2((QAudioDecoder*)self, error);
}

void q_audiodecoder_source_changed(void* self) {
    QAudioDecoder_SourceChanged((QAudioDecoder*)self);
}

void q_audiodecoder_position_changed(void* self, long long position) {
    QAudioDecoder_PositionChanged((QAudioDecoder*)self, position);
}

void q_audiodecoder_duration_changed(void* self, long long duration) {
    QAudioDecoder_DurationChanged((QAudioDecoder*)self, duration);
}

const char* q_audiodecoder_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiodecoder_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiodecoder_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audiodecoder_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_audiodecoder_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audiodecoder_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audiodecoder_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audiodecoder_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audiodecoder_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audiodecoder_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_audiodecoder_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audiodecoder_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_audiodecoder_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_audiodecoder_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audiodecoder_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audiodecoder_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audiodecoder_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audiodecoder_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audiodecoder_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audiodecoder_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audiodecoder_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audiodecoder_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_audiodecoder_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audiodecoder_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audiodecoder_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audiodecoder_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audiodecoder_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_audiodecoder_dynamic_property_names");
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

QBindingStorage* q_audiodecoder_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_audiodecoder_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audiodecoder_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audiodecoder_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_audiodecoder_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audiodecoder_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audiodecoder_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_audiodecoder_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_audiodecoder_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_audiodecoder_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_audiodecoder_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_audiodecoder_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audiodecoder_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_audiodecoder_event(void* self, void* event) {
    return QAudioDecoder_Event((QAudioDecoder*)self, (QEvent*)event);
}

bool q_audiodecoder_qbase_event(void* self, void* event) {
    return QAudioDecoder_QBaseEvent((QAudioDecoder*)self, (QEvent*)event);
}

void q_audiodecoder_on_event(void* self, bool (*callback)(void*, void*)) {
    QAudioDecoder_OnEvent((QAudioDecoder*)self, (intptr_t)callback);
}

bool q_audiodecoder_event_filter(void* self, void* watched, void* event) {
    return QAudioDecoder_EventFilter((QAudioDecoder*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audiodecoder_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioDecoder_QBaseEventFilter((QAudioDecoder*)self, (QObject*)watched, (QEvent*)event);
}

void q_audiodecoder_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAudioDecoder_OnEventFilter((QAudioDecoder*)self, (intptr_t)callback);
}

void q_audiodecoder_timer_event(void* self, void* event) {
    QAudioDecoder_TimerEvent((QAudioDecoder*)self, (QTimerEvent*)event);
}

void q_audiodecoder_qbase_timer_event(void* self, void* event) {
    QAudioDecoder_QBaseTimerEvent((QAudioDecoder*)self, (QTimerEvent*)event);
}

void q_audiodecoder_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAudioDecoder_OnTimerEvent((QAudioDecoder*)self, (intptr_t)callback);
}

void q_audiodecoder_child_event(void* self, void* event) {
    QAudioDecoder_ChildEvent((QAudioDecoder*)self, (QChildEvent*)event);
}

void q_audiodecoder_qbase_child_event(void* self, void* event) {
    QAudioDecoder_QBaseChildEvent((QAudioDecoder*)self, (QChildEvent*)event);
}

void q_audiodecoder_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAudioDecoder_OnChildEvent((QAudioDecoder*)self, (intptr_t)callback);
}

void q_audiodecoder_custom_event(void* self, void* event) {
    QAudioDecoder_CustomEvent((QAudioDecoder*)self, (QEvent*)event);
}

void q_audiodecoder_qbase_custom_event(void* self, void* event) {
    QAudioDecoder_QBaseCustomEvent((QAudioDecoder*)self, (QEvent*)event);
}

void q_audiodecoder_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAudioDecoder_OnCustomEvent((QAudioDecoder*)self, (intptr_t)callback);
}

void q_audiodecoder_connect_notify(void* self, void* signal) {
    QAudioDecoder_ConnectNotify((QAudioDecoder*)self, (QMetaMethod*)signal);
}

void q_audiodecoder_qbase_connect_notify(void* self, void* signal) {
    QAudioDecoder_QBaseConnectNotify((QAudioDecoder*)self, (QMetaMethod*)signal);
}

void q_audiodecoder_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioDecoder_OnConnectNotify((QAudioDecoder*)self, (intptr_t)callback);
}

void q_audiodecoder_disconnect_notify(void* self, void* signal) {
    QAudioDecoder_DisconnectNotify((QAudioDecoder*)self, (QMetaMethod*)signal);
}

void q_audiodecoder_qbase_disconnect_notify(void* self, void* signal) {
    QAudioDecoder_QBaseDisconnectNotify((QAudioDecoder*)self, (QMetaMethod*)signal);
}

void q_audiodecoder_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAudioDecoder_OnDisconnectNotify((QAudioDecoder*)self, (intptr_t)callback);
}

QObject* q_audiodecoder_sender(void* self) {
    return QAudioDecoder_Sender((QAudioDecoder*)self);
}

QObject* q_audiodecoder_qbase_sender(void* self) {
    return QAudioDecoder_QBaseSender((QAudioDecoder*)self);
}

void q_audiodecoder_on_sender(void* self, QObject* (*callback)()) {
    QAudioDecoder_OnSender((QAudioDecoder*)self, (intptr_t)callback);
}

int32_t q_audiodecoder_sender_signal_index(void* self) {
    return QAudioDecoder_SenderSignalIndex((QAudioDecoder*)self);
}

int32_t q_audiodecoder_qbase_sender_signal_index(void* self) {
    return QAudioDecoder_QBaseSenderSignalIndex((QAudioDecoder*)self);
}

void q_audiodecoder_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAudioDecoder_OnSenderSignalIndex((QAudioDecoder*)self, (intptr_t)callback);
}

int32_t q_audiodecoder_receivers(void* self, const char* signal) {
    return QAudioDecoder_Receivers((QAudioDecoder*)self, signal);
}

int32_t q_audiodecoder_qbase_receivers(void* self, const char* signal) {
    return QAudioDecoder_QBaseReceivers((QAudioDecoder*)self, signal);
}

void q_audiodecoder_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAudioDecoder_OnReceivers((QAudioDecoder*)self, (intptr_t)callback);
}

bool q_audiodecoder_is_signal_connected(void* self, void* signal) {
    return QAudioDecoder_IsSignalConnected((QAudioDecoder*)self, (QMetaMethod*)signal);
}

bool q_audiodecoder_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioDecoder_QBaseIsSignalConnected((QAudioDecoder*)self, (QMetaMethod*)signal);
}

void q_audiodecoder_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAudioDecoder_OnIsSignalConnected((QAudioDecoder*)self, (intptr_t)callback);
}

void q_audiodecoder_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_audiodecoder_delete(void* self) {
    QAudioDecoder_Delete((QAudioDecoder*)(self));
}
