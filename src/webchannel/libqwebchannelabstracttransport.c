#include "../libqcoreevent.hpp"
#include "../libqjsonobject.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqwebchannelabstracttransport.hpp"
#include "libqwebchannelabstracttransport.h"

QWebChannelAbstractTransport* q_webchannelabstracttransport_new() {
    return QWebChannelAbstractTransport_new();
}

QWebChannelAbstractTransport* q_webchannelabstracttransport_new2(void* parent) {
    return QWebChannelAbstractTransport_new2((QObject*)parent);
}

const QMetaObject* q_webchannelabstracttransport_meta_object(void* self) {
    return QWebChannelAbstractTransport_MetaObject((QWebChannelAbstractTransport*)self);
}

void q_webchannelabstracttransport_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QWebChannelAbstractTransport_OnMetaObject((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

const QMetaObject* q_webchannelabstracttransport_qbase_meta_object(void* self) {
    return QWebChannelAbstractTransport_QBaseMetaObject((QWebChannelAbstractTransport*)self);
}

void* q_webchannelabstracttransport_metacast(void* self, const char* param1) {
    return QWebChannelAbstractTransport_Metacast((QWebChannelAbstractTransport*)self, param1);
}

void q_webchannelabstracttransport_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QWebChannelAbstractTransport_OnMetacast((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

void* q_webchannelabstracttransport_qbase_metacast(void* self, const char* param1) {
    return QWebChannelAbstractTransport_QBaseMetacast((QWebChannelAbstractTransport*)self, param1);
}

int32_t q_webchannelabstracttransport_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebChannelAbstractTransport_Metacall((QWebChannelAbstractTransport*)self, param1, param2, param3);
}

void q_webchannelabstracttransport_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWebChannelAbstractTransport_OnMetacall((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

int32_t q_webchannelabstracttransport_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebChannelAbstractTransport_QBaseMetacall((QWebChannelAbstractTransport*)self, param1, param2, param3);
}

const char* q_webchannelabstracttransport_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webchannelabstracttransport_send_message(void* self, void* message) {
    QWebChannelAbstractTransport_SendMessage((QWebChannelAbstractTransport*)self, (QJsonObject*)message);
}

void q_webchannelabstracttransport_on_send_message(void* self, void (*callback)(void*, void*)) {
    QWebChannelAbstractTransport_OnSendMessage((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

void q_webchannelabstracttransport_qbase_send_message(void* self, void* message) {
    QWebChannelAbstractTransport_QBaseSendMessage((QWebChannelAbstractTransport*)self, (QJsonObject*)message);
}

void q_webchannelabstracttransport_message_received(void* self, void* message, void* transport) {
    QWebChannelAbstractTransport_MessageReceived((QWebChannelAbstractTransport*)self, (QJsonObject*)message, (QWebChannelAbstractTransport*)transport);
}

void q_webchannelabstracttransport_on_message_received(void* self, void (*callback)(void*, void*, void*)) {
    QWebChannelAbstractTransport_Connect_MessageReceived((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

const char* q_webchannelabstracttransport_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webchannelabstracttransport_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webchannelabstracttransport_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webchannelabstracttransport_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webchannelabstracttransport_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webchannelabstracttransport_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webchannelabstracttransport_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webchannelabstracttransport_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webchannelabstracttransport_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webchannelabstracttransport_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webchannelabstracttransport_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webchannelabstracttransport_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_webchannelabstracttransport_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_webchannelabstracttransport_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webchannelabstracttransport_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webchannelabstracttransport_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webchannelabstracttransport_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webchannelabstracttransport_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webchannelabstracttransport_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webchannelabstracttransport_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_webchannelabstracttransport_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webchannelabstracttransport_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webchannelabstracttransport_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_webchannelabstracttransport_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webchannelabstracttransport_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_webchannelabstracttransport_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_webchannelabstracttransport_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_webchannelabstracttransport_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webchannelabstracttransport_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webchannelabstracttransport_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webchannelabstracttransport_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webchannelabstracttransport_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webchannelabstracttransport_dynamic_property_names\n");
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

QBindingStorage* q_webchannelabstracttransport_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webchannelabstracttransport_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webchannelabstracttransport_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webchannelabstracttransport_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webchannelabstracttransport_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webchannelabstracttransport_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webchannelabstracttransport_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_webchannelabstracttransport_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_webchannelabstracttransport_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_webchannelabstracttransport_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_webchannelabstracttransport_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webchannelabstracttransport_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_webchannelabstracttransport_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_webchannelabstracttransport_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_webchannelabstracttransport_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_webchannelabstracttransport_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_webchannelabstracttransport_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webchannelabstracttransport_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_webchannelabstracttransport_event(void* self, void* event) {
    return QWebChannelAbstractTransport_Event((QWebChannelAbstractTransport*)self, (QEvent*)event);
}

bool q_webchannelabstracttransport_qbase_event(void* self, void* event) {
    return QWebChannelAbstractTransport_QBaseEvent((QWebChannelAbstractTransport*)self, (QEvent*)event);
}

void q_webchannelabstracttransport_on_event(void* self, bool (*callback)(void*, void*)) {
    QWebChannelAbstractTransport_OnEvent((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

bool q_webchannelabstracttransport_event_filter(void* self, void* watched, void* event) {
    return QWebChannelAbstractTransport_EventFilter((QWebChannelAbstractTransport*)self, (QObject*)watched, (QEvent*)event);
}

bool q_webchannelabstracttransport_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebChannelAbstractTransport_QBaseEventFilter((QWebChannelAbstractTransport*)self, (QObject*)watched, (QEvent*)event);
}

void q_webchannelabstracttransport_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWebChannelAbstractTransport_OnEventFilter((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

void q_webchannelabstracttransport_timer_event(void* self, void* event) {
    QWebChannelAbstractTransport_TimerEvent((QWebChannelAbstractTransport*)self, (QTimerEvent*)event);
}

void q_webchannelabstracttransport_qbase_timer_event(void* self, void* event) {
    QWebChannelAbstractTransport_QBaseTimerEvent((QWebChannelAbstractTransport*)self, (QTimerEvent*)event);
}

void q_webchannelabstracttransport_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWebChannelAbstractTransport_OnTimerEvent((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

void q_webchannelabstracttransport_child_event(void* self, void* event) {
    QWebChannelAbstractTransport_ChildEvent((QWebChannelAbstractTransport*)self, (QChildEvent*)event);
}

void q_webchannelabstracttransport_qbase_child_event(void* self, void* event) {
    QWebChannelAbstractTransport_QBaseChildEvent((QWebChannelAbstractTransport*)self, (QChildEvent*)event);
}

void q_webchannelabstracttransport_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWebChannelAbstractTransport_OnChildEvent((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

void q_webchannelabstracttransport_custom_event(void* self, void* event) {
    QWebChannelAbstractTransport_CustomEvent((QWebChannelAbstractTransport*)self, (QEvent*)event);
}

void q_webchannelabstracttransport_qbase_custom_event(void* self, void* event) {
    QWebChannelAbstractTransport_QBaseCustomEvent((QWebChannelAbstractTransport*)self, (QEvent*)event);
}

void q_webchannelabstracttransport_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWebChannelAbstractTransport_OnCustomEvent((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

void q_webchannelabstracttransport_connect_notify(void* self, void* signal) {
    QWebChannelAbstractTransport_ConnectNotify((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

void q_webchannelabstracttransport_qbase_connect_notify(void* self, void* signal) {
    QWebChannelAbstractTransport_QBaseConnectNotify((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

void q_webchannelabstracttransport_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWebChannelAbstractTransport_OnConnectNotify((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

void q_webchannelabstracttransport_disconnect_notify(void* self, void* signal) {
    QWebChannelAbstractTransport_DisconnectNotify((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

void q_webchannelabstracttransport_qbase_disconnect_notify(void* self, void* signal) {
    QWebChannelAbstractTransport_QBaseDisconnectNotify((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

void q_webchannelabstracttransport_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWebChannelAbstractTransport_OnDisconnectNotify((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

QObject* q_webchannelabstracttransport_sender(void* self) {
    return QWebChannelAbstractTransport_Sender((QWebChannelAbstractTransport*)self);
}

QObject* q_webchannelabstracttransport_qbase_sender(void* self) {
    return QWebChannelAbstractTransport_QBaseSender((QWebChannelAbstractTransport*)self);
}

void q_webchannelabstracttransport_on_sender(void* self, QObject* (*callback)()) {
    QWebChannelAbstractTransport_OnSender((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

int32_t q_webchannelabstracttransport_sender_signal_index(void* self) {
    return QWebChannelAbstractTransport_SenderSignalIndex((QWebChannelAbstractTransport*)self);
}

int32_t q_webchannelabstracttransport_qbase_sender_signal_index(void* self) {
    return QWebChannelAbstractTransport_QBaseSenderSignalIndex((QWebChannelAbstractTransport*)self);
}

void q_webchannelabstracttransport_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWebChannelAbstractTransport_OnSenderSignalIndex((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

int32_t q_webchannelabstracttransport_receivers(void* self, const char* signal) {
    return QWebChannelAbstractTransport_Receivers((QWebChannelAbstractTransport*)self, signal);
}

int32_t q_webchannelabstracttransport_qbase_receivers(void* self, const char* signal) {
    return QWebChannelAbstractTransport_QBaseReceivers((QWebChannelAbstractTransport*)self, signal);
}

void q_webchannelabstracttransport_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWebChannelAbstractTransport_OnReceivers((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

bool q_webchannelabstracttransport_is_signal_connected(void* self, void* signal) {
    return QWebChannelAbstractTransport_IsSignalConnected((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

bool q_webchannelabstracttransport_qbase_is_signal_connected(void* self, void* signal) {
    return QWebChannelAbstractTransport_QBaseIsSignalConnected((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

void q_webchannelabstracttransport_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWebChannelAbstractTransport_OnIsSignalConnected((QWebChannelAbstractTransport*)self, (intptr_t)callback);
}

void q_webchannelabstracttransport_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webchannelabstracttransport_delete(void* self) {
    QWebChannelAbstractTransport_Delete((QWebChannelAbstractTransport*)(self));
}
