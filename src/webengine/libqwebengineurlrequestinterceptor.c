#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqwebengineurlrequestinfo.hpp"
#include "libqwebengineurlrequestinterceptor.hpp"
#include "libqwebengineurlrequestinterceptor.h"

QWebEngineUrlRequestInterceptor* q_webengineurlrequestinterceptor_new() {
    return QWebEngineUrlRequestInterceptor_new();
}

QWebEngineUrlRequestInterceptor* q_webengineurlrequestinterceptor_new2(void* p) {
    return QWebEngineUrlRequestInterceptor_new2((QObject*)p);
}

const QMetaObject* q_webengineurlrequestinterceptor_meta_object(void* self) {
    return QWebEngineUrlRequestInterceptor_MetaObject((QWebEngineUrlRequestInterceptor*)self);
}

void q_webengineurlrequestinterceptor_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QWebEngineUrlRequestInterceptor_OnMetaObject((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

const QMetaObject* q_webengineurlrequestinterceptor_qbase_meta_object(void* self) {
    return QWebEngineUrlRequestInterceptor_QBaseMetaObject((QWebEngineUrlRequestInterceptor*)self);
}

void* q_webengineurlrequestinterceptor_metacast(void* self, const char* param1) {
    return QWebEngineUrlRequestInterceptor_Metacast((QWebEngineUrlRequestInterceptor*)self, param1);
}

void q_webengineurlrequestinterceptor_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QWebEngineUrlRequestInterceptor_OnMetacast((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

void* q_webengineurlrequestinterceptor_qbase_metacast(void* self, const char* param1) {
    return QWebEngineUrlRequestInterceptor_QBaseMetacast((QWebEngineUrlRequestInterceptor*)self, param1);
}

int32_t q_webengineurlrequestinterceptor_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineUrlRequestInterceptor_Metacall((QWebEngineUrlRequestInterceptor*)self, param1, param2, param3);
}

void q_webengineurlrequestinterceptor_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWebEngineUrlRequestInterceptor_OnMetacall((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

int32_t q_webengineurlrequestinterceptor_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineUrlRequestInterceptor_QBaseMetacall((QWebEngineUrlRequestInterceptor*)self, param1, param2, param3);
}

const char* q_webengineurlrequestinterceptor_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineurlrequestinterceptor_intercept_request(void* self, void* info) {
    QWebEngineUrlRequestInterceptor_InterceptRequest((QWebEngineUrlRequestInterceptor*)self, (QWebEngineUrlRequestInfo*)info);
}

void q_webengineurlrequestinterceptor_on_intercept_request(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlRequestInterceptor_OnInterceptRequest((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

void q_webengineurlrequestinterceptor_qbase_intercept_request(void* self, void* info) {
    QWebEngineUrlRequestInterceptor_QBaseInterceptRequest((QWebEngineUrlRequestInterceptor*)self, (QWebEngineUrlRequestInfo*)info);
}

const char* q_webengineurlrequestinterceptor_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineurlrequestinterceptor_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineurlrequestinterceptor_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineurlrequestinterceptor_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webengineurlrequestinterceptor_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webengineurlrequestinterceptor_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webengineurlrequestinterceptor_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webengineurlrequestinterceptor_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webengineurlrequestinterceptor_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webengineurlrequestinterceptor_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webengineurlrequestinterceptor_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webengineurlrequestinterceptor_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_webengineurlrequestinterceptor_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_webengineurlrequestinterceptor_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webengineurlrequestinterceptor_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webengineurlrequestinterceptor_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webengineurlrequestinterceptor_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webengineurlrequestinterceptor_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webengineurlrequestinterceptor_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webengineurlrequestinterceptor_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_webengineurlrequestinterceptor_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webengineurlrequestinterceptor_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webengineurlrequestinterceptor_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_webengineurlrequestinterceptor_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webengineurlrequestinterceptor_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_webengineurlrequestinterceptor_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_webengineurlrequestinterceptor_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_webengineurlrequestinterceptor_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webengineurlrequestinterceptor_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webengineurlrequestinterceptor_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webengineurlrequestinterceptor_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webengineurlrequestinterceptor_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webengineurlrequestinterceptor_dynamic_property_names\n");
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

QBindingStorage* q_webengineurlrequestinterceptor_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webengineurlrequestinterceptor_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webengineurlrequestinterceptor_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webengineurlrequestinterceptor_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webengineurlrequestinterceptor_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webengineurlrequestinterceptor_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webengineurlrequestinterceptor_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_webengineurlrequestinterceptor_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_webengineurlrequestinterceptor_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_webengineurlrequestinterceptor_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_webengineurlrequestinterceptor_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webengineurlrequestinterceptor_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_webengineurlrequestinterceptor_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_webengineurlrequestinterceptor_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_webengineurlrequestinterceptor_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_webengineurlrequestinterceptor_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_webengineurlrequestinterceptor_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webengineurlrequestinterceptor_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_webengineurlrequestinterceptor_event(void* self, void* event) {
    return QWebEngineUrlRequestInterceptor_Event((QWebEngineUrlRequestInterceptor*)self, (QEvent*)event);
}

bool q_webengineurlrequestinterceptor_qbase_event(void* self, void* event) {
    return QWebEngineUrlRequestInterceptor_QBaseEvent((QWebEngineUrlRequestInterceptor*)self, (QEvent*)event);
}

void q_webengineurlrequestinterceptor_on_event(void* self, bool (*callback)(void*, void*)) {
    QWebEngineUrlRequestInterceptor_OnEvent((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

bool q_webengineurlrequestinterceptor_event_filter(void* self, void* watched, void* event) {
    return QWebEngineUrlRequestInterceptor_EventFilter((QWebEngineUrlRequestInterceptor*)self, (QObject*)watched, (QEvent*)event);
}

bool q_webengineurlrequestinterceptor_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebEngineUrlRequestInterceptor_QBaseEventFilter((QWebEngineUrlRequestInterceptor*)self, (QObject*)watched, (QEvent*)event);
}

void q_webengineurlrequestinterceptor_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWebEngineUrlRequestInterceptor_OnEventFilter((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

void q_webengineurlrequestinterceptor_timer_event(void* self, void* event) {
    QWebEngineUrlRequestInterceptor_TimerEvent((QWebEngineUrlRequestInterceptor*)self, (QTimerEvent*)event);
}

void q_webengineurlrequestinterceptor_qbase_timer_event(void* self, void* event) {
    QWebEngineUrlRequestInterceptor_QBaseTimerEvent((QWebEngineUrlRequestInterceptor*)self, (QTimerEvent*)event);
}

void q_webengineurlrequestinterceptor_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlRequestInterceptor_OnTimerEvent((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

void q_webengineurlrequestinterceptor_child_event(void* self, void* event) {
    QWebEngineUrlRequestInterceptor_ChildEvent((QWebEngineUrlRequestInterceptor*)self, (QChildEvent*)event);
}

void q_webengineurlrequestinterceptor_qbase_child_event(void* self, void* event) {
    QWebEngineUrlRequestInterceptor_QBaseChildEvent((QWebEngineUrlRequestInterceptor*)self, (QChildEvent*)event);
}

void q_webengineurlrequestinterceptor_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlRequestInterceptor_OnChildEvent((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

void q_webengineurlrequestinterceptor_custom_event(void* self, void* event) {
    QWebEngineUrlRequestInterceptor_CustomEvent((QWebEngineUrlRequestInterceptor*)self, (QEvent*)event);
}

void q_webengineurlrequestinterceptor_qbase_custom_event(void* self, void* event) {
    QWebEngineUrlRequestInterceptor_QBaseCustomEvent((QWebEngineUrlRequestInterceptor*)self, (QEvent*)event);
}

void q_webengineurlrequestinterceptor_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlRequestInterceptor_OnCustomEvent((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

void q_webengineurlrequestinterceptor_connect_notify(void* self, void* signal) {
    QWebEngineUrlRequestInterceptor_ConnectNotify((QWebEngineUrlRequestInterceptor*)self, (QMetaMethod*)signal);
}

void q_webengineurlrequestinterceptor_qbase_connect_notify(void* self, void* signal) {
    QWebEngineUrlRequestInterceptor_QBaseConnectNotify((QWebEngineUrlRequestInterceptor*)self, (QMetaMethod*)signal);
}

void q_webengineurlrequestinterceptor_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlRequestInterceptor_OnConnectNotify((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

void q_webengineurlrequestinterceptor_disconnect_notify(void* self, void* signal) {
    QWebEngineUrlRequestInterceptor_DisconnectNotify((QWebEngineUrlRequestInterceptor*)self, (QMetaMethod*)signal);
}

void q_webengineurlrequestinterceptor_qbase_disconnect_notify(void* self, void* signal) {
    QWebEngineUrlRequestInterceptor_QBaseDisconnectNotify((QWebEngineUrlRequestInterceptor*)self, (QMetaMethod*)signal);
}

void q_webengineurlrequestinterceptor_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlRequestInterceptor_OnDisconnectNotify((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

QObject* q_webengineurlrequestinterceptor_sender(void* self) {
    return QWebEngineUrlRequestInterceptor_Sender((QWebEngineUrlRequestInterceptor*)self);
}

QObject* q_webengineurlrequestinterceptor_qbase_sender(void* self) {
    return QWebEngineUrlRequestInterceptor_QBaseSender((QWebEngineUrlRequestInterceptor*)self);
}

void q_webengineurlrequestinterceptor_on_sender(void* self, QObject* (*callback)()) {
    QWebEngineUrlRequestInterceptor_OnSender((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

int32_t q_webengineurlrequestinterceptor_sender_signal_index(void* self) {
    return QWebEngineUrlRequestInterceptor_SenderSignalIndex((QWebEngineUrlRequestInterceptor*)self);
}

int32_t q_webengineurlrequestinterceptor_qbase_sender_signal_index(void* self) {
    return QWebEngineUrlRequestInterceptor_QBaseSenderSignalIndex((QWebEngineUrlRequestInterceptor*)self);
}

void q_webengineurlrequestinterceptor_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWebEngineUrlRequestInterceptor_OnSenderSignalIndex((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

int32_t q_webengineurlrequestinterceptor_receivers(void* self, const char* signal) {
    return QWebEngineUrlRequestInterceptor_Receivers((QWebEngineUrlRequestInterceptor*)self, signal);
}

int32_t q_webengineurlrequestinterceptor_qbase_receivers(void* self, const char* signal) {
    return QWebEngineUrlRequestInterceptor_QBaseReceivers((QWebEngineUrlRequestInterceptor*)self, signal);
}

void q_webengineurlrequestinterceptor_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWebEngineUrlRequestInterceptor_OnReceivers((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

bool q_webengineurlrequestinterceptor_is_signal_connected(void* self, void* signal) {
    return QWebEngineUrlRequestInterceptor_IsSignalConnected((QWebEngineUrlRequestInterceptor*)self, (QMetaMethod*)signal);
}

bool q_webengineurlrequestinterceptor_qbase_is_signal_connected(void* self, void* signal) {
    return QWebEngineUrlRequestInterceptor_QBaseIsSignalConnected((QWebEngineUrlRequestInterceptor*)self, (QMetaMethod*)signal);
}

void q_webengineurlrequestinterceptor_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWebEngineUrlRequestInterceptor_OnIsSignalConnected((QWebEngineUrlRequestInterceptor*)self, (intptr_t)callback);
}

void q_webengineurlrequestinterceptor_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webengineurlrequestinterceptor_delete(void* self) {
    QWebEngineUrlRequestInterceptor_Delete((QWebEngineUrlRequestInterceptor*)(self));
}
