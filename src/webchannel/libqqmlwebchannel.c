#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqwebchannel.hpp"
#include "libqwebchannelabstracttransport.hpp"
#include "../libqcoreevent.hpp"
#include "libqqmlwebchannel.hpp"
#include "libqqmlwebchannel.h"

QQmlWebChannel* q_qmlwebchannel_new() {
    return QQmlWebChannel_new();
}

QQmlWebChannel* q_qmlwebchannel_new2(void* parent) {
    return QQmlWebChannel_new2((QObject*)parent);
}

QMetaObject* q_qmlwebchannel_meta_object(void* self) {
    return QQmlWebChannel_MetaObject((QQmlWebChannel*)self);
}

void* q_qmlwebchannel_metacast(void* self, const char* param1) {
    return QQmlWebChannel_Metacast((QQmlWebChannel*)self, param1);
}

int32_t q_qmlwebchannel_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QQmlWebChannel_Metacall((QQmlWebChannel*)self, param1, param2, param3);
}

void q_qmlwebchannel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QQmlWebChannel_OnMetacall((QQmlWebChannel*)self, (intptr_t)slot);
}

int32_t q_qmlwebchannel_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QQmlWebChannel_QBaseMetacall((QQmlWebChannel*)self, param1, param2, param3);
}

const char* q_qmlwebchannel_tr(const char* s) {
    libqt_string _str = QQmlWebChannel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlwebchannel_register_objects(void* self, libqt_map /* of const char* to QVariant* */ objects) {
    QQmlWebChannel_RegisterObjects((QQmlWebChannel*)self, objects);
}

void q_qmlwebchannel_connect_to(void* self, void* transport) {
    QQmlWebChannel_ConnectTo((QQmlWebChannel*)self, (QObject*)transport);
}

void q_qmlwebchannel_disconnect_from(void* self, void* transport) {
    QQmlWebChannel_DisconnectFrom((QQmlWebChannel*)self, (QObject*)transport);
}

const char* q_qmlwebchannel_tr2(const char* s, const char* c) {
    libqt_string _str = QQmlWebChannel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlwebchannel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QQmlWebChannel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to QObject* */ q_qmlwebchannel_registered_objects(void* self) {
    return QWebChannel_RegisteredObjects((QWebChannel*)self);
}

void q_qmlwebchannel_register_object(void* self, const char* id, void* object) {
    QWebChannel_RegisterObject((QWebChannel*)self, qstring(id), (QObject*)object);
}

void q_qmlwebchannel_deregister_object(void* self, void* object) {
    QWebChannel_DeregisterObject((QWebChannel*)self, (QObject*)object);
}

bool q_qmlwebchannel_block_updates(void* self) {
    return QWebChannel_BlockUpdates((QWebChannel*)self);
}

void q_qmlwebchannel_set_block_updates(void* self, bool block) {
    QWebChannel_SetBlockUpdates((QWebChannel*)self, block);
}

int32_t q_qmlwebchannel_property_update_interval(void* self) {
    return QWebChannel_PropertyUpdateInterval((QWebChannel*)self);
}

void q_qmlwebchannel_set_property_update_interval(void* self, int ms) {
    QWebChannel_SetPropertyUpdateInterval((QWebChannel*)self, ms);
}

void q_qmlwebchannel_block_updates_changed(void* self, bool block) {
    QWebChannel_BlockUpdatesChanged((QWebChannel*)self, block);
}

void q_qmlwebchannel_on_block_updates_changed(void* self, void (*slot)(void*, bool)) {
    QWebChannel_Connect_BlockUpdatesChanged((QWebChannel*)self, (intptr_t)slot);
}

const char* q_qmlwebchannel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlwebchannel_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_qmlwebchannel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlwebchannel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlwebchannel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlwebchannel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlwebchannel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlwebchannel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_qmlwebchannel_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlwebchannel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_qmlwebchannel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlwebchannel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlwebchannel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlwebchannel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlwebchannel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlwebchannel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlwebchannel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlwebchannel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlwebchannel_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_qmlwebchannel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlwebchannel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlwebchannel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlwebchannel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlwebchannel_dynamic_property_names(void* self) {
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

QBindingStorage* q_qmlwebchannel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_qmlwebchannel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlwebchannel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlwebchannel_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_qmlwebchannel_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlwebchannel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlwebchannel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlwebchannel_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_qmlwebchannel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_qmlwebchannel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_qmlwebchannel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlwebchannel_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_qmlwebchannel_event(void* self, void* event) {
    return QQmlWebChannel_Event((QQmlWebChannel*)self, (QEvent*)event);
}

bool q_qmlwebchannel_qbase_event(void* self, void* event) {
    return QQmlWebChannel_QBaseEvent((QQmlWebChannel*)self, (QEvent*)event);
}

void q_qmlwebchannel_on_event(void* self, bool (*slot)(void*, void*)) {
    QQmlWebChannel_OnEvent((QQmlWebChannel*)self, (intptr_t)slot);
}

bool q_qmlwebchannel_event_filter(void* self, void* watched, void* event) {
    return QQmlWebChannel_EventFilter((QQmlWebChannel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlwebchannel_qbase_event_filter(void* self, void* watched, void* event) {
    return QQmlWebChannel_QBaseEventFilter((QQmlWebChannel*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlwebchannel_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QQmlWebChannel_OnEventFilter((QQmlWebChannel*)self, (intptr_t)slot);
}

void q_qmlwebchannel_timer_event(void* self, void* event) {
    QQmlWebChannel_TimerEvent((QQmlWebChannel*)self, (QTimerEvent*)event);
}

void q_qmlwebchannel_qbase_timer_event(void* self, void* event) {
    QQmlWebChannel_QBaseTimerEvent((QQmlWebChannel*)self, (QTimerEvent*)event);
}

void q_qmlwebchannel_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QQmlWebChannel_OnTimerEvent((QQmlWebChannel*)self, (intptr_t)slot);
}

void q_qmlwebchannel_child_event(void* self, void* event) {
    QQmlWebChannel_ChildEvent((QQmlWebChannel*)self, (QChildEvent*)event);
}

void q_qmlwebchannel_qbase_child_event(void* self, void* event) {
    QQmlWebChannel_QBaseChildEvent((QQmlWebChannel*)self, (QChildEvent*)event);
}

void q_qmlwebchannel_on_child_event(void* self, void (*slot)(void*, void*)) {
    QQmlWebChannel_OnChildEvent((QQmlWebChannel*)self, (intptr_t)slot);
}

void q_qmlwebchannel_custom_event(void* self, void* event) {
    QQmlWebChannel_CustomEvent((QQmlWebChannel*)self, (QEvent*)event);
}

void q_qmlwebchannel_qbase_custom_event(void* self, void* event) {
    QQmlWebChannel_QBaseCustomEvent((QQmlWebChannel*)self, (QEvent*)event);
}

void q_qmlwebchannel_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QQmlWebChannel_OnCustomEvent((QQmlWebChannel*)self, (intptr_t)slot);
}

void q_qmlwebchannel_connect_notify(void* self, void* signal) {
    QQmlWebChannel_ConnectNotify((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_qbase_connect_notify(void* self, void* signal) {
    QQmlWebChannel_QBaseConnectNotify((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QQmlWebChannel_OnConnectNotify((QQmlWebChannel*)self, (intptr_t)slot);
}

void q_qmlwebchannel_disconnect_notify(void* self, void* signal) {
    QQmlWebChannel_DisconnectNotify((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_qbase_disconnect_notify(void* self, void* signal) {
    QQmlWebChannel_QBaseDisconnectNotify((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QQmlWebChannel_OnDisconnectNotify((QQmlWebChannel*)self, (intptr_t)slot);
}

QObject* q_qmlwebchannel_sender(void* self) {
    return QQmlWebChannel_Sender((QQmlWebChannel*)self);
}

QObject* q_qmlwebchannel_qbase_sender(void* self) {
    return QQmlWebChannel_QBaseSender((QQmlWebChannel*)self);
}

void q_qmlwebchannel_on_sender(void* self, QObject* (*slot)()) {
    QQmlWebChannel_OnSender((QQmlWebChannel*)self, (intptr_t)slot);
}

int32_t q_qmlwebchannel_sender_signal_index(void* self) {
    return QQmlWebChannel_SenderSignalIndex((QQmlWebChannel*)self);
}

int32_t q_qmlwebchannel_qbase_sender_signal_index(void* self) {
    return QQmlWebChannel_QBaseSenderSignalIndex((QQmlWebChannel*)self);
}

void q_qmlwebchannel_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QQmlWebChannel_OnSenderSignalIndex((QQmlWebChannel*)self, (intptr_t)slot);
}

int32_t q_qmlwebchannel_receivers(void* self, const char* signal) {
    return QQmlWebChannel_Receivers((QQmlWebChannel*)self, signal);
}

int32_t q_qmlwebchannel_qbase_receivers(void* self, const char* signal) {
    return QQmlWebChannel_QBaseReceivers((QQmlWebChannel*)self, signal);
}

void q_qmlwebchannel_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QQmlWebChannel_OnReceivers((QQmlWebChannel*)self, (intptr_t)slot);
}

bool q_qmlwebchannel_is_signal_connected(void* self, void* signal) {
    return QQmlWebChannel_IsSignalConnected((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

bool q_qmlwebchannel_qbase_is_signal_connected(void* self, void* signal) {
    return QQmlWebChannel_QBaseIsSignalConnected((QQmlWebChannel*)self, (QMetaMethod*)signal);
}

void q_qmlwebchannel_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QQmlWebChannel_OnIsSignalConnected((QQmlWebChannel*)self, (intptr_t)slot);
}

void q_qmlwebchannel_delete(void* self) {
    QQmlWebChannel_Delete((QQmlWebChannel*)(self));
}
