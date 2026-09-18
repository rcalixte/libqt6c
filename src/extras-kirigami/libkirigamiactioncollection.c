#include "../extras-kconfig/libkconfiggroup.hpp"
#include "../libqaction.hpp"
#include "../libqactiongroup.hpp"
#include "../libqcoreevent.hpp"
#include "../libqkeysequence.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkirigamiactioncollection.hpp"
#include "libkirigamiactioncollection.h"

KirigamiActionCollection* k_irigamiactioncollection_new(void* parent) {
    return KirigamiActionCollection_New((QObject*)parent);
}

KirigamiActionCollection* k_irigamiactioncollection_new2(void* parent, const char* cName) {
    return KirigamiActionCollection_New2((QObject*)parent, qstring(cName));
}

const QMetaObject* k_irigamiactioncollection_meta_object(void* self) {
    return KirigamiActionCollection_MetaObject((KirigamiActionCollection*)self);
}

void k_irigamiactioncollection_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KirigamiActionCollection_OnMetaObject((KirigamiActionCollection*)self, (intptr_t)callback);
}

const QMetaObject* k_irigamiactioncollection_super_meta_object(void* self) {
    return KirigamiActionCollection_SuperMetaObject((KirigamiActionCollection*)self);
}

void* k_irigamiactioncollection_metacast(void* self, const char* param1) {
    return KirigamiActionCollection_Metacast((KirigamiActionCollection*)self, param1);
}

void k_irigamiactioncollection_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KirigamiActionCollection_OnMetacast((KirigamiActionCollection*)self, (intptr_t)callback);
}

void* k_irigamiactioncollection_super_metacast(void* self, const char* param1) {
    return KirigamiActionCollection_SuperMetacast((KirigamiActionCollection*)self, param1);
}

int32_t k_irigamiactioncollection_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KirigamiActionCollection_Metacall((KirigamiActionCollection*)self, param1, param2, param3);
}

void k_irigamiactioncollection_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KirigamiActionCollection_OnMetacall((KirigamiActionCollection*)self, (intptr_t)callback);
}

int32_t k_irigamiactioncollection_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KirigamiActionCollection_SuperMetacall((KirigamiActionCollection*)self, param1, param2, param3);
}

const char* k_irigamiactioncollection_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KirigamiActionCollection* */ k_irigamiactioncollection_all_collections() {
    libqt_list _arr = KirigamiActionCollection_AllCollections();
    return _arr;
}

void k_irigamiactioncollection_clear(void* self) {
    KirigamiActionCollection_Clear((KirigamiActionCollection*)self);
}

