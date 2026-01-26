#include "libprovider.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libprovidermanager.hpp"
#include "libprovidermanager.h"

Attica__ProviderManager* k_attica__providermanager_new() {
    return Attica__ProviderManager_new();
}

Attica__ProviderManager* k_attica__providermanager_new2(const int32_t* flags) {
    return Attica__ProviderManager_new2(flags);
}

const QMetaObject* k_attica__providermanager_meta_object(void* self) {
    return Attica__ProviderManager_MetaObject((Attica__ProviderManager*)self);
}

void k_attica__providermanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Attica__ProviderManager_OnMetaObject((Attica__ProviderManager*)self, (intptr_t)callback);
}

const QMetaObject* k_attica__providermanager_qbase_meta_object(void* self) {
    return Attica__ProviderManager_QBaseMetaObject((Attica__ProviderManager*)self);
}

void* k_attica__providermanager_metacast(void* self, const char* param1) {
    return Attica__ProviderManager_Metacast((Attica__ProviderManager*)self, param1);
}

void k_attica__providermanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Attica__ProviderManager_OnMetacast((Attica__ProviderManager*)self, (intptr_t)callback);
}

void* k_attica__providermanager_qbase_metacast(void* self, const char* param1) {
    return Attica__ProviderManager_QBaseMetacast((Attica__ProviderManager*)self, param1);
}

int32_t k_attica__providermanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Attica__ProviderManager_Metacall((Attica__ProviderManager*)self, param1, param2, param3);
}

void k_attica__providermanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Attica__ProviderManager_OnMetacall((Attica__ProviderManager*)self, (intptr_t)callback);
}

int32_t k_attica__providermanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Attica__ProviderManager_QBaseMetacall((Attica__ProviderManager*)self, param1, param2, param3);
}

const char* k_attica__providermanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__providermanager_load_default_providers(void* self) {
    Attica__ProviderManager_LoadDefaultProviders((Attica__ProviderManager*)self);
}

libqt_list /* of QUrl* */ k_attica__providermanager_default_provider_files(void* self) {
    libqt_list _arr = Attica__ProviderManager_DefaultProviderFiles((Attica__ProviderManager*)self);
    return _arr;
}

void k_attica__providermanager_add_provider_file_to_default_providers(void* self, void* url) {
    Attica__ProviderManager_AddProviderFileToDefaultProviders((Attica__ProviderManager*)self, (QUrl*)url);
}

void k_attica__providermanager_remove_provider_file_from_default_providers(void* self, void* url) {
    Attica__ProviderManager_RemoveProviderFileFromDefaultProviders((Attica__ProviderManager*)self, (QUrl*)url);
}

void k_attica__providermanager_set_authentication_suppressed(void* self, bool suppressed) {
    Attica__ProviderManager_SetAuthenticationSuppressed((Attica__ProviderManager*)self, suppressed);
}

void k_attica__providermanager_clear(void* self) {
    Attica__ProviderManager_Clear((Attica__ProviderManager*)self);
}

void k_attica__providermanager_add_provider_from_xml(void* self, const char* providerXml) {
    Attica__ProviderManager_AddProviderFromXml((Attica__ProviderManager*)self, qstring(providerXml));
}

void k_attica__providermanager_add_provider_file(void* self, void* file) {
    Attica__ProviderManager_AddProviderFile((Attica__ProviderManager*)self, (QUrl*)file);
}

libqt_list /* of QUrl* */ k_attica__providermanager_provider_files(void* self) {
    libqt_list _arr = Attica__ProviderManager_ProviderFiles((Attica__ProviderManager*)self);
    return _arr;
}

libqt_list /* of Attica__Provider* */ k_attica__providermanager_providers(void* self) {
    libqt_list _arr = Attica__ProviderManager_Providers((Attica__ProviderManager*)self);
    return _arr;
}

bool k_attica__providermanager_contains(void* self, void* provider) {
    return Attica__ProviderManager_Contains((Attica__ProviderManager*)self, (QUrl*)provider);
}

Attica__Provider* k_attica__providermanager_provider_by_url(void* self, void* url) {
    return Attica__ProviderManager_ProviderByUrl((Attica__ProviderManager*)self, (QUrl*)url);
}

Attica__Provider* k_attica__providermanager_provider_for(void* self, void* url) {
    return Attica__ProviderManager_ProviderFor((Attica__ProviderManager*)self, (QUrl*)url);
}

