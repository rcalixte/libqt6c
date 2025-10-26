#include "liberror.hpp"
#include "libmanager.hpp"
#include "libprovider_2.hpp"
#include "libservice.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libaccount.hpp"
#include "libaccount.h"

Accounts__Watch* q_accounts__watch_new() {
    return Accounts__Watch_new();
}

Accounts__Watch* q_accounts__watch_new2(void* parent) {
    return Accounts__Watch_new2((QObject*)parent);
}

const QMetaObject* q_accounts__watch_meta_object(void* self) {
    return Accounts__Watch_MetaObject((Accounts__Watch*)self);
}

void* q_accounts__watch_metacast(void* self, const char* param1) {
    return Accounts__Watch_Metacast((Accounts__Watch*)self, param1);
}

int32_t q_accounts__watch_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Accounts__Watch_Metacall((Accounts__Watch*)self, param1, param2, param3);
}

void q_accounts__watch_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Accounts__Watch_OnMetacall((Accounts__Watch*)self, (intptr_t)callback);
}

int32_t q_accounts__watch_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Accounts__Watch_QBaseMetacall((Accounts__Watch*)self, param1, param2, param3);
}

const char* q_accounts__watch_tr(const char* s) {
    libqt_string _str = Accounts__Watch_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__watch_notify(void* self, const char* key) {
    Accounts__Watch_Notify((Accounts__Watch*)self, key);
}

void q_accounts__watch_on_notify(void* self, void (*callback)(void*, const char*)) {
    Accounts__Watch_Connect_Notify((Accounts__Watch*)self, (intptr_t)callback);
}

const char* q_accounts__watch_tr2(const char* s, const char* c) {
    libqt_string _str = Accounts__Watch_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__watch_tr3(const char* s, const char* c, int n) {
    libqt_string _str = Accounts__Watch_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__watch_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__watch_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_accounts__watch_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_accounts__watch_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_accounts__watch_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_accounts__watch_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_accounts__watch_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_accounts__watch_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_accounts__watch_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_accounts__watch_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_accounts__watch_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_accounts__watch_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_accounts__watch_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_accounts__watch_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_accounts__watch_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_accounts__watch_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_accounts__watch_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_accounts__watch_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_accounts__watch_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_accounts__watch_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_accounts__watch_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_accounts__watch_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_accounts__watch_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_accounts__watch_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_accounts__watch_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_accounts__watch_dynamic_property_names");
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

QBindingStorage* q_accounts__watch_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_accounts__watch_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_accounts__watch_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_accounts__watch_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_accounts__watch_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_accounts__watch_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_accounts__watch_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_accounts__watch_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_accounts__watch_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_accounts__watch_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_accounts__watch_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_accounts__watch_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_accounts__watch_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_accounts__watch_event(void* self, void* event) {
    return Accounts__Watch_Event((Accounts__Watch*)self, (QEvent*)event);
}

bool q_accounts__watch_qbase_event(void* self, void* event) {
    return Accounts__Watch_QBaseEvent((Accounts__Watch*)self, (QEvent*)event);
}

void q_accounts__watch_on_event(void* self, bool (*callback)(void*, void*)) {
    Accounts__Watch_OnEvent((Accounts__Watch*)self, (intptr_t)callback);
}

bool q_accounts__watch_event_filter(void* self, void* watched, void* event) {
    return Accounts__Watch_EventFilter((Accounts__Watch*)self, (QObject*)watched, (QEvent*)event);
}

bool q_accounts__watch_qbase_event_filter(void* self, void* watched, void* event) {
    return Accounts__Watch_QBaseEventFilter((Accounts__Watch*)self, (QObject*)watched, (QEvent*)event);
}

void q_accounts__watch_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Accounts__Watch_OnEventFilter((Accounts__Watch*)self, (intptr_t)callback);
}

void q_accounts__watch_timer_event(void* self, void* event) {
    Accounts__Watch_TimerEvent((Accounts__Watch*)self, (QTimerEvent*)event);
}

void q_accounts__watch_qbase_timer_event(void* self, void* event) {
    Accounts__Watch_QBaseTimerEvent((Accounts__Watch*)self, (QTimerEvent*)event);
}

void q_accounts__watch_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Accounts__Watch_OnTimerEvent((Accounts__Watch*)self, (intptr_t)callback);
}

void q_accounts__watch_child_event(void* self, void* event) {
    Accounts__Watch_ChildEvent((Accounts__Watch*)self, (QChildEvent*)event);
}

void q_accounts__watch_qbase_child_event(void* self, void* event) {
    Accounts__Watch_QBaseChildEvent((Accounts__Watch*)self, (QChildEvent*)event);
}

void q_accounts__watch_on_child_event(void* self, void (*callback)(void*, void*)) {
    Accounts__Watch_OnChildEvent((Accounts__Watch*)self, (intptr_t)callback);
}

void q_accounts__watch_custom_event(void* self, void* event) {
    Accounts__Watch_CustomEvent((Accounts__Watch*)self, (QEvent*)event);
}

void q_accounts__watch_qbase_custom_event(void* self, void* event) {
    Accounts__Watch_QBaseCustomEvent((Accounts__Watch*)self, (QEvent*)event);
}

void q_accounts__watch_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Accounts__Watch_OnCustomEvent((Accounts__Watch*)self, (intptr_t)callback);
}

