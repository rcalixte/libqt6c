#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqhttpmultipart.hpp"
#include "libqhttpmultipart.h"

QHttpPart* q_httppart_new() {
    return QHttpPart_new();
}

QHttpPart* q_httppart_new2(void* other) {
    return QHttpPart_new2((QHttpPart*)other);
}

void q_httppart_operator_assign(void* self, void* other) {
    QHttpPart_OperatorAssign((QHttpPart*)self, (QHttpPart*)other);
}

void q_httppart_swap(void* self, void* other) {
    QHttpPart_Swap((QHttpPart*)self, (QHttpPart*)other);
}

bool q_httppart_operator_equal(void* self, void* other) {
    return QHttpPart_OperatorEqual((QHttpPart*)self, (QHttpPart*)other);
}

bool q_httppart_operator_not_equal(void* self, void* other) {
    return QHttpPart_OperatorNotEqual((QHttpPart*)self, (QHttpPart*)other);
}

void q_httppart_set_header(void* self, int32_t header, void* value) {
    QHttpPart_SetHeader((QHttpPart*)self, header, (QVariant*)value);
}

void q_httppart_set_raw_header(void* self, const char* headerName, const char* headerValue) {
    QHttpPart_SetRawHeader((QHttpPart*)self, qstring(headerName), qstring(headerValue));
}

void q_httppart_set_body(void* self, const char* body) {
    QHttpPart_SetBody((QHttpPart*)self, qstring(body));
}

void q_httppart_set_body_device(void* self, void* device) {
    QHttpPart_SetBodyDevice((QHttpPart*)self, (QIODevice*)device);
}

void q_httppart_delete(void* self) {
    QHttpPart_Delete((QHttpPart*)(self));
}

QHttpMultiPart* q_httpmultipart_new() {
    return QHttpMultiPart_new();
}

QHttpMultiPart* q_httpmultipart_new2(int32_t contentType) {
    return QHttpMultiPart_new2(contentType);
}

QHttpMultiPart* q_httpmultipart_new3(void* parent) {
    return QHttpMultiPart_new3((QObject*)parent);
}

QHttpMultiPart* q_httpmultipart_new4(int32_t contentType, void* parent) {
    return QHttpMultiPart_new4(contentType, (QObject*)parent);
}

const QMetaObject* q_httpmultipart_meta_object(void* self) {
    return QHttpMultiPart_MetaObject((QHttpMultiPart*)self);
}

void* q_httpmultipart_metacast(void* self, const char* param1) {
    return QHttpMultiPart_Metacast((QHttpMultiPart*)self, param1);
}

int32_t q_httpmultipart_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHttpMultiPart_Metacall((QHttpMultiPart*)self, param1, param2, param3);
}

void q_httpmultipart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHttpMultiPart_OnMetacall((QHttpMultiPart*)self, (intptr_t)callback);
}

int32_t q_httpmultipart_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHttpMultiPart_QBaseMetacall((QHttpMultiPart*)self, param1, param2, param3);
}

