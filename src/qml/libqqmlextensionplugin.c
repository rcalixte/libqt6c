#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqqmlengine.hpp"
#include "libqqmlextensioninterface.hpp"
#include "../libqurl.hpp"
#include "libqqmlextensionplugin.hpp"
#include "libqqmlextensionplugin.h"

QQmlExtensionPlugin* q_qmlextensionplugin_new() {
    return QQmlExtensionPlugin_New();
}

QQmlExtensionPlugin* q_qmlextensionplugin_new2(void* parent) {
    return QQmlExtensionPlugin_New2((QObject*)parent);
}

QQmlExtensionInterface* q_qmlextensionplugin_as_q_qml_extension_interface(void* self) {
    return QQmlExtensionPlugin_AsQQmlExtensionInterface((QQmlExtensionPlugin*)self);
}

QQmlExtensionPlugin* q_qmlextensionplugin_from_q_qml_extension_interface(void* _qqmlextensioninterface) {
    return (QQmlExtensionPlugin*)QQmlExtensionPlugin_FromQQmlExtensionInterface((QQmlExtensionInterface*)_qqmlextensioninterface);
}

const QMetaObject* q_qmlextensionplugin_meta_object(void* self) {
    return QQmlExtensionPlugin_MetaObject((QQmlExtensionPlugin*)self);
}

