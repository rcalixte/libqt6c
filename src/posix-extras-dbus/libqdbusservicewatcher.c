#include "../libqcoreevent.hpp"
#include "libqdbusconnection.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqdbusservicewatcher.hpp"
#include "libqdbusservicewatcher.h"

QDBusServiceWatcher* q_dbusservicewatcher_new() {
    return QDBusServiceWatcher_new();
}

QDBusServiceWatcher* q_dbusservicewatcher_new2(const char* service, void* connection) {
    return QDBusServiceWatcher_new2(qstring(service), (QDBusConnection*)connection);
}

QDBusServiceWatcher* q_dbusservicewatcher_new3(void* parent) {
    return QDBusServiceWatcher_new3((QObject*)parent);
}

QDBusServiceWatcher* q_dbusservicewatcher_new4(const char* service, void* connection, int32_t watchMode) {
    return QDBusServiceWatcher_new4(qstring(service), (QDBusConnection*)connection, watchMode);
}

QDBusServiceWatcher* q_dbusservicewatcher_new5(const char* service, void* connection, int32_t watchMode, void* parent) {
    return QDBusServiceWatcher_new5(qstring(service), (QDBusConnection*)connection, watchMode, (QObject*)parent);
}

const QMetaObject* q_dbusservicewatcher_meta_object(void* self) {
    return QDBusServiceWatcher_MetaObject((QDBusServiceWatcher*)self);
}

void q_dbusservicewatcher_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDBusServiceWatcher_OnMetaObject((QDBusServiceWatcher*)self, (intptr_t)callback);
}

const QMetaObject* q_dbusservicewatcher_qbase_meta_object(void* self) {
    return QDBusServiceWatcher_QBaseMetaObject((QDBusServiceWatcher*)self);
}

void* q_dbusservicewatcher_metacast(void* self, const char* param1) {
    return QDBusServiceWatcher_Metacast((QDBusServiceWatcher*)self, param1);
}

void q_dbusservicewatcher_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDBusServiceWatcher_OnMetacast((QDBusServiceWatcher*)self, (intptr_t)callback);
}

void* q_dbusservicewatcher_qbase_metacast(void* self, const char* param1) {
    return QDBusServiceWatcher_QBaseMetacast((QDBusServiceWatcher*)self, param1);
}

int32_t q_dbusservicewatcher_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusServiceWatcher_Metacall((QDBusServiceWatcher*)self, param1, param2, param3);
}

void q_dbusservicewatcher_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDBusServiceWatcher_OnMetacall((QDBusServiceWatcher*)self, (intptr_t)callback);
}

int32_t q_dbusservicewatcher_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDBusServiceWatcher_QBaseMetacall((QDBusServiceWatcher*)self, param1, param2, param3);
}