const char* k_irigamiactioncollection_config_group(void* self) {
    libqt_string _str = KirigamiActionCollection_ConfigGroup((KirigamiActionCollection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_irigamiactioncollection_config_is_global(void* self) {
    return KirigamiActionCollection_ConfigIsGlobal((KirigamiActionCollection*)self);
}

void k_irigamiactioncollection_set_config_group(void* self, const char* group) {
    KirigamiActionCollection_SetConfigGroup((KirigamiActionCollection*)self, qstring(group));
}

void k_irigamiactioncollection_set_config_global(void* self, bool global) {
    KirigamiActionCollection_SetConfigGlobal((KirigamiActionCollection*)self, global);
}

void k_irigamiactioncollection_read_settings(void* self) {
    KirigamiActionCollection_ReadSettings((KirigamiActionCollection*)self);
}

void k_irigamiactioncollection_write_settings(void* self) {
    KirigamiActionCollection_WriteSettings((KirigamiActionCollection*)self);
}

int32_t k_irigamiactioncollection_count(void* self) {
    return KirigamiActionCollection_Count((KirigamiActionCollection*)self);
}

bool k_irigamiactioncollection_is_empty(void* self) {
    return KirigamiActionCollection_IsEmpty((KirigamiActionCollection*)self);
}

QAction* k_irigamiactioncollection_action(void* self, int index) {
    return KirigamiActionCollection_Action((KirigamiActionCollection*)self, index);
}

QAction* k_irigamiactioncollection_action2(void* self, const char* name) {
    return KirigamiActionCollection_Action2((KirigamiActionCollection*)self, qstring(name));
}

libqt_list /* of QAction* */ k_irigamiactioncollection_actions(void* self) {
    libqt_list _arr = KirigamiActionCollection_Actions((KirigamiActionCollection*)self);
    return _arr;
}

libqt_list /* of QAction* */ k_irigamiactioncollection_actions_without_group(void* self) {
    libqt_list _arr = KirigamiActionCollection_ActionsWithoutGroup((KirigamiActionCollection*)self);
    return _arr;
}

libqt_list /* of QActionGroup* */ k_irigamiactioncollection_action_groups(void* self) {
    libqt_list _arr = KirigamiActionCollection_ActionGroups((KirigamiActionCollection*)self);
    return _arr;
}

void k_irigamiactioncollection_set_component_name(void* self, const char* componentName) {
    KirigamiActionCollection_SetComponentName((KirigamiActionCollection*)self, qstring(componentName));
}

const char* k_irigamiactioncollection_component_name(void* self) {
    libqt_string _str = KirigamiActionCollection_ComponentName((KirigamiActionCollection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigamiactioncollection_set_component_display_name(void* self, const char* displayName) {
    KirigamiActionCollection_SetComponentDisplayName((KirigamiActionCollection*)self, qstring(displayName));
}

const char* k_irigamiactioncollection_component_display_name(void* self) {
    libqt_string _str = KirigamiActionCollection_ComponentDisplayName((KirigamiActionCollection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigamiactioncollection_inserted(void* self, void* action) {
    KirigamiActionCollection_Inserted((KirigamiActionCollection*)self, (QAction*)action);
}

void k_irigamiactioncollection_on_inserted(void* self, void (*callback)(void*, void*)) {
    KirigamiActionCollection_Connect_Inserted((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_changed(void* self) {
    KirigamiActionCollection_Changed((KirigamiActionCollection*)self);
}

void k_irigamiactioncollection_on_changed(void* self, void (*callback)(void*)) {
    KirigamiActionCollection_Connect_Changed((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_action_hovered(void* self, void* action) {
    KirigamiActionCollection_ActionHovered((KirigamiActionCollection*)self, (QAction*)action);
}

void k_irigamiactioncollection_on_action_hovered(void* self, void (*callback)(void*, void*)) {
    KirigamiActionCollection_Connect_ActionHovered((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_action_triggered(void* self, void* action) {
    KirigamiActionCollection_ActionTriggered((KirigamiActionCollection*)self, (QAction*)action);
}

void k_irigamiactioncollection_on_action_triggered(void* self, void (*callback)(void*, void*)) {
    KirigamiActionCollection_Connect_ActionTriggered((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_connect_notify(void* self, void* signal) {
    KirigamiActionCollection_ConnectNotify((KirigamiActionCollection*)self, (QMetaMethod*)signal);
}

void k_irigamiactioncollection_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KirigamiActionCollection_OnConnectNotify((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_super_connect_notify(void* self, void* signal) {
    KirigamiActionCollection_SuperConnectNotify((KirigamiActionCollection*)self, (QMetaMethod*)signal);
}

void k_irigamiactioncollection_slot_action_triggered(void* self) {
    KirigamiActionCollection_SlotActionTriggered((KirigamiActionCollection*)self);
}

void k_irigamiactioncollection_on_slot_action_triggered(void* self, void (*callback)()) {
    KirigamiActionCollection_OnSlotActionTriggered((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_super_slot_action_triggered(void* self) {
    KirigamiActionCollection_SuperSlotActionTriggered((KirigamiActionCollection*)self);
}

QAction* k_irigamiactioncollection_add_action(void* self, const char* name, void* action) {
    return KirigamiActionCollection_AddAction((KirigamiActionCollection*)self, qstring(name), (QAction*)action);
}

void k_irigamiactioncollection_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    KirigamiActionCollection_AddActions((KirigamiActionCollection*)self, actions);
}

void k_irigamiactioncollection_remove_action(void* self, void* action) {
    KirigamiActionCollection_RemoveAction((KirigamiActionCollection*)self, (QAction*)action);
}

QAction* k_irigamiactioncollection_take_action(void* self, void* action) {
    return KirigamiActionCollection_TakeAction((KirigamiActionCollection*)self, (QAction*)action);
}

QKeySequence* k_irigamiactioncollection_default_shortcut(void* action) {
    return KirigamiActionCollection_DefaultShortcut((QAction*)action);
}

libqt_list /* of QKeySequence* */ k_irigamiactioncollection_default_shortcuts(void* action) {
    libqt_list _arr = KirigamiActionCollection_DefaultShortcuts((QAction*)action);
    return _arr;
}

void k_irigamiactioncollection_set_default_shortcut(void* action, void* shortcut) {
    KirigamiActionCollection_SetDefaultShortcut((QAction*)action, (QKeySequence*)shortcut);
}

void k_irigamiactioncollection_set_default_shortcuts(void* action, libqt_list /* of QKeySequence* */ shortcuts) {
    KirigamiActionCollection_SetDefaultShortcuts((QAction*)action, shortcuts);
}

bool k_irigamiactioncollection_is_shortcuts_configurable(void* action) {
    return KirigamiActionCollection_IsShortcutsConfigurable((QAction*)action);
}

void k_irigamiactioncollection_set_shortcuts_configurable(void* action, bool configurable) {
    KirigamiActionCollection_SetShortcutsConfigurable((QAction*)action, configurable);
}

const char* k_irigamiactioncollection_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigamiactioncollection_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigamiactioncollection_read_settings1(void* self, void* config) {
    KirigamiActionCollection_ReadSettings1((KirigamiActionCollection*)self, (KConfigGroup*)config);
}

void k_irigamiactioncollection_write_settings1(void* self, void* config) {
    KirigamiActionCollection_WriteSettings1((KirigamiActionCollection*)self, (KConfigGroup*)config);
}

void k_irigamiactioncollection_write_settings2(void* self, void* config, bool writeDefaults) {
    KirigamiActionCollection_WriteSettings2((KirigamiActionCollection*)self, (KConfigGroup*)config, writeDefaults);
}

void k_irigamiactioncollection_write_settings3(void* self, void* config, bool writeDefaults, void* oneAction) {
    KirigamiActionCollection_WriteSettings3((KirigamiActionCollection*)self, (KConfigGroup*)config, writeDefaults, (QAction*)oneAction);
}

const char* k_irigamiactioncollection_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigamiactioncollection_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_irigamiactioncollection_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_irigamiactioncollection_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_irigamiactioncollection_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_irigamiactioncollection_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_irigamiactioncollection_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_irigamiactioncollection_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_irigamiactioncollection_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_irigamiactioncollection_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_irigamiactioncollection_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_irigamiactioncollection_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_irigamiactioncollection_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_irigamiactioncollection_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_irigamiactioncollection_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_irigamiactioncollection_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_irigamiactioncollection_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_irigamiactioncollection_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_irigamiactioncollection_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_irigamiactioncollection_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_irigamiactioncollection_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_irigamiactioncollection_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_irigamiactioncollection_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_irigamiactioncollection_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_irigamiactioncollection_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_irigamiactioncollection_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_irigamiactioncollection_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_irigamiactioncollection_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_irigamiactioncollection_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_irigamiactioncollection_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_irigamiactioncollection_dynamic_property_names\n");
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

QBindingStorage* k_irigamiactioncollection_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_irigamiactioncollection_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_irigamiactioncollection_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_irigamiactioncollection_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_irigamiactioncollection_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_irigamiactioncollection_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_irigamiactioncollection_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_irigamiactioncollection_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_irigamiactioncollection_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_irigamiactioncollection_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_irigamiactioncollection_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_irigamiactioncollection_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_irigamiactioncollection_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_irigamiactioncollection_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_irigamiactioncollection_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_irigamiactioncollection_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_irigamiactioncollection_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_irigamiactioncollection_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_irigamiactioncollection_event(void* self, void* event) {
    return KirigamiActionCollection_Event((KirigamiActionCollection*)self, (QEvent*)event);
}

bool k_irigamiactioncollection_super_event(void* self, void* event) {
    return KirigamiActionCollection_SuperEvent((KirigamiActionCollection*)self, (QEvent*)event);
}

void k_irigamiactioncollection_on_event(void* self, bool (*callback)(void*, void*)) {
    KirigamiActionCollection_OnEvent((KirigamiActionCollection*)self, (intptr_t)callback);
}

bool k_irigamiactioncollection_event_filter(void* self, void* watched, void* event) {
    return KirigamiActionCollection_EventFilter((KirigamiActionCollection*)self, (QObject*)watched, (QEvent*)event);
}

bool k_irigamiactioncollection_super_event_filter(void* self, void* watched, void* event) {
    return KirigamiActionCollection_SuperEventFilter((KirigamiActionCollection*)self, (QObject*)watched, (QEvent*)event);
}

void k_irigamiactioncollection_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KirigamiActionCollection_OnEventFilter((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_timer_event(void* self, void* event) {
    KirigamiActionCollection_TimerEvent((KirigamiActionCollection*)self, (QTimerEvent*)event);
}

void k_irigamiactioncollection_super_timer_event(void* self, void* event) {
    KirigamiActionCollection_SuperTimerEvent((KirigamiActionCollection*)self, (QTimerEvent*)event);
}

void k_irigamiactioncollection_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KirigamiActionCollection_OnTimerEvent((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_child_event(void* self, void* event) {
    KirigamiActionCollection_ChildEvent((KirigamiActionCollection*)self, (QChildEvent*)event);
}

void k_irigamiactioncollection_super_child_event(void* self, void* event) {
    KirigamiActionCollection_SuperChildEvent((KirigamiActionCollection*)self, (QChildEvent*)event);
}

void k_irigamiactioncollection_on_child_event(void* self, void (*callback)(void*, void*)) {
    KirigamiActionCollection_OnChildEvent((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_custom_event(void* self, void* event) {
    KirigamiActionCollection_CustomEvent((KirigamiActionCollection*)self, (QEvent*)event);
}

void k_irigamiactioncollection_super_custom_event(void* self, void* event) {
    KirigamiActionCollection_SuperCustomEvent((KirigamiActionCollection*)self, (QEvent*)event);
}

void k_irigamiactioncollection_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KirigamiActionCollection_OnCustomEvent((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_disconnect_notify(void* self, void* signal) {
    KirigamiActionCollection_DisconnectNotify((KirigamiActionCollection*)self, (QMetaMethod*)signal);
}

void k_irigamiactioncollection_super_disconnect_notify(void* self, void* signal) {
    KirigamiActionCollection_SuperDisconnectNotify((KirigamiActionCollection*)self, (QMetaMethod*)signal);
}

void k_irigamiactioncollection_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KirigamiActionCollection_OnDisconnectNotify((KirigamiActionCollection*)self, (intptr_t)callback);
}

QObject* k_irigamiactioncollection_sender(void* self) {
    return KirigamiActionCollection_Sender((KirigamiActionCollection*)self);
}

QObject* k_irigamiactioncollection_super_sender(void* self) {
    return KirigamiActionCollection_SuperSender((KirigamiActionCollection*)self);
}

void k_irigamiactioncollection_on_sender(void* self, QObject* (*callback)()) {
    KirigamiActionCollection_OnSender((KirigamiActionCollection*)self, (intptr_t)callback);
}

int32_t k_irigamiactioncollection_sender_signal_index(void* self) {
    return KirigamiActionCollection_SenderSignalIndex((KirigamiActionCollection*)self);
}

int32_t k_irigamiactioncollection_super_sender_signal_index(void* self) {
    return KirigamiActionCollection_SuperSenderSignalIndex((KirigamiActionCollection*)self);
}

void k_irigamiactioncollection_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KirigamiActionCollection_OnSenderSignalIndex((KirigamiActionCollection*)self, (intptr_t)callback);
}

int32_t k_irigamiactioncollection_receivers(void* self, const char* signal) {
    return KirigamiActionCollection_Receivers((KirigamiActionCollection*)self, signal);
}

int32_t k_irigamiactioncollection_super_receivers(void* self, const char* signal) {
    return KirigamiActionCollection_SuperReceivers((KirigamiActionCollection*)self, signal);
}

void k_irigamiactioncollection_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KirigamiActionCollection_OnReceivers((KirigamiActionCollection*)self, (intptr_t)callback);
}

bool k_irigamiactioncollection_is_signal_connected(void* self, void* signal) {
    return KirigamiActionCollection_IsSignalConnected((KirigamiActionCollection*)self, (QMetaMethod*)signal);
}

bool k_irigamiactioncollection_super_is_signal_connected(void* self, void* signal) {
    return KirigamiActionCollection_SuperIsSignalConnected((KirigamiActionCollection*)self, (QMetaMethod*)signal);
}

void k_irigamiactioncollection_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KirigamiActionCollection_OnIsSignalConnected((KirigamiActionCollection*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_irigamiactioncollection_delete(void* self) {
    KirigamiActionCollection_Delete((KirigamiActionCollection*)(self));
}
