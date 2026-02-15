#include "libaccount.hpp"
#include "libauth_data.hpp"
#include "libservice.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libaccount_service.hpp"
#include "libaccount_service.h"

Accounts__AccountService* q_accounts__accountservice_new(void* account, void* service) {
    return Accounts__AccountService_new((Accounts__Account*)account, (Accounts__Service*)service);
}

Accounts__AccountService* q_accounts__accountservice_new2(void* account, void* service, void* parent) {
    return Accounts__AccountService_new2((Accounts__Account*)account, (Accounts__Service*)service, (QObject*)parent);
}

const QMetaObject* q_accounts__accountservice_meta_object(void* self) {
    return Accounts__AccountService_MetaObject((Accounts__AccountService*)self);
}

void q_accounts__accountservice_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Accounts__AccountService_OnMetaObject((Accounts__AccountService*)self, (intptr_t)callback);
}

const QMetaObject* q_accounts__accountservice_qbase_meta_object(void* self) {
    return Accounts__AccountService_QBaseMetaObject((Accounts__AccountService*)self);
}

void* q_accounts__accountservice_metacast(void* self, const char* param1) {
    return Accounts__AccountService_Metacast((Accounts__AccountService*)self, param1);
}

void q_accounts__accountservice_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Accounts__AccountService_OnMetacast((Accounts__AccountService*)self, (intptr_t)callback);
}

void* q_accounts__accountservice_qbase_metacast(void* self, const char* param1) {
    return Accounts__AccountService_QBaseMetacast((Accounts__AccountService*)self, param1);
}

int32_t q_accounts__accountservice_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Accounts__AccountService_Metacall((Accounts__AccountService*)self, param1, param2, param3);
}

void q_accounts__accountservice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Accounts__AccountService_OnMetacall((Accounts__AccountService*)self, (intptr_t)callback);
}

int32_t q_accounts__accountservice_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Accounts__AccountService_QBaseMetacall((Accounts__AccountService*)self, param1, param2, param3);
}

const char* q_accounts__accountservice_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Accounts__Account* q_accounts__accountservice_account(void* self) {
    return Accounts__AccountService_Account((Accounts__AccountService*)self);
}

Accounts__Service* q_accounts__accountservice_service(void* self) {
    return Accounts__AccountService_Service((Accounts__AccountService*)self);
}

bool q_accounts__accountservice_enabled(void* self) {
    return Accounts__AccountService_Enabled((Accounts__AccountService*)self);
}

bool q_accounts__accountservice_is_enabled(void* self) {
    return Accounts__AccountService_IsEnabled((Accounts__AccountService*)self);
}