const char* q_dbusservicewatcher_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_dbusservicewatcher_watched_services(void* self) {
    libqt_list _arr = QDBusServiceWatcher_WatchedServices((QDBusServiceWatcher*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dbusservicewatcher_watched_services\n");
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

void q_dbusservicewatcher_set_watched_services(void* self, const char* services[static 1]) {
    size_t services_len = libqt_strv_length(services);
    libqt_string* services_qstr = (libqt_string*)malloc(services_len * sizeof(libqt_string));
    if (services_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dbusservicewatcher_set_watched_services\n");
        abort();
    }
    for (size_t i = 0; i < services_len; ++i) {
        services_qstr[i] = qstring(services[i]);
    }
    libqt_list services_list = qlist(services_qstr, services_len);
    QDBusServiceWatcher_SetWatchedServices((QDBusServiceWatcher*)self, services_list);
    free(services_qstr);
}

void q_dbusservicewatcher_add_watched_service(void* self, const char* newService) {
    QDBusServiceWatcher_AddWatchedService((QDBusServiceWatcher*)self, qstring(newService));
}

bool q_dbusservicewatcher_remove_watched_service(void* self, const char* service) {
    return QDBusServiceWatcher_RemoveWatchedService((QDBusServiceWatcher*)self, qstring(service));
}

int32_t q_dbusservicewatcher_watch_mode(void* self) {
    return QDBusServiceWatcher_WatchMode((QDBusServiceWatcher*)self);
}

void q_dbusservicewatcher_set_watch_mode(void* self, int32_t mode) {
    QDBusServiceWatcher_SetWatchMode((QDBusServiceWatcher*)self, mode);
}

QDBusConnection* q_dbusservicewatcher_connection(void* self) {
    return QDBusServiceWatcher_Connection((QDBusServiceWatcher*)self);
}

void q_dbusservicewatcher_set_connection(void* self, void* connection) {
    QDBusServiceWatcher_SetConnection((QDBusServiceWatcher*)self, (QDBusConnection*)connection);
}

void q_dbusservicewatcher_service_registered(void* self, const char* service) {
    QDBusServiceWatcher_ServiceRegistered((QDBusServiceWatcher*)self, qstring(service));
}

void q_dbusservicewatcher_on_service_registered(void* self, void (*callback)(void*, const char*)) {
    QDBusServiceWatcher_Connect_ServiceRegistered((QDBusServiceWatcher*)self, (intptr_t)callback);
}

void q_dbusservicewatcher_service_unregistered(void* self, const char* service) {
    QDBusServiceWatcher_ServiceUnregistered((QDBusServiceWatcher*)self, qstring(service));
}

void q_dbusservicewatcher_on_service_unregistered(void* self, void (*callback)(void*, const char*)) {
    QDBusServiceWatcher_Connect_ServiceUnregistered((QDBusServiceWatcher*)self, (intptr_t)callback);
}

void q_dbusservicewatcher_service_owner_changed(void* self, const char* service, const char* oldOwner, const char* newOwner) {
    QDBusServiceWatcher_ServiceOwnerChanged((QDBusServiceWatcher*)self, qstring(service), qstring(oldOwner), qstring(newOwner));
}

void q_dbusservicewatcher_on_service_owner_changed(void* self, void (*callback)(void*, const char*, const char*, const char*)) {
    QDBusServiceWatcher_Connect_ServiceOwnerChanged((QDBusServiceWatcher*)self, (intptr_t)callback);
}

const char* q_dbusservicewatcher_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusservicewatcher_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusservicewatcher_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbusservicewatcher_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dbusservicewatcher_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dbusservicewatcher_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dbusservicewatcher_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dbusservicewatcher_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dbusservicewatcher_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dbusservicewatcher_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dbusservicewatcher_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dbusservicewatcher_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dbusservicewatcher_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dbusservicewatcher_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dbusservicewatcher_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dbusservicewatcher_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dbusservicewatcher_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_dbusservicewatcher_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dbusservicewatcher_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dbusservicewatcher_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dbusservicewatcher_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dbusservicewatcher_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dbusservicewatcher_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_dbusservicewatcher_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dbusservicewatcher_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dbusservicewatcher_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dbusservicewatcher_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dbusservicewatcher_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dbusservicewatcher_dynamic_property_names\n");
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

QBindingStorage* q_dbusservicewatcher_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dbusservicewatcher_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dbusservicewatcher_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dbusservicewatcher_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dbusservicewatcher_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dbusservicewatcher_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dbusservicewatcher_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_dbusservicewatcher_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dbusservicewatcher_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dbusservicewatcher_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dbusservicewatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_dbusservicewatcher_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dbusservicewatcher_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_dbusservicewatcher_event(void* self, void* event) {
    return QDBusServiceWatcher_Event((QDBusServiceWatcher*)self, (QEvent*)event);
}

bool q_dbusservicewatcher_qbase_event(void* self, void* event) {
    return QDBusServiceWatcher_QBaseEvent((QDBusServiceWatcher*)self, (QEvent*)event);
}

void q_dbusservicewatcher_on_event(void* self, bool (*callback)(void*, void*)) {
    QDBusServiceWatcher_OnEvent((QDBusServiceWatcher*)self, (intptr_t)callback);
}

bool q_dbusservicewatcher_event_filter(void* self, void* watched, void* event) {
    return QDBusServiceWatcher_EventFilter((QDBusServiceWatcher*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dbusservicewatcher_qbase_event_filter(void* self, void* watched, void* event) {
    return QDBusServiceWatcher_QBaseEventFilter((QDBusServiceWatcher*)self, (QObject*)watched, (QEvent*)event);
}

void q_dbusservicewatcher_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDBusServiceWatcher_OnEventFilter((QDBusServiceWatcher*)self, (intptr_t)callback);
}

void q_dbusservicewatcher_timer_event(void* self, void* event) {
    QDBusServiceWatcher_TimerEvent((QDBusServiceWatcher*)self, (QTimerEvent*)event);
}

void q_dbusservicewatcher_qbase_timer_event(void* self, void* event) {
    QDBusServiceWatcher_QBaseTimerEvent((QDBusServiceWatcher*)self, (QTimerEvent*)event);
}

void q_dbusservicewatcher_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDBusServiceWatcher_OnTimerEvent((QDBusServiceWatcher*)self, (intptr_t)callback);
}

void q_dbusservicewatcher_child_event(void* self, void* event) {
    QDBusServiceWatcher_ChildEvent((QDBusServiceWatcher*)self, (QChildEvent*)event);
}

void q_dbusservicewatcher_qbase_child_event(void* self, void* event) {
    QDBusServiceWatcher_QBaseChildEvent((QDBusServiceWatcher*)self, (QChildEvent*)event);
}

void q_dbusservicewatcher_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDBusServiceWatcher_OnChildEvent((QDBusServiceWatcher*)self, (intptr_t)callback);
}

void q_dbusservicewatcher_custom_event(void* self, void* event) {
    QDBusServiceWatcher_CustomEvent((QDBusServiceWatcher*)self, (QEvent*)event);
}

void q_dbusservicewatcher_qbase_custom_event(void* self, void* event) {
    QDBusServiceWatcher_QBaseCustomEvent((QDBusServiceWatcher*)self, (QEvent*)event);
}

void q_dbusservicewatcher_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDBusServiceWatcher_OnCustomEvent((QDBusServiceWatcher*)self, (intptr_t)callback);
}

void q_dbusservicewatcher_connect_notify(void* self, void* signal) {
    QDBusServiceWatcher_ConnectNotify((QDBusServiceWatcher*)self, (QMetaMethod*)signal);
}

void q_dbusservicewatcher_qbase_connect_notify(void* self, void* signal) {
    QDBusServiceWatcher_QBaseConnectNotify((QDBusServiceWatcher*)self, (QMetaMethod*)signal);
}

void q_dbusservicewatcher_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusServiceWatcher_OnConnectNotify((QDBusServiceWatcher*)self, (intptr_t)callback);
}

void q_dbusservicewatcher_disconnect_notify(void* self, void* signal) {
    QDBusServiceWatcher_DisconnectNotify((QDBusServiceWatcher*)self, (QMetaMethod*)signal);
}

void q_dbusservicewatcher_qbase_disconnect_notify(void* self, void* signal) {
    QDBusServiceWatcher_QBaseDisconnectNotify((QDBusServiceWatcher*)self, (QMetaMethod*)signal);
}

void q_dbusservicewatcher_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDBusServiceWatcher_OnDisconnectNotify((QDBusServiceWatcher*)self, (intptr_t)callback);
}

