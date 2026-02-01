#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libsignonerror.hpp"
#include "libidentityinfo.hpp"
#include "libauthservice.hpp"
#include "libauthservice.h"

SignOn__AuthService* q_signon__authservice_new() {
    return SignOn__AuthService_new();
}

SignOn__AuthService* q_signon__authservice_new2(void* parent) {
    return SignOn__AuthService_new2((QObject*)parent);
}

const QMetaObject* q_signon__authservice_meta_object(void* self) {
    return SignOn__AuthService_MetaObject((SignOn__AuthService*)self);
}

void q_signon__authservice_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    SignOn__AuthService_OnMetaObject((SignOn__AuthService*)self, (intptr_t)callback);
}

const QMetaObject* q_signon__authservice_qbase_meta_object(void* self) {
    return SignOn__AuthService_QBaseMetaObject((SignOn__AuthService*)self);
}

void* q_signon__authservice_metacast(void* self, const char* param1) {
    return SignOn__AuthService_Metacast((SignOn__AuthService*)self, param1);
}

void q_signon__authservice_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    SignOn__AuthService_OnMetacast((SignOn__AuthService*)self, (intptr_t)callback);
}

void* q_signon__authservice_qbase_metacast(void* self, const char* param1) {
    return SignOn__AuthService_QBaseMetacast((SignOn__AuthService*)self, param1);
}

int32_t q_signon__authservice_metacall(void* self, int32_t param1, int param2, void* param3) {
    return SignOn__AuthService_Metacall((SignOn__AuthService*)self, param1, param2, param3);
}

void q_signon__authservice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    SignOn__AuthService_OnMetacall((SignOn__AuthService*)self, (intptr_t)callback);
}

int32_t q_signon__authservice_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return SignOn__AuthService_QBaseMetacall((SignOn__AuthService*)self, param1, param2, param3);
}

const char* q_signon__authservice_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__authservice_query_methods(void* self) {
    SignOn__AuthService_QueryMethods((SignOn__AuthService*)self);
}

void q_signon__authservice_query_mechanisms(void* self, const char* method) {
    SignOn__AuthService_QueryMechanisms((SignOn__AuthService*)self, qstring(method));
}

void q_signon__authservice_query_identities(void* self) {
    SignOn__AuthService_QueryIdentities((SignOn__AuthService*)self);
}

void q_signon__authservice_clear(void* self) {
    SignOn__AuthService_Clear((SignOn__AuthService*)self);
}

void q_signon__authservice_error(void* self, void* err) {
    SignOn__AuthService_Error((SignOn__AuthService*)self, (SignOn__Error*)err);
}

