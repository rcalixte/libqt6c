#include "libqaudioengine.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqambientsound.hpp"
#include "libqambientsound.h"

QAmbientSound* q_ambientsound_new(void* engine) {
    return QAmbientSound_new((QAudioEngine*)engine);
}

const QMetaObject* q_ambientsound_meta_object(void* self) {
    return QAmbientSound_MetaObject((QAmbientSound*)self);
}

void q_ambientsound_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QAmbientSound_OnMetaObject((QAmbientSound*)self, (intptr_t)callback);
}

const QMetaObject* q_ambientsound_qbase_meta_object(void* self) {
    return QAmbientSound_QBaseMetaObject((QAmbientSound*)self);
}

void* q_ambientsound_metacast(void* self, const char* param1) {
    return QAmbientSound_Metacast((QAmbientSound*)self, param1);
}

void q_ambientsound_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAmbientSound_OnMetacast((QAmbientSound*)self, (intptr_t)callback);
}

void* q_ambientsound_qbase_metacast(void* self, const char* param1) {
    return QAmbientSound_QBaseMetacast((QAmbientSound*)self, param1);
}

int32_t q_ambientsound_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAmbientSound_Metacall((QAmbientSound*)self, param1, param2, param3);
}

void q_ambientsound_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAmbientSound_OnMetacall((QAmbientSound*)self, (intptr_t)callback);
}

int32_t q_ambientsound_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAmbientSound_QBaseMetacall((QAmbientSound*)self, param1, param2, param3);
}

const char* q_ambientsound_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_ambientsound_set_source(void* self, void* url) {
    QAmbientSound_SetSource((QAmbientSound*)self, (QUrl*)url);
}

QUrl* q_ambientsound_source(void* self) {
    return QAmbientSound_Source((QAmbientSound*)self);
}

int32_t q_ambientsound_loops(void* self) {
    return QAmbientSound_Loops((QAmbientSound*)self);
}

void q_ambientsound_set_loops(void* self, int loops) {
    QAmbientSound_SetLoops((QAmbientSound*)self, loops);
}

bool q_ambientsound_auto_play(void* self) {
    return QAmbientSound_AutoPlay((QAmbientSound*)self);
}

void q_ambientsound_set_auto_play(void* self, bool autoPlay) {
    QAmbientSound_SetAutoPlay((QAmbientSound*)self, autoPlay);
}

void q_ambientsound_set_volume(void* self, float volume) {
    QAmbientSound_SetVolume((QAmbientSound*)self, volume);
}

float q_ambientsound_volume(void* self) {
    return QAmbientSound_Volume((QAmbientSound*)self);
}

QAudioEngine* q_ambientsound_engine(void* self) {
    return QAmbientSound_Engine((QAmbientSound*)self);
}

void q_ambientsound_source_changed(void* self) {
    QAmbientSound_SourceChanged((QAmbientSound*)self);
}

