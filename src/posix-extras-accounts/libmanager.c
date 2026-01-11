#include "libaccount.hpp"
#include "libapplication.hpp"
#include "liberror.hpp"
#include "libprovider_2.hpp"
#include "libservice.hpp"
#include "libservice_type.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libmanager.hpp"
#include "libmanager.h"

Accounts__Manager* q_accounts__manager_new() {
    return Accounts__Manager_new();
}

Accounts__Manager* q_accounts__manager_new2(const char* serviceType) {
    return Accounts__Manager_new2(qstring(serviceType));
}

Accounts__Manager* q_accounts__manager_new3(int32_t options) {
    return Accounts__Manager_new3(options);
}

Accounts__Manager* q_accounts__manager_new4(void* parent) {
    return Accounts__Manager_new4((QObject*)parent);
}

Accounts__Manager* q_accounts__manager_new5(const char* serviceType, void* parent) {
    return Accounts__Manager_new5(qstring(serviceType), (QObject*)parent);
}

Accounts__Manager* q_accounts__manager_new6(int32_t options, void* parent) {
    return Accounts__Manager_new6(options, (QObject*)parent);
}

const QMetaObject* q_accounts__manager_meta_object(void* self) {
    return Accounts__Manager_MetaObject((Accounts__Manager*)self);
}

void* q_accounts__manager_metacast(void* self, const char* param1) {
    return Accounts__Manager_Metacast((Accounts__Manager*)self, param1);
}

int32_t q_accounts__manager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Accounts__Manager_Metacall((Accounts__Manager*)self, param1, param2, param3);
}

void q_accounts__manager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Accounts__Manager_OnMetacall((Accounts__Manager*)self, (intptr_t)callback);
}

int32_t q_accounts__manager_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Accounts__Manager_QBaseMetacall((Accounts__Manager*)self, param1, param2, param3);
}

const char* q_accounts__manager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Accounts__Account* q_accounts__manager_account(void* self, uint32_t* id) {
    return Accounts__Manager_Account((Accounts__Manager*)self, id);
}

libqt_list /* of uint32_t */ q_accounts__manager_account_list(void* self) {
    libqt_list _arr = Accounts__Manager_AccountList((Accounts__Manager*)self);
    return _arr;
}

libqt_list /* of uint32_t */ q_accounts__manager_account_list_enabled(void* self) {
    libqt_list _arr = Accounts__Manager_AccountListEnabled((Accounts__Manager*)self);
    return _arr;
}

Accounts__Account* q_accounts__manager_create_account(void* self, const char* providerName) {
    return Accounts__Manager_CreateAccount((Accounts__Manager*)self, qstring(providerName));
}

Accounts__Service* q_accounts__manager_service(void* self, const char* serviceName) {
    return Accounts__Manager_Service((Accounts__Manager*)self, qstring(serviceName));
}

libqt_list /* of Accounts__Service* */ q_accounts__manager_service_list(void* self) {
    libqt_list _arr = Accounts__Manager_ServiceList((Accounts__Manager*)self);
    return _arr;
}

libqt_list /* of Accounts__Service* */ q_accounts__manager_service_list2(void* self, void* application) {
    libqt_list _arr = Accounts__Manager_ServiceList2((Accounts__Manager*)self, (Accounts__Application*)application);
    return _arr;
}

Accounts__Provider* q_accounts__manager_provider(void* self, const char* providerName) {
    return Accounts__Manager_Provider((Accounts__Manager*)self, qstring(providerName));
}

libqt_list /* of Accounts__Provider* */ q_accounts__manager_provider_list(void* self) {
    libqt_list _arr = Accounts__Manager_ProviderList((Accounts__Manager*)self);
    return _arr;
}

Accounts__ServiceType* q_accounts__manager_service_type(void* self, const char* name) {
    return Accounts__Manager_ServiceType((Accounts__Manager*)self, qstring(name));
}

Accounts__Application* q_accounts__manager_application(void* self, const char* applicationName) {
    return Accounts__Manager_Application((Accounts__Manager*)self, qstring(applicationName));
}

libqt_list /* of Accounts__Application* */ q_accounts__manager_application_list(void* self, void* service) {
    libqt_list _arr = Accounts__Manager_ApplicationList((Accounts__Manager*)self, (Accounts__Service*)service);
    return _arr;
}

