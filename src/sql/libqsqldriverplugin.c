#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqsqldriver.hpp"
#include "libqsqldriverplugin.hpp"
#include "libqsqldriverplugin.h"

QSqlDriverPlugin* q_sqldriverplugin_new() {
    return QSqlDriverPlugin_new();
}

QSqlDriverPlugin* q_sqldriverplugin_new2(void* parent) {
    return QSqlDriverPlugin_new2((QObject*)parent);
}

const QMetaObject* q_sqldriverplugin_meta_object(void* self) {
    return QSqlDriverPlugin_MetaObject((QSqlDriverPlugin*)self);
}

void q_sqldriverplugin_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QSqlDriverPlugin_OnMetaObject((QSqlDriverPlugin*)self, (intptr_t)callback);
}

const QMetaObject* q_sqldriverplugin_qbase_meta_object(void* self) {
    return QSqlDriverPlugin_QBaseMetaObject((QSqlDriverPlugin*)self);
}

void* q_sqldriverplugin_metacast(void* self, const char* param1) {
    return QSqlDriverPlugin_Metacast((QSqlDriverPlugin*)self, param1);
}

void q_sqldriverplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSqlDriverPlugin_OnMetacast((QSqlDriverPlugin*)self, (intptr_t)callback);
}

void* q_sqldriverplugin_qbase_metacast(void* self, const char* param1) {
    return QSqlDriverPlugin_QBaseMetacast((QSqlDriverPlugin*)self, param1);
}

int32_t q_sqldriverplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlDriverPlugin_Metacall((QSqlDriverPlugin*)self, param1, param2, param3);
}

void q_sqldriverplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSqlDriverPlugin_OnMetacall((QSqlDriverPlugin*)self, (intptr_t)callback);
}

int32_t q_sqldriverplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlDriverPlugin_QBaseMetacall((QSqlDriverPlugin*)self, param1, param2, param3);
}

const char* q_sqldriverplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSqlDriver* q_sqldriverplugin_create(void* self, const char* key) {
    return QSqlDriverPlugin_Create((QSqlDriverPlugin*)self, qstring(key));
}

void q_sqldriverplugin_on_create(void* self, QSqlDriver* (*callback)(void*, const char*)) {
    QSqlDriverPlugin_OnCreate((QSqlDriverPlugin*)self, (intptr_t)callback);
}

QSqlDriver* q_sqldriverplugin_qbase_create(void* self, const char* key) {
    return QSqlDriverPlugin_QBaseCreate((QSqlDriverPlugin*)self, qstring(key));
}

const char* q_sqldriverplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldriverplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldriverplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqldriverplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sqldriverplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sqldriverplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sqldriverplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sqldriverplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sqldriverplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sqldriverplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sqldriverplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sqldriverplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_sqldriverplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_sqldriverplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sqldriverplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sqldriverplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sqldriverplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sqldriverplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sqldriverplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sqldriverplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sqldriverplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sqldriverplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sqldriverplugin_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sqldriverplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sqldriverplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sqldriverplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sqldriverplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sqldriverplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldriverplugin_dynamic_property_names\n");
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

QBindingStorage* q_sqldriverplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sqldriverplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sqldriverplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sqldriverplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sqldriverplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sqldriverplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sqldriverplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sqldriverplugin_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sqldriverplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sqldriverplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sqldriverplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sqldriverplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_sqldriverplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sqldriverplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sqldriverplugin_event(void* self, void* event) {
    return QSqlDriverPlugin_Event((QSqlDriverPlugin*)self, (QEvent*)event);
}

bool q_sqldriverplugin_qbase_event(void* self, void* event) {
    return QSqlDriverPlugin_QBaseEvent((QSqlDriverPlugin*)self, (QEvent*)event);
}

void q_sqldriverplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    QSqlDriverPlugin_OnEvent((QSqlDriverPlugin*)self, (intptr_t)callback);
}