void q_accounts__watch_connect_notify(void* self, void* signal) {
    Accounts__Watch_ConnectNotify((Accounts__Watch*)self, (QMetaMethod*)signal);
}

void q_accounts__watch_qbase_connect_notify(void* self, void* signal) {
    Accounts__Watch_QBaseConnectNotify((Accounts__Watch*)self, (QMetaMethod*)signal);
}

void q_accounts__watch_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Accounts__Watch_OnConnectNotify((Accounts__Watch*)self, (intptr_t)callback);
}

void q_accounts__watch_disconnect_notify(void* self, void* signal) {
    Accounts__Watch_DisconnectNotify((Accounts__Watch*)self, (QMetaMethod*)signal);
}

void q_accounts__watch_qbase_disconnect_notify(void* self, void* signal) {
    Accounts__Watch_QBaseDisconnectNotify((Accounts__Watch*)self, (QMetaMethod*)signal);
}

void q_accounts__watch_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Accounts__Watch_OnDisconnectNotify((Accounts__Watch*)self, (intptr_t)callback);
}

QObject* q_accounts__watch_sender(void* self) {
    return Accounts__Watch_Sender((Accounts__Watch*)self);
}

QObject* q_accounts__watch_qbase_sender(void* self) {
    return Accounts__Watch_QBaseSender((Accounts__Watch*)self);
}

void q_accounts__watch_on_sender(void* self, QObject* (*callback)()) {
    Accounts__Watch_OnSender((Accounts__Watch*)self, (intptr_t)callback);
}

int32_t q_accounts__watch_sender_signal_index(void* self) {
    return Accounts__Watch_SenderSignalIndex((Accounts__Watch*)self);
}

int32_t q_accounts__watch_qbase_sender_signal_index(void* self) {
    return Accounts__Watch_QBaseSenderSignalIndex((Accounts__Watch*)self);
}

void q_accounts__watch_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Accounts__Watch_OnSenderSignalIndex((Accounts__Watch*)self, (intptr_t)callback);
}

int32_t q_accounts__watch_receivers(void* self, const char* signal) {
    return Accounts__Watch_Receivers((Accounts__Watch*)self, signal);
}

int32_t q_accounts__watch_qbase_receivers(void* self, const char* signal) {
    return Accounts__Watch_QBaseReceivers((Accounts__Watch*)self, signal);
}

void q_accounts__watch_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Accounts__Watch_OnReceivers((Accounts__Watch*)self, (intptr_t)callback);
}

bool q_accounts__watch_is_signal_connected(void* self, void* signal) {
    return Accounts__Watch_IsSignalConnected((Accounts__Watch*)self, (QMetaMethod*)signal);
}

bool q_accounts__watch_qbase_is_signal_connected(void* self, void* signal) {
    return Accounts__Watch_QBaseIsSignalConnected((Accounts__Watch*)self, (QMetaMethod*)signal);
}

void q_accounts__watch_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Accounts__Watch_OnIsSignalConnected((Accounts__Watch*)self, (intptr_t)callback);
}

void q_accounts__watch_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_accounts__watch_delete(void* self) {
    Accounts__Watch_Delete((Accounts__Watch*)(self));
}

Accounts__Account* q_accounts__account_new(void* manager, const char* provider) {
    return Accounts__Account_new((Accounts__Manager*)manager, qstring(provider));
}

Accounts__Account* q_accounts__account_new2(void* manager, const char* provider, void* parent) {
    return Accounts__Account_new2((Accounts__Manager*)manager, qstring(provider), (QObject*)parent);
}

