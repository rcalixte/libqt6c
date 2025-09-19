#include "libkconfiggroup.hpp"
#include "libkconfigskeleton.hpp"
#include "libkcoreconfigskeleton.hpp"
#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libkconfigloader.hpp"
#include "libkconfigloader.h"

KConfigLoader* k_configloader_new(const char* configFile, void* xml) {
    return KConfigLoader_new(qstring(configFile), (QIODevice*)xml);
}

KConfigLoader* k_configloader_new2(void* config, void* xml) {
    return KConfigLoader_new2((KConfigGroup*)config, (QIODevice*)xml);
}

KConfigLoader* k_configloader_new3(const char* configFile, void* xml, void* parent) {
    return KConfigLoader_new3(qstring(configFile), (QIODevice*)xml, (QObject*)parent);
}

KConfigLoader* k_configloader_new4(void* config, void* xml, void* parent) {
    return KConfigLoader_new4((KConfigGroup*)config, (QIODevice*)xml, (QObject*)parent);
}

KConfigSkeletonItem* k_configloader_find_item(void* self, const char* group, const char* key) {
    return KConfigLoader_FindItem((KConfigLoader*)self, qstring(group), qstring(key));
}

KConfigSkeletonItem* k_configloader_find_item_by_name(void* self, const char* name) {
    return KConfigLoader_FindItemByName((KConfigLoader*)self, qstring(name));
}

QVariant* k_configloader_property(void* self, const char* name) {
    return KConfigLoader_Property((KConfigLoader*)self, qstring(name));
}

bool k_configloader_has_group(void* self, const char* group) {
    return KConfigLoader_HasGroup((KConfigLoader*)self, qstring(group));
}