const char** q_accounts__accountservice_all_keys(void* self) {
    libqt_list _arr = Accounts__AccountService_AllKeys((Accounts__AccountService*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accounts__accountservice_all_keys\n");
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

void q_accounts__accountservice_begin_group(void* self, const char* prefix) {
    Accounts__AccountService_BeginGroup((Accounts__AccountService*)self, qstring(prefix));
}

const char** q_accounts__accountservice_child_groups(void* self) {
    libqt_list _arr = Accounts__AccountService_ChildGroups((Accounts__AccountService*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accounts__accountservice_child_groups\n");
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

const char** q_accounts__accountservice_child_keys(void* self) {
    libqt_list _arr = Accounts__AccountService_ChildKeys((Accounts__AccountService*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accounts__accountservice_child_keys\n");
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

void q_accounts__accountservice_clear(void* self) {
    Accounts__AccountService_Clear((Accounts__AccountService*)self);
}

bool q_accounts__accountservice_contains(void* self, const char* key) {
    return Accounts__AccountService_Contains((Accounts__AccountService*)self, qstring(key));
}

void q_accounts__accountservice_end_group(void* self) {
    Accounts__AccountService_EndGroup((Accounts__AccountService*)self);
}

const char* q_accounts__accountservice_group(void* self) {
    libqt_string _str = Accounts__AccountService_Group((Accounts__AccountService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__accountservice_remove(void* self, const char* key) {
    Accounts__AccountService_Remove((Accounts__AccountService*)self, qstring(key));
}

void q_accounts__accountservice_set_value(void* self, const char* key, void* value) {
    Accounts__AccountService_SetValue((Accounts__AccountService*)self, key, (QVariant*)value);
}

void q_accounts__accountservice_set_value2(void* self, const char* key, void* value) {
    Accounts__AccountService_SetValue2((Accounts__AccountService*)self, qstring(key), (QVariant*)value);
}

QVariant* q_accounts__accountservice_value(void* self, const char* key, void* defaultValue) {
    return Accounts__AccountService_Value((Accounts__AccountService*)self, qstring(key), (QVariant*)defaultValue);
}

QVariant* q_accounts__accountservice_value2(void* self, const char* key) {
    return Accounts__AccountService_Value2((Accounts__AccountService*)self, qstring(key));
}

QVariant* q_accounts__accountservice_value3(void* self, const char* key) {
    return Accounts__AccountService_Value3((Accounts__AccountService*)self, key);
}

const char** q_accounts__accountservice_changed_fields(void* self) {
    libqt_list _arr = Accounts__AccountService_ChangedFields((Accounts__AccountService*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accounts__accountservice_changed_fields\n");
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

Accounts__AuthData* q_accounts__accountservice_auth_data(void* self) {
    return Accounts__AccountService_AuthData((Accounts__AccountService*)self);
}

void q_accounts__accountservice_enabled2(void* self, bool isEnabled) {
    Accounts__AccountService_Enabled2((Accounts__AccountService*)self, isEnabled);
}

void q_accounts__accountservice_changed(void* self) {
    Accounts__AccountService_Changed((Accounts__AccountService*)self);
}

const char* q_accounts__accountservice_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__accountservice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_accounts__accountservice_value32(void* self, const char* key, void* defaultValue, int32_t* source) {
    return Accounts__AccountService_Value32((Accounts__AccountService*)self, qstring(key), (QVariant*)defaultValue, source);
}

QVariant* q_accounts__accountservice_value22(void* self, const char* key, int32_t* source) {
    return Accounts__AccountService_Value22((Accounts__AccountService*)self, qstring(key), source);
}

QVariant* q_accounts__accountservice_value23(void* self, const char* key, int32_t* source) {
    return Accounts__AccountService_Value23((Accounts__AccountService*)self, key, source);
}

const char* q_accounts__accountservice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__accountservice_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_accounts__accountservice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_accounts__accountservice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_accounts__accountservice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_accounts__accountservice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_accounts__accountservice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_accounts__accountservice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_accounts__accountservice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_accounts__accountservice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_accounts__accountservice_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_accounts__accountservice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_accounts__accountservice_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_accounts__accountservice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_accounts__accountservice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_accounts__accountservice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_accounts__accountservice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_accounts__accountservice_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_accounts__accountservice_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_accounts__accountservice_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_accounts__accountservice_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_accounts__accountservice_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_accounts__accountservice_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_accounts__accountservice_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_accounts__accountservice_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_accounts__accountservice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_accounts__accountservice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_accounts__accountservice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_accounts__accountservice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_accounts__accountservice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_accounts__accountservice_dynamic_property_names\n");
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

QBindingStorage* q_accounts__accountservice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_accounts__accountservice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_accounts__accountservice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_accounts__accountservice_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_accounts__accountservice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_accounts__accountservice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_accounts__accountservice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_accounts__accountservice_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_accounts__accountservice_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_accounts__accountservice_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_accounts__accountservice_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_accounts__accountservice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_accounts__accountservice_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_accounts__accountservice_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_accounts__accountservice_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_accounts__accountservice_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_accounts__accountservice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_accounts__accountservice_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_accounts__accountservice_event(void* self, void* event) {
    return Accounts__AccountService_Event((Accounts__AccountService*)self, (QEvent*)event);
}

bool q_accounts__accountservice_qbase_event(void* self, void* event) {
    return Accounts__AccountService_QBaseEvent((Accounts__AccountService*)self, (QEvent*)event);
}

void q_accounts__accountservice_on_event(void* self, bool (*callback)(void*, void*)) {
    Accounts__AccountService_OnEvent((Accounts__AccountService*)self, (intptr_t)callback);
}

bool q_accounts__accountservice_event_filter(void* self, void* watched, void* event) {
    return Accounts__AccountService_EventFilter((Accounts__AccountService*)self, (QObject*)watched, (QEvent*)event);
}

bool q_accounts__accountservice_qbase_event_filter(void* self, void* watched, void* event) {
    return Accounts__AccountService_QBaseEventFilter((Accounts__AccountService*)self, (QObject*)watched, (QEvent*)event);
}

void q_accounts__accountservice_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Accounts__AccountService_OnEventFilter((Accounts__AccountService*)self, (intptr_t)callback);
}

void q_accounts__accountservice_timer_event(void* self, void* event) {
    Accounts__AccountService_TimerEvent((Accounts__AccountService*)self, (QTimerEvent*)event);
}

void q_accounts__accountservice_qbase_timer_event(void* self, void* event) {
    Accounts__AccountService_QBaseTimerEvent((Accounts__AccountService*)self, (QTimerEvent*)event);
}

void q_accounts__accountservice_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Accounts__AccountService_OnTimerEvent((Accounts__AccountService*)self, (intptr_t)callback);
}

void q_accounts__accountservice_child_event(void* self, void* event) {
    Accounts__AccountService_ChildEvent((Accounts__AccountService*)self, (QChildEvent*)event);
}

void q_accounts__accountservice_qbase_child_event(void* self, void* event) {
    Accounts__AccountService_QBaseChildEvent((Accounts__AccountService*)self, (QChildEvent*)event);
}

void q_accounts__accountservice_on_child_event(void* self, void (*callback)(void*, void*)) {
    Accounts__AccountService_OnChildEvent((Accounts__AccountService*)self, (intptr_t)callback);
}

void q_accounts__accountservice_custom_event(void* self, void* event) {
    Accounts__AccountService_CustomEvent((Accounts__AccountService*)self, (QEvent*)event);
}

void q_accounts__accountservice_qbase_custom_event(void* self, void* event) {
    Accounts__AccountService_QBaseCustomEvent((Accounts__AccountService*)self, (QEvent*)event);
}

void q_accounts__accountservice_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Accounts__AccountService_OnCustomEvent((Accounts__AccountService*)self, (intptr_t)callback);
}

void q_accounts__accountservice_connect_notify(void* self, void* signal) {
    Accounts__AccountService_ConnectNotify((Accounts__AccountService*)self, (QMetaMethod*)signal);
}

void q_accounts__accountservice_qbase_connect_notify(void* self, void* signal) {
    Accounts__AccountService_QBaseConnectNotify((Accounts__AccountService*)self, (QMetaMethod*)signal);
}

void q_accounts__accountservice_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Accounts__AccountService_OnConnectNotify((Accounts__AccountService*)self, (intptr_t)callback);
}

void q_accounts__accountservice_disconnect_notify(void* self, void* signal) {
    Accounts__AccountService_DisconnectNotify((Accounts__AccountService*)self, (QMetaMethod*)signal);
}

void q_accounts__accountservice_qbase_disconnect_notify(void* self, void* signal) {
    Accounts__AccountService_QBaseDisconnectNotify((Accounts__AccountService*)self, (QMetaMethod*)signal);
}

void q_accounts__accountservice_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Accounts__AccountService_OnDisconnectNotify((Accounts__AccountService*)self, (intptr_t)callback);
}

QObject* q_accounts__accountservice_sender(void* self) {
    return Accounts__AccountService_Sender((Accounts__AccountService*)self);
}

QObject* q_accounts__accountservice_qbase_sender(void* self) {
    return Accounts__AccountService_QBaseSender((Accounts__AccountService*)self);
}

void q_accounts__accountservice_on_sender(void* self, QObject* (*callback)()) {
    Accounts__AccountService_OnSender((Accounts__AccountService*)self, (intptr_t)callback);
}

int32_t q_accounts__accountservice_sender_signal_index(void* self) {
    return Accounts__AccountService_SenderSignalIndex((Accounts__AccountService*)self);
}

int32_t q_accounts__accountservice_qbase_sender_signal_index(void* self) {
    return Accounts__AccountService_QBaseSenderSignalIndex((Accounts__AccountService*)self);
}

void q_accounts__accountservice_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Accounts__AccountService_OnSenderSignalIndex((Accounts__AccountService*)self, (intptr_t)callback);
}

int32_t q_accounts__accountservice_receivers(void* self, const char* signal) {
    return Accounts__AccountService_Receivers((Accounts__AccountService*)self, signal);
}

int32_t q_accounts__accountservice_qbase_receivers(void* self, const char* signal) {
    return Accounts__AccountService_QBaseReceivers((Accounts__AccountService*)self, signal);
}

void q_accounts__accountservice_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Accounts__AccountService_OnReceivers((Accounts__AccountService*)self, (intptr_t)callback);
}

bool q_accounts__accountservice_is_signal_connected(void* self, void* signal) {
    return Accounts__AccountService_IsSignalConnected((Accounts__AccountService*)self, (QMetaMethod*)signal);
}

bool q_accounts__accountservice_qbase_is_signal_connected(void* self, void* signal) {
    return Accounts__AccountService_QBaseIsSignalConnected((Accounts__AccountService*)self, (QMetaMethod*)signal);
}

void q_accounts__accountservice_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Accounts__AccountService_OnIsSignalConnected((Accounts__AccountService*)self, (intptr_t)callback);
}

void q_accounts__accountservice_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_accounts__accountservice_delete(void* self) {
    Accounts__AccountService_Delete((Accounts__AccountService*)(self));
}
