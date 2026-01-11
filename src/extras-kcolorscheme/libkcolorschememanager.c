#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkcolorschememanager.hpp"
#include "libkcolorschememanager.h"

KColorSchemeManager* k_colorschememanager_new() {
    return KColorSchemeManager_new();
}

KColorSchemeManager* k_colorschememanager_new2(void* parent) {
    return KColorSchemeManager_new2((QObject*)parent);
}

const QMetaObject* k_colorschememanager_meta_object(void* self) {
    return KColorSchemeManager_MetaObject((KColorSchemeManager*)self);
}

void* k_colorschememanager_metacast(void* self, const char* param1) {
    return KColorSchemeManager_Metacast((KColorSchemeManager*)self, param1);
}

int32_t k_colorschememanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorSchemeManager_Metacall((KColorSchemeManager*)self, param1, param2, param3);
}

void k_colorschememanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KColorSchemeManager_OnMetacall((KColorSchemeManager*)self, (intptr_t)callback);
}

int32_t k_colorschememanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorSchemeManager_QBaseMetacall((KColorSchemeManager*)self, param1, param2, param3);
}

const char* k_colorschememanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* k_colorschememanager_model(void* self) {
    return KColorSchemeManager_Model((KColorSchemeManager*)self);
}

QModelIndex* k_colorschememanager_index_for_scheme_id(void* self, const char* id) {
    return KColorSchemeManager_IndexForSchemeId((KColorSchemeManager*)self, qstring(id));
}

QModelIndex* k_colorschememanager_index_for_scheme(void* self, const char* name) {
    return KColorSchemeManager_IndexForScheme((KColorSchemeManager*)self, qstring(name));
}

void k_colorschememanager_save_scheme_to_config_file(void* self, const char* schemeName) {
    KColorSchemeManager_SaveSchemeToConfigFile((KColorSchemeManager*)self, qstring(schemeName));
}

void k_colorschememanager_set_autosave_changes(void* self, bool autosaveChanges) {
    KColorSchemeManager_SetAutosaveChanges((KColorSchemeManager*)self, autosaveChanges);
}

const char* k_colorschememanager_active_scheme_id(void* self) {
    libqt_string _str = KColorSchemeManager_ActiveSchemeId((KColorSchemeManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorschememanager_active_scheme_name(void* self) {
    libqt_string _str = KColorSchemeManager_ActiveSchemeName((KColorSchemeManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KColorSchemeManager* k_colorschememanager_instance() {
    return KColorSchemeManager_Instance();
}

void k_colorschememanager_activate_scheme(void* self, void* index) {
    KColorSchemeManager_ActivateScheme((KColorSchemeManager*)self, (QModelIndex*)index);
}

const char* k_colorschememanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorschememanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorschememanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorschememanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_colorschememanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_colorschememanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_colorschememanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_colorschememanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_colorschememanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_colorschememanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_colorschememanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_colorschememanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_colorschememanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_colorschememanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_colorschememanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_colorschememanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_colorschememanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_colorschememanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_colorschememanager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_colorschememanager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_colorschememanager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_colorschememanager_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_colorschememanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_colorschememanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_colorschememanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_colorschememanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_colorschememanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorschememanager_dynamic_property_names");
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

QBindingStorage* k_colorschememanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_colorschememanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_colorschememanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_colorschememanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_colorschememanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_colorschememanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_colorschememanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_colorschememanager_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_colorschememanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_colorschememanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_colorschememanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_colorschememanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_colorschememanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_colorschememanager_event(void* self, void* event) {
    return KColorSchemeManager_Event((KColorSchemeManager*)self, (QEvent*)event);
}

bool k_colorschememanager_qbase_event(void* self, void* event) {
    return KColorSchemeManager_QBaseEvent((KColorSchemeManager*)self, (QEvent*)event);
}

void k_colorschememanager_on_event(void* self, bool (*callback)(void*, void*)) {
    KColorSchemeManager_OnEvent((KColorSchemeManager*)self, (intptr_t)callback);
}

bool k_colorschememanager_event_filter(void* self, void* watched, void* event) {
    return KColorSchemeManager_EventFilter((KColorSchemeManager*)self, (QObject*)watched, (QEvent*)event);
}

bool k_colorschememanager_qbase_event_filter(void* self, void* watched, void* event) {
    return KColorSchemeManager_QBaseEventFilter((KColorSchemeManager*)self, (QObject*)watched, (QEvent*)event);
}

void k_colorschememanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KColorSchemeManager_OnEventFilter((KColorSchemeManager*)self, (intptr_t)callback);
}

void k_colorschememanager_timer_event(void* self, void* event) {
    KColorSchemeManager_TimerEvent((KColorSchemeManager*)self, (QTimerEvent*)event);
}

void k_colorschememanager_qbase_timer_event(void* self, void* event) {
    KColorSchemeManager_QBaseTimerEvent((KColorSchemeManager*)self, (QTimerEvent*)event);
}

void k_colorschememanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KColorSchemeManager_OnTimerEvent((KColorSchemeManager*)self, (intptr_t)callback);
}

void k_colorschememanager_child_event(void* self, void* event) {
    KColorSchemeManager_ChildEvent((KColorSchemeManager*)self, (QChildEvent*)event);
}

void k_colorschememanager_qbase_child_event(void* self, void* event) {
    KColorSchemeManager_QBaseChildEvent((KColorSchemeManager*)self, (QChildEvent*)event);
}

void k_colorschememanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    KColorSchemeManager_OnChildEvent((KColorSchemeManager*)self, (intptr_t)callback);
}

void k_colorschememanager_custom_event(void* self, void* event) {
    KColorSchemeManager_CustomEvent((KColorSchemeManager*)self, (QEvent*)event);
}

void k_colorschememanager_qbase_custom_event(void* self, void* event) {
    KColorSchemeManager_QBaseCustomEvent((KColorSchemeManager*)self, (QEvent*)event);
}

void k_colorschememanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KColorSchemeManager_OnCustomEvent((KColorSchemeManager*)self, (intptr_t)callback);
}

void k_colorschememanager_connect_notify(void* self, void* signal) {
    KColorSchemeManager_ConnectNotify((KColorSchemeManager*)self, (QMetaMethod*)signal);
}

void k_colorschememanager_qbase_connect_notify(void* self, void* signal) {
    KColorSchemeManager_QBaseConnectNotify((KColorSchemeManager*)self, (QMetaMethod*)signal);
}

void k_colorschememanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KColorSchemeManager_OnConnectNotify((KColorSchemeManager*)self, (intptr_t)callback);
}

void k_colorschememanager_disconnect_notify(void* self, void* signal) {
    KColorSchemeManager_DisconnectNotify((KColorSchemeManager*)self, (QMetaMethod*)signal);
}

void k_colorschememanager_qbase_disconnect_notify(void* self, void* signal) {
    KColorSchemeManager_QBaseDisconnectNotify((KColorSchemeManager*)self, (QMetaMethod*)signal);
}

void k_colorschememanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KColorSchemeManager_OnDisconnectNotify((KColorSchemeManager*)self, (intptr_t)callback);
}

