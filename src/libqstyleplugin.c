#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqstyle.hpp"
#include "libqstyleplugin.hpp"
#include "libqstyleplugin.h"

QStylePlugin* q_styleplugin_new() {
    return QStylePlugin_new();
}

QStylePlugin* q_styleplugin_new2(void* parent) {
    return QStylePlugin_new2((QObject*)parent);
}

const QMetaObject* q_styleplugin_meta_object(void* self) {
    return QStylePlugin_MetaObject((QStylePlugin*)self);
}

void q_styleplugin_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QStylePlugin_OnMetaObject((QStylePlugin*)self, (intptr_t)callback);
}

const QMetaObject* q_styleplugin_super_meta_object(void* self) {
    return QStylePlugin_SuperMetaObject((QStylePlugin*)self);
}

void* q_styleplugin_metacast(void* self, const char* param1) {
    return QStylePlugin_Metacast((QStylePlugin*)self, param1);
}

void q_styleplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QStylePlugin_OnMetacast((QStylePlugin*)self, (intptr_t)callback);
}

void* q_styleplugin_super_metacast(void* self, const char* param1) {
    return QStylePlugin_SuperMetacast((QStylePlugin*)self, param1);
}

int32_t q_styleplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStylePlugin_Metacall((QStylePlugin*)self, param1, param2, param3);
}

void q_styleplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QStylePlugin_OnMetacall((QStylePlugin*)self, (intptr_t)callback);
}

int32_t q_styleplugin_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStylePlugin_SuperMetacall((QStylePlugin*)self, param1, param2, param3);
}

const char* q_styleplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QStyle* q_styleplugin_create(void* self, const char* key) {
    return QStylePlugin_Create((QStylePlugin*)self, qstring(key));
}

void q_styleplugin_on_create(void* self, QStyle* (*callback)(void*, const char*)) {
    QStylePlugin_OnCreate((QStylePlugin*)self, (intptr_t)callback);
}

QStyle* q_styleplugin_super_create(void* self, const char* key) {
    return QStylePlugin_SuperCreate((QStylePlugin*)self, qstring(key));
}

const char* q_styleplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_styleplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_styleplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_styleplugin_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_styleplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_styleplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_styleplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_styleplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_styleplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_styleplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_styleplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_styleplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_styleplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_styleplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_styleplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_styleplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_styleplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_styleplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_styleplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_styleplugin_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_styleplugin_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_styleplugin_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_styleplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_styleplugin_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_styleplugin_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_styleplugin_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_styleplugin_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_styleplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_styleplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_styleplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_styleplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_styleplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_styleplugin_dynamic_property_names\n");
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

QBindingStorage* q_styleplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_styleplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_styleplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_styleplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_styleplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_styleplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_styleplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_styleplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_styleplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_styleplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_styleplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_styleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_styleplugin_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_styleplugin_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_styleplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_styleplugin_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_styleplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_styleplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_styleplugin_event(void* self, void* event) {
    return QStylePlugin_Event((QStylePlugin*)self, (QEvent*)event);
}

bool q_styleplugin_super_event(void* self, void* event) {
    return QStylePlugin_SuperEvent((QStylePlugin*)self, (QEvent*)event);
}

void q_styleplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    QStylePlugin_OnEvent((QStylePlugin*)self, (intptr_t)callback);
}

bool q_styleplugin_event_filter(void* self, void* watched, void* event) {
    return QStylePlugin_EventFilter((QStylePlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_styleplugin_super_event_filter(void* self, void* watched, void* event) {
    return QStylePlugin_SuperEventFilter((QStylePlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_styleplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QStylePlugin_OnEventFilter((QStylePlugin*)self, (intptr_t)callback);
}

void q_styleplugin_timer_event(void* self, void* event) {
    QStylePlugin_TimerEvent((QStylePlugin*)self, (QTimerEvent*)event);
}

void q_styleplugin_super_timer_event(void* self, void* event) {
    QStylePlugin_SuperTimerEvent((QStylePlugin*)self, (QTimerEvent*)event);
}

void q_styleplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QStylePlugin_OnTimerEvent((QStylePlugin*)self, (intptr_t)callback);
}

void q_styleplugin_child_event(void* self, void* event) {
    QStylePlugin_ChildEvent((QStylePlugin*)self, (QChildEvent*)event);
}

void q_styleplugin_super_child_event(void* self, void* event) {
    QStylePlugin_SuperChildEvent((QStylePlugin*)self, (QChildEvent*)event);
}

void q_styleplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    QStylePlugin_OnChildEvent((QStylePlugin*)self, (intptr_t)callback);
}

void q_styleplugin_custom_event(void* self, void* event) {
    QStylePlugin_CustomEvent((QStylePlugin*)self, (QEvent*)event);
}

void q_styleplugin_super_custom_event(void* self, void* event) {
    QStylePlugin_SuperCustomEvent((QStylePlugin*)self, (QEvent*)event);
}

void q_styleplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QStylePlugin_OnCustomEvent((QStylePlugin*)self, (intptr_t)callback);
}

void q_styleplugin_connect_notify(void* self, void* signal) {
    QStylePlugin_ConnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_super_connect_notify(void* self, void* signal) {
    QStylePlugin_SuperConnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QStylePlugin_OnConnectNotify((QStylePlugin*)self, (intptr_t)callback);
}

void q_styleplugin_disconnect_notify(void* self, void* signal) {
    QStylePlugin_DisconnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_super_disconnect_notify(void* self, void* signal) {
    QStylePlugin_SuperDisconnectNotify((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QStylePlugin_OnDisconnectNotify((QStylePlugin*)self, (intptr_t)callback);
}

QObject* q_styleplugin_sender(void* self) {
    return QStylePlugin_Sender((QStylePlugin*)self);
}

QObject* q_styleplugin_super_sender(void* self) {
    return QStylePlugin_SuperSender((QStylePlugin*)self);
}

void q_styleplugin_on_sender(void* self, QObject* (*callback)()) {
    QStylePlugin_OnSender((QStylePlugin*)self, (intptr_t)callback);
}

int32_t q_styleplugin_sender_signal_index(void* self) {
    return QStylePlugin_SenderSignalIndex((QStylePlugin*)self);
}

int32_t q_styleplugin_super_sender_signal_index(void* self) {
    return QStylePlugin_SuperSenderSignalIndex((QStylePlugin*)self);
}

void q_styleplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QStylePlugin_OnSenderSignalIndex((QStylePlugin*)self, (intptr_t)callback);
}

int32_t q_styleplugin_receivers(void* self, const char* signal) {
    return QStylePlugin_Receivers((QStylePlugin*)self, signal);
}

int32_t q_styleplugin_super_receivers(void* self, const char* signal) {
    return QStylePlugin_SuperReceivers((QStylePlugin*)self, signal);
}

void q_styleplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QStylePlugin_OnReceivers((QStylePlugin*)self, (intptr_t)callback);
}

bool q_styleplugin_is_signal_connected(void* self, void* signal) {
    return QStylePlugin_IsSignalConnected((QStylePlugin*)self, (QMetaMethod*)signal);
}

bool q_styleplugin_super_is_signal_connected(void* self, void* signal) {
    return QStylePlugin_SuperIsSignalConnected((QStylePlugin*)self, (QMetaMethod*)signal);
}

void q_styleplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QStylePlugin_OnIsSignalConnected((QStylePlugin*)self, (intptr_t)callback);
}

void q_styleplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_styleplugin_delete(void* self) {
    QStylePlugin_Delete((QStylePlugin*)(self));
}
