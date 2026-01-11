#include "libkpluginmetadata.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkpluginfactory.hpp"
#include "libkpluginfactory.h"

KPluginFactory* k_pluginfactory_new() {
    return KPluginFactory_new();
}

const QMetaObject* k_pluginfactory_meta_object(void* self) {
    return KPluginFactory_MetaObject((KPluginFactory*)self);
}

void* k_pluginfactory_metacast(void* self, const char* param1) {
    return KPluginFactory_Metacast((KPluginFactory*)self, param1);
}

int32_t k_pluginfactory_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPluginFactory_Metacall((KPluginFactory*)self, param1, param2, param3);
}

void k_pluginfactory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPluginFactory_OnMetacall((KPluginFactory*)self, (intptr_t)callback);
}

int32_t k_pluginfactory_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPluginFactory_QBaseMetacall((KPluginFactory*)self, param1, param2, param3);
}

const char* k_pluginfactory_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KPluginMetaData* k_pluginfactory_meta_data(void* self) {
    return KPluginFactory_MetaData((KPluginFactory*)self);
}

void k_pluginfactory_set_meta_data(void* self, void* metaData) {
    KPluginFactory_SetMetaData((KPluginFactory*)self, (KPluginMetaData*)metaData);
}

QObject* k_pluginfactory_create(void* self, const char* iface, void* parentWidget, void* parent, libqt_list args) {
    return KPluginFactory_Create((KPluginFactory*)self, iface, (QWidget*)parentWidget, (QObject*)parent, args);
}

void k_pluginfactory_on_create(void* self, QObject* (*callback)(void*, const char*, void*, void*, QVariant**)) {
    KPluginFactory_OnCreate((KPluginFactory*)self, (intptr_t)callback);
}

QObject* k_pluginfactory_qbase_create(void* self, const char* iface, void* parentWidget, void* parent, libqt_list args) {
    return KPluginFactory_QBaseCreate((KPluginFactory*)self, iface, (QWidget*)parentWidget, (QObject*)parent, args);
}

const char* k_pluginfactory_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginfactory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginfactory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluginfactory_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pluginfactory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pluginfactory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pluginfactory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pluginfactory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pluginfactory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pluginfactory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pluginfactory_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pluginfactory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_pluginfactory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pluginfactory_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pluginfactory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pluginfactory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_pluginfactory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pluginfactory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pluginfactory_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pluginfactory_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pluginfactory_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pluginfactory_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_pluginfactory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pluginfactory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pluginfactory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pluginfactory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pluginfactory_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pluginfactory_dynamic_property_names");
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

QBindingStorage* k_pluginfactory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pluginfactory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pluginfactory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pluginfactory_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_pluginfactory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_pluginfactory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pluginfactory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_pluginfactory_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_pluginfactory_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_pluginfactory_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_pluginfactory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_pluginfactory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pluginfactory_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_pluginfactory_event(void* self, void* event) {
    return KPluginFactory_Event((KPluginFactory*)self, (QEvent*)event);
}

bool k_pluginfactory_qbase_event(void* self, void* event) {
    return KPluginFactory_QBaseEvent((KPluginFactory*)self, (QEvent*)event);
}

void k_pluginfactory_on_event(void* self, bool (*callback)(void*, void*)) {
    KPluginFactory_OnEvent((KPluginFactory*)self, (intptr_t)callback);
}

bool k_pluginfactory_event_filter(void* self, void* watched, void* event) {
    return KPluginFactory_EventFilter((KPluginFactory*)self, (QObject*)watched, (QEvent*)event);
}

bool k_pluginfactory_qbase_event_filter(void* self, void* watched, void* event) {
    return KPluginFactory_QBaseEventFilter((KPluginFactory*)self, (QObject*)watched, (QEvent*)event);
}

void k_pluginfactory_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPluginFactory_OnEventFilter((KPluginFactory*)self, (intptr_t)callback);
}

void k_pluginfactory_timer_event(void* self, void* event) {
    KPluginFactory_TimerEvent((KPluginFactory*)self, (QTimerEvent*)event);
}

void k_pluginfactory_qbase_timer_event(void* self, void* event) {
    KPluginFactory_QBaseTimerEvent((KPluginFactory*)self, (QTimerEvent*)event);
}

