#include "libqcoreevent.hpp"
#include "libqiconengine.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqiconengineplugin.hpp"
#include "libqiconengineplugin.h"

QIconEnginePlugin* q_iconengineplugin_new() {
    return QIconEnginePlugin_new();
}

QIconEnginePlugin* q_iconengineplugin_new2(void* parent) {
    return QIconEnginePlugin_new2((QObject*)parent);
}

const QMetaObject* q_iconengineplugin_meta_object(void* self) {
    return QIconEnginePlugin_MetaObject((QIconEnginePlugin*)self);
}

void q_iconengineplugin_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QIconEnginePlugin_OnMetaObject((QIconEnginePlugin*)self, (intptr_t)callback);
}

const QMetaObject* q_iconengineplugin_qbase_meta_object(void* self) {
    return QIconEnginePlugin_QBaseMetaObject((QIconEnginePlugin*)self);
}

void* q_iconengineplugin_metacast(void* self, const char* param1) {
    return QIconEnginePlugin_Metacast((QIconEnginePlugin*)self, param1);
}

void q_iconengineplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QIconEnginePlugin_OnMetacast((QIconEnginePlugin*)self, (intptr_t)callback);
}

void* q_iconengineplugin_qbase_metacast(void* self, const char* param1) {
    return QIconEnginePlugin_QBaseMetacast((QIconEnginePlugin*)self, param1);
}

int32_t q_iconengineplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QIconEnginePlugin_Metacall((QIconEnginePlugin*)self, param1, param2, param3);
}

void q_iconengineplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QIconEnginePlugin_OnMetacall((QIconEnginePlugin*)self, (intptr_t)callback);
}

int32_t q_iconengineplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QIconEnginePlugin_QBaseMetacall((QIconEnginePlugin*)self, param1, param2, param3);
}

const char* q_iconengineplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIconEngine* q_iconengineplugin_create(void* self, const char* filename) {
    return QIconEnginePlugin_Create((QIconEnginePlugin*)self, qstring(filename));
}

void q_iconengineplugin_on_create(void* self, QIconEngine* (*callback)(void*, const char*)) {
    QIconEnginePlugin_OnCreate((QIconEnginePlugin*)self, (intptr_t)callback);
}

QIconEngine* q_iconengineplugin_qbase_create(void* self, const char* filename) {
    return QIconEnginePlugin_QBaseCreate((QIconEnginePlugin*)self, qstring(filename));
}

const char* q_iconengineplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_iconengineplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_iconengineplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_iconengineplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_iconengineplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_iconengineplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_iconengineplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_iconengineplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_iconengineplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_iconengineplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_iconengineplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_iconengineplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_iconengineplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_iconengineplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_iconengineplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_iconengineplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_iconengineplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_iconengineplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_iconengineplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_iconengineplugin_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_iconengineplugin_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_iconengineplugin_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_iconengineplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_iconengineplugin_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_iconengineplugin_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_iconengineplugin_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_iconengineplugin_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_iconengineplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_iconengineplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_iconengineplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_iconengineplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_iconengineplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_iconengineplugin_dynamic_property_names\n");
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

QBindingStorage* q_iconengineplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_iconengineplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_iconengineplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_iconengineplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_iconengineplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_iconengineplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_iconengineplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_iconengineplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_iconengineplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_iconengineplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_iconengineplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_iconengineplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_iconengineplugin_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_iconengineplugin_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_iconengineplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_iconengineplugin_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_iconengineplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_iconengineplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_iconengineplugin_event(void* self, void* event) {
    return QIconEnginePlugin_Event((QIconEnginePlugin*)self, (QEvent*)event);
}

bool q_iconengineplugin_qbase_event(void* self, void* event) {
    return QIconEnginePlugin_QBaseEvent((QIconEnginePlugin*)self, (QEvent*)event);
}

void q_iconengineplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    QIconEnginePlugin_OnEvent((QIconEnginePlugin*)self, (intptr_t)callback);
}