QObject* q_dbusservicewatcher_sender(void* self) {
    return QDBusServiceWatcher_Sender((QDBusServiceWatcher*)self);
}

QObject* q_dbusservicewatcher_qbase_sender(void* self) {
    return QDBusServiceWatcher_QBaseSender((QDBusServiceWatcher*)self);
}

void q_dbusservicewatcher_on_sender(void* self, QObject* (*callback)()) {
    QDBusServiceWatcher_OnSender((QDBusServiceWatcher*)self, (intptr_t)callback);
}

int32_t q_dbusservicewatcher_sender_signal_index(void* self) {
    return QDBusServiceWatcher_SenderSignalIndex((QDBusServiceWatcher*)self);
}

int32_t q_dbusservicewatcher_qbase_sender_signal_index(void* self) {
    return QDBusServiceWatcher_QBaseSenderSignalIndex((QDBusServiceWatcher*)self);
}

void q_dbusservicewatcher_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDBusServiceWatcher_OnSenderSignalIndex((QDBusServiceWatcher*)self, (intptr_t)callback);
}

int32_t q_dbusservicewatcher_receivers(void* self, const char* signal) {
    return QDBusServiceWatcher_Receivers((QDBusServiceWatcher*)self, signal);
}

int32_t q_dbusservicewatcher_qbase_receivers(void* self, const char* signal) {
    return QDBusServiceWatcher_QBaseReceivers((QDBusServiceWatcher*)self, signal);
}

void q_dbusservicewatcher_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDBusServiceWatcher_OnReceivers((QDBusServiceWatcher*)self, (intptr_t)callback);
}

bool q_dbusservicewatcher_is_signal_connected(void* self, void* signal) {
    return QDBusServiceWatcher_IsSignalConnected((QDBusServiceWatcher*)self, (QMetaMethod*)signal);
}

bool q_dbusservicewatcher_qbase_is_signal_connected(void* self, void* signal) {
    return QDBusServiceWatcher_QBaseIsSignalConnected((QDBusServiceWatcher*)self, (QMetaMethod*)signal);
}

void q_dbusservicewatcher_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDBusServiceWatcher_OnIsSignalConnected((QDBusServiceWatcher*)self, (intptr_t)callback);
}

void q_dbusservicewatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dbusservicewatcher_delete(void* self) {
    QDBusServiceWatcher_Delete((QDBusServiceWatcher*)(self));
}