void k_attica__providermanager_provider_added(void* self, void* provider) {
    Attica__ProviderManager_ProviderAdded((Attica__ProviderManager*)self, (Attica__Provider*)provider);
}

void k_attica__providermanager_on_provider_added(void* self, void (*callback)(void*, void*)) {
    Attica__ProviderManager_Connect_ProviderAdded((Attica__ProviderManager*)self, (intptr_t)callback);
}

void k_attica__providermanager_default_providers_loaded(void* self) {
    Attica__ProviderManager_DefaultProvidersLoaded((Attica__ProviderManager*)self);
}

void k_attica__providermanager_on_default_providers_loaded(void* self, void (*callback)(void*)) {
    Attica__ProviderManager_Connect_DefaultProvidersLoaded((Attica__ProviderManager*)self, (intptr_t)callback);
}

void k_attica__providermanager_authentication_credentials_missing(void* self, void* provider) {
    Attica__ProviderManager_AuthenticationCredentialsMissing((Attica__ProviderManager*)self, (Attica__Provider*)provider);
}

void k_attica__providermanager_on_authentication_credentials_missing(void* self, void (*callback)(void*, void*)) {
    Attica__ProviderManager_Connect_AuthenticationCredentialsMissing((Attica__ProviderManager*)self, (intptr_t)callback);
}

void k_attica__providermanager_failed_to_load(void* self, void* provider, int32_t error) {
    Attica__ProviderManager_FailedToLoad((Attica__ProviderManager*)self, (QUrl*)provider, error);
}

void k_attica__providermanager_on_failed_to_load(void* self, void (*callback)(void*, void*, int32_t)) {
    Attica__ProviderManager_Connect_FailedToLoad((Attica__ProviderManager*)self, (intptr_t)callback);
}

const char* k_attica__providermanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__providermanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__providermanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__providermanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_attica__providermanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_attica__providermanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_attica__providermanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_attica__providermanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_attica__providermanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_attica__providermanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_attica__providermanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_attica__providermanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_attica__providermanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_attica__providermanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_attica__providermanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_attica__providermanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_attica__providermanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_attica__providermanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_attica__providermanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_attica__providermanager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_attica__providermanager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_attica__providermanager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_attica__providermanager_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_attica__providermanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_attica__providermanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_attica__providermanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_attica__providermanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_attica__providermanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_attica__providermanager_dynamic_property_names\n");
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

QBindingStorage* k_attica__providermanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_attica__providermanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_attica__providermanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_attica__providermanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_attica__providermanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_attica__providermanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_attica__providermanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_attica__providermanager_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_attica__providermanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_attica__providermanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_attica__providermanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_attica__providermanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_attica__providermanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_attica__providermanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_attica__providermanager_event(void* self, void* event) {
    return Attica__ProviderManager_Event((Attica__ProviderManager*)self, (QEvent*)event);
}

bool k_attica__providermanager_qbase_event(void* self, void* event) {
    return Attica__ProviderManager_QBaseEvent((Attica__ProviderManager*)self, (QEvent*)event);
}

void k_attica__providermanager_on_event(void* self, bool (*callback)(void*, void*)) {
    Attica__ProviderManager_OnEvent((Attica__ProviderManager*)self, (intptr_t)callback);
}

bool k_attica__providermanager_event_filter(void* self, void* watched, void* event) {
    return Attica__ProviderManager_EventFilter((Attica__ProviderManager*)self, (QObject*)watched, (QEvent*)event);
}

bool k_attica__providermanager_qbase_event_filter(void* self, void* watched, void* event) {
    return Attica__ProviderManager_QBaseEventFilter((Attica__ProviderManager*)self, (QObject*)watched, (QEvent*)event);
}

void k_attica__providermanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Attica__ProviderManager_OnEventFilter((Attica__ProviderManager*)self, (intptr_t)callback);
}

void k_attica__providermanager_timer_event(void* self, void* event) {
    Attica__ProviderManager_TimerEvent((Attica__ProviderManager*)self, (QTimerEvent*)event);
}

void k_attica__providermanager_qbase_timer_event(void* self, void* event) {
    Attica__ProviderManager_QBaseTimerEvent((Attica__ProviderManager*)self, (QTimerEvent*)event);
}

void k_attica__providermanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Attica__ProviderManager_OnTimerEvent((Attica__ProviderManager*)self, (intptr_t)callback);
}

