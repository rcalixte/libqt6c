#include "libqcoreevent.hpp"
#include "libqjsonobject.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqplugin.hpp"
#include "libqpluginloader.hpp"
#include "libqpluginloader.h"

QPluginLoader* q_pluginloader_new() {
    return QPluginLoader_new();
}

QPluginLoader* q_pluginloader_new2(const char* fileName) {
    return QPluginLoader_new2(qstring(fileName));
}

QPluginLoader* q_pluginloader_new3(void* parent) {
    return QPluginLoader_new3((QObject*)parent);
}

QPluginLoader* q_pluginloader_new4(const char* fileName, void* parent) {
    return QPluginLoader_new4(qstring(fileName), (QObject*)parent);
}

const QMetaObject* q_pluginloader_meta_object(void* self) {
    return QPluginLoader_MetaObject((QPluginLoader*)self);
}

void* q_pluginloader_metacast(void* self, const char* param1) {
    return QPluginLoader_Metacast((QPluginLoader*)self, param1);
}

int32_t q_pluginloader_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPluginLoader_Metacall((QPluginLoader*)self, param1, param2, param3);
}

void q_pluginloader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPluginLoader_OnMetacall((QPluginLoader*)self, (intptr_t)callback);
}

int32_t q_pluginloader_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPluginLoader_QBaseMetacall((QPluginLoader*)self, param1, param2, param3);
}

const char* q_pluginloader_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_pluginloader_instance(void* self) {
    return QPluginLoader_Instance((QPluginLoader*)self);
}

QJsonObject* q_pluginloader_meta_data(void* self) {
    return QPluginLoader_MetaData((QPluginLoader*)self);
}

libqt_list /* of QObject* */ q_pluginloader_static_instances() {
    libqt_list _arr = QPluginLoader_StaticInstances();
    return _arr;
}

libqt_list /* of QStaticPlugin* */ q_pluginloader_static_plugins() {
    libqt_list _arr = QPluginLoader_StaticPlugins();
    return _arr;
}

bool q_pluginloader_load(void* self) {
    return QPluginLoader_Load((QPluginLoader*)self);
}

bool q_pluginloader_unload(void* self) {
    return QPluginLoader_Unload((QPluginLoader*)self);
}

bool q_pluginloader_is_loaded(void* self) {
    return QPluginLoader_IsLoaded((QPluginLoader*)self);
}

void q_pluginloader_set_file_name(void* self, const char* fileName) {
    QPluginLoader_SetFileName((QPluginLoader*)self, qstring(fileName));
}

