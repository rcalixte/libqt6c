#include "libkcoreconfigskeleton.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkconfigskeleton.hpp"
#include "libkconfigskeleton.h"

KConfigSkeleton* k_configskeleton_new() {
    return KConfigSkeleton_new();
}

KConfigSkeleton* k_configskeleton_new2(const char* configname) {
    return KConfigSkeleton_new2(qstring(configname));
}

KConfigSkeleton* k_configskeleton_new3(const char* configname, void* parent) {
    return KConfigSkeleton_new3(qstring(configname), (QObject*)parent);
}

const QMetaObject* k_configskeleton_meta_object(void* self) {
    return KConfigSkeleton_MetaObject((KConfigSkeleton*)self);
}

void* k_configskeleton_metacast(void* self, const char* param1) {
    return KConfigSkeleton_Metacast((KConfigSkeleton*)self, param1);
}

int32_t k_configskeleton_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigSkeleton_Metacall((KConfigSkeleton*)self, param1, param2, param3);
}

void k_configskeleton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KConfigSkeleton_OnMetacall((KConfigSkeleton*)self, (intptr_t)callback);
}

int32_t k_configskeleton_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigSkeleton_QBaseMetacall((KConfigSkeleton*)self, param1, param2, param3);
}

const char* k_configskeleton_tr(const char* s) {
    libqt_string _str = KConfigSkeleton_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configskeleton_tr2(const char* s, const char* c) {
    libqt_string _str = KConfigSkeleton_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configskeleton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KConfigSkeleton_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeleton_load(void* self) {
    KCoreConfigSkeleton_Load((KCoreConfigSkeleton*)self);
}

void k_configskeleton_read(void* self) {
    KCoreConfigSkeleton_Read((KCoreConfigSkeleton*)self);
}

bool k_configskeleton_is_defaults(void* self) {
    return KCoreConfigSkeleton_IsDefaults((KCoreConfigSkeleton*)self);
}

bool k_configskeleton_is_save_needed(void* self) {
    return KCoreConfigSkeleton_IsSaveNeeded((KCoreConfigSkeleton*)self);
}

void k_configskeleton_set_current_group(void* self, const char* group) {
    KCoreConfigSkeleton_SetCurrentGroup((KCoreConfigSkeleton*)self, qstring(group));
}

const char* k_configskeleton_current_group(void* self) {
    libqt_string _str = KCoreConfigSkeleton_CurrentGroup((KCoreConfigSkeleton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeleton_add_item(void* self, void* item) {
    KCoreConfigSkeleton_AddItem((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item);
}

KCoreConfigSkeleton__ItemPassword* k_configskeleton_add_item_password(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPassword((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemPath* k_configskeleton_add_item_path(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPath((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KConfig* k_configskeleton_config(void* self) {
    return KCoreConfigSkeleton_Config((KCoreConfigSkeleton*)self);
}

const KConfig* k_configskeleton_config2(void* self) {
    return KCoreConfigSkeleton_Config2((KCoreConfigSkeleton*)self);
}

libqt_list /* of KConfigSkeletonItem* */ k_configskeleton_items(void* self) {
    libqt_list _arr = KCoreConfigSkeleton_Items((KCoreConfigSkeleton*)self);
    return _arr;
}

void k_configskeleton_remove_item(void* self, const char* name) {
    KCoreConfigSkeleton_RemoveItem((KCoreConfigSkeleton*)self, qstring(name));
}

void k_configskeleton_clear_items(void* self) {
    KCoreConfigSkeleton_ClearItems((KCoreConfigSkeleton*)self);
}

bool k_configskeleton_is_immutable(void* self, const char* name) {
    return KCoreConfigSkeleton_IsImmutable((KCoreConfigSkeleton*)self, qstring(name));
}

KConfigSkeletonItem* k_configskeleton_find_item(void* self, const char* name) {
    return KCoreConfigSkeleton_FindItem((KCoreConfigSkeleton*)self, qstring(name));
}

bool k_configskeleton_save(void* self) {
    return KCoreConfigSkeleton_Save((KCoreConfigSkeleton*)self);
}

void k_configskeleton_config_changed(void* self) {
    KCoreConfigSkeleton_ConfigChanged((KCoreConfigSkeleton*)self);
}

void k_configskeleton_on_config_changed(void* self, void (*callback)(void*)) {
    KCoreConfigSkeleton_Connect_ConfigChanged((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_add_item2(void* self, void* item, const char* name) {
    KCoreConfigSkeleton_AddItem2((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item, qstring(name));
}

KCoreConfigSkeleton__ItemPassword* k_configskeleton_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPassword3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPassword* k_configskeleton_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPassword4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

KCoreConfigSkeleton__ItemPath* k_configskeleton_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPath3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPath* k_configskeleton_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPath4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

const char* k_configskeleton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configskeleton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_configskeleton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_configskeleton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_configskeleton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_configskeleton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_configskeleton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_configskeleton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_configskeleton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_configskeleton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_configskeleton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_configskeleton_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_configskeleton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_configskeleton_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_configskeleton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_configskeleton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_configskeleton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_configskeleton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_configskeleton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_configskeleton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_configskeleton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_configskeleton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_configskeleton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_configskeleton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_configskeleton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_configskeleton_dynamic_property_names");
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

QBindingStorage* k_configskeleton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_configskeleton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_configskeleton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_configskeleton_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_configskeleton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_configskeleton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_configskeleton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_configskeleton_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_configskeleton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_configskeleton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_configskeleton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_configskeleton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_configskeleton_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_configskeleton_set_defaults(void* self) {
    KConfigSkeleton_SetDefaults((KConfigSkeleton*)self);
}

void k_configskeleton_qbase_set_defaults(void* self) {
    KConfigSkeleton_QBaseSetDefaults((KConfigSkeleton*)self);
}

void k_configskeleton_on_set_defaults(void* self, void (*callback)()) {
    KConfigSkeleton_OnSetDefaults((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_use_defaults(void* self, bool b) {
    return KConfigSkeleton_UseDefaults((KConfigSkeleton*)self, b);
}

bool k_configskeleton_qbase_use_defaults(void* self, bool b) {
    return KConfigSkeleton_QBaseUseDefaults((KConfigSkeleton*)self, b);
}

void k_configskeleton_on_use_defaults(void* self, bool (*callback)(void*, bool)) {
    KConfigSkeleton_OnUseDefaults((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_usr_use_defaults(void* self, bool b) {
    return KConfigSkeleton_UsrUseDefaults((KConfigSkeleton*)self, b);
}

bool k_configskeleton_qbase_usr_use_defaults(void* self, bool b) {
    return KConfigSkeleton_QBaseUsrUseDefaults((KConfigSkeleton*)self, b);
}

void k_configskeleton_on_usr_use_defaults(void* self, bool (*callback)(void*, bool)) {
    KConfigSkeleton_OnUsrUseDefaults((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_usr_set_defaults(void* self) {
    KConfigSkeleton_UsrSetDefaults((KConfigSkeleton*)self);
}

void k_configskeleton_qbase_usr_set_defaults(void* self) {
    KConfigSkeleton_QBaseUsrSetDefaults((KConfigSkeleton*)self);
}

void k_configskeleton_on_usr_set_defaults(void* self, void (*callback)()) {
    KConfigSkeleton_OnUsrSetDefaults((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_usr_read(void* self) {
    KConfigSkeleton_UsrRead((KConfigSkeleton*)self);
}

void k_configskeleton_qbase_usr_read(void* self) {
    KConfigSkeleton_QBaseUsrRead((KConfigSkeleton*)self);
}

void k_configskeleton_on_usr_read(void* self, void (*callback)()) {
    KConfigSkeleton_OnUsrRead((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_usr_save(void* self) {
    return KConfigSkeleton_UsrSave((KConfigSkeleton*)self);
}

bool k_configskeleton_qbase_usr_save(void* self) {
    return KConfigSkeleton_QBaseUsrSave((KConfigSkeleton*)self);
}

void k_configskeleton_on_usr_save(void* self, bool (*callback)()) {
    KConfigSkeleton_OnUsrSave((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_event(void* self, void* event) {
    return KConfigSkeleton_Event((KConfigSkeleton*)self, (QEvent*)event);
}

bool k_configskeleton_qbase_event(void* self, void* event) {
    return KConfigSkeleton_QBaseEvent((KConfigSkeleton*)self, (QEvent*)event);
}

void k_configskeleton_on_event(void* self, bool (*callback)(void*, void*)) {
    KConfigSkeleton_OnEvent((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_event_filter(void* self, void* watched, void* event) {
    return KConfigSkeleton_EventFilter((KConfigSkeleton*)self, (QObject*)watched, (QEvent*)event);
}

bool k_configskeleton_qbase_event_filter(void* self, void* watched, void* event) {
    return KConfigSkeleton_QBaseEventFilter((KConfigSkeleton*)self, (QObject*)watched, (QEvent*)event);
}

void k_configskeleton_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KConfigSkeleton_OnEventFilter((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_timer_event(void* self, void* event) {
    KConfigSkeleton_TimerEvent((KConfigSkeleton*)self, (QTimerEvent*)event);
}

void k_configskeleton_qbase_timer_event(void* self, void* event) {
    KConfigSkeleton_QBaseTimerEvent((KConfigSkeleton*)self, (QTimerEvent*)event);
}

void k_configskeleton_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnTimerEvent((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_child_event(void* self, void* event) {
    KConfigSkeleton_ChildEvent((KConfigSkeleton*)self, (QChildEvent*)event);
}

void k_configskeleton_qbase_child_event(void* self, void* event) {
    KConfigSkeleton_QBaseChildEvent((KConfigSkeleton*)self, (QChildEvent*)event);
}

void k_configskeleton_on_child_event(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnChildEvent((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_custom_event(void* self, void* event) {
    KConfigSkeleton_CustomEvent((KConfigSkeleton*)self, (QEvent*)event);
}

void k_configskeleton_qbase_custom_event(void* self, void* event) {
    KConfigSkeleton_QBaseCustomEvent((KConfigSkeleton*)self, (QEvent*)event);
}

void k_configskeleton_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnCustomEvent((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_connect_notify(void* self, void* signal) {
    KConfigSkeleton_ConnectNotify((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_qbase_connect_notify(void* self, void* signal) {
    KConfigSkeleton_QBaseConnectNotify((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnConnectNotify((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_disconnect_notify(void* self, void* signal) {
    KConfigSkeleton_DisconnectNotify((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_qbase_disconnect_notify(void* self, void* signal) {
    KConfigSkeleton_QBaseDisconnectNotify((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigSkeleton_OnDisconnectNotify((KConfigSkeleton*)self, (intptr_t)callback);
}

QObject* k_configskeleton_sender(void* self) {
    return KConfigSkeleton_Sender((KConfigSkeleton*)self);
}

QObject* k_configskeleton_qbase_sender(void* self) {
    return KConfigSkeleton_QBaseSender((KConfigSkeleton*)self);
}

void k_configskeleton_on_sender(void* self, QObject* (*callback)()) {
    KConfigSkeleton_OnSender((KConfigSkeleton*)self, (intptr_t)callback);
}

int32_t k_configskeleton_sender_signal_index(void* self) {
    return KConfigSkeleton_SenderSignalIndex((KConfigSkeleton*)self);
}

int32_t k_configskeleton_qbase_sender_signal_index(void* self) {
    return KConfigSkeleton_QBaseSenderSignalIndex((KConfigSkeleton*)self);
}

void k_configskeleton_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KConfigSkeleton_OnSenderSignalIndex((KConfigSkeleton*)self, (intptr_t)callback);
}

int32_t k_configskeleton_receivers(void* self, const char* signal) {
    return KConfigSkeleton_Receivers((KConfigSkeleton*)self, signal);
}

int32_t k_configskeleton_qbase_receivers(void* self, const char* signal) {
    return KConfigSkeleton_QBaseReceivers((KConfigSkeleton*)self, signal);
}

void k_configskeleton_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KConfigSkeleton_OnReceivers((KConfigSkeleton*)self, (intptr_t)callback);
}

bool k_configskeleton_is_signal_connected(void* self, void* signal) {
    return KConfigSkeleton_IsSignalConnected((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

bool k_configskeleton_qbase_is_signal_connected(void* self, void* signal) {
    return KConfigSkeleton_QBaseIsSignalConnected((KConfigSkeleton*)self, (QMetaMethod*)signal);
}

void k_configskeleton_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KConfigSkeleton_OnIsSignalConnected((KConfigSkeleton*)self, (intptr_t)callback);
}

void k_configskeleton_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_configskeleton_delete(void* self) {
    KConfigSkeleton_Delete((KConfigSkeleton*)(self));
}