void q_ambientsound_on_source_changed(void* self, void (*callback)(void*)) {
    QAmbientSound_Connect_SourceChanged((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_loops_changed(void* self) {
    QAmbientSound_LoopsChanged((QAmbientSound*)self);
}

void q_ambientsound_on_loops_changed(void* self, void (*callback)(void*)) {
    QAmbientSound_Connect_LoopsChanged((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_auto_play_changed(void* self) {
    QAmbientSound_AutoPlayChanged((QAmbientSound*)self);
}

void q_ambientsound_on_auto_play_changed(void* self, void (*callback)(void*)) {
    QAmbientSound_Connect_AutoPlayChanged((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_volume_changed(void* self) {
    QAmbientSound_VolumeChanged((QAmbientSound*)self);
}

void q_ambientsound_on_volume_changed(void* self, void (*callback)(void*)) {
    QAmbientSound_Connect_VolumeChanged((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_play(void* self) {
    QAmbientSound_Play((QAmbientSound*)self);
}

void q_ambientsound_pause(void* self) {
    QAmbientSound_Pause((QAmbientSound*)self);
}

void q_ambientsound_stop(void* self) {
    QAmbientSound_Stop((QAmbientSound*)self);
}

const char* q_ambientsound_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_ambientsound_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_ambientsound_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_ambientsound_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_ambientsound_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_ambientsound_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_ambientsound_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_ambientsound_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_ambientsound_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_ambientsound_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_ambientsound_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_ambientsound_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_ambientsound_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_ambientsound_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_ambientsound_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_ambientsound_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_ambientsound_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_ambientsound_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_ambientsound_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_ambientsound_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_ambientsound_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_ambientsound_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_ambientsound_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_ambientsound_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_ambientsound_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_ambientsound_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_ambientsound_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_ambientsound_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_ambientsound_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_ambientsound_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_ambientsound_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_ambientsound_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_ambientsound_dynamic_property_names\n");
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

QBindingStorage* q_ambientsound_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_ambientsound_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_ambientsound_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_ambientsound_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_ambientsound_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_ambientsound_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_ambientsound_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_ambientsound_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_ambientsound_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_ambientsound_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_ambientsound_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_ambientsound_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_ambientsound_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_ambientsound_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_ambientsound_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_ambientsound_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_ambientsound_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_ambientsound_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_ambientsound_event(void* self, void* event) {
    return QAmbientSound_Event((QAmbientSound*)self, (QEvent*)event);
}

bool q_ambientsound_qbase_event(void* self, void* event) {
    return QAmbientSound_QBaseEvent((QAmbientSound*)self, (QEvent*)event);
}

void q_ambientsound_on_event(void* self, bool (*callback)(void*, void*)) {
    QAmbientSound_OnEvent((QAmbientSound*)self, (intptr_t)callback);
}

bool q_ambientsound_event_filter(void* self, void* watched, void* event) {
    return QAmbientSound_EventFilter((QAmbientSound*)self, (QObject*)watched, (QEvent*)event);
}

bool q_ambientsound_qbase_event_filter(void* self, void* watched, void* event) {
    return QAmbientSound_QBaseEventFilter((QAmbientSound*)self, (QObject*)watched, (QEvent*)event);
}

void q_ambientsound_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAmbientSound_OnEventFilter((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_timer_event(void* self, void* event) {
    QAmbientSound_TimerEvent((QAmbientSound*)self, (QTimerEvent*)event);
}

void q_ambientsound_qbase_timer_event(void* self, void* event) {
    QAmbientSound_QBaseTimerEvent((QAmbientSound*)self, (QTimerEvent*)event);
}

void q_ambientsound_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAmbientSound_OnTimerEvent((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_child_event(void* self, void* event) {
    QAmbientSound_ChildEvent((QAmbientSound*)self, (QChildEvent*)event);
}

void q_ambientsound_qbase_child_event(void* self, void* event) {
    QAmbientSound_QBaseChildEvent((QAmbientSound*)self, (QChildEvent*)event);
}

void q_ambientsound_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAmbientSound_OnChildEvent((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_custom_event(void* self, void* event) {
    QAmbientSound_CustomEvent((QAmbientSound*)self, (QEvent*)event);
}

void q_ambientsound_qbase_custom_event(void* self, void* event) {
    QAmbientSound_QBaseCustomEvent((QAmbientSound*)self, (QEvent*)event);
}

void q_ambientsound_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAmbientSound_OnCustomEvent((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_connect_notify(void* self, void* signal) {
    QAmbientSound_ConnectNotify((QAmbientSound*)self, (QMetaMethod*)signal);
}

void q_ambientsound_qbase_connect_notify(void* self, void* signal) {
    QAmbientSound_QBaseConnectNotify((QAmbientSound*)self, (QMetaMethod*)signal);
}

void q_ambientsound_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAmbientSound_OnConnectNotify((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_disconnect_notify(void* self, void* signal) {
    QAmbientSound_DisconnectNotify((QAmbientSound*)self, (QMetaMethod*)signal);
}

void q_ambientsound_qbase_disconnect_notify(void* self, void* signal) {
    QAmbientSound_QBaseDisconnectNotify((QAmbientSound*)self, (QMetaMethod*)signal);
}

void q_ambientsound_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAmbientSound_OnDisconnectNotify((QAmbientSound*)self, (intptr_t)callback);
}

QObject* q_ambientsound_sender(void* self) {
    return QAmbientSound_Sender((QAmbientSound*)self);
}

QObject* q_ambientsound_qbase_sender(void* self) {
    return QAmbientSound_QBaseSender((QAmbientSound*)self);
}

void q_ambientsound_on_sender(void* self, QObject* (*callback)()) {
    QAmbientSound_OnSender((QAmbientSound*)self, (intptr_t)callback);
}

int32_t q_ambientsound_sender_signal_index(void* self) {
    return QAmbientSound_SenderSignalIndex((QAmbientSound*)self);
}

int32_t q_ambientsound_qbase_sender_signal_index(void* self) {
    return QAmbientSound_QBaseSenderSignalIndex((QAmbientSound*)self);
}

void q_ambientsound_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAmbientSound_OnSenderSignalIndex((QAmbientSound*)self, (intptr_t)callback);
}

int32_t q_ambientsound_receivers(void* self, const char* signal) {
    return QAmbientSound_Receivers((QAmbientSound*)self, signal);
}

int32_t q_ambientsound_qbase_receivers(void* self, const char* signal) {
    return QAmbientSound_QBaseReceivers((QAmbientSound*)self, signal);
}

void q_ambientsound_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAmbientSound_OnReceivers((QAmbientSound*)self, (intptr_t)callback);
}

bool q_ambientsound_is_signal_connected(void* self, void* signal) {
    return QAmbientSound_IsSignalConnected((QAmbientSound*)self, (QMetaMethod*)signal);
}

bool q_ambientsound_qbase_is_signal_connected(void* self, void* signal) {
    return QAmbientSound_QBaseIsSignalConnected((QAmbientSound*)self, (QMetaMethod*)signal);
}

void q_ambientsound_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAmbientSound_OnIsSignalConnected((QAmbientSound*)self, (intptr_t)callback);
}

void q_ambientsound_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_ambientsound_delete(void* self) {
    QAmbientSound_Delete((QAmbientSound*)(self));
}