void k_attica__providermanager_child_event(void* self, void* event) {
    Attica__ProviderManager_ChildEvent((Attica__ProviderManager*)self, (QChildEvent*)event);
}

void k_attica__providermanager_qbase_child_event(void* self, void* event) {
    Attica__ProviderManager_QBaseChildEvent((Attica__ProviderManager*)self, (QChildEvent*)event);
}

void k_attica__providermanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    Attica__ProviderManager_OnChildEvent((Attica__ProviderManager*)self, (intptr_t)callback);
}

void k_attica__providermanager_custom_event(void* self, void* event) {
    Attica__ProviderManager_CustomEvent((Attica__ProviderManager*)self, (QEvent*)event);
}

void k_attica__providermanager_qbase_custom_event(void* self, void* event) {
    Attica__ProviderManager_QBaseCustomEvent((Attica__ProviderManager*)self, (QEvent*)event);
}

void k_attica__providermanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Attica__ProviderManager_OnCustomEvent((Attica__ProviderManager*)self, (intptr_t)callback);
}

void k_attica__providermanager_connect_notify(void* self, void* signal) {
    Attica__ProviderManager_ConnectNotify((Attica__ProviderManager*)self, (QMetaMethod*)signal);
}

void k_attica__providermanager_qbase_connect_notify(void* self, void* signal) {
    Attica__ProviderManager_QBaseConnectNotify((Attica__ProviderManager*)self, (QMetaMethod*)signal);
}

void k_attica__providermanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Attica__ProviderManager_OnConnectNotify((Attica__ProviderManager*)self, (intptr_t)callback);
}

void k_attica__providermanager_disconnect_notify(void* self, void* signal) {
    Attica__ProviderManager_DisconnectNotify((Attica__ProviderManager*)self, (QMetaMethod*)signal);
}

void k_attica__providermanager_qbase_disconnect_notify(void* self, void* signal) {
    Attica__ProviderManager_QBaseDisconnectNotify((Attica__ProviderManager*)self, (QMetaMethod*)signal);
}

void k_attica__providermanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Attica__ProviderManager_OnDisconnectNotify((Attica__ProviderManager*)self, (intptr_t)callback);
}

QObject* k_attica__providermanager_sender(void* self) {
    return Attica__ProviderManager_Sender((Attica__ProviderManager*)self);
}

QObject* k_attica__providermanager_qbase_sender(void* self) {
    return Attica__ProviderManager_QBaseSender((Attica__ProviderManager*)self);
}

void k_attica__providermanager_on_sender(void* self, QObject* (*callback)()) {
    Attica__ProviderManager_OnSender((Attica__ProviderManager*)self, (intptr_t)callback);
}

int32_t k_attica__providermanager_sender_signal_index(void* self) {
    return Attica__ProviderManager_SenderSignalIndex((Attica__ProviderManager*)self);
}

int32_t k_attica__providermanager_qbase_sender_signal_index(void* self) {
    return Attica__ProviderManager_QBaseSenderSignalIndex((Attica__ProviderManager*)self);
}

void k_attica__providermanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Attica__ProviderManager_OnSenderSignalIndex((Attica__ProviderManager*)self, (intptr_t)callback);
}

int32_t k_attica__providermanager_receivers(void* self, const char* signal) {
    return Attica__ProviderManager_Receivers((Attica__ProviderManager*)self, signal);
}

int32_t k_attica__providermanager_qbase_receivers(void* self, const char* signal) {
    return Attica__ProviderManager_QBaseReceivers((Attica__ProviderManager*)self, signal);
}

void k_attica__providermanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Attica__ProviderManager_OnReceivers((Attica__ProviderManager*)self, (intptr_t)callback);
}

bool k_attica__providermanager_is_signal_connected(void* self, void* signal) {
    return Attica__ProviderManager_IsSignalConnected((Attica__ProviderManager*)self, (QMetaMethod*)signal);
}

bool k_attica__providermanager_qbase_is_signal_connected(void* self, void* signal) {
    return Attica__ProviderManager_QBaseIsSignalConnected((Attica__ProviderManager*)self, (QMetaMethod*)signal);
}

void k_attica__providermanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Attica__ProviderManager_OnIsSignalConnected((Attica__ProviderManager*)self, (intptr_t)callback);
}

void k_attica__providermanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_attica__providermanager_delete(void* self) {
    Attica__ProviderManager_Delete((Attica__ProviderManager*)(self));
}