void k_pluginfactory_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPluginFactory_OnTimerEvent((KPluginFactory*)self, (intptr_t)callback);
}

void k_pluginfactory_child_event(void* self, void* event) {
    KPluginFactory_ChildEvent((KPluginFactory*)self, (QChildEvent*)event);
}

void k_pluginfactory_qbase_child_event(void* self, void* event) {
    KPluginFactory_QBaseChildEvent((KPluginFactory*)self, (QChildEvent*)event);
}

void k_pluginfactory_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPluginFactory_OnChildEvent((KPluginFactory*)self, (intptr_t)callback);
}

void k_pluginfactory_custom_event(void* self, void* event) {
    KPluginFactory_CustomEvent((KPluginFactory*)self, (QEvent*)event);
}

void k_pluginfactory_qbase_custom_event(void* self, void* event) {
    KPluginFactory_QBaseCustomEvent((KPluginFactory*)self, (QEvent*)event);
}

void k_pluginfactory_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPluginFactory_OnCustomEvent((KPluginFactory*)self, (intptr_t)callback);
}

void k_pluginfactory_connect_notify(void* self, void* signal) {
    KPluginFactory_ConnectNotify((KPluginFactory*)self, (QMetaMethod*)signal);
}

void k_pluginfactory_qbase_connect_notify(void* self, void* signal) {
    KPluginFactory_QBaseConnectNotify((KPluginFactory*)self, (QMetaMethod*)signal);
}

void k_pluginfactory_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPluginFactory_OnConnectNotify((KPluginFactory*)self, (intptr_t)callback);
}

void k_pluginfactory_disconnect_notify(void* self, void* signal) {
    KPluginFactory_DisconnectNotify((KPluginFactory*)self, (QMetaMethod*)signal);
}

void k_pluginfactory_qbase_disconnect_notify(void* self, void* signal) {
    KPluginFactory_QBaseDisconnectNotify((KPluginFactory*)self, (QMetaMethod*)signal);
}

void k_pluginfactory_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPluginFactory_OnDisconnectNotify((KPluginFactory*)self, (intptr_t)callback);
}

QObject* k_pluginfactory_sender(void* self) {
    return KPluginFactory_Sender((KPluginFactory*)self);
}

QObject* k_pluginfactory_qbase_sender(void* self) {
    return KPluginFactory_QBaseSender((KPluginFactory*)self);
}

void k_pluginfactory_on_sender(void* self, QObject* (*callback)()) {
    KPluginFactory_OnSender((KPluginFactory*)self, (intptr_t)callback);
}

int32_t k_pluginfactory_sender_signal_index(void* self) {
    return KPluginFactory_SenderSignalIndex((KPluginFactory*)self);
}

int32_t k_pluginfactory_qbase_sender_signal_index(void* self) {
    return KPluginFactory_QBaseSenderSignalIndex((KPluginFactory*)self);
}

void k_pluginfactory_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPluginFactory_OnSenderSignalIndex((KPluginFactory*)self, (intptr_t)callback);
}

int32_t k_pluginfactory_receivers(void* self, const char* signal) {
    return KPluginFactory_Receivers((KPluginFactory*)self, signal);
}

int32_t k_pluginfactory_qbase_receivers(void* self, const char* signal) {
    return KPluginFactory_QBaseReceivers((KPluginFactory*)self, signal);
}

void k_pluginfactory_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPluginFactory_OnReceivers((KPluginFactory*)self, (intptr_t)callback);
}

bool k_pluginfactory_is_signal_connected(void* self, void* signal) {
    return KPluginFactory_IsSignalConnected((KPluginFactory*)self, (QMetaMethod*)signal);
}

bool k_pluginfactory_qbase_is_signal_connected(void* self, void* signal) {
    return KPluginFactory_QBaseIsSignalConnected((KPluginFactory*)self, (QMetaMethod*)signal);
}

void k_pluginfactory_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPluginFactory_OnIsSignalConnected((KPluginFactory*)self, (intptr_t)callback);
}

void k_pluginfactory_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pluginfactory_delete(void* self) {
    KPluginFactory_Delete((KPluginFactory*)(self));
}