const char* q_httpmultipart_tr(const char* s) {
    libqt_string _str = QHttpMultiPart_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_httpmultipart_append(void* self, void* httpPart) {
    QHttpMultiPart_Append((QHttpMultiPart*)self, (QHttpPart*)httpPart);
}

void q_httpmultipart_set_content_type(void* self, int32_t contentType) {
    QHttpMultiPart_SetContentType((QHttpMultiPart*)self, contentType);
}

char* q_httpmultipart_boundary(void* self) {
    libqt_string _str = QHttpMultiPart_Boundary((QHttpMultiPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_httpmultipart_set_boundary(void* self, const char* boundary) {
    QHttpMultiPart_SetBoundary((QHttpMultiPart*)self, qstring(boundary));
}

const char* q_httpmultipart_tr2(const char* s, const char* c) {
    libqt_string _str = QHttpMultiPart_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_httpmultipart_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHttpMultiPart_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_httpmultipart_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_httpmultipart_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_httpmultipart_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_httpmultipart_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_httpmultipart_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_httpmultipart_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_httpmultipart_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_httpmultipart_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_httpmultipart_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_httpmultipart_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_httpmultipart_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_httpmultipart_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_httpmultipart_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_httpmultipart_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_httpmultipart_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_httpmultipart_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_httpmultipart_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_httpmultipart_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_httpmultipart_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_httpmultipart_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_httpmultipart_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_httpmultipart_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_httpmultipart_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_httpmultipart_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_httpmultipart_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_httpmultipart_dynamic_property_names");
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

QBindingStorage* q_httpmultipart_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_httpmultipart_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_httpmultipart_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_httpmultipart_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_httpmultipart_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_httpmultipart_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_httpmultipart_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_httpmultipart_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_httpmultipart_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_httpmultipart_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_httpmultipart_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_httpmultipart_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_httpmultipart_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_httpmultipart_event(void* self, void* event) {
    return QHttpMultiPart_Event((QHttpMultiPart*)self, (QEvent*)event);
}

bool q_httpmultipart_qbase_event(void* self, void* event) {
    return QHttpMultiPart_QBaseEvent((QHttpMultiPart*)self, (QEvent*)event);
}

void q_httpmultipart_on_event(void* self, bool (*callback)(void*, void*)) {
    QHttpMultiPart_OnEvent((QHttpMultiPart*)self, (intptr_t)callback);
}

bool q_httpmultipart_event_filter(void* self, void* watched, void* event) {
    return QHttpMultiPart_EventFilter((QHttpMultiPart*)self, (QObject*)watched, (QEvent*)event);
}

bool q_httpmultipart_qbase_event_filter(void* self, void* watched, void* event) {
    return QHttpMultiPart_QBaseEventFilter((QHttpMultiPart*)self, (QObject*)watched, (QEvent*)event);
}

void q_httpmultipart_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHttpMultiPart_OnEventFilter((QHttpMultiPart*)self, (intptr_t)callback);
}

void q_httpmultipart_timer_event(void* self, void* event) {
    QHttpMultiPart_TimerEvent((QHttpMultiPart*)self, (QTimerEvent*)event);
}

void q_httpmultipart_qbase_timer_event(void* self, void* event) {
    QHttpMultiPart_QBaseTimerEvent((QHttpMultiPart*)self, (QTimerEvent*)event);
}

void q_httpmultipart_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHttpMultiPart_OnTimerEvent((QHttpMultiPart*)self, (intptr_t)callback);
}

void q_httpmultipart_child_event(void* self, void* event) {
    QHttpMultiPart_ChildEvent((QHttpMultiPart*)self, (QChildEvent*)event);
}

void q_httpmultipart_qbase_child_event(void* self, void* event) {
    QHttpMultiPart_QBaseChildEvent((QHttpMultiPart*)self, (QChildEvent*)event);
}

void q_httpmultipart_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHttpMultiPart_OnChildEvent((QHttpMultiPart*)self, (intptr_t)callback);
}

void q_httpmultipart_custom_event(void* self, void* event) {
    QHttpMultiPart_CustomEvent((QHttpMultiPart*)self, (QEvent*)event);
}

void q_httpmultipart_qbase_custom_event(void* self, void* event) {
    QHttpMultiPart_QBaseCustomEvent((QHttpMultiPart*)self, (QEvent*)event);
}

void q_httpmultipart_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHttpMultiPart_OnCustomEvent((QHttpMultiPart*)self, (intptr_t)callback);
}

void q_httpmultipart_connect_notify(void* self, void* signal) {
    QHttpMultiPart_ConnectNotify((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

void q_httpmultipart_qbase_connect_notify(void* self, void* signal) {
    QHttpMultiPart_QBaseConnectNotify((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

void q_httpmultipart_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QHttpMultiPart_OnConnectNotify((QHttpMultiPart*)self, (intptr_t)callback);
}

void q_httpmultipart_disconnect_notify(void* self, void* signal) {
    QHttpMultiPart_DisconnectNotify((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

void q_httpmultipart_qbase_disconnect_notify(void* self, void* signal) {
    QHttpMultiPart_QBaseDisconnectNotify((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

void q_httpmultipart_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QHttpMultiPart_OnDisconnectNotify((QHttpMultiPart*)self, (intptr_t)callback);
}

QObject* q_httpmultipart_sender(void* self) {
    return QHttpMultiPart_Sender((QHttpMultiPart*)self);
}

QObject* q_httpmultipart_qbase_sender(void* self) {
    return QHttpMultiPart_QBaseSender((QHttpMultiPart*)self);
}

void q_httpmultipart_on_sender(void* self, QObject* (*callback)()) {
    QHttpMultiPart_OnSender((QHttpMultiPart*)self, (intptr_t)callback);
}

int32_t q_httpmultipart_sender_signal_index(void* self) {
    return QHttpMultiPart_SenderSignalIndex((QHttpMultiPart*)self);
}

int32_t q_httpmultipart_qbase_sender_signal_index(void* self) {
    return QHttpMultiPart_QBaseSenderSignalIndex((QHttpMultiPart*)self);
}

void q_httpmultipart_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QHttpMultiPart_OnSenderSignalIndex((QHttpMultiPart*)self, (intptr_t)callback);
}

int32_t q_httpmultipart_receivers(void* self, const char* signal) {
    return QHttpMultiPart_Receivers((QHttpMultiPart*)self, signal);
}

int32_t q_httpmultipart_qbase_receivers(void* self, const char* signal) {
    return QHttpMultiPart_QBaseReceivers((QHttpMultiPart*)self, signal);
}

void q_httpmultipart_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QHttpMultiPart_OnReceivers((QHttpMultiPart*)self, (intptr_t)callback);
}

bool q_httpmultipart_is_signal_connected(void* self, void* signal) {
    return QHttpMultiPart_IsSignalConnected((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

bool q_httpmultipart_qbase_is_signal_connected(void* self, void* signal) {
    return QHttpMultiPart_QBaseIsSignalConnected((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

void q_httpmultipart_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QHttpMultiPart_OnIsSignalConnected((QHttpMultiPart*)self, (intptr_t)callback);
}

void q_httpmultipart_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_httpmultipart_delete(void* self) {
    QHttpMultiPart_Delete((QHttpMultiPart*)(self));
}
