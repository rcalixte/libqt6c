#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqscimacro.hpp"
#include "libqscimacro.h"

QsciMacro* q_scimacro_new(void* parent) {
    return QsciMacro_new((QsciScintilla*)parent);
}

QsciMacro* q_scimacro_new2(const char* asc, void* parent) {
    return QsciMacro_new2(qstring(asc), (QsciScintilla*)parent);
}

const QMetaObject* q_scimacro_meta_object(void* self) {
    return QsciMacro_MetaObject((QsciMacro*)self);
}

void* q_scimacro_metacast(void* self, const char* param1) {
    return QsciMacro_Metacast((QsciMacro*)self, param1);
}

int32_t q_scimacro_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciMacro_Metacall((QsciMacro*)self, param1, param2, param3);
}

void q_scimacro_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciMacro_OnMetacall((QsciMacro*)self, (intptr_t)slot);
}

int32_t q_scimacro_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciMacro_QBaseMetacall((QsciMacro*)self, param1, param2, param3);
}

const char* q_scimacro_tr(const char* s) {
    libqt_string _str = QsciMacro_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scimacro_clear(void* self) {
    QsciMacro_Clear((QsciMacro*)self);
}

bool q_scimacro_load(void* self, const char* asc) {
    return QsciMacro_Load((QsciMacro*)self, qstring(asc));
}

const char* q_scimacro_save(void* self) {
    libqt_string _str = QsciMacro_Save((QsciMacro*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scimacro_play(void* self) {
    QsciMacro_Play((QsciMacro*)self);
}

void q_scimacro_on_play(void* self, void (*slot)()) {
    QsciMacro_OnPlay((QsciMacro*)self, (intptr_t)slot);
}

void q_scimacro_qbase_play(void* self) {
    QsciMacro_QBasePlay((QsciMacro*)self);
}

void q_scimacro_start_recording(void* self) {
    QsciMacro_StartRecording((QsciMacro*)self);
}

void q_scimacro_on_start_recording(void* self, void (*slot)()) {
    QsciMacro_OnStartRecording((QsciMacro*)self, (intptr_t)slot);
}

void q_scimacro_qbase_start_recording(void* self) {
    QsciMacro_QBaseStartRecording((QsciMacro*)self);
}

void q_scimacro_end_recording(void* self) {
    QsciMacro_EndRecording((QsciMacro*)self);
}

void q_scimacro_on_end_recording(void* self, void (*slot)()) {
    QsciMacro_OnEndRecording((QsciMacro*)self, (intptr_t)slot);
}

void q_scimacro_qbase_end_recording(void* self) {
    QsciMacro_QBaseEndRecording((QsciMacro*)self);
}

const char* q_scimacro_tr2(const char* s, const char* c) {
    libqt_string _str = QsciMacro_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scimacro_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciMacro_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scimacro_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scimacro_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scimacro_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scimacro_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scimacro_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scimacro_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scimacro_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scimacro_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scimacro_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scimacro_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scimacro_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scimacro_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scimacro_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scimacro_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scimacro_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scimacro_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scimacro_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scimacro_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scimacro_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scimacro_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scimacro_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scimacro_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scimacro_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scimacro_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scimacro_dynamic_property_names(void* self) {
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

QBindingStorage* q_scimacro_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scimacro_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scimacro_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scimacro_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scimacro_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scimacro_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scimacro_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scimacro_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scimacro_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scimacro_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scimacro_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scimacro_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scimacro_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_scimacro_event(void* self, void* event) {
    return QsciMacro_Event((QsciMacro*)self, (QEvent*)event);
}

bool q_scimacro_qbase_event(void* self, void* event) {
    return QsciMacro_QBaseEvent((QsciMacro*)self, (QEvent*)event);
}

void q_scimacro_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciMacro_OnEvent((QsciMacro*)self, (intptr_t)slot);
}

bool q_scimacro_event_filter(void* self, void* watched, void* event) {
    return QsciMacro_EventFilter((QsciMacro*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scimacro_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciMacro_QBaseEventFilter((QsciMacro*)self, (QObject*)watched, (QEvent*)event);
}

void q_scimacro_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciMacro_OnEventFilter((QsciMacro*)self, (intptr_t)slot);
}

void q_scimacro_timer_event(void* self, void* event) {
    QsciMacro_TimerEvent((QsciMacro*)self, (QTimerEvent*)event);
}

void q_scimacro_qbase_timer_event(void* self, void* event) {
    QsciMacro_QBaseTimerEvent((QsciMacro*)self, (QTimerEvent*)event);
}

void q_scimacro_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnTimerEvent((QsciMacro*)self, (intptr_t)slot);
}

void q_scimacro_child_event(void* self, void* event) {
    QsciMacro_ChildEvent((QsciMacro*)self, (QChildEvent*)event);
}

void q_scimacro_qbase_child_event(void* self, void* event) {
    QsciMacro_QBaseChildEvent((QsciMacro*)self, (QChildEvent*)event);
}

void q_scimacro_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnChildEvent((QsciMacro*)self, (intptr_t)slot);
}

void q_scimacro_custom_event(void* self, void* event) {
    QsciMacro_CustomEvent((QsciMacro*)self, (QEvent*)event);
}

void q_scimacro_qbase_custom_event(void* self, void* event) {
    QsciMacro_QBaseCustomEvent((QsciMacro*)self, (QEvent*)event);
}

void q_scimacro_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnCustomEvent((QsciMacro*)self, (intptr_t)slot);
}

void q_scimacro_connect_notify(void* self, void* signal) {
    QsciMacro_ConnectNotify((QsciMacro*)self, (QMetaMethod*)signal);
}

void q_scimacro_qbase_connect_notify(void* self, void* signal) {
    QsciMacro_QBaseConnectNotify((QsciMacro*)self, (QMetaMethod*)signal);
}

void q_scimacro_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnConnectNotify((QsciMacro*)self, (intptr_t)slot);
}

void q_scimacro_disconnect_notify(void* self, void* signal) {
    QsciMacro_DisconnectNotify((QsciMacro*)self, (QMetaMethod*)signal);
}

void q_scimacro_qbase_disconnect_notify(void* self, void* signal) {
    QsciMacro_QBaseDisconnectNotify((QsciMacro*)self, (QMetaMethod*)signal);
}

void q_scimacro_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciMacro_OnDisconnectNotify((QsciMacro*)self, (intptr_t)slot);
}

QObject* q_scimacro_sender(void* self) {
    return QsciMacro_Sender((QsciMacro*)self);
}

QObject* q_scimacro_qbase_sender(void* self) {
    return QsciMacro_QBaseSender((QsciMacro*)self);
}

void q_scimacro_on_sender(void* self, QObject* (*slot)()) {
    QsciMacro_OnSender((QsciMacro*)self, (intptr_t)slot);
}

int32_t q_scimacro_sender_signal_index(void* self) {
    return QsciMacro_SenderSignalIndex((QsciMacro*)self);
}

int32_t q_scimacro_qbase_sender_signal_index(void* self) {
    return QsciMacro_QBaseSenderSignalIndex((QsciMacro*)self);
}

void q_scimacro_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciMacro_OnSenderSignalIndex((QsciMacro*)self, (intptr_t)slot);
}

int32_t q_scimacro_receivers(void* self, const char* signal) {
    return QsciMacro_Receivers((QsciMacro*)self, signal);
}

int32_t q_scimacro_qbase_receivers(void* self, const char* signal) {
    return QsciMacro_QBaseReceivers((QsciMacro*)self, signal);
}

void q_scimacro_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciMacro_OnReceivers((QsciMacro*)self, (intptr_t)slot);
}

bool q_scimacro_is_signal_connected(void* self, void* signal) {
    return QsciMacro_IsSignalConnected((QsciMacro*)self, (QMetaMethod*)signal);
}

bool q_scimacro_qbase_is_signal_connected(void* self, void* signal) {
    return QsciMacro_QBaseIsSignalConnected((QsciMacro*)self, (QMetaMethod*)signal);
}

void q_scimacro_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciMacro_OnIsSignalConnected((QsciMacro*)self, (intptr_t)slot);
}

void q_scimacro_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scimacro_delete(void* self) {
    QsciMacro_Delete((QsciMacro*)(self));
}