const char* q_accounts__manager_service_type2(void* self) {
    libqt_string _str = Accounts__Manager_ServiceType2((Accounts__Manager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__manager_set_timeout(void* self, uint32_t timeout) {
    Accounts__Manager_SetTimeout((Accounts__Manager*)self, timeout);
}

uint32_t q_accounts__manager_timeout(void* self) {
    return Accounts__Manager_Timeout((Accounts__Manager*)self);
}

void q_accounts__manager_set_abort_on_timeout(void* self, bool abort) {
    Accounts__Manager_SetAbortOnTimeout((Accounts__Manager*)self, abort);
}

bool q_accounts__manager_abort_on_timeout(void* self) {
    return Accounts__Manager_AbortOnTimeout((Accounts__Manager*)self);
}

int32_t q_accounts__manager_options(void* self) {
    return Accounts__Manager_Options((Accounts__Manager*)self);
}

Accounts__Error* q_accounts__manager_last_error(void* self) {
    return Accounts__Manager_LastError((Accounts__Manager*)self);
}

void q_accounts__manager_account_created(void* self, uint32_t id) {
    Accounts__Manager_AccountCreated((Accounts__Manager*)self, id);
}

void q_accounts__manager_on_account_created(void* self, void (*callback)(void*, uint32_t)) {
    Accounts__Manager_Connect_AccountCreated((Accounts__Manager*)self, (intptr_t)callback);
}

void q_accounts__manager_account_removed(void* self, uint32_t id) {
    Accounts__Manager_AccountRemoved((Accounts__Manager*)self, id);
}

void q_accounts__manager_on_account_removed(void* self, void (*callback)(void*, uint32_t)) {
    Accounts__Manager_Connect_AccountRemoved((Accounts__Manager*)self, (intptr_t)callback);
}

void q_accounts__manager_account_updated(void* self, uint32_t id) {
    Accounts__Manager_AccountUpdated((Accounts__Manager*)self, id);
}

void q_accounts__manager_on_account_updated(void* self, void (*callback)(void*, uint32_t)) {
    Accounts__Manager_Connect_AccountUpdated((Accounts__Manager*)self, (intptr_t)callback);
}

void q_accounts__manager_enabled_event(void* self, uint32_t id) {
    Accounts__Manager_EnabledEvent((Accounts__Manager*)self, id);
}

void q_accounts__manager_on_enabled_event(void* self, void (*callback)(void*, uint32_t)) {
    Accounts__Manager_Connect_EnabledEvent((Accounts__Manager*)self, (intptr_t)callback);
}

const char* q_accounts__manager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__manager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of uint32_t */ q_accounts__manager_account_list1(void* self, const char* serviceType) {
    libqt_list _arr = Accounts__Manager_AccountList1((Accounts__Manager*)self, qstring(serviceType));
    return _arr;
}

libqt_list /* of uint32_t */ q_accounts__manager_account_list_enabled1(void* self, const char* serviceType) {
    libqt_list _arr = Accounts__Manager_AccountListEnabled1((Accounts__Manager*)self, qstring(serviceType));
    return _arr;
}

libqt_list /* of Accounts__Service* */ q_accounts__manager_service_list1(void* self, const char* serviceType) {
    libqt_list _arr = Accounts__Manager_ServiceList1((Accounts__Manager*)self, qstring(serviceType));
    return _arr;
}

const char* q_accounts__manager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__manager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_accounts__manager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_accounts__manager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_accounts__manager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_accounts__manager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_accounts__manager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_accounts__manager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_accounts__manager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_accounts__manager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_accounts__manager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_accounts__manager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_accounts__manager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_accounts__manager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_accounts__manager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_accounts__manager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_accounts__manager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_accounts__manager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_accounts__manager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_accounts__manager_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_accounts__manager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_accounts__manager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_accounts__manager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_accounts__manager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_accounts__manager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accounts__manager_dynamic_property_names");
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

QBindingStorage* q_accounts__manager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_accounts__manager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_accounts__manager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_accounts__manager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_accounts__manager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_accounts__manager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_accounts__manager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_accounts__manager_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_accounts__manager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_accounts__manager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_accounts__manager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_accounts__manager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_accounts__manager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_accounts__manager_event(void* self, void* event) {
    return Accounts__Manager_Event((Accounts__Manager*)self, (QEvent*)event);
}

bool q_accounts__manager_qbase_event(void* self, void* event) {
    return Accounts__Manager_QBaseEvent((Accounts__Manager*)self, (QEvent*)event);
}

void q_accounts__manager_on_event(void* self, bool (*callback)(void*, void*)) {
    Accounts__Manager_OnEvent((Accounts__Manager*)self, (intptr_t)callback);
}

bool q_accounts__manager_event_filter(void* self, void* watched, void* event) {
    return Accounts__Manager_EventFilter((Accounts__Manager*)self, (QObject*)watched, (QEvent*)event);
}

bool q_accounts__manager_qbase_event_filter(void* self, void* watched, void* event) {
    return Accounts__Manager_QBaseEventFilter((Accounts__Manager*)self, (QObject*)watched, (QEvent*)event);
}

void q_accounts__manager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Accounts__Manager_OnEventFilter((Accounts__Manager*)self, (intptr_t)callback);
}

void q_accounts__manager_timer_event(void* self, void* event) {
    Accounts__Manager_TimerEvent((Accounts__Manager*)self, (QTimerEvent*)event);
}

void q_accounts__manager_qbase_timer_event(void* self, void* event) {
    Accounts__Manager_QBaseTimerEvent((Accounts__Manager*)self, (QTimerEvent*)event);
}

void q_accounts__manager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Accounts__Manager_OnTimerEvent((Accounts__Manager*)self, (intptr_t)callback);
}

void q_accounts__manager_child_event(void* self, void* event) {
    Accounts__Manager_ChildEvent((Accounts__Manager*)self, (QChildEvent*)event);
}

void q_accounts__manager_qbase_child_event(void* self, void* event) {
    Accounts__Manager_QBaseChildEvent((Accounts__Manager*)self, (QChildEvent*)event);
}

void q_accounts__manager_on_child_event(void* self, void (*callback)(void*, void*)) {
    Accounts__Manager_OnChildEvent((Accounts__Manager*)self, (intptr_t)callback);
}

void q_accounts__manager_custom_event(void* self, void* event) {
    Accounts__Manager_CustomEvent((Accounts__Manager*)self, (QEvent*)event);
}

void q_accounts__manager_qbase_custom_event(void* self, void* event) {
    Accounts__Manager_QBaseCustomEvent((Accounts__Manager*)self, (QEvent*)event);
}

void q_accounts__manager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Accounts__Manager_OnCustomEvent((Accounts__Manager*)self, (intptr_t)callback);
}