const char** k_configloader_group_list(void* self) {
    libqt_list _arr = KConfigLoader_GroupList((KConfigLoader*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_configloader_group_list");
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

bool k_configloader_usr_save(void* self) {
    return KConfigLoader_UsrSave((KConfigLoader*)self);
}

void k_configloader_on_usr_save(void* self, bool (*callback)()) {
    KConfigLoader_OnUsrSave((KConfigLoader*)self, (intptr_t)callback);
}

bool k_configloader_qbase_usr_save(void* self) {
    return KConfigLoader_QBaseUsrSave((KConfigLoader*)self);
}

const QMetaObject* k_configloader_meta_object(void* self) {
    return KConfigSkeleton_MetaObject((KConfigSkeleton*)self);
}

void* k_configloader_metacast(void* self, const char* param1) {
    return KConfigSkeleton_Metacast((KConfigSkeleton*)self, param1);
}

const char* k_configloader_tr(const char* s) {
    libqt_string _str = KConfigSkeleton_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configloader_tr2(const char* s, const char* c) {
    libqt_string _str = KConfigSkeleton_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configloader_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KConfigSkeleton_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configloader_load(void* self) {
    KCoreConfigSkeleton_Load((KCoreConfigSkeleton*)self);
}

void k_configloader_read(void* self) {
    KCoreConfigSkeleton_Read((KCoreConfigSkeleton*)self);
}

bool k_configloader_is_defaults(void* self) {
    return KCoreConfigSkeleton_IsDefaults((KCoreConfigSkeleton*)self);
}

bool k_configloader_is_save_needed(void* self) {
    return KCoreConfigSkeleton_IsSaveNeeded((KCoreConfigSkeleton*)self);
}

void k_configloader_set_current_group(void* self, const char* group) {
    KCoreConfigSkeleton_SetCurrentGroup((KCoreConfigSkeleton*)self, qstring(group));
}

const char* k_configloader_current_group(void* self) {
    libqt_string _str = KCoreConfigSkeleton_CurrentGroup((KCoreConfigSkeleton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configloader_add_item(void* self, void* item) {
    KCoreConfigSkeleton_AddItem((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item);
}

KCoreConfigSkeleton__ItemPassword* k_configloader_add_item_password(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPassword((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KCoreConfigSkeleton__ItemPath* k_configloader_add_item_path(void* self, const char* name, const char* reference) {
    return KCoreConfigSkeleton_AddItemPath((KCoreConfigSkeleton*)self, qstring(name), qstring(reference));
}

KConfig* k_configloader_config(void* self) {
    return KCoreConfigSkeleton_Config((KCoreConfigSkeleton*)self);
}

const KConfig* k_configloader_config2(void* self) {
    return KCoreConfigSkeleton_Config2((KCoreConfigSkeleton*)self);
}

libqt_list /* of KConfigSkeletonItem* */ k_configloader_items(void* self) {
    libqt_list _arr = KCoreConfigSkeleton_Items((KCoreConfigSkeleton*)self);
    return _arr;
}

void k_configloader_remove_item(void* self, const char* name) {
    KCoreConfigSkeleton_RemoveItem((KCoreConfigSkeleton*)self, qstring(name));
}

void k_configloader_clear_items(void* self) {
    KCoreConfigSkeleton_ClearItems((KCoreConfigSkeleton*)self);
}

bool k_configloader_is_immutable(void* self, const char* name) {
    return KCoreConfigSkeleton_IsImmutable((KCoreConfigSkeleton*)self, qstring(name));
}

bool k_configloader_save(void* self) {
    return KCoreConfigSkeleton_Save((KCoreConfigSkeleton*)self);
}

void k_configloader_config_changed(void* self) {
    KCoreConfigSkeleton_ConfigChanged((KCoreConfigSkeleton*)self);
}

void k_configloader_on_config_changed(void* self, void (*callback)(void*)) {
    KCoreConfigSkeleton_Connect_ConfigChanged((KCoreConfigSkeleton*)self, (intptr_t)callback);
}

void k_configloader_add_item2(void* self, void* item, const char* name) {
    KCoreConfigSkeleton_AddItem2((KCoreConfigSkeleton*)self, (KConfigSkeletonItem*)item, qstring(name));
}

KCoreConfigSkeleton__ItemPassword* k_configloader_add_item_password3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPassword3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPassword* k_configloader_add_item_password4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPassword4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

KCoreConfigSkeleton__ItemPath* k_configloader_add_item_path3(void* self, const char* name, const char* reference, const char* defaultValue) {
    return KCoreConfigSkeleton_AddItemPath3((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue));
}

KCoreConfigSkeleton__ItemPath* k_configloader_add_item_path4(void* self, const char* name, const char* reference, const char* defaultValue, const char* key) {
    return KCoreConfigSkeleton_AddItemPath4((KCoreConfigSkeleton*)self, qstring(name), qstring(reference), qstring(defaultValue), qstring(key));
}

const char* k_configloader_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configloader_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_configloader_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_configloader_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_configloader_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_configloader_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_configloader_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_configloader_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_configloader_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_configloader_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_configloader_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_configloader_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_configloader_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_configloader_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_configloader_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_configloader_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_configloader_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_configloader_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_configloader_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_configloader_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_configloader_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_configloader_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_configloader_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

const char** k_configloader_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_configloader_dynamic_property_names");
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

QBindingStorage* k_configloader_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_configloader_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_configloader_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_configloader_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_configloader_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_configloader_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_configloader_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_configloader_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_configloader_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_configloader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_configloader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_configloader_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_configloader_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t k_configloader_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigLoader_Metacall((KConfigLoader*)self, param1, param2, param3);
}

int32_t k_configloader_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KConfigLoader_QBaseMetacall((KConfigLoader*)self, param1, param2, param3);
}

void k_configloader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KConfigLoader_OnMetacall((KConfigLoader*)self, (intptr_t)callback);
}

void k_configloader_set_defaults(void* self) {
    KConfigLoader_SetDefaults((KConfigLoader*)self);
}

void k_configloader_qbase_set_defaults(void* self) {
    KConfigLoader_QBaseSetDefaults((KConfigLoader*)self);
}

void k_configloader_on_set_defaults(void* self, void (*callback)()) {
    KConfigLoader_OnSetDefaults((KConfigLoader*)self, (intptr_t)callback);
}

bool k_configloader_use_defaults(void* self, bool b) {
    return KConfigLoader_UseDefaults((KConfigLoader*)self, b);
}

bool k_configloader_qbase_use_defaults(void* self, bool b) {
    return KConfigLoader_QBaseUseDefaults((KConfigLoader*)self, b);
}

void k_configloader_on_use_defaults(void* self, bool (*callback)(void*, bool)) {
    KConfigLoader_OnUseDefaults((KConfigLoader*)self, (intptr_t)callback);
}

bool k_configloader_usr_use_defaults(void* self, bool b) {
    return KConfigLoader_UsrUseDefaults((KConfigLoader*)self, b);
}

bool k_configloader_qbase_usr_use_defaults(void* self, bool b) {
    return KConfigLoader_QBaseUsrUseDefaults((KConfigLoader*)self, b);
}

void k_configloader_on_usr_use_defaults(void* self, bool (*callback)(void*, bool)) {
    KConfigLoader_OnUsrUseDefaults((KConfigLoader*)self, (intptr_t)callback);
}

void k_configloader_usr_set_defaults(void* self) {
    KConfigLoader_UsrSetDefaults((KConfigLoader*)self);
}

void k_configloader_qbase_usr_set_defaults(void* self) {
    KConfigLoader_QBaseUsrSetDefaults((KConfigLoader*)self);
}

void k_configloader_on_usr_set_defaults(void* self, void (*callback)()) {
    KConfigLoader_OnUsrSetDefaults((KConfigLoader*)self, (intptr_t)callback);
}

void k_configloader_usr_read(void* self) {
    KConfigLoader_UsrRead((KConfigLoader*)self);
}

void k_configloader_qbase_usr_read(void* self) {
    KConfigLoader_QBaseUsrRead((KConfigLoader*)self);
}

void k_configloader_on_usr_read(void* self, void (*callback)()) {
    KConfigLoader_OnUsrRead((KConfigLoader*)self, (intptr_t)callback);
}

bool k_configloader_event(void* self, void* event) {
    return KConfigLoader_Event((KConfigLoader*)self, (QEvent*)event);
}

bool k_configloader_qbase_event(void* self, void* event) {
    return KConfigLoader_QBaseEvent((KConfigLoader*)self, (QEvent*)event);
}

void k_configloader_on_event(void* self, bool (*callback)(void*, void*)) {
    KConfigLoader_OnEvent((KConfigLoader*)self, (intptr_t)callback);
}

bool k_configloader_event_filter(void* self, void* watched, void* event) {
    return KConfigLoader_EventFilter((KConfigLoader*)self, (QObject*)watched, (QEvent*)event);
}

bool k_configloader_qbase_event_filter(void* self, void* watched, void* event) {
    return KConfigLoader_QBaseEventFilter((KConfigLoader*)self, (QObject*)watched, (QEvent*)event);
}

void k_configloader_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KConfigLoader_OnEventFilter((KConfigLoader*)self, (intptr_t)callback);
}

void k_configloader_timer_event(void* self, void* event) {
    KConfigLoader_TimerEvent((KConfigLoader*)self, (QTimerEvent*)event);
}

void k_configloader_qbase_timer_event(void* self, void* event) {
    KConfigLoader_QBaseTimerEvent((KConfigLoader*)self, (QTimerEvent*)event);
}

void k_configloader_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KConfigLoader_OnTimerEvent((KConfigLoader*)self, (intptr_t)callback);
}

void k_configloader_child_event(void* self, void* event) {
    KConfigLoader_ChildEvent((KConfigLoader*)self, (QChildEvent*)event);
}

void k_configloader_qbase_child_event(void* self, void* event) {
    KConfigLoader_QBaseChildEvent((KConfigLoader*)self, (QChildEvent*)event);
}

void k_configloader_on_child_event(void* self, void (*callback)(void*, void*)) {
    KConfigLoader_OnChildEvent((KConfigLoader*)self, (intptr_t)callback);
}

void k_configloader_custom_event(void* self, void* event) {
    KConfigLoader_CustomEvent((KConfigLoader*)self, (QEvent*)event);
}

void k_configloader_qbase_custom_event(void* self, void* event) {
    KConfigLoader_QBaseCustomEvent((KConfigLoader*)self, (QEvent*)event);
}

void k_configloader_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KConfigLoader_OnCustomEvent((KConfigLoader*)self, (intptr_t)callback);
}

void k_configloader_connect_notify(void* self, void* signal) {
    KConfigLoader_ConnectNotify((KConfigLoader*)self, (QMetaMethod*)signal);
}

void k_configloader_qbase_connect_notify(void* self, void* signal) {
    KConfigLoader_QBaseConnectNotify((KConfigLoader*)self, (QMetaMethod*)signal);
}

void k_configloader_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigLoader_OnConnectNotify((KConfigLoader*)self, (intptr_t)callback);
}

void k_configloader_disconnect_notify(void* self, void* signal) {
    KConfigLoader_DisconnectNotify((KConfigLoader*)self, (QMetaMethod*)signal);
}

void k_configloader_qbase_disconnect_notify(void* self, void* signal) {
    KConfigLoader_QBaseDisconnectNotify((KConfigLoader*)self, (QMetaMethod*)signal);
}

void k_configloader_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KConfigLoader_OnDisconnectNotify((KConfigLoader*)self, (intptr_t)callback);
}

QObject* k_configloader_sender(void* self) {
    return KConfigLoader_Sender((KConfigLoader*)self);
}

QObject* k_configloader_qbase_sender(void* self) {
    return KConfigLoader_QBaseSender((KConfigLoader*)self);
}

void k_configloader_on_sender(void* self, QObject* (*callback)()) {
    KConfigLoader_OnSender((KConfigLoader*)self, (intptr_t)callback);
}

int32_t k_configloader_sender_signal_index(void* self) {
    return KConfigLoader_SenderSignalIndex((KConfigLoader*)self);
}

int32_t k_configloader_qbase_sender_signal_index(void* self) {
    return KConfigLoader_QBaseSenderSignalIndex((KConfigLoader*)self);
}

void k_configloader_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KConfigLoader_OnSenderSignalIndex((KConfigLoader*)self, (intptr_t)callback);
}

int32_t k_configloader_receivers(void* self, const char* signal) {
    return KConfigLoader_Receivers((KConfigLoader*)self, signal);
}

int32_t k_configloader_qbase_receivers(void* self, const char* signal) {
    return KConfigLoader_QBaseReceivers((KConfigLoader*)self, signal);
}

void k_configloader_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KConfigLoader_OnReceivers((KConfigLoader*)self, (intptr_t)callback);
}

bool k_configloader_is_signal_connected(void* self, void* signal) {
    return KConfigLoader_IsSignalConnected((KConfigLoader*)self, (QMetaMethod*)signal);
}

bool k_configloader_qbase_is_signal_connected(void* self, void* signal) {
    return KConfigLoader_QBaseIsSignalConnected((KConfigLoader*)self, (QMetaMethod*)signal);
}

void k_configloader_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KConfigLoader_OnIsSignalConnected((KConfigLoader*)self, (intptr_t)callback);
}

void k_configloader_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_configloader_delete(void* self) {
    KConfigLoader_Delete((KConfigLoader*)(self));
}
