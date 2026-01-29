#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkxmessages.hpp"
#include "libkxmessages.h"

KXMessages* k_xmessages_new() {
    return KXMessages_new();
}

#ifdef __linux__
KXMessages* k_xmessages_new2(xcb_connection_t* connection, xcb_window_t rootWindow) {
    return KXMessages_new2(connection, rootWindow);
}
#endif

KXMessages* k_xmessages_new3(const char* accept_broadcast) {
    return KXMessages_new3(accept_broadcast);
}

KXMessages* k_xmessages_new4(const char* accept_broadcast, void* parent) {
    return KXMessages_new4(accept_broadcast, (QObject*)parent);
}

#ifdef __linux__
KXMessages* k_xmessages_new5(xcb_connection_t* connection, xcb_window_t rootWindow, const char* accept_broadcast) {
    return KXMessages_new5(connection, rootWindow, accept_broadcast);
}
#endif

#ifdef __linux__
KXMessages* k_xmessages_new6(xcb_connection_t* connection, xcb_window_t rootWindow, const char* accept_broadcast, void* parent) {
    return KXMessages_new6(connection, rootWindow, accept_broadcast, (QObject*)parent);
}
#endif

const QMetaObject* k_xmessages_meta_object(void* self) {
    return KXMessages_MetaObject((KXMessages*)self);
}

void k_xmessages_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KXMessages_OnMetaObject((KXMessages*)self, (intptr_t)callback);
}

const QMetaObject* k_xmessages_qbase_meta_object(void* self) {
    return KXMessages_QBaseMetaObject((KXMessages*)self);
}

void* k_xmessages_metacast(void* self, const char* param1) {
    return KXMessages_Metacast((KXMessages*)self, param1);
}

void k_xmessages_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KXMessages_OnMetacast((KXMessages*)self, (intptr_t)callback);
}

void* k_xmessages_qbase_metacast(void* self, const char* param1) {
    return KXMessages_QBaseMetacast((KXMessages*)self, param1);
}

int32_t k_xmessages_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KXMessages_Metacall((KXMessages*)self, param1, param2, param3);
}

void k_xmessages_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KXMessages_OnMetacall((KXMessages*)self, (intptr_t)callback);
}

int32_t k_xmessages_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KXMessages_QBaseMetacall((KXMessages*)self, param1, param2, param3);
}

const char* k_xmessages_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmessages_broadcast_message(void* self, const char* msg_type, const char* message) {
    KXMessages_BroadcastMessage((KXMessages*)self, msg_type, qstring(message));
}

#ifdef __linux__
bool k_xmessages_broadcast_message_x(xcb_connection_t* c, const char* msg_type, const char* message, int screenNumber) {
    return KXMessages_BroadcastMessageX(c, msg_type, qstring(message), screenNumber);
}
#endif

void k_xmessages_got_message(void* self, const char* message) {
    KXMessages_GotMessage((KXMessages*)self, qstring(message));
}

void k_xmessages_on_got_message(void* self, void (*callback)(void*, const char*)) {
    KXMessages_Connect_GotMessage((KXMessages*)self, (intptr_t)callback);
}

const char* k_xmessages_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmessages_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmessages_broadcast_message3(void* self, const char* msg_type, const char* message, int screen) {
    KXMessages_BroadcastMessage3((KXMessages*)self, msg_type, qstring(message), screen);
}

const char* k_xmessages_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmessages_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_xmessages_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_xmessages_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_xmessages_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_xmessages_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_xmessages_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_xmessages_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_xmessages_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_xmessages_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_xmessages_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_xmessages_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_xmessages_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_xmessages_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_xmessages_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_xmessages_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_xmessages_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_xmessages_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_xmessages_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_xmessages_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_xmessages_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_xmessages_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_xmessages_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_xmessages_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_xmessages_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_xmessages_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmessages_dynamic_property_names\n");
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

QBindingStorage* k_xmessages_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_xmessages_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_xmessages_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_xmessages_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_xmessages_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_xmessages_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_xmessages_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_xmessages_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_xmessages_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_xmessages_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_xmessages_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_xmessages_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_xmessages_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_xmessages_event(void* self, void* event) {
    return KXMessages_Event((KXMessages*)self, (QEvent*)event);
}

bool k_xmessages_qbase_event(void* self, void* event) {
    return KXMessages_QBaseEvent((KXMessages*)self, (QEvent*)event);
}

void k_xmessages_on_event(void* self, bool (*callback)(void*, void*)) {
    KXMessages_OnEvent((KXMessages*)self, (intptr_t)callback);
}