QObject* k_colorschememanager_sender(void* self) {
    return KColorSchemeManager_Sender((KColorSchemeManager*)self);
}

QObject* k_colorschememanager_qbase_sender(void* self) {
    return KColorSchemeManager_QBaseSender((KColorSchemeManager*)self);
}

void k_colorschememanager_on_sender(void* self, QObject* (*callback)()) {
    KColorSchemeManager_OnSender((KColorSchemeManager*)self, (intptr_t)callback);
}

int32_t k_colorschememanager_sender_signal_index(void* self) {
    return KColorSchemeManager_SenderSignalIndex((KColorSchemeManager*)self);
}

int32_t k_colorschememanager_qbase_sender_signal_index(void* self) {
    return KColorSchemeManager_QBaseSenderSignalIndex((KColorSchemeManager*)self);
}

void k_colorschememanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KColorSchemeManager_OnSenderSignalIndex((KColorSchemeManager*)self, (intptr_t)callback);
}

int32_t k_colorschememanager_receivers(void* self, const char* signal) {
    return KColorSchemeManager_Receivers((KColorSchemeManager*)self, signal);
}

int32_t k_colorschememanager_qbase_receivers(void* self, const char* signal) {
    return KColorSchemeManager_QBaseReceivers((KColorSchemeManager*)self, signal);
}

void k_colorschememanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KColorSchemeManager_OnReceivers((KColorSchemeManager*)self, (intptr_t)callback);
}

bool k_colorschememanager_is_signal_connected(void* self, void* signal) {
    return KColorSchemeManager_IsSignalConnected((KColorSchemeManager*)self, (QMetaMethod*)signal);
}

bool k_colorschememanager_qbase_is_signal_connected(void* self, void* signal) {
    return KColorSchemeManager_QBaseIsSignalConnected((KColorSchemeManager*)self, (QMetaMethod*)signal);
}

void k_colorschememanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KColorSchemeManager_OnIsSignalConnected((KColorSchemeManager*)self, (intptr_t)callback);
}

void k_colorschememanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_colorschememanager_delete(void* self) {
    KColorSchemeManager_Delete((KColorSchemeManager*)(self));
}