bool q_sqldriverplugin_event_filter(void* self, void* watched, void* event) {
    return QSqlDriverPlugin_EventFilter((QSqlDriverPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sqldriverplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QSqlDriverPlugin_QBaseEventFilter((QSqlDriverPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_sqldriverplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSqlDriverPlugin_OnEventFilter((QSqlDriverPlugin*)self, (intptr_t)callback);
}

void q_sqldriverplugin_timer_event(void* self, void* event) {
    QSqlDriverPlugin_TimerEvent((QSqlDriverPlugin*)self, (QTimerEvent*)event);
}

void q_sqldriverplugin_qbase_timer_event(void* self, void* event) {
    QSqlDriverPlugin_QBaseTimerEvent((QSqlDriverPlugin*)self, (QTimerEvent*)event);
}

void q_sqldriverplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSqlDriverPlugin_OnTimerEvent((QSqlDriverPlugin*)self, (intptr_t)callback);
}

void q_sqldriverplugin_child_event(void* self, void* event) {
    QSqlDriverPlugin_ChildEvent((QSqlDriverPlugin*)self, (QChildEvent*)event);
}

void q_sqldriverplugin_qbase_child_event(void* self, void* event) {
    QSqlDriverPlugin_QBaseChildEvent((QSqlDriverPlugin*)self, (QChildEvent*)event);
}

void q_sqldriverplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSqlDriverPlugin_OnChildEvent((QSqlDriverPlugin*)self, (intptr_t)callback);
}

void q_sqldriverplugin_custom_event(void* self, void* event) {
    QSqlDriverPlugin_CustomEvent((QSqlDriverPlugin*)self, (QEvent*)event);
}

void q_sqldriverplugin_qbase_custom_event(void* self, void* event) {
    QSqlDriverPlugin_QBaseCustomEvent((QSqlDriverPlugin*)self, (QEvent*)event);
}

void q_sqldriverplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSqlDriverPlugin_OnCustomEvent((QSqlDriverPlugin*)self, (intptr_t)callback);
}

void q_sqldriverplugin_connect_notify(void* self, void* signal) {
    QSqlDriverPlugin_ConnectNotify((QSqlDriverPlugin*)self, (QMetaMethod*)signal);
}

void q_sqldriverplugin_qbase_connect_notify(void* self, void* signal) {
    QSqlDriverPlugin_QBaseConnectNotify((QSqlDriverPlugin*)self, (QMetaMethod*)signal);
}

void q_sqldriverplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSqlDriverPlugin_OnConnectNotify((QSqlDriverPlugin*)self, (intptr_t)callback);
}

void q_sqldriverplugin_disconnect_notify(void* self, void* signal) {
    QSqlDriverPlugin_DisconnectNotify((QSqlDriverPlugin*)self, (QMetaMethod*)signal);
}

void q_sqldriverplugin_qbase_disconnect_notify(void* self, void* signal) {
    QSqlDriverPlugin_QBaseDisconnectNotify((QSqlDriverPlugin*)self, (QMetaMethod*)signal);
}

void q_sqldriverplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSqlDriverPlugin_OnDisconnectNotify((QSqlDriverPlugin*)self, (intptr_t)callback);
}

QObject* q_sqldriverplugin_sender(void* self) {
    return QSqlDriverPlugin_Sender((QSqlDriverPlugin*)self);
}

QObject* q_sqldriverplugin_qbase_sender(void* self) {
    return QSqlDriverPlugin_QBaseSender((QSqlDriverPlugin*)self);
}

void q_sqldriverplugin_on_sender(void* self, QObject* (*callback)()) {
    QSqlDriverPlugin_OnSender((QSqlDriverPlugin*)self, (intptr_t)callback);
}

int32_t q_sqldriverplugin_sender_signal_index(void* self) {
    return QSqlDriverPlugin_SenderSignalIndex((QSqlDriverPlugin*)self);
}

int32_t q_sqldriverplugin_qbase_sender_signal_index(void* self) {
    return QSqlDriverPlugin_QBaseSenderSignalIndex((QSqlDriverPlugin*)self);
}

void q_sqldriverplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSqlDriverPlugin_OnSenderSignalIndex((QSqlDriverPlugin*)self, (intptr_t)callback);
}

int32_t q_sqldriverplugin_receivers(void* self, const char* signal) {
    return QSqlDriverPlugin_Receivers((QSqlDriverPlugin*)self, signal);
}

int32_t q_sqldriverplugin_qbase_receivers(void* self, const char* signal) {
    return QSqlDriverPlugin_QBaseReceivers((QSqlDriverPlugin*)self, signal);
}

void q_sqldriverplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSqlDriverPlugin_OnReceivers((QSqlDriverPlugin*)self, (intptr_t)callback);
}

bool q_sqldriverplugin_is_signal_connected(void* self, void* signal) {
    return QSqlDriverPlugin_IsSignalConnected((QSqlDriverPlugin*)self, (QMetaMethod*)signal);
}

bool q_sqldriverplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QSqlDriverPlugin_QBaseIsSignalConnected((QSqlDriverPlugin*)self, (QMetaMethod*)signal);
}

void q_sqldriverplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSqlDriverPlugin_OnIsSignalConnected((QSqlDriverPlugin*)self, (intptr_t)callback);
}

void q_sqldriverplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sqldriverplugin_delete(void* self) {
    QSqlDriverPlugin_Delete((QSqlDriverPlugin*)(self));
}
