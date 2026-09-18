#include "libplatformtheme.hpp"
#include "libunits.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libplatformpluginfactory.hpp"
#include "libplatformpluginfactory.h"

Kirigami__Platform__PlatformPluginFactory* k_irigami__platform__platformpluginfactory_new() {
    return Kirigami__Platform__PlatformPluginFactory_New();
}

Kirigami__Platform__PlatformPluginFactory* k_irigami__platform__platformpluginfactory_new2(void* parent) {
    return Kirigami__Platform__PlatformPluginFactory_New2((QObject*)parent);
}

const QMetaObject* k_irigami__platform__platformpluginfactory_meta_object(void* self) {
    return Kirigami__Platform__PlatformPluginFactory_MetaObject((Kirigami__Platform__PlatformPluginFactory*)self);
}

void k_irigami__platform__platformpluginfactory_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Kirigami__Platform__PlatformPluginFactory_OnMetaObject((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

const QMetaObject* k_irigami__platform__platformpluginfactory_super_meta_object(void* self) {
    return Kirigami__Platform__PlatformPluginFactory_SuperMetaObject((Kirigami__Platform__PlatformPluginFactory*)self);
}

void* k_irigami__platform__platformpluginfactory_metacast(void* self, const char* param1) {
    return Kirigami__Platform__PlatformPluginFactory_Metacast((Kirigami__Platform__PlatformPluginFactory*)self, param1);
}

void k_irigami__platform__platformpluginfactory_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Kirigami__Platform__PlatformPluginFactory_OnMetacast((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

void* k_irigami__platform__platformpluginfactory_super_metacast(void* self, const char* param1) {
    return Kirigami__Platform__PlatformPluginFactory_SuperMetacast((Kirigami__Platform__PlatformPluginFactory*)self, param1);
}

int32_t k_irigami__platform__platformpluginfactory_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__PlatformPluginFactory_Metacall((Kirigami__Platform__PlatformPluginFactory*)self, param1, param2, param3);
}

void k_irigami__platform__platformpluginfactory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnMetacall((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__platformpluginfactory_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__PlatformPluginFactory_SuperMetacall((Kirigami__Platform__PlatformPluginFactory*)self, param1, param2, param3);
}

const char* k_irigami__platform__platformpluginfactory_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Kirigami__Platform__PlatformTheme* k_irigami__platform__platformpluginfactory_create_platform_theme(void* self, void* parent) {
    return Kirigami__Platform__PlatformPluginFactory_CreatePlatformTheme((Kirigami__Platform__PlatformPluginFactory*)self, (QObject*)parent);
}

void k_irigami__platform__platformpluginfactory_on_create_platform_theme(void* self, Kirigami__Platform__PlatformTheme* (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnCreatePlatformTheme((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

Kirigami__Platform__PlatformTheme* k_irigami__platform__platformpluginfactory_super_create_platform_theme(void* self, void* parent) {
    return Kirigami__Platform__PlatformPluginFactory_SuperCreatePlatformTheme((Kirigami__Platform__PlatformPluginFactory*)self, (QObject*)parent);
}

Kirigami__Platform__Units* k_irigami__platform__platformpluginfactory_create_units(void* self, void* parent) {
    return Kirigami__Platform__PlatformPluginFactory_CreateUnits((Kirigami__Platform__PlatformPluginFactory*)self, (QObject*)parent);
}

void k_irigami__platform__platformpluginfactory_on_create_units(void* self, Kirigami__Platform__Units* (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnCreateUnits((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

Kirigami__Platform__Units* k_irigami__platform__platformpluginfactory_super_create_units(void* self, void* parent) {
    return Kirigami__Platform__PlatformPluginFactory_SuperCreateUnits((Kirigami__Platform__PlatformPluginFactory*)self, (QObject*)parent);
}

Kirigami__Platform__PlatformPluginFactory* k_irigami__platform__platformpluginfactory_find_plugin() {
    return Kirigami__Platform__PlatformPluginFactory_FindPlugin();
}

const char* k_irigami__platform__platformpluginfactory_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigami__platform__platformpluginfactory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Kirigami__Platform__PlatformPluginFactory* k_irigami__platform__platformpluginfactory_find_plugin1(const char* pluginName) {
    return Kirigami__Platform__PlatformPluginFactory_FindPlugin1(qstring(pluginName));
}

const char* k_irigami__platform__platformpluginfactory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigami__platform__platformpluginfactory_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_irigami__platform__platformpluginfactory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_irigami__platform__platformpluginfactory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_irigami__platform__platformpluginfactory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_irigami__platform__platformpluginfactory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_irigami__platform__platformpluginfactory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_irigami__platform__platformpluginfactory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_irigami__platform__platformpluginfactory_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_irigami__platform__platformpluginfactory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_irigami__platform__platformpluginfactory_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_irigami__platform__platformpluginfactory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_irigami__platform__platformpluginfactory_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_irigami__platform__platformpluginfactory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_irigami__platform__platformpluginfactory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_irigami__platform__platformpluginfactory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_irigami__platform__platformpluginfactory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_irigami__platform__platformpluginfactory_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_irigami__platform__platformpluginfactory_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_irigami__platform__platformpluginfactory_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_irigami__platform__platformpluginfactory_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__platformpluginfactory_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_irigami__platform__platformpluginfactory_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_irigami__platform__platformpluginfactory_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_irigami__platform__platformpluginfactory_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_irigami__platform__platformpluginfactory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_irigami__platform__platformpluginfactory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_irigami__platform__platformpluginfactory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_irigami__platform__platformpluginfactory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_irigami__platform__platformpluginfactory_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_irigami__platform__platformpluginfactory_dynamic_property_names\n");
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

QBindingStorage* k_irigami__platform__platformpluginfactory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_irigami__platform__platformpluginfactory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_irigami__platform__platformpluginfactory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_irigami__platform__platformpluginfactory_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__platformpluginfactory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_irigami__platform__platformpluginfactory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_irigami__platform__platformpluginfactory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_irigami__platform__platformpluginfactory_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_irigami__platform__platformpluginfactory_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_irigami__platform__platformpluginfactory_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_irigami__platform__platformpluginfactory_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_irigami__platform__platformpluginfactory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_irigami__platform__platformpluginfactory_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_irigami__platform__platformpluginfactory_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_irigami__platform__platformpluginfactory_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__platformpluginfactory_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_irigami__platform__platformpluginfactory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_irigami__platform__platformpluginfactory_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_irigami__platform__platformpluginfactory_event(void* self, void* event) {
    return Kirigami__Platform__PlatformPluginFactory_Event((Kirigami__Platform__PlatformPluginFactory*)self, (QEvent*)event);
}

bool k_irigami__platform__platformpluginfactory_super_event(void* self, void* event) {
    return Kirigami__Platform__PlatformPluginFactory_SuperEvent((Kirigami__Platform__PlatformPluginFactory*)self, (QEvent*)event);
}

void k_irigami__platform__platformpluginfactory_on_event(void* self, bool (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnEvent((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

bool k_irigami__platform__platformpluginfactory_event_filter(void* self, void* watched, void* event) {
    return Kirigami__Platform__PlatformPluginFactory_EventFilter((Kirigami__Platform__PlatformPluginFactory*)self, (QObject*)watched, (QEvent*)event);
}

bool k_irigami__platform__platformpluginfactory_super_event_filter(void* self, void* watched, void* event) {
    return Kirigami__Platform__PlatformPluginFactory_SuperEventFilter((Kirigami__Platform__PlatformPluginFactory*)self, (QObject*)watched, (QEvent*)event);
}

void k_irigami__platform__platformpluginfactory_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnEventFilter((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

void k_irigami__platform__platformpluginfactory_timer_event(void* self, void* event) {
    Kirigami__Platform__PlatformPluginFactory_TimerEvent((Kirigami__Platform__PlatformPluginFactory*)self, (QTimerEvent*)event);
}

void k_irigami__platform__platformpluginfactory_super_timer_event(void* self, void* event) {
    Kirigami__Platform__PlatformPluginFactory_SuperTimerEvent((Kirigami__Platform__PlatformPluginFactory*)self, (QTimerEvent*)event);
}

void k_irigami__platform__platformpluginfactory_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnTimerEvent((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

void k_irigami__platform__platformpluginfactory_child_event(void* self, void* event) {
    Kirigami__Platform__PlatformPluginFactory_ChildEvent((Kirigami__Platform__PlatformPluginFactory*)self, (QChildEvent*)event);
}

void k_irigami__platform__platformpluginfactory_super_child_event(void* self, void* event) {
    Kirigami__Platform__PlatformPluginFactory_SuperChildEvent((Kirigami__Platform__PlatformPluginFactory*)self, (QChildEvent*)event);
}

void k_irigami__platform__platformpluginfactory_on_child_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnChildEvent((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

void k_irigami__platform__platformpluginfactory_custom_event(void* self, void* event) {
    Kirigami__Platform__PlatformPluginFactory_CustomEvent((Kirigami__Platform__PlatformPluginFactory*)self, (QEvent*)event);
}

void k_irigami__platform__platformpluginfactory_super_custom_event(void* self, void* event) {
    Kirigami__Platform__PlatformPluginFactory_SuperCustomEvent((Kirigami__Platform__PlatformPluginFactory*)self, (QEvent*)event);
}

void k_irigami__platform__platformpluginfactory_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnCustomEvent((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

void k_irigami__platform__platformpluginfactory_connect_notify(void* self, void* signal) {
    Kirigami__Platform__PlatformPluginFactory_ConnectNotify((Kirigami__Platform__PlatformPluginFactory*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformpluginfactory_super_connect_notify(void* self, void* signal) {
    Kirigami__Platform__PlatformPluginFactory_SuperConnectNotify((Kirigami__Platform__PlatformPluginFactory*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformpluginfactory_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnConnectNotify((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

void k_irigami__platform__platformpluginfactory_disconnect_notify(void* self, void* signal) {
    Kirigami__Platform__PlatformPluginFactory_DisconnectNotify((Kirigami__Platform__PlatformPluginFactory*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformpluginfactory_super_disconnect_notify(void* self, void* signal) {
    Kirigami__Platform__PlatformPluginFactory_SuperDisconnectNotify((Kirigami__Platform__PlatformPluginFactory*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformpluginfactory_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnDisconnectNotify((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__platformpluginfactory_sender(void* self) {
    return Kirigami__Platform__PlatformPluginFactory_Sender((Kirigami__Platform__PlatformPluginFactory*)self);
}

QObject* k_irigami__platform__platformpluginfactory_super_sender(void* self) {
    return Kirigami__Platform__PlatformPluginFactory_SuperSender((Kirigami__Platform__PlatformPluginFactory*)self);
}

void k_irigami__platform__platformpluginfactory_on_sender(void* self, QObject* (*callback)()) {
    Kirigami__Platform__PlatformPluginFactory_OnSender((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__platformpluginfactory_sender_signal_index(void* self) {
    return Kirigami__Platform__PlatformPluginFactory_SenderSignalIndex((Kirigami__Platform__PlatformPluginFactory*)self);
}

int32_t k_irigami__platform__platformpluginfactory_super_sender_signal_index(void* self) {
    return Kirigami__Platform__PlatformPluginFactory_SuperSenderSignalIndex((Kirigami__Platform__PlatformPluginFactory*)self);
}

void k_irigami__platform__platformpluginfactory_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Kirigami__Platform__PlatformPluginFactory_OnSenderSignalIndex((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__platformpluginfactory_receivers(void* self, const char* signal) {
    return Kirigami__Platform__PlatformPluginFactory_Receivers((Kirigami__Platform__PlatformPluginFactory*)self, signal);
}

int32_t k_irigami__platform__platformpluginfactory_super_receivers(void* self, const char* signal) {
    return Kirigami__Platform__PlatformPluginFactory_SuperReceivers((Kirigami__Platform__PlatformPluginFactory*)self, signal);
}

void k_irigami__platform__platformpluginfactory_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Kirigami__Platform__PlatformPluginFactory_OnReceivers((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

bool k_irigami__platform__platformpluginfactory_is_signal_connected(void* self, void* signal) {
    return Kirigami__Platform__PlatformPluginFactory_IsSignalConnected((Kirigami__Platform__PlatformPluginFactory*)self, (QMetaMethod*)signal);
}

bool k_irigami__platform__platformpluginfactory_super_is_signal_connected(void* self, void* signal) {
    return Kirigami__Platform__PlatformPluginFactory_SuperIsSignalConnected((Kirigami__Platform__PlatformPluginFactory*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__platformpluginfactory_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Kirigami__Platform__PlatformPluginFactory_OnIsSignalConnected((Kirigami__Platform__PlatformPluginFactory*)self, (intptr_t)callback);
}

void k_irigami__platform__platformpluginfactory_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_irigami__platform__platformpluginfactory_delete(void* self) {
    Kirigami__Platform__PlatformPluginFactory_Delete((Kirigami__Platform__PlatformPluginFactory*)(self));
}