void q_signon__authservice_on_error(void* self, void (*callback)(void*, void*)) {
    SignOn__AuthService_Connect_Error((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_methods_available(void* self, const char* methods[static 1]) {
    size_t methods_len = libqt_strv_length(methods);
    libqt_string* methods_qstr = (libqt_string*)malloc(methods_len * sizeof(libqt_string));
    if (methods_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_signon__authservice_methods_available\n");
        abort();
    }
    for (size_t i = 0; i < methods_len; ++i) {
        methods_qstr[i] = qstring(methods[i]);
    }
    libqt_list methods_list = qlist(methods_qstr, methods_len);
    SignOn__AuthService_MethodsAvailable((SignOn__AuthService*)self, methods_list);
    free(methods_qstr);
}

void q_signon__authservice_on_methods_available(void* self, void (*callback)(void*, const char**)) {
    SignOn__AuthService_Connect_MethodsAvailable((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_mechanisms_available(void* self, const char* method, const char* mechanisms[static 1]) {
    size_t mechanisms_len = libqt_strv_length(mechanisms);
    libqt_string* mechanisms_qstr = (libqt_string*)malloc(mechanisms_len * sizeof(libqt_string));
    if (mechanisms_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_signon__authservice_mechanisms_available\n");
        abort();
    }
    for (size_t i = 0; i < mechanisms_len; ++i) {
        mechanisms_qstr[i] = qstring(mechanisms[i]);
    }
    libqt_list mechanisms_list = qlist(mechanisms_qstr, mechanisms_len);
    SignOn__AuthService_MechanismsAvailable((SignOn__AuthService*)self, qstring(method), mechanisms_list);
    free(mechanisms_qstr);
}

void q_signon__authservice_on_mechanisms_available(void* self, void (*callback)(void*, const char*, const char**)) {
    SignOn__AuthService_Connect_MechanismsAvailable((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_identities(void* self, libqt_list /* of SignOn__IdentityInfo* */ identityList) {
    SignOn__AuthService_Identities((SignOn__AuthService*)self, identityList);
}

void q_signon__authservice_on_identities(void* self, void (*callback)(void*, SignOn__IdentityInfo**)) {
    SignOn__AuthService_Connect_Identities((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_cleared(void* self) {
    SignOn__AuthService_Cleared((SignOn__AuthService*)self);
}

void q_signon__authservice_on_cleared(void* self, void (*callback)(void*)) {
    SignOn__AuthService_Connect_Cleared((SignOn__AuthService*)self, (intptr_t)callback);
}

const char* q_signon__authservice_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_signon__authservice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_signon__authservice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__authservice_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_signon__authservice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_signon__authservice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_signon__authservice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_signon__authservice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_signon__authservice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_signon__authservice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_signon__authservice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_signon__authservice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_signon__authservice_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_signon__authservice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_signon__authservice_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_signon__authservice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_signon__authservice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_signon__authservice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_signon__authservice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_signon__authservice_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_signon__authservice_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_signon__authservice_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_signon__authservice_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_signon__authservice_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_signon__authservice_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_signon__authservice_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_signon__authservice_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_signon__authservice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_signon__authservice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_signon__authservice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_signon__authservice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_signon__authservice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_signon__authservice_dynamic_property_names\n");
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

QBindingStorage* q_signon__authservice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_signon__authservice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_signon__authservice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_signon__authservice_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_signon__authservice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_signon__authservice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_signon__authservice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_signon__authservice_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_signon__authservice_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_signon__authservice_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_signon__authservice_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_signon__authservice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_signon__authservice_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_signon__authservice_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_signon__authservice_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_signon__authservice_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_signon__authservice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_signon__authservice_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_signon__authservice_event(void* self, void* event) {
    return SignOn__AuthService_Event((SignOn__AuthService*)self, (QEvent*)event);
}

bool q_signon__authservice_qbase_event(void* self, void* event) {
    return SignOn__AuthService_QBaseEvent((SignOn__AuthService*)self, (QEvent*)event);
}

void q_signon__authservice_on_event(void* self, bool (*callback)(void*, void*)) {
    SignOn__AuthService_OnEvent((SignOn__AuthService*)self, (intptr_t)callback);
}

bool q_signon__authservice_event_filter(void* self, void* watched, void* event) {
    return SignOn__AuthService_EventFilter((SignOn__AuthService*)self, (QObject*)watched, (QEvent*)event);
}

bool q_signon__authservice_qbase_event_filter(void* self, void* watched, void* event) {
    return SignOn__AuthService_QBaseEventFilter((SignOn__AuthService*)self, (QObject*)watched, (QEvent*)event);
}

void q_signon__authservice_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    SignOn__AuthService_OnEventFilter((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_timer_event(void* self, void* event) {
    SignOn__AuthService_TimerEvent((SignOn__AuthService*)self, (QTimerEvent*)event);
}

void q_signon__authservice_qbase_timer_event(void* self, void* event) {
    SignOn__AuthService_QBaseTimerEvent((SignOn__AuthService*)self, (QTimerEvent*)event);
}

void q_signon__authservice_on_timer_event(void* self, void (*callback)(void*, void*)) {
    SignOn__AuthService_OnTimerEvent((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_child_event(void* self, void* event) {
    SignOn__AuthService_ChildEvent((SignOn__AuthService*)self, (QChildEvent*)event);
}

void q_signon__authservice_qbase_child_event(void* self, void* event) {
    SignOn__AuthService_QBaseChildEvent((SignOn__AuthService*)self, (QChildEvent*)event);
}

void q_signon__authservice_on_child_event(void* self, void (*callback)(void*, void*)) {
    SignOn__AuthService_OnChildEvent((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_custom_event(void* self, void* event) {
    SignOn__AuthService_CustomEvent((SignOn__AuthService*)self, (QEvent*)event);
}

void q_signon__authservice_qbase_custom_event(void* self, void* event) {
    SignOn__AuthService_QBaseCustomEvent((SignOn__AuthService*)self, (QEvent*)event);
}

void q_signon__authservice_on_custom_event(void* self, void (*callback)(void*, void*)) {
    SignOn__AuthService_OnCustomEvent((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_connect_notify(void* self, void* signal) {
    SignOn__AuthService_ConnectNotify((SignOn__AuthService*)self, (QMetaMethod*)signal);
}

void q_signon__authservice_qbase_connect_notify(void* self, void* signal) {
    SignOn__AuthService_QBaseConnectNotify((SignOn__AuthService*)self, (QMetaMethod*)signal);
}

void q_signon__authservice_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    SignOn__AuthService_OnConnectNotify((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_disconnect_notify(void* self, void* signal) {
    SignOn__AuthService_DisconnectNotify((SignOn__AuthService*)self, (QMetaMethod*)signal);
}

void q_signon__authservice_qbase_disconnect_notify(void* self, void* signal) {
    SignOn__AuthService_QBaseDisconnectNotify((SignOn__AuthService*)self, (QMetaMethod*)signal);
}

void q_signon__authservice_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    SignOn__AuthService_OnDisconnectNotify((SignOn__AuthService*)self, (intptr_t)callback);
}

QObject* q_signon__authservice_sender(void* self) {
    return SignOn__AuthService_Sender((SignOn__AuthService*)self);
}

QObject* q_signon__authservice_qbase_sender(void* self) {
    return SignOn__AuthService_QBaseSender((SignOn__AuthService*)self);
}

void q_signon__authservice_on_sender(void* self, QObject* (*callback)()) {
    SignOn__AuthService_OnSender((SignOn__AuthService*)self, (intptr_t)callback);
}

int32_t q_signon__authservice_sender_signal_index(void* self) {
    return SignOn__AuthService_SenderSignalIndex((SignOn__AuthService*)self);
}

int32_t q_signon__authservice_qbase_sender_signal_index(void* self) {
    return SignOn__AuthService_QBaseSenderSignalIndex((SignOn__AuthService*)self);
}

void q_signon__authservice_on_sender_signal_index(void* self, int32_t (*callback)()) {
    SignOn__AuthService_OnSenderSignalIndex((SignOn__AuthService*)self, (intptr_t)callback);
}

int32_t q_signon__authservice_receivers(void* self, const char* signal) {
    return SignOn__AuthService_Receivers((SignOn__AuthService*)self, signal);
}

int32_t q_signon__authservice_qbase_receivers(void* self, const char* signal) {
    return SignOn__AuthService_QBaseReceivers((SignOn__AuthService*)self, signal);
}

void q_signon__authservice_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    SignOn__AuthService_OnReceivers((SignOn__AuthService*)self, (intptr_t)callback);
}

bool q_signon__authservice_is_signal_connected(void* self, void* signal) {
    return SignOn__AuthService_IsSignalConnected((SignOn__AuthService*)self, (QMetaMethod*)signal);
}

bool q_signon__authservice_qbase_is_signal_connected(void* self, void* signal) {
    return SignOn__AuthService_QBaseIsSignalConnected((SignOn__AuthService*)self, (QMetaMethod*)signal);
}

void q_signon__authservice_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    SignOn__AuthService_OnIsSignalConnected((SignOn__AuthService*)self, (intptr_t)callback);
}

void q_signon__authservice_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_signon__authservice_delete(void* self) {
    SignOn__AuthService_Delete((SignOn__AuthService*)(self));
}

SignOn__AuthService__IdentityRegExp* q_signon__authservice__identityregexp_new(const char* pattern) {
    return SignOn__AuthService__IdentityRegExp_new(qstring(pattern));
}

SignOn__AuthService__IdentityRegExp* q_signon__authservice__identityregexp_new2(void* src) {
    return SignOn__AuthService__IdentityRegExp_new2((SignOn__AuthService__IdentityRegExp*)src);
}

bool q_signon__authservice__identityregexp_is_valid(void* self) {
    return SignOn__AuthService__IdentityRegExp_IsValid((SignOn__AuthService__IdentityRegExp*)self);
}

const char* q_signon__authservice__identityregexp_pattern(void* self) {
    libqt_string _str = SignOn__AuthService__IdentityRegExp_Pattern((SignOn__AuthService__IdentityRegExp*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__authservice__identityregexp_delete(void* self) {
    SignOn__AuthService__IdentityRegExp_Delete((SignOn__AuthService__IdentityRegExp*)(self));
}
