#include "../extras-kconfig/libkconfiggroup.hpp"
#include "libkxmlguiclient.hpp"
#include "../libqaction.hpp"
#include "../libqactiongroup.hpp"
#include "../libqcoreevent.hpp"
#include "../libqkeysequence.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkactioncollection.hpp"
#include "libkactioncollection.h"

KActionCollection* k_actioncollection_new(void* parent) {
    return KActionCollection_new((QObject*)parent);
}

KActionCollection* k_actioncollection_new2(void* parent, const char* cName) {
    return KActionCollection_new2((QObject*)parent, qstring(cName));
}

const QMetaObject* k_actioncollection_meta_object(void* self) {
    return KActionCollection_MetaObject((KActionCollection*)self);
}

void* k_actioncollection_metacast(void* self, const char* param1) {
    return KActionCollection_Metacast((KActionCollection*)self, param1);
}

int32_t k_actioncollection_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KActionCollection_Metacall((KActionCollection*)self, param1, param2, param3);
}

void k_actioncollection_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KActionCollection_OnMetacall((KActionCollection*)self, (intptr_t)callback);
}

int32_t k_actioncollection_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KActionCollection_QBaseMetacall((KActionCollection*)self, param1, param2, param3);
}

const char* k_actioncollection_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KActionCollection* */ k_actioncollection_all_collections() {
    libqt_list _arr = KActionCollection_AllCollections();
    return _arr;
}

void k_actioncollection_clear(void* self) {
    KActionCollection_Clear((KActionCollection*)self);
}

void k_actioncollection_associate_widget(void* self, void* widget) {
    KActionCollection_AssociateWidget((KActionCollection*)self, (QWidget*)widget);
}

void k_actioncollection_add_associated_widget(void* self, void* widget) {
    KActionCollection_AddAssociatedWidget((KActionCollection*)self, (QWidget*)widget);
}

void k_actioncollection_remove_associated_widget(void* self, void* widget) {
    KActionCollection_RemoveAssociatedWidget((KActionCollection*)self, (QWidget*)widget);
}

libqt_list /* of QWidget* */ k_actioncollection_associated_widgets(void* self) {
    libqt_list _arr = KActionCollection_AssociatedWidgets((KActionCollection*)self);
    return _arr;
}

void k_actioncollection_clear_associated_widgets(void* self) {
    KActionCollection_ClearAssociatedWidgets((KActionCollection*)self);
}