bool k_xmessages_event_filter(void* self, void* watched, void* event) {
    return KXMessages_EventFilter((KXMessages*)self, (QObject*)watched, (QEvent*)event);
}

bool k_xmessages_qbase_event_filter(void* self, void* watched, void* event) {
    return KXMessages_QBaseEventFilter((KXMessages*)self, (QObject*)watched, (QEvent*)event);
}

void k_xmessages_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KXMessages_OnEventFilter((KXMessages*)self, (intptr_t)callback);
}

void k_xmessages_timer_event(void* self, void* event) {
    KXMessages_TimerEvent((KXMessages*)self, (QTimerEvent*)event);
}

void k_xmessages_qbase_timer_event(void* self, void* event) {
    KXMessages_QBaseTimerEvent((KXMessages*)self, (QTimerEvent*)event);
}

void k_xmessages_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KXMessages_OnTimerEvent((KXMessages*)self, (intptr_t)callback);
}

void k_xmessages_child_event(void* self, void* event) {
    KXMessages_ChildEvent((KXMessages*)self, (QChildEvent*)event);
}

void k_xmessages_qbase_child_event(void* self, void* event) {
    KXMessages_QBaseChildEvent((KXMessages*)self, (QChildEvent*)event);
}

void k_xmessages_on_child_event(void* self, void (*callback)(void*, void*)) {
    KXMessages_OnChildEvent((KXMessages*)self, (intptr_t)callback);
}

void k_xmessages_custom_event(void* self, void* event) {
    KXMessages_CustomEvent((KXMessages*)self, (QEvent*)event);
}

void k_xmessages_qbase_custom_event(void* self, void* event) {
    KXMessages_QBaseCustomEvent((KXMessages*)self, (QEvent*)event);
}

void k_xmessages_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KXMessages_OnCustomEvent((KXMessages*)self, (intptr_t)callback);
}

void k_xmessages_connect_notify(void* self, void* signal) {
    KXMessages_ConnectNotify((KXMessages*)self, (QMetaMethod*)signal);
}

void k_xmessages_qbase_connect_notify(void* self, void* signal) {
    KXMessages_QBaseConnectNotify((KXMessages*)self, (QMetaMethod*)signal);
}

void k_xmessages_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KXMessages_OnConnectNotify((KXMessages*)self, (intptr_t)callback);
}

void k_xmessages_disconnect_notify(void* self, void* signal) {
    KXMessages_DisconnectNotify((KXMessages*)self, (QMetaMethod*)signal);
}

void k_xmessages_qbase_disconnect_notify(void* self, void* signal) {
    KXMessages_QBaseDisconnectNotify((KXMessages*)self, (QMetaMethod*)signal);
}

void k_xmessages_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KXMessages_OnDisconnectNotify((KXMessages*)self, (intptr_t)callback);
}

QObject* k_xmessages_sender(void* self) {
    return KXMessages_Sender((KXMessages*)self);
}

QObject* k_xmessages_qbase_sender(void* self) {
    return KXMessages_QBaseSender((KXMessages*)self);
}

void k_xmessages_on_sender(void* self, QObject* (*callback)()) {
    KXMessages_OnSender((KXMessages*)self, (intptr_t)callback);
}

int32_t k_xmessages_sender_signal_index(void* self) {
    return KXMessages_SenderSignalIndex((KXMessages*)self);
}

int32_t k_xmessages_qbase_sender_signal_index(void* self) {
    return KXMessages_QBaseSenderSignalIndex((KXMessages*)self);
}

void k_xmessages_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KXMessages_OnSenderSignalIndex((KXMessages*)self, (intptr_t)callback);
}

int32_t k_xmessages_receivers(void* self, const char* signal) {
    return KXMessages_Receivers((KXMessages*)self, signal);
}

int32_t k_xmessages_qbase_receivers(void* self, const char* signal) {
    return KXMessages_QBaseReceivers((KXMessages*)self, signal);
}

void k_xmessages_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KXMessages_OnReceivers((KXMessages*)self, (intptr_t)callback);
}

bool k_xmessages_is_signal_connected(void* self, void* signal) {
    return KXMessages_IsSignalConnected((KXMessages*)self, (QMetaMethod*)signal);
}

bool k_xmessages_qbase_is_signal_connected(void* self, void* signal) {
    return KXMessages_QBaseIsSignalConnected((KXMessages*)self, (QMetaMethod*)signal);
}

void k_xmessages_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KXMessages_OnIsSignalConnected((KXMessages*)self, (intptr_t)callback);
}

void k_xmessages_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_xmessages_delete(void* self) {
    KXMessages_Delete((KXMessages*)(self));
}