void q_accounts__manager_connect_notify(void* self, void* signal) {
    Accounts__Manager_ConnectNotify((Accounts__Manager*)self, (QMetaMethod*)signal);
}

void q_accounts__manager_qbase_connect_notify(void* self, void* signal) {
    Accounts__Manager_QBaseConnectNotify((Accounts__Manager*)self, (QMetaMethod*)signal);
}

void q_accounts__manager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Accounts__Manager_OnConnectNotify((Accounts__Manager*)self, (intptr_t)callback);
}

void q_accounts__manager_disconnect_notify(void* self, void* signal) {
    Accounts__Manager_DisconnectNotify((Accounts__Manager*)self, (QMetaMethod*)signal);
}

void q_accounts__manager_qbase_disconnect_notify(void* self, void* signal) {
    Accounts__Manager_QBaseDisconnectNotify((Accounts__Manager*)self, (QMetaMethod*)signal);
}

void q_accounts__manager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Accounts__Manager_OnDisconnectNotify((Accounts__Manager*)self, (intptr_t)callback);
}

QObject* q_accounts__manager_sender(void* self) {
    return Accounts__Manager_Sender((Accounts__Manager*)self);
}

QObject* q_accounts__manager_qbase_sender(void* self) {
    return Accounts__Manager_QBaseSender((Accounts__Manager*)self);
}

void q_accounts__manager_on_sender(void* self, QObject* (*callback)()) {
    Accounts__Manager_OnSender((Accounts__Manager*)self, (intptr_t)callback);
}

int32_t q_accounts__manager_sender_signal_index(void* self) {
    return Accounts__Manager_SenderSignalIndex((Accounts__Manager*)self);
}

int32_t q_accounts__manager_qbase_sender_signal_index(void* self) {
    return Accounts__Manager_QBaseSenderSignalIndex((Accounts__Manager*)self);
}

void q_accounts__manager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Accounts__Manager_OnSenderSignalIndex((Accounts__Manager*)self, (intptr_t)callback);
}

int32_t q_accounts__manager_receivers(void* self, const char* signal) {
    return Accounts__Manager_Receivers((Accounts__Manager*)self, signal);
}

int32_t q_accounts__manager_qbase_receivers(void* self, const char* signal) {
    return Accounts__Manager_QBaseReceivers((Accounts__Manager*)self, signal);
}

void q_accounts__manager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Accounts__Manager_OnReceivers((Accounts__Manager*)self, (intptr_t)callback);
}

bool q_accounts__manager_is_signal_connected(void* self, void* signal) {
    return Accounts__Manager_IsSignalConnected((Accounts__Manager*)self, (QMetaMethod*)signal);
}

bool q_accounts__manager_qbase_is_signal_connected(void* self, void* signal) {
    return Accounts__Manager_QBaseIsSignalConnected((Accounts__Manager*)self, (QMetaMethod*)signal);
}

void q_accounts__manager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Accounts__Manager_OnIsSignalConnected((Accounts__Manager*)self, (intptr_t)callback);
}

void q_accounts__manager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_accounts__manager_delete(void* self) {
    Accounts__Manager_Delete((Accounts__Manager*)(self));
}
