#include "libqaudioengine.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqquaternion.hpp"
#include "../libqvectornd.hpp"
#include "libqaudiolistener.hpp"
#include "libqaudiolistener.h"

QAudioListener* q_audiolistener_new(void* engine) {
    return QAudioListener_new((QAudioEngine*)engine);
}

void q_audiolistener_set_position(void* self, void* pos) {
    QAudioListener_SetPosition((QAudioListener*)self, (QVector3D*)pos);
}

QVector3D* q_audiolistener_position(void* self) {
    return QAudioListener_Position((QAudioListener*)self);
}

void q_audiolistener_set_rotation(void* self, void* q) {
    QAudioListener_SetRotation((QAudioListener*)self, (QQuaternion*)q);
}

QQuaternion* q_audiolistener_rotation(void* self) {
    return QAudioListener_Rotation((QAudioListener*)self);
}

QAudioEngine* q_audiolistener_engine(void* self) {
    return QAudioListener_Engine((QAudioListener*)self);
}

const QMetaObject* q_audiolistener_meta_object(void* self) {
    return QObject_MetaObject((QObject*)self);
}

void* q_audiolistener_metacast(void* self, const char* param1) {
    return QObject_Metacast((QObject*)self, param1);
}

const char* q_audiolistener_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiolistener_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_audiolistener_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_audiolistener_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_audiolistener_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_audiolistener_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_audiolistener_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_audiolistener_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_audiolistener_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_audiolistener_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_audiolistener_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_audiolistener_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_audiolistener_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_audiolistener_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_audiolistener_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_audiolistener_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_audiolistener_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_audiolistener_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_audiolistener_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_audiolistener_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_audiolistener_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_audiolistener_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_audiolistener_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_audiolistener_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_audiolistener_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_audiolistener_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_audiolistener_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_audiolistener_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_audiolistener_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_audiolistener_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_audiolistener_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_audiolistener_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_audiolistener_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

const char* q_audiolistener_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_audiolistener_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_audiolistener_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_audiolistener_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_audiolistener_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_audiolistener_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_audiolistener_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_audiolistener_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_audiolistener_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioListener_Metacall((QAudioListener*)self, param1, param2, param3);
}

int32_t q_audiolistener_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioListener_QBaseMetacall((QAudioListener*)self, param1, param2, param3);
}

void q_audiolistener_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAudioListener_OnMetacall((QAudioListener*)self, (intptr_t)slot);
}

bool q_audiolistener_event(void* self, void* event) {
    return QAudioListener_Event((QAudioListener*)self, (QEvent*)event);
}

bool q_audiolistener_qbase_event(void* self, void* event) {
    return QAudioListener_QBaseEvent((QAudioListener*)self, (QEvent*)event);
}

void q_audiolistener_on_event(void* self, bool (*slot)(void*, void*)) {
    QAudioListener_OnEvent((QAudioListener*)self, (intptr_t)slot);
}

bool q_audiolistener_event_filter(void* self, void* watched, void* event) {
    return QAudioListener_EventFilter((QAudioListener*)self, (QObject*)watched, (QEvent*)event);
}

bool q_audiolistener_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioListener_QBaseEventFilter((QAudioListener*)self, (QObject*)watched, (QEvent*)event);
}

void q_audiolistener_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAudioListener_OnEventFilter((QAudioListener*)self, (intptr_t)slot);
}

void q_audiolistener_timer_event(void* self, void* event) {
    QAudioListener_TimerEvent((QAudioListener*)self, (QTimerEvent*)event);
}

void q_audiolistener_qbase_timer_event(void* self, void* event) {
    QAudioListener_QBaseTimerEvent((QAudioListener*)self, (QTimerEvent*)event);
}

void q_audiolistener_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnTimerEvent((QAudioListener*)self, (intptr_t)slot);
}

void q_audiolistener_child_event(void* self, void* event) {
    QAudioListener_ChildEvent((QAudioListener*)self, (QChildEvent*)event);
}

void q_audiolistener_qbase_child_event(void* self, void* event) {
    QAudioListener_QBaseChildEvent((QAudioListener*)self, (QChildEvent*)event);
}

void q_audiolistener_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnChildEvent((QAudioListener*)self, (intptr_t)slot);
}

void q_audiolistener_custom_event(void* self, void* event) {
    QAudioListener_CustomEvent((QAudioListener*)self, (QEvent*)event);
}

void q_audiolistener_qbase_custom_event(void* self, void* event) {
    QAudioListener_QBaseCustomEvent((QAudioListener*)self, (QEvent*)event);
}

void q_audiolistener_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnCustomEvent((QAudioListener*)self, (intptr_t)slot);
}

void q_audiolistener_connect_notify(void* self, void* signal) {
    QAudioListener_ConnectNotify((QAudioListener*)self, (QMetaMethod*)signal);
}

void q_audiolistener_qbase_connect_notify(void* self, void* signal) {
    QAudioListener_QBaseConnectNotify((QAudioListener*)self, (QMetaMethod*)signal);
}

void q_audiolistener_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnConnectNotify((QAudioListener*)self, (intptr_t)slot);
}

void q_audiolistener_disconnect_notify(void* self, void* signal) {
    QAudioListener_DisconnectNotify((QAudioListener*)self, (QMetaMethod*)signal);
}

void q_audiolistener_qbase_disconnect_notify(void* self, void* signal) {
    QAudioListener_QBaseDisconnectNotify((QAudioListener*)self, (QMetaMethod*)signal);
}

void q_audiolistener_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnDisconnectNotify((QAudioListener*)self, (intptr_t)slot);
}

QObject* q_audiolistener_sender(void* self) {
    return QAudioListener_Sender((QAudioListener*)self);
}

QObject* q_audiolistener_qbase_sender(void* self) {
    return QAudioListener_QBaseSender((QAudioListener*)self);
}

void q_audiolistener_on_sender(void* self, QObject* (*slot)()) {
    QAudioListener_OnSender((QAudioListener*)self, (intptr_t)slot);
}

int32_t q_audiolistener_sender_signal_index(void* self) {
    return QAudioListener_SenderSignalIndex((QAudioListener*)self);
}

int32_t q_audiolistener_qbase_sender_signal_index(void* self) {
    return QAudioListener_QBaseSenderSignalIndex((QAudioListener*)self);
}

void q_audiolistener_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAudioListener_OnSenderSignalIndex((QAudioListener*)self, (intptr_t)slot);
}

int32_t q_audiolistener_receivers(void* self, const char* signal) {
    return QAudioListener_Receivers((QAudioListener*)self, signal);
}

int32_t q_audiolistener_qbase_receivers(void* self, const char* signal) {
    return QAudioListener_QBaseReceivers((QAudioListener*)self, signal);
}

void q_audiolistener_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAudioListener_OnReceivers((QAudioListener*)self, (intptr_t)slot);
}

bool q_audiolistener_is_signal_connected(void* self, void* signal) {
    return QAudioListener_IsSignalConnected((QAudioListener*)self, (QMetaMethod*)signal);
}

bool q_audiolistener_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioListener_QBaseIsSignalConnected((QAudioListener*)self, (QMetaMethod*)signal);
}

void q_audiolistener_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAudioListener_OnIsSignalConnected((QAudioListener*)self, (intptr_t)slot);
}

void q_audiolistener_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_audiolistener_delete(void* self) {
    QAudioListener_Delete((QAudioListener*)(self));
}