const char* k_actioncollection_config_group(void* self) {
    libqt_string _str = KActionCollection_ConfigGroup((KActionCollection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_actioncollection_config_is_global(void* self) {
    return KActionCollection_ConfigIsGlobal((KActionCollection*)self);
}

void k_actioncollection_set_config_group(void* self, const char* group) {
    KActionCollection_SetConfigGroup((KActionCollection*)self, qstring(group));
}

void k_actioncollection_set_config_global(void* self, bool global) {
    KActionCollection_SetConfigGlobal((KActionCollection*)self, global);
}

void k_actioncollection_read_settings(void* self) {
    KActionCollection_ReadSettings((KActionCollection*)self);
}

void k_actioncollection_import_global_shortcuts(void* self, void* config) {
    KActionCollection_ImportGlobalShortcuts((KActionCollection*)self, (KConfigGroup*)config);
}

void k_actioncollection_export_global_shortcuts(void* self, void* config) {
    KActionCollection_ExportGlobalShortcuts((KActionCollection*)self, (KConfigGroup*)config);
}

void k_actioncollection_write_settings(void* self) {
    KActionCollection_WriteSettings((KActionCollection*)self);
}

int32_t k_actioncollection_count(void* self) {
    return KActionCollection_Count((KActionCollection*)self);
}

bool k_actioncollection_is_empty(void* self) {
    return KActionCollection_IsEmpty((KActionCollection*)self);
}

QAction* k_actioncollection_action(void* self, int index) {
    return KActionCollection_Action((KActionCollection*)self, index);
}

QAction* k_actioncollection_action2(void* self, const char* name) {
    return KActionCollection_Action2((KActionCollection*)self, qstring(name));
}

libqt_list /* of QAction* */ k_actioncollection_actions(void* self) {
    libqt_list _arr = KActionCollection_Actions((KActionCollection*)self);
    return _arr;
}

libqt_list /* of QAction* */ k_actioncollection_actions_without_group(void* self) {
    libqt_list _arr = KActionCollection_ActionsWithoutGroup((KActionCollection*)self);
    return _arr;
}

libqt_list /* of QActionGroup* */ k_actioncollection_action_groups(void* self) {
    libqt_list _arr = KActionCollection_ActionGroups((KActionCollection*)self);
    return _arr;
}

void k_actioncollection_set_component_name(void* self, const char* componentName) {
    KActionCollection_SetComponentName((KActionCollection*)self, qstring(componentName));
}

const char* k_actioncollection_component_name(void* self) {
    libqt_string _str = KActionCollection_ComponentName((KActionCollection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actioncollection_set_component_display_name(void* self, const char* displayName) {
    KActionCollection_SetComponentDisplayName((KActionCollection*)self, qstring(displayName));
}

const char* k_actioncollection_component_display_name(void* self) {
    libqt_string _str = KActionCollection_ComponentDisplayName((KActionCollection*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const KXMLGUIClient* k_actioncollection_parent_g_u_i_client(void* self) {
    return KActionCollection_ParentGUIClient((KActionCollection*)self);
}

void k_actioncollection_inserted(void* self, void* action) {
    KActionCollection_Inserted((KActionCollection*)self, (QAction*)action);
}

void k_actioncollection_on_inserted(void* self, void (*callback)(void*, void*)) {
    KActionCollection_Connect_Inserted((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_changed(void* self) {
    KActionCollection_Changed((KActionCollection*)self);
}

void k_actioncollection_on_changed(void* self, void (*callback)(void*)) {
    KActionCollection_Connect_Changed((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_action_hovered(void* self, void* action) {
    KActionCollection_ActionHovered((KActionCollection*)self, (QAction*)action);
}

void k_actioncollection_on_action_hovered(void* self, void (*callback)(void*, void*)) {
    KActionCollection_Connect_ActionHovered((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_action_triggered(void* self, void* action) {
    KActionCollection_ActionTriggered((KActionCollection*)self, (QAction*)action);
}

void k_actioncollection_on_action_triggered(void* self, void (*callback)(void*, void*)) {
    KActionCollection_Connect_ActionTriggered((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_connect_notify(void* self, void* signal) {
    KActionCollection_ConnectNotify((KActionCollection*)self, (QMetaMethod*)signal);
}

void k_actioncollection_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KActionCollection_OnConnectNotify((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_qbase_connect_notify(void* self, void* signal) {
    KActionCollection_QBaseConnectNotify((KActionCollection*)self, (QMetaMethod*)signal);
}

void k_actioncollection_slot_action_triggered(void* self) {
    KActionCollection_SlotActionTriggered((KActionCollection*)self);
}

void k_actioncollection_on_slot_action_triggered(void* self, void (*callback)()) {
    KActionCollection_OnSlotActionTriggered((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_qbase_slot_action_triggered(void* self) {
    KActionCollection_QBaseSlotActionTriggered((KActionCollection*)self);
}

QAction* k_actioncollection_add_action(void* self, const char* name, void* action) {
    return KActionCollection_AddAction((KActionCollection*)self, qstring(name), (QAction*)action);
}

void k_actioncollection_add_actions(void* self, libqt_list actions) {
    KActionCollection_AddActions((KActionCollection*)self, actions);
}

void k_actioncollection_remove_action(void* self, void* action) {
    KActionCollection_RemoveAction((KActionCollection*)self, (QAction*)action);
}

QAction* k_actioncollection_take_action(void* self, void* action) {
    return KActionCollection_TakeAction((KActionCollection*)self, (QAction*)action);
}

QAction* k_actioncollection_add_action2(void* self, int32_t actionType) {
    return KActionCollection_AddAction2((KActionCollection*)self, actionType);
}

QKeySequence* k_actioncollection_default_shortcut(void* action) {
    return KActionCollection_DefaultShortcut((QAction*)action);
}

libqt_list /* of QKeySequence* */ k_actioncollection_default_shortcuts(void* action) {
    libqt_list _arr = KActionCollection_DefaultShortcuts((QAction*)action);
    return _arr;
}

void k_actioncollection_set_default_shortcut(void* action, void* shortcut) {
    KActionCollection_SetDefaultShortcut((QAction*)action, (QKeySequence*)shortcut);
}

void k_actioncollection_set_default_shortcuts(void* action, libqt_list shortcuts) {
    KActionCollection_SetDefaultShortcuts((QAction*)action, shortcuts);
}

bool k_actioncollection_is_shortcuts_configurable(void* action) {
    return KActionCollection_IsShortcutsConfigurable((QAction*)action);
}

void k_actioncollection_set_shortcuts_configurable(void* action, bool configurable) {
    KActionCollection_SetShortcutsConfigurable((QAction*)action, configurable);
}

const char* k_actioncollection_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_actioncollection_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actioncollection_read_settings1(void* self, void* config) {
    KActionCollection_ReadSettings1((KActionCollection*)self, (KConfigGroup*)config);
}

void k_actioncollection_export_global_shortcuts2(void* self, void* config, bool writeDefaults) {
    KActionCollection_ExportGlobalShortcuts2((KActionCollection*)self, (KConfigGroup*)config, writeDefaults);
}

void k_actioncollection_write_settings1(void* self, void* config) {
    KActionCollection_WriteSettings1((KActionCollection*)self, (KConfigGroup*)config);
}

void k_actioncollection_write_settings2(void* self, void* config, bool writeDefaults) {
    KActionCollection_WriteSettings2((KActionCollection*)self, (KConfigGroup*)config, writeDefaults);
}

void k_actioncollection_write_settings3(void* self, void* config, bool writeDefaults, void* oneAction) {
    KActionCollection_WriteSettings3((KActionCollection*)self, (KConfigGroup*)config, writeDefaults, (QAction*)oneAction);
}

const char* k_actioncollection_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actioncollection_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_actioncollection_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_actioncollection_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_actioncollection_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_actioncollection_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_actioncollection_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_actioncollection_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_actioncollection_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_actioncollection_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_actioncollection_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_actioncollection_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_actioncollection_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_actioncollection_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_actioncollection_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_actioncollection_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_actioncollection_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_actioncollection_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_actioncollection_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_actioncollection_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_actioncollection_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_actioncollection_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_actioncollection_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_actioncollection_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_actioncollection_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_actioncollection_dynamic_property_names");
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

QBindingStorage* k_actioncollection_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_actioncollection_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_actioncollection_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_actioncollection_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_actioncollection_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_actioncollection_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_actioncollection_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_actioncollection_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_actioncollection_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_actioncollection_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_actioncollection_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_actioncollection_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_actioncollection_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_actioncollection_event(void* self, void* event) {
    return KActionCollection_Event((KActionCollection*)self, (QEvent*)event);
}

bool k_actioncollection_qbase_event(void* self, void* event) {
    return KActionCollection_QBaseEvent((KActionCollection*)self, (QEvent*)event);
}

void k_actioncollection_on_event(void* self, bool (*callback)(void*, void*)) {
    KActionCollection_OnEvent((KActionCollection*)self, (intptr_t)callback);
}

bool k_actioncollection_event_filter(void* self, void* watched, void* event) {
    return KActionCollection_EventFilter((KActionCollection*)self, (QObject*)watched, (QEvent*)event);
}

bool k_actioncollection_qbase_event_filter(void* self, void* watched, void* event) {
    return KActionCollection_QBaseEventFilter((KActionCollection*)self, (QObject*)watched, (QEvent*)event);
}

void k_actioncollection_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KActionCollection_OnEventFilter((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_timer_event(void* self, void* event) {
    KActionCollection_TimerEvent((KActionCollection*)self, (QTimerEvent*)event);
}

void k_actioncollection_qbase_timer_event(void* self, void* event) {
    KActionCollection_QBaseTimerEvent((KActionCollection*)self, (QTimerEvent*)event);
}

void k_actioncollection_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KActionCollection_OnTimerEvent((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_child_event(void* self, void* event) {
    KActionCollection_ChildEvent((KActionCollection*)self, (QChildEvent*)event);
}

void k_actioncollection_qbase_child_event(void* self, void* event) {
    KActionCollection_QBaseChildEvent((KActionCollection*)self, (QChildEvent*)event);
}

void k_actioncollection_on_child_event(void* self, void (*callback)(void*, void*)) {
    KActionCollection_OnChildEvent((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_custom_event(void* self, void* event) {
    KActionCollection_CustomEvent((KActionCollection*)self, (QEvent*)event);
}

void k_actioncollection_qbase_custom_event(void* self, void* event) {
    KActionCollection_QBaseCustomEvent((KActionCollection*)self, (QEvent*)event);
}

void k_actioncollection_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KActionCollection_OnCustomEvent((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_disconnect_notify(void* self, void* signal) {
    KActionCollection_DisconnectNotify((KActionCollection*)self, (QMetaMethod*)signal);
}

void k_actioncollection_qbase_disconnect_notify(void* self, void* signal) {
    KActionCollection_QBaseDisconnectNotify((KActionCollection*)self, (QMetaMethod*)signal);
}

void k_actioncollection_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KActionCollection_OnDisconnectNotify((KActionCollection*)self, (intptr_t)callback);
}

QObject* k_actioncollection_sender(void* self) {
    return KActionCollection_Sender((KActionCollection*)self);
}

QObject* k_actioncollection_qbase_sender(void* self) {
    return KActionCollection_QBaseSender((KActionCollection*)self);
}

void k_actioncollection_on_sender(void* self, QObject* (*callback)()) {
    KActionCollection_OnSender((KActionCollection*)self, (intptr_t)callback);
}

int32_t k_actioncollection_sender_signal_index(void* self) {
    return KActionCollection_SenderSignalIndex((KActionCollection*)self);
}

int32_t k_actioncollection_qbase_sender_signal_index(void* self) {
    return KActionCollection_QBaseSenderSignalIndex((KActionCollection*)self);
}

void k_actioncollection_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KActionCollection_OnSenderSignalIndex((KActionCollection*)self, (intptr_t)callback);
}

int32_t k_actioncollection_receivers(void* self, const char* signal) {
    return KActionCollection_Receivers((KActionCollection*)self, signal);
}

int32_t k_actioncollection_qbase_receivers(void* self, const char* signal) {
    return KActionCollection_QBaseReceivers((KActionCollection*)self, signal);
}

void k_actioncollection_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KActionCollection_OnReceivers((KActionCollection*)self, (intptr_t)callback);
}

bool k_actioncollection_is_signal_connected(void* self, void* signal) {
    return KActionCollection_IsSignalConnected((KActionCollection*)self, (QMetaMethod*)signal);
}

bool k_actioncollection_qbase_is_signal_connected(void* self, void* signal) {
    return KActionCollection_QBaseIsSignalConnected((KActionCollection*)self, (QMetaMethod*)signal);
}

void k_actioncollection_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KActionCollection_OnIsSignalConnected((KActionCollection*)self, (intptr_t)callback);
}

void k_actioncollection_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_actioncollection_delete(void* self) {
    KActionCollection_Delete((KActionCollection*)(self));
}