const QMetaObject* q_accounts__account_meta_object(void* self) {
    return Accounts__Account_MetaObject((Accounts__Account*)self);
}

void* q_accounts__account_metacast(void* self, const char* param1) {
    return Accounts__Account_Metacast((Accounts__Account*)self, param1);
}

int32_t q_accounts__account_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Accounts__Account_Metacall((Accounts__Account*)self, param1, param2, param3);
}

void q_accounts__account_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Accounts__Account_OnMetacall((Accounts__Account*)self, (intptr_t)callback);
}

int32_t q_accounts__account_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Accounts__Account_QBaseMetacall((Accounts__Account*)self, param1, param2, param3);
}

const char* q_accounts__account_tr(const char* s) {
    libqt_string _str = Accounts__Account_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Accounts__Account* q_accounts__account_from_id(void* manager, uint32_t id) {
    return Accounts__Account_FromId((Accounts__Manager*)manager, id);
}

uint32_t q_accounts__account_id(void* self) {
    return Accounts__Account_Id((Accounts__Account*)self);
}

Accounts__Manager* q_accounts__account_manager(void* self) {
    return Accounts__Account_Manager((Accounts__Account*)self);
}

bool q_accounts__account_supports_service(void* self, const char* serviceType) {
    return Accounts__Account_SupportsService((Accounts__Account*)self, qstring(serviceType));
}

libqt_list /* of Accounts__Service* */ q_accounts__account_services(void* self) {
    libqt_list _arr = Accounts__Account_Services((Accounts__Account*)self);
    return _arr;
}

libqt_list /* of Accounts__Service* */ q_accounts__account_enabled_services(void* self) {
    libqt_list _arr = Accounts__Account_EnabledServices((Accounts__Account*)self);
    return _arr;
}

bool q_accounts__account_enabled(void* self) {
    return Accounts__Account_Enabled((Accounts__Account*)self);
}

bool q_accounts__account_is_enabled(void* self) {
    return Accounts__Account_IsEnabled((Accounts__Account*)self);
}

void q_accounts__account_set_enabled(void* self, bool enabled) {
    Accounts__Account_SetEnabled((Accounts__Account*)self, enabled);
}

uint32_t q_accounts__account_credentials_id(void* self) {
    return Accounts__Account_CredentialsId((Accounts__Account*)self);
}

void q_accounts__account_set_credentials_id(void* self, uint32_t id) {
    Accounts__Account_SetCredentialsId((Accounts__Account*)self, id);
}

const char* q_accounts__account_display_name(void* self) {
    libqt_string _str = Accounts__Account_DisplayName((Accounts__Account*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__account_set_display_name(void* self, const char* displayName) {
    Accounts__Account_SetDisplayName((Accounts__Account*)self, qstring(displayName));
}

const char* q_accounts__account_provider_name(void* self) {
    libqt_string _str = Accounts__Account_ProviderName((Accounts__Account*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Accounts__Provider* q_accounts__account_provider(void* self) {
    return Accounts__Account_Provider((Accounts__Account*)self);
}

void q_accounts__account_select_service(void* self) {
    Accounts__Account_SelectService((Accounts__Account*)self);
}

Accounts__Service* q_accounts__account_selected_service(void* self) {
    return Accounts__Account_SelectedService((Accounts__Account*)self);
}

const char** q_accounts__account_all_keys(void* self) {
    libqt_list _arr = Accounts__Account_AllKeys((Accounts__Account*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_accounts__account_all_keys");
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

void q_accounts__account_begin_group(void* self, const char* prefix) {
    Accounts__Account_BeginGroup((Accounts__Account*)self, qstring(prefix));
}

const char** q_accounts__account_child_groups(void* self) {
    libqt_list _arr = Accounts__Account_ChildGroups((Accounts__Account*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_accounts__account_child_groups");
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

const char** q_accounts__account_child_keys(void* self) {
    libqt_list _arr = Accounts__Account_ChildKeys((Accounts__Account*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_accounts__account_child_keys");
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

void q_accounts__account_clear(void* self) {
    Accounts__Account_Clear((Accounts__Account*)self);
}

bool q_accounts__account_contains(void* self, const char* key) {
    return Accounts__Account_Contains((Accounts__Account*)self, qstring(key));
}

void q_accounts__account_end_group(void* self) {
    Accounts__Account_EndGroup((Accounts__Account*)self);
}

const char* q_accounts__account_group(void* self) {
    libqt_string _str = Accounts__Account_Group((Accounts__Account*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_accounts__account_is_writable(void* self) {
    return Accounts__Account_IsWritable((Accounts__Account*)self);
}

void q_accounts__account_remove(void* self, const char* key) {
    Accounts__Account_Remove((Accounts__Account*)self, qstring(key));
}

void q_accounts__account_set_value(void* self, const char* key, void* value) {
    Accounts__Account_SetValue((Accounts__Account*)self, qstring(key), (QVariant*)value);
}

QVariant* q_accounts__account_value(void* self, const char* key) {
    return Accounts__Account_Value((Accounts__Account*)self, qstring(key));
}

int32_t q_accounts__account_value2(void* self, const char* key, void* value) {
    return Accounts__Account_Value2((Accounts__Account*)self, qstring(key), (QVariant*)value);
}

const char* q_accounts__account_value_as_string(void* self, const char* key) {
    libqt_string _str = Accounts__Account_ValueAsString((Accounts__Account*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accounts__account_value_as_int(void* self, const char* key) {
    return Accounts__Account_ValueAsInt((Accounts__Account*)self, qstring(key));
}

uint64_t q_accounts__account_value_as_u_int64(void* self, const char* key) {
    return Accounts__Account_ValueAsUInt64((Accounts__Account*)self, qstring(key));
}

bool q_accounts__account_value_as_bool(void* self, const char* key) {
    return Accounts__Account_ValueAsBool((Accounts__Account*)self, qstring(key));
}

Accounts__Watch* q_accounts__account_watch_key(void* self) {
    return Accounts__Account_WatchKey((Accounts__Account*)self);
}

void q_accounts__account_sync(void* self) {
    Accounts__Account_Sync((Accounts__Account*)self);
}

bool q_accounts__account_sync_and_block(void* self) {
    return Accounts__Account_SyncAndBlock((Accounts__Account*)self);
}

void q_accounts__account_remove2(void* self) {
    Accounts__Account_Remove2((Accounts__Account*)self);
}

void q_accounts__account_sign(void* self, const char* key, const char* token) {
    Accounts__Account_Sign((Accounts__Account*)self, qstring(key), token);
}

bool q_accounts__account_verify(void* self, const char* key, const char** token) {
    return Accounts__Account_Verify((Accounts__Account*)self, qstring(key), token);
}

bool q_accounts__account_verify_with_tokens(void* self, const char* key, libqt_list /* of const char* */ tokens) {
    return Accounts__Account_VerifyWithTokens((Accounts__Account*)self, qstring(key), tokens);
}

void q_accounts__account_display_name_changed(void* self, const char* displayName) {
    Accounts__Account_DisplayNameChanged((Accounts__Account*)self, qstring(displayName));
}

void q_accounts__account_on_display_name_changed(void* self, void (*callback)(void*, const char*)) {
    Accounts__Account_Connect_DisplayNameChanged((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_enabled_changed(void* self, const char* serviceName, bool enabled) {
    Accounts__Account_EnabledChanged((Accounts__Account*)self, qstring(serviceName), enabled);
}

void q_accounts__account_on_enabled_changed(void* self, void (*callback)(void*, const char*, bool)) {
    Accounts__Account_Connect_EnabledChanged((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_error(void* self, void* error) {
    Accounts__Account_Error((Accounts__Account*)self, (Accounts__Error*)error);
}

void q_accounts__account_on_error(void* self, void (*callback)(void*, void*)) {
    Accounts__Account_Connect_Error((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_synced(void* self) {
    Accounts__Account_Synced((Accounts__Account*)self);
}

void q_accounts__account_on_synced(void* self, void (*callback)(void*)) {
    Accounts__Account_Connect_Synced((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_removed(void* self) {
    Accounts__Account_Removed((Accounts__Account*)self);
}

void q_accounts__account_on_removed(void* self, void (*callback)(void*)) {
    Accounts__Account_Connect_Removed((Accounts__Account*)self, (intptr_t)callback);
}

const char* q_accounts__account_tr2(const char* s, const char* c) {
    libqt_string _str = Accounts__Account_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__account_tr3(const char* s, const char* c, int n) {
    libqt_string _str = Accounts__Account_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Accounts__Account* q_accounts__account_from_id3(void* manager, uint32_t id, void* parent) {
    return Accounts__Account_FromId3((Accounts__Manager*)manager, id, (QObject*)parent);
}

libqt_list /* of Accounts__Service* */ q_accounts__account_services1(void* self, const char* serviceType) {
    libqt_list _arr = Accounts__Account_Services1((Accounts__Account*)self, qstring(serviceType));
    return _arr;
}

void q_accounts__account_select_service1(void* self, void* service) {
    Accounts__Account_SelectService1((Accounts__Account*)self, (Accounts__Service*)service);
}

QVariant* q_accounts__account_value22(void* self, const char* key, void* defaultValue) {
    return Accounts__Account_Value22((Accounts__Account*)self, qstring(key), (QVariant*)defaultValue);
}

QVariant* q_accounts__account_value3(void* self, const char* key, void* defaultValue, int32_t* source) {
    return Accounts__Account_Value3((Accounts__Account*)self, qstring(key), (QVariant*)defaultValue, source);
}

const char* q_accounts__account_value_as_string2(void* self, const char* key, const char* default_value) {
    libqt_string _str = Accounts__Account_ValueAsString2((Accounts__Account*)self, qstring(key), qstring(default_value));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__account_value_as_string3(void* self, const char* key, const char* default_value, int32_t* source) {
    libqt_string _str = Accounts__Account_ValueAsString3((Accounts__Account*)self, qstring(key), qstring(default_value), source);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accounts__account_value_as_int2(void* self, const char* key, int default_value) {
    return Accounts__Account_ValueAsInt2((Accounts__Account*)self, qstring(key), default_value);
}

int32_t q_accounts__account_value_as_int3(void* self, const char* key, int default_value, int32_t* source) {
    return Accounts__Account_ValueAsInt3((Accounts__Account*)self, qstring(key), default_value, source);
}

uint64_t q_accounts__account_value_as_u_int642(void* self, const char* key, uint64_t default_value) {
    return Accounts__Account_ValueAsUInt642((Accounts__Account*)self, qstring(key), default_value);
}

uint64_t q_accounts__account_value_as_u_int643(void* self, const char* key, uint64_t default_value, int32_t* source) {
    return Accounts__Account_ValueAsUInt643((Accounts__Account*)self, qstring(key), default_value, source);
}

bool q_accounts__account_value_as_bool2(void* self, const char* key, bool default_value) {
    return Accounts__Account_ValueAsBool2((Accounts__Account*)self, qstring(key), default_value);
}

bool q_accounts__account_value_as_bool3(void* self, const char* key, bool default_value, int32_t* source) {
    return Accounts__Account_ValueAsBool3((Accounts__Account*)self, qstring(key), default_value, source);
}

Accounts__Watch* q_accounts__account_watch_key1(void* self, const char* key) {
    return Accounts__Account_WatchKey1((Accounts__Account*)self, qstring(key));
}

const char* q_accounts__account_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__account_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_accounts__account_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_accounts__account_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_accounts__account_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_accounts__account_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_accounts__account_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_accounts__account_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_accounts__account_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_accounts__account_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_accounts__account_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_accounts__account_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_accounts__account_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_accounts__account_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_accounts__account_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_accounts__account_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_accounts__account_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_accounts__account_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_accounts__account_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_accounts__account_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_accounts__account_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_accounts__account_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_accounts__account_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_accounts__account_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_accounts__account_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_accounts__account_dynamic_property_names");
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

QBindingStorage* q_accounts__account_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_accounts__account_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_accounts__account_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_accounts__account_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_accounts__account_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_accounts__account_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_accounts__account_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_accounts__account_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_accounts__account_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_accounts__account_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_accounts__account_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_accounts__account_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_accounts__account_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_accounts__account_event(void* self, void* event) {
    return Accounts__Account_Event((Accounts__Account*)self, (QEvent*)event);
}

bool q_accounts__account_qbase_event(void* self, void* event) {
    return Accounts__Account_QBaseEvent((Accounts__Account*)self, (QEvent*)event);
}

void q_accounts__account_on_event(void* self, bool (*callback)(void*, void*)) {
    Accounts__Account_OnEvent((Accounts__Account*)self, (intptr_t)callback);
}

bool q_accounts__account_event_filter(void* self, void* watched, void* event) {
    return Accounts__Account_EventFilter((Accounts__Account*)self, (QObject*)watched, (QEvent*)event);
}

bool q_accounts__account_qbase_event_filter(void* self, void* watched, void* event) {
    return Accounts__Account_QBaseEventFilter((Accounts__Account*)self, (QObject*)watched, (QEvent*)event);
}

void q_accounts__account_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Accounts__Account_OnEventFilter((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_timer_event(void* self, void* event) {
    Accounts__Account_TimerEvent((Accounts__Account*)self, (QTimerEvent*)event);
}

void q_accounts__account_qbase_timer_event(void* self, void* event) {
    Accounts__Account_QBaseTimerEvent((Accounts__Account*)self, (QTimerEvent*)event);
}

void q_accounts__account_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Accounts__Account_OnTimerEvent((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_child_event(void* self, void* event) {
    Accounts__Account_ChildEvent((Accounts__Account*)self, (QChildEvent*)event);
}

void q_accounts__account_qbase_child_event(void* self, void* event) {
    Accounts__Account_QBaseChildEvent((Accounts__Account*)self, (QChildEvent*)event);
}

void q_accounts__account_on_child_event(void* self, void (*callback)(void*, void*)) {
    Accounts__Account_OnChildEvent((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_custom_event(void* self, void* event) {
    Accounts__Account_CustomEvent((Accounts__Account*)self, (QEvent*)event);
}

void q_accounts__account_qbase_custom_event(void* self, void* event) {
    Accounts__Account_QBaseCustomEvent((Accounts__Account*)self, (QEvent*)event);
}

void q_accounts__account_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Accounts__Account_OnCustomEvent((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_connect_notify(void* self, void* signal) {
    Accounts__Account_ConnectNotify((Accounts__Account*)self, (QMetaMethod*)signal);
}

void q_accounts__account_qbase_connect_notify(void* self, void* signal) {
    Accounts__Account_QBaseConnectNotify((Accounts__Account*)self, (QMetaMethod*)signal);
}

void q_accounts__account_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Accounts__Account_OnConnectNotify((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_disconnect_notify(void* self, void* signal) {
    Accounts__Account_DisconnectNotify((Accounts__Account*)self, (QMetaMethod*)signal);
}

void q_accounts__account_qbase_disconnect_notify(void* self, void* signal) {
    Accounts__Account_QBaseDisconnectNotify((Accounts__Account*)self, (QMetaMethod*)signal);
}

void q_accounts__account_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Accounts__Account_OnDisconnectNotify((Accounts__Account*)self, (intptr_t)callback);
}

QObject* q_accounts__account_sender(void* self) {
    return Accounts__Account_Sender((Accounts__Account*)self);
}

QObject* q_accounts__account_qbase_sender(void* self) {
    return Accounts__Account_QBaseSender((Accounts__Account*)self);
}

void q_accounts__account_on_sender(void* self, QObject* (*callback)()) {
    Accounts__Account_OnSender((Accounts__Account*)self, (intptr_t)callback);
}

int32_t q_accounts__account_sender_signal_index(void* self) {
    return Accounts__Account_SenderSignalIndex((Accounts__Account*)self);
}

int32_t q_accounts__account_qbase_sender_signal_index(void* self) {
    return Accounts__Account_QBaseSenderSignalIndex((Accounts__Account*)self);
}

void q_accounts__account_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Accounts__Account_OnSenderSignalIndex((Accounts__Account*)self, (intptr_t)callback);
}

int32_t q_accounts__account_receivers(void* self, const char* signal) {
    return Accounts__Account_Receivers((Accounts__Account*)self, signal);
}

int32_t q_accounts__account_qbase_receivers(void* self, const char* signal) {
    return Accounts__Account_QBaseReceivers((Accounts__Account*)self, signal);
}

void q_accounts__account_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Accounts__Account_OnReceivers((Accounts__Account*)self, (intptr_t)callback);
}

bool q_accounts__account_is_signal_connected(void* self, void* signal) {
    return Accounts__Account_IsSignalConnected((Accounts__Account*)self, (QMetaMethod*)signal);
}

bool q_accounts__account_qbase_is_signal_connected(void* self, void* signal) {
    return Accounts__Account_QBaseIsSignalConnected((Accounts__Account*)self, (QMetaMethod*)signal);
}

void q_accounts__account_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Accounts__Account_OnIsSignalConnected((Accounts__Account*)self, (intptr_t)callback);
}

void q_accounts__account_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_accounts__account_delete(void* self) {
    Accounts__Account_Delete((Accounts__Account*)(self));
}