bool q_iconengineplugin_event_filter(void* self, void* watched, void* event) {
    return QIconEnginePlugin_EventFilter((QIconEnginePlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_iconengineplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QIconEnginePlugin_QBaseEventFilter((QIconEnginePlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_iconengineplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QIconEnginePlugin_OnEventFilter((QIconEnginePlugin*)self, (intptr_t)callback);
}

void q_iconengineplugin_timer_event(void* self, void* event) {
    QIconEnginePlugin_TimerEvent((QIconEnginePlugin*)self, (QTimerEvent*)event);
}

void q_iconengineplugin_qbase_timer_event(void* self, void* event) {
    QIconEnginePlugin_QBaseTimerEvent((QIconEnginePlugin*)self, (QTimerEvent*)event);
}

void q_iconengineplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QIconEnginePlugin_OnTimerEvent((QIconEnginePlugin*)self, (intptr_t)callback);
}

void q_iconengineplugin_child_event(void* self, void* event) {
    QIconEnginePlugin_ChildEvent((QIconEnginePlugin*)self, (QChildEvent*)event);
}

void q_iconengineplugin_qbase_child_event(void* self, void* event) {
    QIconEnginePlugin_QBaseChildEvent((QIconEnginePlugin*)self, (QChildEvent*)event);
}

void q_iconengineplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    QIconEnginePlugin_OnChildEvent((QIconEnginePlugin*)self, (intptr_t)callback);
}

void q_iconengineplugin_custom_event(void* self, void* event) {
    QIconEnginePlugin_CustomEvent((QIconEnginePlugin*)self, (QEvent*)event);
}

void q_iconengineplugin_qbase_custom_event(void* self, void* event) {
    QIconEnginePlugin_QBaseCustomEvent((QIconEnginePlugin*)self, (QEvent*)event);
}

void q_iconengineplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QIconEnginePlugin_OnCustomEvent((QIconEnginePlugin*)self, (intptr_t)callback);
}

void q_iconengineplugin_connect_notify(void* self, void* signal) {
    QIconEnginePlugin_ConnectNotify((QIconEnginePlugin*)self, (QMetaMethod*)signal);
}

void q_iconengineplugin_qbase_connect_notify(void* self, void* signal) {
    QIconEnginePlugin_QBaseConnectNotify((QIconEnginePlugin*)self, (QMetaMethod*)signal);
}

void q_iconengineplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QIconEnginePlugin_OnConnectNotify((QIconEnginePlugin*)self, (intptr_t)callback);
}

void q_iconengineplugin_disconnect_notify(void* self, void* signal) {
    QIconEnginePlugin_DisconnectNotify((QIconEnginePlugin*)self, (QMetaMethod*)signal);
}

void q_iconengineplugin_qbase_disconnect_notify(void* self, void* signal) {
    QIconEnginePlugin_QBaseDisconnectNotify((QIconEnginePlugin*)self, (QMetaMethod*)signal);
}

void q_iconengineplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QIconEnginePlugin_OnDisconnectNotify((QIconEnginePlugin*)self, (intptr_t)callback);
}

QObject* q_iconengineplugin_sender(void* self) {
    return QIconEnginePlugin_Sender((QIconEnginePlugin*)self);
}

QObject* q_iconengineplugin_qbase_sender(void* self) {
    return QIconEnginePlugin_QBaseSender((QIconEnginePlugin*)self);
}

void q_iconengineplugin_on_sender(void* self, QObject* (*callback)()) {
    QIconEnginePlugin_OnSender((QIconEnginePlugin*)self, (intptr_t)callback);
}

int32_t q_iconengineplugin_sender_signal_index(void* self) {
    return QIconEnginePlugin_SenderSignalIndex((QIconEnginePlugin*)self);
}

int32_t q_iconengineplugin_qbase_sender_signal_index(void* self) {
    return QIconEnginePlugin_QBaseSenderSignalIndex((QIconEnginePlugin*)self);
}

void q_iconengineplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QIconEnginePlugin_OnSenderSignalIndex((QIconEnginePlugin*)self, (intptr_t)callback);
}

int32_t q_iconengineplugin_receivers(void* self, const char* signal) {
    return QIconEnginePlugin_Receivers((QIconEnginePlugin*)self, signal);
}

int32_t q_iconengineplugin_qbase_receivers(void* self, const char* signal) {
    return QIconEnginePlugin_QBaseReceivers((QIconEnginePlugin*)self, signal);
}

void q_iconengineplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QIconEnginePlugin_OnReceivers((QIconEnginePlugin*)self, (intptr_t)callback);
}

bool q_iconengineplugin_is_signal_connected(void* self, void* signal) {
    return QIconEnginePlugin_IsSignalConnected((QIconEnginePlugin*)self, (QMetaMethod*)signal);
}

bool q_iconengineplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QIconEnginePlugin_QBaseIsSignalConnected((QIconEnginePlugin*)self, (QMetaMethod*)signal);
}

void q_iconengineplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QIconEnginePlugin_OnIsSignalConnected((QIconEnginePlugin*)self, (intptr_t)callback);
}

void q_iconengineplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_iconengineplugin_delete(void* self) {
    QIconEnginePlugin_Delete((QIconEnginePlugin*)(self));
}