void q_qmlextensionplugin_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlExtensionPlugin_OnMetaObject((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlextensionplugin_super_meta_object(void* self) {
    return QQmlExtensionPlugin_SuperMetaObject((QQmlExtensionPlugin*)self);
}

void* q_qmlextensionplugin_metacast(void* self, const char* param1) {
    return QQmlExtensionPlugin_Metacast((QQmlExtensionPlugin*)self, param1);
}

void q_qmlextensionplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlExtensionPlugin_OnMetacast((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void* q_qmlextensionplugin_super_metacast(void* self, const char* param1) {
    return QQmlExtensionPlugin_SuperMetacast((QQmlExtensionPlugin*)self, param1);
}

int32_t q_qmlextensionplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlExtensionPlugin_Metacall((QQmlExtensionPlugin*)self, param1, param2, param3);
}

void q_qmlextensionplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlExtensionPlugin_OnMetacall((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

int32_t q_qmlextensionplugin_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlExtensionPlugin_SuperMetacall((QQmlExtensionPlugin*)self, param1, param2, param3);
}

const char* q_qmlextensionplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_qmlextensionplugin_base_url(void* self) {
    return QQmlExtensionPlugin_BaseUrl((QQmlExtensionPlugin*)self);
}

void q_qmlextensionplugin_register_types(void* self, const char* uri) {
    QQmlExtensionPlugin_RegisterTypes((QQmlExtensionPlugin*)self, uri);
}

void q_qmlextensionplugin_on_register_types(void* self, void (*callback)(void*, const char*)) {
    QQmlExtensionPlugin_OnRegisterTypes((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_super_register_types(void* self, const char* uri) {
    QQmlExtensionPlugin_SuperRegisterTypes((QQmlExtensionPlugin*)self, uri);
}

void q_qmlextensionplugin_unregister_types(void* self) {
    QQmlExtensionPlugin_UnregisterTypes((QQmlExtensionPlugin*)self);
}

void q_qmlextensionplugin_on_unregister_types(void* self, void (*callback)()) {
    QQmlExtensionPlugin_OnUnregisterTypes((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_super_unregister_types(void* self) {
    QQmlExtensionPlugin_SuperUnregisterTypes((QQmlExtensionPlugin*)self);
}

void q_qmlextensionplugin_initialize_engine(void* self, void* engine, const char* uri) {
    QQmlExtensionPlugin_InitializeEngine((QQmlExtensionPlugin*)self, (QQmlEngine*)engine, uri);
}

void q_qmlextensionplugin_on_initialize_engine(void* self, void (*callback)(void*, void*, const char*)) {
    QQmlExtensionPlugin_OnInitializeEngine((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_super_initialize_engine(void* self, void* engine, const char* uri) {
    QQmlExtensionPlugin_SuperInitializeEngine((QQmlExtensionPlugin*)self, (QQmlEngine*)engine, uri);
}

const char* q_qmlextensionplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlextensionplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlextensionplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlextensionplugin_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlextensionplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlextensionplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlextensionplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlextensionplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlextensionplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlextensionplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlextensionplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlextensionplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlextensionplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlextensionplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlextensionplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlextensionplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlextensionplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlextensionplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlextensionplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlextensionplugin_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlextensionplugin_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlextensionplugin_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlextensionplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlextensionplugin_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlextensionplugin_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlextensionplugin_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlextensionplugin_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlextensionplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlextensionplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlextensionplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlextensionplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlextensionplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlextensionplugin_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_qmlextensionplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlextensionplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlextensionplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlextensionplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlextensionplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlextensionplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlextensionplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlextensionplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlextensionplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlextensionplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlextensionplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlextensionplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlextensionplugin_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlextensionplugin_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlextensionplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlextensionplugin_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlextensionplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlextensionplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_operator_assign(void* self, void* param1) {
    QQmlExtensionInterface_OperatorAssign(q_qmlextensionplugin_as_q_qml_extension_interface(self), (QQmlExtensionInterface*)param1);
}

bool q_qmlextensionplugin_event(void* self, void* event) {
    return QQmlExtensionPlugin_Event((QQmlExtensionPlugin*)self, (QEvent*)event);
}

bool q_qmlextensionplugin_super_event(void* self, void* event) {
    return QQmlExtensionPlugin_SuperEvent((QQmlExtensionPlugin*)self, (QEvent*)event);
}

void q_qmlextensionplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlExtensionPlugin_OnEvent((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

bool q_qmlextensionplugin_event_filter(void* self, void* watched, void* event) {
    return QQmlExtensionPlugin_EventFilter((QQmlExtensionPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlextensionplugin_super_event_filter(void* self, void* watched, void* event) {
    return QQmlExtensionPlugin_SuperEventFilter((QQmlExtensionPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlextensionplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlExtensionPlugin_OnEventFilter((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_timer_event(void* self, void* event) {
    QQmlExtensionPlugin_TimerEvent((QQmlExtensionPlugin*)self, (QTimerEvent*)event);
}

void q_qmlextensionplugin_super_timer_event(void* self, void* event) {
    QQmlExtensionPlugin_SuperTimerEvent((QQmlExtensionPlugin*)self, (QTimerEvent*)event);
}

void q_qmlextensionplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlExtensionPlugin_OnTimerEvent((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_child_event(void* self, void* event) {
    QQmlExtensionPlugin_ChildEvent((QQmlExtensionPlugin*)self, (QChildEvent*)event);
}

void q_qmlextensionplugin_super_child_event(void* self, void* event) {
    QQmlExtensionPlugin_SuperChildEvent((QQmlExtensionPlugin*)self, (QChildEvent*)event);
}

void q_qmlextensionplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlExtensionPlugin_OnChildEvent((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_custom_event(void* self, void* event) {
    QQmlExtensionPlugin_CustomEvent((QQmlExtensionPlugin*)self, (QEvent*)event);
}

void q_qmlextensionplugin_super_custom_event(void* self, void* event) {
    QQmlExtensionPlugin_SuperCustomEvent((QQmlExtensionPlugin*)self, (QEvent*)event);
}

void q_qmlextensionplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlExtensionPlugin_OnCustomEvent((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_connect_notify(void* self, void* signal) {
    QQmlExtensionPlugin_ConnectNotify((QQmlExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlextensionplugin_super_connect_notify(void* self, void* signal) {
    QQmlExtensionPlugin_SuperConnectNotify((QQmlExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlextensionplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlExtensionPlugin_OnConnectNotify((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_disconnect_notify(void* self, void* signal) {
    QQmlExtensionPlugin_DisconnectNotify((QQmlExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlextensionplugin_super_disconnect_notify(void* self, void* signal) {
    QQmlExtensionPlugin_SuperDisconnectNotify((QQmlExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlextensionplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlExtensionPlugin_OnDisconnectNotify((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

QObject* q_qmlextensionplugin_sender(void* self) {
    return QQmlExtensionPlugin_Sender((QQmlExtensionPlugin*)self);
}

QObject* q_qmlextensionplugin_super_sender(void* self) {
    return QQmlExtensionPlugin_SuperSender((QQmlExtensionPlugin*)self);
}

void q_qmlextensionplugin_on_sender(void* self, QObject* (*callback)()) {
    QQmlExtensionPlugin_OnSender((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

int32_t q_qmlextensionplugin_sender_signal_index(void* self) {
    return QQmlExtensionPlugin_SenderSignalIndex((QQmlExtensionPlugin*)self);
}

int32_t q_qmlextensionplugin_super_sender_signal_index(void* self) {
    return QQmlExtensionPlugin_SuperSenderSignalIndex((QQmlExtensionPlugin*)self);
}

void q_qmlextensionplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlExtensionPlugin_OnSenderSignalIndex((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

int32_t q_qmlextensionplugin_receivers(void* self, const char* signal) {
    return QQmlExtensionPlugin_Receivers((QQmlExtensionPlugin*)self, signal);
}

int32_t q_qmlextensionplugin_super_receivers(void* self, const char* signal) {
    return QQmlExtensionPlugin_SuperReceivers((QQmlExtensionPlugin*)self, signal);
}

void q_qmlextensionplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlExtensionPlugin_OnReceivers((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

bool q_qmlextensionplugin_is_signal_connected(void* self, void* signal) {
    return QQmlExtensionPlugin_IsSignalConnected((QQmlExtensionPlugin*)self, (QMetaMethod*)signal);
}

bool q_qmlextensionplugin_super_is_signal_connected(void* self, void* signal) {
    return QQmlExtensionPlugin_SuperIsSignalConnected((QQmlExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlextensionplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlExtensionPlugin_OnIsSignalConnected((QQmlExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlextensionplugin_delete(void* self) {
    QQmlExtensionPlugin_Delete((QQmlExtensionPlugin*)(self));
}

QQmlEngineExtensionPlugin* q_qmlengineextensionplugin_new() {
    return QQmlEngineExtensionPlugin_New();
}

QQmlEngineExtensionPlugin* q_qmlengineextensionplugin_new2(void* parent) {
    return QQmlEngineExtensionPlugin_New2((QObject*)parent);
}

QQmlEngineExtensionInterface* q_qmlengineextensionplugin_as_q_qml_engine_extension_interface(void* self) {
    return QQmlEngineExtensionPlugin_AsQQmlEngineExtensionInterface((QQmlEngineExtensionPlugin*)self);
}

QQmlEngineExtensionPlugin* q_qmlengineextensionplugin_from_q_qml_engine_extension_interface(void* _qqmlengineextensioninterface) {
    return (QQmlEngineExtensionPlugin*)QQmlEngineExtensionPlugin_FromQQmlEngineExtensionInterface((QQmlEngineExtensionInterface*)_qqmlengineextensioninterface);
}

const QMetaObject* q_qmlengineextensionplugin_meta_object(void* self) {
    return QQmlEngineExtensionPlugin_MetaObject((QQmlEngineExtensionPlugin*)self);
}

void q_qmlengineextensionplugin_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlEngineExtensionPlugin_OnMetaObject((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlengineextensionplugin_super_meta_object(void* self) {
    return QQmlEngineExtensionPlugin_SuperMetaObject((QQmlEngineExtensionPlugin*)self);
}

void* q_qmlengineextensionplugin_metacast(void* self, const char* param1) {
    return QQmlEngineExtensionPlugin_Metacast((QQmlEngineExtensionPlugin*)self, param1);
}

void q_qmlengineextensionplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlEngineExtensionPlugin_OnMetacast((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

void* q_qmlengineextensionplugin_super_metacast(void* self, const char* param1) {
    return QQmlEngineExtensionPlugin_SuperMetacast((QQmlEngineExtensionPlugin*)self, param1);
}

int32_t q_qmlengineextensionplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlEngineExtensionPlugin_Metacall((QQmlEngineExtensionPlugin*)self, param1, param2, param3);
}

void q_qmlengineextensionplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlEngineExtensionPlugin_OnMetacall((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

int32_t q_qmlengineextensionplugin_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlEngineExtensionPlugin_SuperMetacall((QQmlEngineExtensionPlugin*)self, param1, param2, param3);
}

const char* q_qmlengineextensionplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlengineextensionplugin_initialize_engine(void* self, void* engine, const char* uri) {
    QQmlEngineExtensionPlugin_InitializeEngine((QQmlEngineExtensionPlugin*)self, (QQmlEngine*)engine, uri);
}

void q_qmlengineextensionplugin_on_initialize_engine(void* self, void (*callback)(void*, void*, const char*)) {
    QQmlEngineExtensionPlugin_OnInitializeEngine((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlengineextensionplugin_super_initialize_engine(void* self, void* engine, const char* uri) {
    QQmlEngineExtensionPlugin_SuperInitializeEngine((QQmlEngineExtensionPlugin*)self, (QQmlEngine*)engine, uri);
}

const char* q_qmlengineextensionplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlengineextensionplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlengineextensionplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlengineextensionplugin_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlengineextensionplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlengineextensionplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlengineextensionplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlengineextensionplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlengineextensionplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlengineextensionplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlengineextensionplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlengineextensionplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlengineextensionplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlengineextensionplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlengineextensionplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlengineextensionplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlengineextensionplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlengineextensionplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlengineextensionplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlengineextensionplugin_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlengineextensionplugin_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlengineextensionplugin_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlengineextensionplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlengineextensionplugin_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlengineextensionplugin_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlengineextensionplugin_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlengineextensionplugin_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlengineextensionplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlengineextensionplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlengineextensionplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlengineextensionplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlengineextensionplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlengineextensionplugin_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_qmlengineextensionplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlengineextensionplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlengineextensionplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlengineextensionplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlengineextensionplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlengineextensionplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlengineextensionplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlengineextensionplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlengineextensionplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlengineextensionplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlengineextensionplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlengineextensionplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlengineextensionplugin_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlengineextensionplugin_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlengineextensionplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlengineextensionplugin_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlengineextensionplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlengineextensionplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_qmlengineextensionplugin_operator_assign(void* self, void* param1) {
    QQmlEngineExtensionInterface_OperatorAssign(q_qmlengineextensionplugin_as_q_qml_engine_extension_interface(self), (QQmlEngineExtensionInterface*)param1);
}

bool q_qmlengineextensionplugin_event(void* self, void* event) {
    return QQmlEngineExtensionPlugin_Event((QQmlEngineExtensionPlugin*)self, (QEvent*)event);
}

bool q_qmlengineextensionplugin_super_event(void* self, void* event) {
    return QQmlEngineExtensionPlugin_SuperEvent((QQmlEngineExtensionPlugin*)self, (QEvent*)event);
}

void q_qmlengineextensionplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlEngineExtensionPlugin_OnEvent((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

bool q_qmlengineextensionplugin_event_filter(void* self, void* watched, void* event) {
    return QQmlEngineExtensionPlugin_EventFilter((QQmlEngineExtensionPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlengineextensionplugin_super_event_filter(void* self, void* watched, void* event) {
    return QQmlEngineExtensionPlugin_SuperEventFilter((QQmlEngineExtensionPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlengineextensionplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlEngineExtensionPlugin_OnEventFilter((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlengineextensionplugin_timer_event(void* self, void* event) {
    QQmlEngineExtensionPlugin_TimerEvent((QQmlEngineExtensionPlugin*)self, (QTimerEvent*)event);
}

void q_qmlengineextensionplugin_super_timer_event(void* self, void* event) {
    QQmlEngineExtensionPlugin_SuperTimerEvent((QQmlEngineExtensionPlugin*)self, (QTimerEvent*)event);
}

void q_qmlengineextensionplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlEngineExtensionPlugin_OnTimerEvent((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlengineextensionplugin_child_event(void* self, void* event) {
    QQmlEngineExtensionPlugin_ChildEvent((QQmlEngineExtensionPlugin*)self, (QChildEvent*)event);
}

void q_qmlengineextensionplugin_super_child_event(void* self, void* event) {
    QQmlEngineExtensionPlugin_SuperChildEvent((QQmlEngineExtensionPlugin*)self, (QChildEvent*)event);
}

void q_qmlengineextensionplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlEngineExtensionPlugin_OnChildEvent((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlengineextensionplugin_custom_event(void* self, void* event) {
    QQmlEngineExtensionPlugin_CustomEvent((QQmlEngineExtensionPlugin*)self, (QEvent*)event);
}

void q_qmlengineextensionplugin_super_custom_event(void* self, void* event) {
    QQmlEngineExtensionPlugin_SuperCustomEvent((QQmlEngineExtensionPlugin*)self, (QEvent*)event);
}

void q_qmlengineextensionplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlEngineExtensionPlugin_OnCustomEvent((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlengineextensionplugin_connect_notify(void* self, void* signal) {
    QQmlEngineExtensionPlugin_ConnectNotify((QQmlEngineExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlengineextensionplugin_super_connect_notify(void* self, void* signal) {
    QQmlEngineExtensionPlugin_SuperConnectNotify((QQmlEngineExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlengineextensionplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlEngineExtensionPlugin_OnConnectNotify((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlengineextensionplugin_disconnect_notify(void* self, void* signal) {
    QQmlEngineExtensionPlugin_DisconnectNotify((QQmlEngineExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlengineextensionplugin_super_disconnect_notify(void* self, void* signal) {
    QQmlEngineExtensionPlugin_SuperDisconnectNotify((QQmlEngineExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlengineextensionplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlEngineExtensionPlugin_OnDisconnectNotify((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

QObject* q_qmlengineextensionplugin_sender(void* self) {
    return QQmlEngineExtensionPlugin_Sender((QQmlEngineExtensionPlugin*)self);
}

QObject* q_qmlengineextensionplugin_super_sender(void* self) {
    return QQmlEngineExtensionPlugin_SuperSender((QQmlEngineExtensionPlugin*)self);
}

void q_qmlengineextensionplugin_on_sender(void* self, QObject* (*callback)()) {
    QQmlEngineExtensionPlugin_OnSender((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

int32_t q_qmlengineextensionplugin_sender_signal_index(void* self) {
    return QQmlEngineExtensionPlugin_SenderSignalIndex((QQmlEngineExtensionPlugin*)self);
}

int32_t q_qmlengineextensionplugin_super_sender_signal_index(void* self) {
    return QQmlEngineExtensionPlugin_SuperSenderSignalIndex((QQmlEngineExtensionPlugin*)self);
}

void q_qmlengineextensionplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlEngineExtensionPlugin_OnSenderSignalIndex((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

int32_t q_qmlengineextensionplugin_receivers(void* self, const char* signal) {
    return QQmlEngineExtensionPlugin_Receivers((QQmlEngineExtensionPlugin*)self, signal);
}

int32_t q_qmlengineextensionplugin_super_receivers(void* self, const char* signal) {
    return QQmlEngineExtensionPlugin_SuperReceivers((QQmlEngineExtensionPlugin*)self, signal);
}

void q_qmlengineextensionplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlEngineExtensionPlugin_OnReceivers((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

bool q_qmlengineextensionplugin_is_signal_connected(void* self, void* signal) {
    return QQmlEngineExtensionPlugin_IsSignalConnected((QQmlEngineExtensionPlugin*)self, (QMetaMethod*)signal);
}

bool q_qmlengineextensionplugin_super_is_signal_connected(void* self, void* signal) {
    return QQmlEngineExtensionPlugin_SuperIsSignalConnected((QQmlEngineExtensionPlugin*)self, (QMetaMethod*)signal);
}

void q_qmlengineextensionplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlEngineExtensionPlugin_OnIsSignalConnected((QQmlEngineExtensionPlugin*)self, (intptr_t)callback);
}

void q_qmlengineextensionplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlengineextensionplugin_delete(void* self) {
    QQmlEngineExtensionPlugin_Delete((QQmlEngineExtensionPlugin*)(self));
}
