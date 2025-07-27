#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqwebchannelabstracttransport.hpp"
#include "libqwebchannel.hpp"
#include "libqwebchannel.h"

QWebChannel* q_webchannel_new() {
    return QWebChannel_new();
}

QWebChannel* q_webchannel_new2(void* parent) {
    return QWebChannel_new2((QObject*)parent);
}

const QMetaObject* q_webchannel_meta_object(void* self) {
    return QWebChannel_MetaObject((QWebChannel*)self);
}

void* q_webchannel_metacast(void* self, const char* param1) {
    return QWebChannel_Metacast((QWebChannel*)self, param1);
}

int32_t q_webchannel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebChannel_Metacall((QWebChannel*)self, param1, param2, param3);
}

void q_webchannel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWebChannel_OnMetacall((QWebChannel*)self, (intptr_t)slot);
}

int32_t q_webchannel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebChannel_QBaseMetacall((QWebChannel*)self, param1, param2, param3);
}

const char* q_webchannel_tr(const char* s) {
    libqt_string _str = QWebChannel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webchannel_register_objects(void* self, libqt_map /* of const char* to QObject* */ objects) {
    QWebChannel_RegisterObjects((QWebChannel*)self, objects);
}

libqt_map /* of const char* to QObject* */ q_webchannel_registered_objects(void* self) {
    return QWebChannel_RegisteredObjects((QWebChannel*)self);
}

void q_webchannel_register_object(void* self, const char* id, void* object) {
    QWebChannel_RegisterObject((QWebChannel*)self, qstring(id), (QObject*)object);
}

void q_webchannel_deregister_object(void* self, void* object) {
    QWebChannel_DeregisterObject((QWebChannel*)self, (QObject*)object);
}

bool q_webchannel_block_updates(void* self) {
    return QWebChannel_BlockUpdates((QWebChannel*)self);
}

void q_webchannel_set_block_updates(void* self, bool block) {
    QWebChannel_SetBlockUpdates((QWebChannel*)self, block);
}

int32_t q_webchannel_property_update_interval(void* self) {
    return QWebChannel_PropertyUpdateInterval((QWebChannel*)self);
}

void q_webchannel_set_property_update_interval(void* self, int ms) {
    QWebChannel_SetPropertyUpdateInterval((QWebChannel*)self, ms);
}

void q_webchannel_block_updates_changed(void* self, bool block) {
    QWebChannel_BlockUpdatesChanged((QWebChannel*)self, block);
}

void q_webchannel_on_block_updates_changed(void* self, void (*slot)(void*, bool)) {
    QWebChannel_Connect_BlockUpdatesChanged((QWebChannel*)self, (intptr_t)slot);
}

void q_webchannel_connect_to(void* self, void* transport) {
    QWebChannel_ConnectTo((QWebChannel*)self, (QWebChannelAbstractTransport*)transport);
}

void q_webchannel_disconnect_from(void* self, void* transport) {
    QWebChannel_DisconnectFrom((QWebChannel*)self, (QWebChannelAbstractTransport*)transport);
}

const char* q_webchannel_tr2(const char* s, const char* c) {
    libqt_string _str = QWebChannel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webchannel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebChannel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webchannel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webchannel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webchannel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webchannel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webchannel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webchannel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webchannel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webchannel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webchannel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webchannel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_webchannel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webchannel_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webchannel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webchannel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webchannel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webchannel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webchannel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webchannel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webchannel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webchannel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webchannel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webchannel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webchannel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webchannel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webchannel_dynamic_property_names(void* self) {
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

QBindingStorage* q_webchannel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webchannel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webchannel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webchannel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_webchannel_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webchannel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webchannel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webchannel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webchannel_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webchannel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_webchannel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_webchannel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webchannel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_webchannel_event(void* self, void* event) {
    return QWebChannel_Event((QWebChannel*)self, (QEvent*)event);
}

bool q_webchannel_qbase_event(void* self, void* event) {
    return QWebChannel_QBaseEvent((QWebChannel*)self, (QEvent*)event);
}

void q_webchannel_on_event(void* self, bool (*slot)(void*, void*)) {
    QWebChannel_OnEvent((QWebChannel*)self, (intptr_t)slot);
}

bool q_webchannel_event_filter(void* self, void* watched, void* event) {
    return QWebChannel_EventFilter((QWebChannel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_webchannel_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebChannel_QBaseEventFilter((QWebChannel*)self, (QObject*)watched, (QEvent*)event);
}

void q_webchannel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWebChannel_OnEventFilter((QWebChannel*)self, (intptr_t)slot);
}

void q_webchannel_timer_event(void* self, void* event) {
    QWebChannel_TimerEvent((QWebChannel*)self, (QTimerEvent*)event);
}

void q_webchannel_qbase_timer_event(void* self, void* event) {
    QWebChannel_QBaseTimerEvent((QWebChannel*)self, (QTimerEvent*)event);
}

void q_webchannel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWebChannel_OnTimerEvent((QWebChannel*)self, (intptr_t)slot);
}

void q_webchannel_child_event(void* self, void* event) {
    QWebChannel_ChildEvent((QWebChannel*)self, (QChildEvent*)event);
}

void q_webchannel_qbase_child_event(void* self, void* event) {
    QWebChannel_QBaseChildEvent((QWebChannel*)self, (QChildEvent*)event);
}

void q_webchannel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWebChannel_OnChildEvent((QWebChannel*)self, (intptr_t)slot);
}

void q_webchannel_custom_event(void* self, void* event) {
    QWebChannel_CustomEvent((QWebChannel*)self, (QEvent*)event);
}

void q_webchannel_qbase_custom_event(void* self, void* event) {
    QWebChannel_QBaseCustomEvent((QWebChannel*)self, (QEvent*)event);
}

void q_webchannel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWebChannel_OnCustomEvent((QWebChannel*)self, (intptr_t)slot);
}

void q_webchannel_connect_notify(void* self, void* signal) {
    QWebChannel_ConnectNotify((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_qbase_connect_notify(void* self, void* signal) {
    QWebChannel_QBaseConnectNotify((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWebChannel_OnConnectNotify((QWebChannel*)self, (intptr_t)slot);
}

void q_webchannel_disconnect_notify(void* self, void* signal) {
    QWebChannel_DisconnectNotify((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_qbase_disconnect_notify(void* self, void* signal) {
    QWebChannel_QBaseDisconnectNotify((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWebChannel_OnDisconnectNotify((QWebChannel*)self, (intptr_t)slot);
}

QObject* q_webchannel_sender(void* self) {
    return QWebChannel_Sender((QWebChannel*)self);
}

QObject* q_webchannel_qbase_sender(void* self) {
    return QWebChannel_QBaseSender((QWebChannel*)self);
}

void q_webchannel_on_sender(void* self, QObject* (*slot)()) {
    QWebChannel_OnSender((QWebChannel*)self, (intptr_t)slot);
}

int32_t q_webchannel_sender_signal_index(void* self) {
    return QWebChannel_SenderSignalIndex((QWebChannel*)self);
}

int32_t q_webchannel_qbase_sender_signal_index(void* self) {
    return QWebChannel_QBaseSenderSignalIndex((QWebChannel*)self);
}

void q_webchannel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWebChannel_OnSenderSignalIndex((QWebChannel*)self, (intptr_t)slot);
}

int32_t q_webchannel_receivers(void* self, const char* signal) {
    return QWebChannel_Receivers((QWebChannel*)self, signal);
}

int32_t q_webchannel_qbase_receivers(void* self, const char* signal) {
    return QWebChannel_QBaseReceivers((QWebChannel*)self, signal);
}

void q_webchannel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWebChannel_OnReceivers((QWebChannel*)self, (intptr_t)slot);
}

bool q_webchannel_is_signal_connected(void* self, void* signal) {
    return QWebChannel_IsSignalConnected((QWebChannel*)self, (QMetaMethod*)signal);
}

bool q_webchannel_qbase_is_signal_connected(void* self, void* signal) {
    return QWebChannel_QBaseIsSignalConnected((QWebChannel*)self, (QMetaMethod*)signal);
}

void q_webchannel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWebChannel_OnIsSignalConnected((QWebChannel*)self, (intptr_t)slot);
}

void q_webchannel_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_webchannel_delete(void* self) {
    QWebChannel_Delete((QWebChannel*)(self));
}
