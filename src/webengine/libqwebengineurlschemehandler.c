#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqwebengineurlrequestjob.hpp"
#include "libqwebengineurlschemehandler.hpp"
#include "libqwebengineurlschemehandler.h"

QWebEngineUrlSchemeHandler* q_webengineurlschemehandler_new() {
    return QWebEngineUrlSchemeHandler_new();
}

QWebEngineUrlSchemeHandler* q_webengineurlschemehandler_new2(void* parent) {
    return QWebEngineUrlSchemeHandler_new2((QObject*)parent);
}

const QMetaObject* q_webengineurlschemehandler_meta_object(void* self) {
    return QWebEngineUrlSchemeHandler_MetaObject((QWebEngineUrlSchemeHandler*)self);
}

void* q_webengineurlschemehandler_metacast(void* self, const char* param1) {
    return QWebEngineUrlSchemeHandler_Metacast((QWebEngineUrlSchemeHandler*)self, param1);
}

int32_t q_webengineurlschemehandler_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineUrlSchemeHandler_Metacall((QWebEngineUrlSchemeHandler*)self, param1, param2, param3);
}

void q_webengineurlschemehandler_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QWebEngineUrlSchemeHandler_OnMetacall((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

int32_t q_webengineurlschemehandler_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineUrlSchemeHandler_QBaseMetacall((QWebEngineUrlSchemeHandler*)self, param1, param2, param3);
}

const char* q_webengineurlschemehandler_tr(const char* s) {
    libqt_string _str = QWebEngineUrlSchemeHandler_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineurlschemehandler_request_started(void* self, void* param1) {
    QWebEngineUrlSchemeHandler_RequestStarted((QWebEngineUrlSchemeHandler*)self, (QWebEngineUrlRequestJob*)param1);
}

void q_webengineurlschemehandler_on_request_started(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnRequestStarted((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

void q_webengineurlschemehandler_qbase_request_started(void* self, void* param1) {
    QWebEngineUrlSchemeHandler_QBaseRequestStarted((QWebEngineUrlSchemeHandler*)self, (QWebEngineUrlRequestJob*)param1);
}

const char* q_webengineurlschemehandler_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineUrlSchemeHandler_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineurlschemehandler_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineUrlSchemeHandler_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineurlschemehandler_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineurlschemehandler_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webengineurlschemehandler_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webengineurlschemehandler_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webengineurlschemehandler_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webengineurlschemehandler_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webengineurlschemehandler_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webengineurlschemehandler_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webengineurlschemehandler_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webengineurlschemehandler_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_webengineurlschemehandler_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webengineurlschemehandler_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webengineurlschemehandler_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webengineurlschemehandler_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webengineurlschemehandler_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webengineurlschemehandler_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webengineurlschemehandler_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webengineurlschemehandler_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webengineurlschemehandler_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webengineurlschemehandler_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webengineurlschemehandler_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webengineurlschemehandler_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webengineurlschemehandler_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webengineurlschemehandler_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webengineurlschemehandler_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_webengineurlschemehandler_dynamic_property_names");
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

QBindingStorage* q_webengineurlschemehandler_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webengineurlschemehandler_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webengineurlschemehandler_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webengineurlschemehandler_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webengineurlschemehandler_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webengineurlschemehandler_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webengineurlschemehandler_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webengineurlschemehandler_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webengineurlschemehandler_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webengineurlschemehandler_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_webengineurlschemehandler_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_webengineurlschemehandler_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webengineurlschemehandler_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_webengineurlschemehandler_event(void* self, void* event) {
    return QWebEngineUrlSchemeHandler_Event((QWebEngineUrlSchemeHandler*)self, (QEvent*)event);
}

bool q_webengineurlschemehandler_qbase_event(void* self, void* event) {
    return QWebEngineUrlSchemeHandler_QBaseEvent((QWebEngineUrlSchemeHandler*)self, (QEvent*)event);
}

void q_webengineurlschemehandler_on_event(void* self, bool (*callback)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnEvent((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

bool q_webengineurlschemehandler_event_filter(void* self, void* watched, void* event) {
    return QWebEngineUrlSchemeHandler_EventFilter((QWebEngineUrlSchemeHandler*)self, (QObject*)watched, (QEvent*)event);
}

bool q_webengineurlschemehandler_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebEngineUrlSchemeHandler_QBaseEventFilter((QWebEngineUrlSchemeHandler*)self, (QObject*)watched, (QEvent*)event);
}

void q_webengineurlschemehandler_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWebEngineUrlSchemeHandler_OnEventFilter((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

void q_webengineurlschemehandler_timer_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_TimerEvent((QWebEngineUrlSchemeHandler*)self, (QTimerEvent*)event);
}

void q_webengineurlschemehandler_qbase_timer_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_QBaseTimerEvent((QWebEngineUrlSchemeHandler*)self, (QTimerEvent*)event);
}

void q_webengineurlschemehandler_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnTimerEvent((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

void q_webengineurlschemehandler_child_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_ChildEvent((QWebEngineUrlSchemeHandler*)self, (QChildEvent*)event);
}

void q_webengineurlschemehandler_qbase_child_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_QBaseChildEvent((QWebEngineUrlSchemeHandler*)self, (QChildEvent*)event);
}

void q_webengineurlschemehandler_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnChildEvent((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

void q_webengineurlschemehandler_custom_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_CustomEvent((QWebEngineUrlSchemeHandler*)self, (QEvent*)event);
}

void q_webengineurlschemehandler_qbase_custom_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_QBaseCustomEvent((QWebEngineUrlSchemeHandler*)self, (QEvent*)event);
}

void q_webengineurlschemehandler_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnCustomEvent((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

void q_webengineurlschemehandler_connect_notify(void* self, void* signal) {
    QWebEngineUrlSchemeHandler_ConnectNotify((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

void q_webengineurlschemehandler_qbase_connect_notify(void* self, void* signal) {
    QWebEngineUrlSchemeHandler_QBaseConnectNotify((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

void q_webengineurlschemehandler_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnConnectNotify((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

void q_webengineurlschemehandler_disconnect_notify(void* self, void* signal) {
    QWebEngineUrlSchemeHandler_DisconnectNotify((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

void q_webengineurlschemehandler_qbase_disconnect_notify(void* self, void* signal) {
    QWebEngineUrlSchemeHandler_QBaseDisconnectNotify((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

void q_webengineurlschemehandler_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnDisconnectNotify((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

QObject* q_webengineurlschemehandler_sender(void* self) {
    return QWebEngineUrlSchemeHandler_Sender((QWebEngineUrlSchemeHandler*)self);
}

QObject* q_webengineurlschemehandler_qbase_sender(void* self) {
    return QWebEngineUrlSchemeHandler_QBaseSender((QWebEngineUrlSchemeHandler*)self);
}

void q_webengineurlschemehandler_on_sender(void* self, QObject* (*callback)()) {
    QWebEngineUrlSchemeHandler_OnSender((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

int32_t q_webengineurlschemehandler_sender_signal_index(void* self) {
    return QWebEngineUrlSchemeHandler_SenderSignalIndex((QWebEngineUrlSchemeHandler*)self);
}

int32_t q_webengineurlschemehandler_qbase_sender_signal_index(void* self) {
    return QWebEngineUrlSchemeHandler_QBaseSenderSignalIndex((QWebEngineUrlSchemeHandler*)self);
}

void q_webengineurlschemehandler_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWebEngineUrlSchemeHandler_OnSenderSignalIndex((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

int32_t q_webengineurlschemehandler_receivers(void* self, const char* signal) {
    return QWebEngineUrlSchemeHandler_Receivers((QWebEngineUrlSchemeHandler*)self, signal);
}

int32_t q_webengineurlschemehandler_qbase_receivers(void* self, const char* signal) {
    return QWebEngineUrlSchemeHandler_QBaseReceivers((QWebEngineUrlSchemeHandler*)self, signal);
}

void q_webengineurlschemehandler_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWebEngineUrlSchemeHandler_OnReceivers((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

bool q_webengineurlschemehandler_is_signal_connected(void* self, void* signal) {
    return QWebEngineUrlSchemeHandler_IsSignalConnected((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

bool q_webengineurlschemehandler_qbase_is_signal_connected(void* self, void* signal) {
    return QWebEngineUrlSchemeHandler_QBaseIsSignalConnected((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

void q_webengineurlschemehandler_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnIsSignalConnected((QWebEngineUrlSchemeHandler*)self, (intptr_t)callback);
}

void q_webengineurlschemehandler_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webengineurlschemehandler_delete(void* self) {
    QWebEngineUrlSchemeHandler_Delete((QWebEngineUrlSchemeHandler*)(self));
}