const char* q_pluginloader_file_name(void* self) {
    libqt_string _str = QPluginLoader_FileName((QPluginLoader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pluginloader_error_string(void* self) {
    libqt_string _str = QPluginLoader_ErrorString((QPluginLoader*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pluginloader_set_load_hints(void* self, int32_t loadHints) {
    QPluginLoader_SetLoadHints((QPluginLoader*)self, loadHints);
}

int32_t q_pluginloader_load_hints(void* self) {
    return QPluginLoader_LoadHints((QPluginLoader*)self);
}

const char* q_pluginloader_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pluginloader_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pluginloader_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pluginloader_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pluginloader_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pluginloader_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pluginloader_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pluginloader_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pluginloader_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pluginloader_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pluginloader_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pluginloader_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pluginloader_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pluginloader_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pluginloader_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pluginloader_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pluginloader_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pluginloader_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pluginloader_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pluginloader_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pluginloader_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pluginloader_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pluginloader_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pluginloader_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pluginloader_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pluginloader_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pluginloader_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pluginloader_dynamic_property_names\n");
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

QBindingStorage* q_pluginloader_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pluginloader_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pluginloader_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pluginloader_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pluginloader_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pluginloader_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pluginloader_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pluginloader_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pluginloader_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pluginloader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pluginloader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_pluginloader_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pluginloader_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_pluginloader_event(void* self, void* event) {
    return QPluginLoader_Event((QPluginLoader*)self, (QEvent*)event);
}

bool q_pluginloader_qbase_event(void* self, void* event) {
    return QPluginLoader_QBaseEvent((QPluginLoader*)self, (QEvent*)event);
}

void q_pluginloader_on_event(void* self, bool (*callback)(void*, void*)) {
    QPluginLoader_OnEvent((QPluginLoader*)self, (intptr_t)callback);
}

bool q_pluginloader_event_filter(void* self, void* watched, void* event) {
    return QPluginLoader_EventFilter((QPluginLoader*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pluginloader_qbase_event_filter(void* self, void* watched, void* event) {
    return QPluginLoader_QBaseEventFilter((QPluginLoader*)self, (QObject*)watched, (QEvent*)event);
}

void q_pluginloader_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPluginLoader_OnEventFilter((QPluginLoader*)self, (intptr_t)callback);
}

void q_pluginloader_timer_event(void* self, void* event) {
    QPluginLoader_TimerEvent((QPluginLoader*)self, (QTimerEvent*)event);
}

void q_pluginloader_qbase_timer_event(void* self, void* event) {
    QPluginLoader_QBaseTimerEvent((QPluginLoader*)self, (QTimerEvent*)event);
}

void q_pluginloader_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPluginLoader_OnTimerEvent((QPluginLoader*)self, (intptr_t)callback);
}

void q_pluginloader_child_event(void* self, void* event) {
    QPluginLoader_ChildEvent((QPluginLoader*)self, (QChildEvent*)event);
}

void q_pluginloader_qbase_child_event(void* self, void* event) {
    QPluginLoader_QBaseChildEvent((QPluginLoader*)self, (QChildEvent*)event);
}

void q_pluginloader_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPluginLoader_OnChildEvent((QPluginLoader*)self, (intptr_t)callback);
}

void q_pluginloader_custom_event(void* self, void* event) {
    QPluginLoader_CustomEvent((QPluginLoader*)self, (QEvent*)event);
}

void q_pluginloader_qbase_custom_event(void* self, void* event) {
    QPluginLoader_QBaseCustomEvent((QPluginLoader*)self, (QEvent*)event);
}

void q_pluginloader_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPluginLoader_OnCustomEvent((QPluginLoader*)self, (intptr_t)callback);
}

void q_pluginloader_connect_notify(void* self, void* signal) {
    QPluginLoader_ConnectNotify((QPluginLoader*)self, (QMetaMethod*)signal);
}

void q_pluginloader_qbase_connect_notify(void* self, void* signal) {
    QPluginLoader_QBaseConnectNotify((QPluginLoader*)self, (QMetaMethod*)signal);
}

void q_pluginloader_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPluginLoader_OnConnectNotify((QPluginLoader*)self, (intptr_t)callback);
}

void q_pluginloader_disconnect_notify(void* self, void* signal) {
    QPluginLoader_DisconnectNotify((QPluginLoader*)self, (QMetaMethod*)signal);
}

void q_pluginloader_qbase_disconnect_notify(void* self, void* signal) {
    QPluginLoader_QBaseDisconnectNotify((QPluginLoader*)self, (QMetaMethod*)signal);
}

void q_pluginloader_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPluginLoader_OnDisconnectNotify((QPluginLoader*)self, (intptr_t)callback);
}

QObject* q_pluginloader_sender(void* self) {
    return QPluginLoader_Sender((QPluginLoader*)self);
}

QObject* q_pluginloader_qbase_sender(void* self) {
    return QPluginLoader_QBaseSender((QPluginLoader*)self);
}

void q_pluginloader_on_sender(void* self, QObject* (*callback)()) {
    QPluginLoader_OnSender((QPluginLoader*)self, (intptr_t)callback);
}

int32_t q_pluginloader_sender_signal_index(void* self) {
    return QPluginLoader_SenderSignalIndex((QPluginLoader*)self);
}

int32_t q_pluginloader_qbase_sender_signal_index(void* self) {
    return QPluginLoader_QBaseSenderSignalIndex((QPluginLoader*)self);
}

void q_pluginloader_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPluginLoader_OnSenderSignalIndex((QPluginLoader*)self, (intptr_t)callback);
}

int32_t q_pluginloader_receivers(void* self, const char* signal) {
    return QPluginLoader_Receivers((QPluginLoader*)self, signal);
}

int32_t q_pluginloader_qbase_receivers(void* self, const char* signal) {
    return QPluginLoader_QBaseReceivers((QPluginLoader*)self, signal);
}

void q_pluginloader_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPluginLoader_OnReceivers((QPluginLoader*)self, (intptr_t)callback);
}

bool q_pluginloader_is_signal_connected(void* self, void* signal) {
    return QPluginLoader_IsSignalConnected((QPluginLoader*)self, (QMetaMethod*)signal);
}

bool q_pluginloader_qbase_is_signal_connected(void* self, void* signal) {
    return QPluginLoader_QBaseIsSignalConnected((QPluginLoader*)self, (QMetaMethod*)signal);
}

void q_pluginloader_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPluginLoader_OnIsSignalConnected((QPluginLoader*)self, (intptr_t)callback);
}

void q_pluginloader_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pluginloader_delete(void* self) {
    QPluginLoader_Delete((QPluginLoader*)(self));
}
