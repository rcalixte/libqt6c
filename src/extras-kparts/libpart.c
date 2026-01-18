#include "../extras-kxmlgui/libkactioncollection.hpp"
#include "libguiactivateevent.hpp"
#include "libpartactivateevent.hpp"
#include "libpartbase.hpp"
#include "libpartmanager.hpp"
#include "../extras-kcoreaddons/libkpluginmetadata.hpp"
#include "../extras-kxmlgui/libkxmlguiclient.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../xml/libqdom.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqwidget.hpp"
#include "libpart.hpp"
#include "libpart.h"

KParts__Part* k_parts__part_new() {
    return KParts__Part_new();
}

KParts__Part* k_parts__part_new2(void* parent) {
    return KParts__Part_new2((QObject*)parent);
}

KParts__Part* k_parts__part_new3(void* parent, void* data) {
    return KParts__Part_new3((QObject*)parent, (KPluginMetaData*)data);
}

const QMetaObject* k_parts__part_meta_object(void* self) {
    return KParts__Part_MetaObject((KParts__Part*)self);
}

void* k_parts__part_metacast(void* self, const char* param1) {
    return KParts__Part_Metacast((KParts__Part*)self, param1);
}

int32_t k_parts__part_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__Part_Metacall((KParts__Part*)self, param1, param2, param3);
}

void k_parts__part_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KParts__Part_OnMetacall((KParts__Part*)self, (intptr_t)callback);
}

int32_t k_parts__part_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__Part_QBaseMetacall((KParts__Part*)self, param1, param2, param3);
}

const char* k_parts__part_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* k_parts__part_widget(void* self) {
    return KParts__Part_Widget((KParts__Part*)self);
}

void k_parts__part_on_widget(void* self, QWidget* (*callback)()) {
    KParts__Part_OnWidget((KParts__Part*)self, (intptr_t)callback);
}

QWidget* k_parts__part_qbase_widget(void* self) {
    return KParts__Part_QBaseWidget((KParts__Part*)self);
}

void k_parts__part_set_manager(void* self, void* manager) {
    KParts__Part_SetManager((KParts__Part*)self, (KParts__PartManager*)manager);
}

void k_parts__part_on_set_manager(void* self, void (*callback)(void*, void*)) {
    KParts__Part_OnSetManager((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_qbase_set_manager(void* self, void* manager) {
    KParts__Part_QBaseSetManager((KParts__Part*)self, (KParts__PartManager*)manager);
}

KParts__PartManager* k_parts__part_manager(void* self) {
    return KParts__Part_Manager((KParts__Part*)self);
}

void k_parts__part_set_auto_delete_widget(void* self, bool autoDeleteWidget) {
    KParts__Part_SetAutoDeleteWidget((KParts__Part*)self, autoDeleteWidget);
}

void k_parts__part_set_auto_delete_part(void* self, bool autoDeletePart) {
    KParts__Part_SetAutoDeletePart((KParts__Part*)self, autoDeletePart);
}

KParts__Part* k_parts__part_hit_test(void* self, void* widget, void* globalPos) {
    return KParts__Part_HitTest((KParts__Part*)self, (QWidget*)widget, (QPoint*)globalPos);
}

void k_parts__part_on_hit_test(void* self, KParts__Part* (*callback)(void*, void*, void*)) {
    KParts__Part_OnHitTest((KParts__Part*)self, (intptr_t)callback);
}

KParts__Part* k_parts__part_qbase_hit_test(void* self, void* widget, void* globalPos) {
    return KParts__Part_QBaseHitTest((KParts__Part*)self, (QWidget*)widget, (QPoint*)globalPos);
}

KPluginMetaData* k_parts__part_meta_data(void* self) {
    return KParts__Part_MetaData((KParts__Part*)self);
}

void k_parts__part_set_window_caption(void* self, const char* caption) {
    KParts__Part_SetWindowCaption((KParts__Part*)self, qstring(caption));
}

void k_parts__part_on_set_window_caption(void* self, void (*callback)(void*, const char*)) {
    KParts__Part_Connect_SetWindowCaption((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_set_status_bar_text(void* self, const char* text) {
    KParts__Part_SetStatusBarText((KParts__Part*)self, qstring(text));
}

void k_parts__part_on_set_status_bar_text(void* self, void (*callback)(void*, const char*)) {
    KParts__Part_Connect_SetStatusBarText((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_set_widget(void* self, void* widget) {
    KParts__Part_SetWidget((KParts__Part*)self, (QWidget*)widget);
}

void k_parts__part_on_set_widget(void* self, void (*callback)(void*, void*)) {
    KParts__Part_OnSetWidget((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_qbase_set_widget(void* self, void* widget) {
    KParts__Part_QBaseSetWidget((KParts__Part*)self, (QWidget*)widget);
}

void k_parts__part_custom_event(void* self, void* event) {
    KParts__Part_CustomEvent((KParts__Part*)self, (QEvent*)event);
}

void k_parts__part_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KParts__Part_OnCustomEvent((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_qbase_custom_event(void* self, void* event) {
    KParts__Part_QBaseCustomEvent((KParts__Part*)self, (QEvent*)event);
}

void k_parts__part_part_activate_event(void* self, void* event) {
    KParts__Part_PartActivateEvent((KParts__Part*)self, (KParts__PartActivateEvent*)event);
}

void k_parts__part_on_part_activate_event(void* self, void (*callback)(void*, void*)) {
    KParts__Part_OnPartActivateEvent((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_qbase_part_activate_event(void* self, void* event) {
    KParts__Part_QBasePartActivateEvent((KParts__Part*)self, (KParts__PartActivateEvent*)event);
}

void k_parts__part_gui_activate_event(void* self, void* event) {
    KParts__Part_GuiActivateEvent((KParts__Part*)self, (KParts__GUIActivateEvent*)event);
}

void k_parts__part_on_gui_activate_event(void* self, void (*callback)(void*, void*)) {
    KParts__Part_OnGuiActivateEvent((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_qbase_gui_activate_event(void* self, void* event) {
    KParts__Part_QBaseGuiActivateEvent((KParts__Part*)self, (KParts__GUIActivateEvent*)event);
}

QWidget* k_parts__part_host_container(void* self, const char* containerName) {
    return KParts__Part_HostContainer((KParts__Part*)self, qstring(containerName));
}

void k_parts__part_on_host_container(void* self, QWidget* (*callback)(void*, const char*)) {
    KParts__Part_OnHostContainer((KParts__Part*)self, (intptr_t)callback);
}

QWidget* k_parts__part_qbase_host_container(void* self, const char* containerName) {
    return KParts__Part_QBaseHostContainer((KParts__Part*)self, qstring(containerName));
}

void k_parts__part_slot_widget_destroyed(void* self) {
    KParts__Part_SlotWidgetDestroyed((KParts__Part*)self);
}

void k_parts__part_on_slot_widget_destroyed(void* self, void (*callback)()) {
    KParts__Part_OnSlotWidgetDestroyed((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_qbase_slot_widget_destroyed(void* self) {
    KParts__Part_QBaseSlotWidgetDestroyed((KParts__Part*)self);
}

const char* k_parts__part_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__part_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__part_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__part_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_parts__part_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_parts__part_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_parts__part_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_parts__part_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_parts__part_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_parts__part_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_parts__part_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_parts__part_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_parts__part_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_parts__part_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_parts__part_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_parts__part_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_parts__part_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_parts__part_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_parts__part_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_parts__part_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_parts__part_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_parts__part_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_parts__part_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_parts__part_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_parts__part_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_parts__part_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_parts__part_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__part_dynamic_property_names\n");
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

QBindingStorage* k_parts__part_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_parts__part_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_parts__part_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_parts__part_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_parts__part_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_parts__part_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_parts__part_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_parts__part_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_parts__part_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_parts__part_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_parts__part_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_parts__part_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_parts__part_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_parts__part_set_part_object(void* self, void* object) {
    KParts__PartBase_SetPartObject((KParts__PartBase*)self, (QObject*)object);
}

QObject* k_parts__part_part_object(void* self) {
    return KParts__PartBase_PartObject((KParts__PartBase*)self);
}

QAction* k_parts__part_action(void* self, const char* name) {
    return KXMLGUIClient_Action((KXMLGUIClient*)self, qstring(name));
}

void k_parts__part_set_x_m_l_g_u_i_build_document(void* self, void* doc) {
    KXMLGUIClient_SetXMLGUIBuildDocument((KXMLGUIClient*)self, (QDomDocument*)doc);
}

QDomDocument* k_parts__part_xmlgui_build_document(void* self) {
    return KXMLGUIClient_XmlguiBuildDocument((KXMLGUIClient*)self);
}

void k_parts__part_set_factory(void* self, void* factory) {
    KXMLGUIClient_SetFactory((KXMLGUIClient*)self, (KXMLGUIFactory*)factory);
}

KXMLGUIFactory* k_parts__part_factory(void* self) {
    return KXMLGUIClient_Factory((KXMLGUIClient*)self);
}

KXMLGUIClient* k_parts__part_parent_client(void* self) {
    return KXMLGUIClient_ParentClient((KXMLGUIClient*)self);
}

void k_parts__part_insert_child_client(void* self, void* child) {
    KXMLGUIClient_InsertChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

void k_parts__part_remove_child_client(void* self, void* child) {
    KXMLGUIClient_RemoveChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

libqt_list /* of KXMLGUIClient* */ k_parts__part_child_clients(void* self) {
    libqt_list _arr = KXMLGUIClient_ChildClients((KXMLGUIClient*)self);
    return _arr;
}

void k_parts__part_set_client_builder(void* self, void* builder) {
    KXMLGUIClient_SetClientBuilder((KXMLGUIClient*)self, (KXMLGUIBuilder*)builder);
}

KXMLGUIBuilder* k_parts__part_client_builder(void* self) {
    return KXMLGUIClient_ClientBuilder((KXMLGUIClient*)self);
}

void k_parts__part_reload_x_m_l(void* self) {
    KXMLGUIClient_ReloadXML((KXMLGUIClient*)self);
}

void k_parts__part_plug_action_list(void* self, const char* name, libqt_list /* of QAction* */ actionList) {
    KXMLGUIClient_PlugActionList((KXMLGUIClient*)self, qstring(name), actionList);
}

void k_parts__part_unplug_action_list(void* self, const char* name) {
    KXMLGUIClient_UnplugActionList((KXMLGUIClient*)self, qstring(name));
}

const char* k_parts__part_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__part_find_most_recent_x_m_l_file\n");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    libqt_string _str = KXMLGUIClient_FindMostRecentXMLFile(files_list, qstring(doc));
    free(files_qstr);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__part_add_state_action_enabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionEnabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

void k_parts__part_add_state_action_disabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionDisabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

KXMLGUIClient__StateChange* k_parts__part_get_actions_to_change_for_state(void* self, const char* state) {
    return KXMLGUIClient_GetActionsToChangeForState((KXMLGUIClient*)self, qstring(state));
}

void k_parts__part_begin_x_m_l_plug(void* self, void* param1) {
    KXMLGUIClient_BeginXMLPlug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__part_end_x_m_l_plug(void* self) {
    KXMLGUIClient_EndXMLPlug((KXMLGUIClient*)self);
}

void k_parts__part_prepare_x_m_l_unplug(void* self, void* param1) {
    KXMLGUIClient_PrepareXMLUnplug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__part_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile) {
    KXMLGUIClient_ReplaceXMLFile((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile));
}

const char* k_parts__part_find_version_number(const char* xml) {
    libqt_string _str = KXMLGUIClient_FindVersionNumber(qstring(xml));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__part_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge) {
    KXMLGUIClient_ReplaceXMLFile3((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile), merge);
}

bool k_parts__part_event(void* self, void* event) {
    return KParts__Part_Event((KParts__Part*)self, (QEvent*)event);
}

bool k_parts__part_qbase_event(void* self, void* event) {
    return KParts__Part_QBaseEvent((KParts__Part*)self, (QEvent*)event);
}

void k_parts__part_on_event(void* self, bool (*callback)(void*, void*)) {
    KParts__Part_OnEvent((KParts__Part*)self, (intptr_t)callback);
}

bool k_parts__part_event_filter(void* self, void* watched, void* event) {
    return KParts__Part_EventFilter((KParts__Part*)self, (QObject*)watched, (QEvent*)event);
}

bool k_parts__part_qbase_event_filter(void* self, void* watched, void* event) {
    return KParts__Part_QBaseEventFilter((KParts__Part*)self, (QObject*)watched, (QEvent*)event);
}

void k_parts__part_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KParts__Part_OnEventFilter((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_timer_event(void* self, void* event) {
    KParts__Part_TimerEvent((KParts__Part*)self, (QTimerEvent*)event);
}

void k_parts__part_qbase_timer_event(void* self, void* event) {
    KParts__Part_QBaseTimerEvent((KParts__Part*)self, (QTimerEvent*)event);
}

void k_parts__part_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KParts__Part_OnTimerEvent((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_child_event(void* self, void* event) {
    KParts__Part_ChildEvent((KParts__Part*)self, (QChildEvent*)event);
}

void k_parts__part_qbase_child_event(void* self, void* event) {
    KParts__Part_QBaseChildEvent((KParts__Part*)self, (QChildEvent*)event);
}

void k_parts__part_on_child_event(void* self, void (*callback)(void*, void*)) {
    KParts__Part_OnChildEvent((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_connect_notify(void* self, void* signal) {
    KParts__Part_ConnectNotify((KParts__Part*)self, (QMetaMethod*)signal);
}

void k_parts__part_qbase_connect_notify(void* self, void* signal) {
    KParts__Part_QBaseConnectNotify((KParts__Part*)self, (QMetaMethod*)signal);
}

void k_parts__part_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__Part_OnConnectNotify((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_disconnect_notify(void* self, void* signal) {
    KParts__Part_DisconnectNotify((KParts__Part*)self, (QMetaMethod*)signal);
}

void k_parts__part_qbase_disconnect_notify(void* self, void* signal) {
    KParts__Part_QBaseDisconnectNotify((KParts__Part*)self, (QMetaMethod*)signal);
}

void k_parts__part_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__Part_OnDisconnectNotify((KParts__Part*)self, (intptr_t)callback);
}

QAction* k_parts__part_action2(void* self, void* element) {
    return KParts__Part_Action2((KParts__Part*)self, (QDomElement*)element);
}

QAction* k_parts__part_qbase_action2(void* self, void* element) {
    return KParts__Part_QBaseAction2((KParts__Part*)self, (QDomElement*)element);
}

void k_parts__part_on_action2(void* self, QAction* (*callback)(void*, void*)) {
    KParts__Part_OnAction2((KParts__Part*)self, (intptr_t)callback);
}

KActionCollection* k_parts__part_action_collection(void* self) {
    return KParts__Part_ActionCollection((KParts__Part*)self);
}

KActionCollection* k_parts__part_qbase_action_collection(void* self) {
    return KParts__Part_QBaseActionCollection((KParts__Part*)self);
}

void k_parts__part_on_action_collection(void* self, KActionCollection* (*callback)()) {
    KParts__Part_OnActionCollection((KParts__Part*)self, (intptr_t)callback);
}

const char* k_parts__part_component_name(void* self) {
    libqt_string _str = KParts__Part_ComponentName((KParts__Part*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__part_qbase_component_name(void* self) {
    libqt_string _str = KParts__Part_QBaseComponentName((KParts__Part*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__part_on_component_name(void* self, const char* (*callback)()) {
    KParts__Part_OnComponentName((KParts__Part*)self, (intptr_t)callback);
}

QDomDocument* k_parts__part_dom_document(void* self) {
    return KParts__Part_DomDocument((KParts__Part*)self);
}

QDomDocument* k_parts__part_qbase_dom_document(void* self) {
    return KParts__Part_QBaseDomDocument((KParts__Part*)self);
}

void k_parts__part_on_dom_document(void* self, QDomDocument* (*callback)()) {
    KParts__Part_OnDomDocument((KParts__Part*)self, (intptr_t)callback);
}

const char* k_parts__part_xml_file(void* self) {
    libqt_string _str = KParts__Part_XmlFile((KParts__Part*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__part_qbase_xml_file(void* self) {
    libqt_string _str = KParts__Part_QBaseXmlFile((KParts__Part*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__part_on_xml_file(void* self, const char* (*callback)()) {
    KParts__Part_OnXmlFile((KParts__Part*)self, (intptr_t)callback);
}

const char* k_parts__part_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__Part_LocalXMLFile((KParts__Part*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__part_qbase_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__Part_QBaseLocalXMLFile((KParts__Part*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__part_on_local_x_m_l_file(void* self, const char* (*callback)()) {
    KParts__Part_OnLocalXMLFile((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__Part_SetComponentName((KParts__Part*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__part_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__Part_QBaseSetComponentName((KParts__Part*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__part_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*)) {
    KParts__Part_OnSetComponentName((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__Part_SetXMLFile((KParts__Part*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__part_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__Part_QBaseSetXMLFile((KParts__Part*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__part_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool)) {
    KParts__Part_OnSetXMLFile((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_set_local_x_m_l_file(void* self, const char* file) {
    KParts__Part_SetLocalXMLFile((KParts__Part*)self, qstring(file));
}

void k_parts__part_qbase_set_local_x_m_l_file(void* self, const char* file) {
    KParts__Part_QBaseSetLocalXMLFile((KParts__Part*)self, qstring(file));
}

void k_parts__part_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*)) {
    KParts__Part_OnSetLocalXMLFile((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__Part_SetXML((KParts__Part*)self, qstring(document), merge);
}

void k_parts__part_qbase_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__Part_QBaseSetXML((KParts__Part*)self, qstring(document), merge);
}

void k_parts__part_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool)) {
    KParts__Part_OnSetXML((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__Part_SetDOMDocument((KParts__Part*)self, (QDomDocument*)document, merge);
}

void k_parts__part_qbase_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__Part_QBaseSetDOMDocument((KParts__Part*)self, (QDomDocument*)document, merge);
}

void k_parts__part_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool)) {
    KParts__Part_OnSetDOMDocument((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__Part_StateChanged((KParts__Part*)self, qstring(newstate), reverse);
}

void k_parts__part_qbase_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__Part_QBaseStateChanged((KParts__Part*)self, qstring(newstate), reverse);
}

void k_parts__part_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t)) {
    KParts__Part_OnStateChanged((KParts__Part*)self, (intptr_t)callback);
}

QObject* k_parts__part_sender(void* self) {
    return KParts__Part_Sender((KParts__Part*)self);
}

QObject* k_parts__part_qbase_sender(void* self) {
    return KParts__Part_QBaseSender((KParts__Part*)self);
}

void k_parts__part_on_sender(void* self, QObject* (*callback)()) {
    KParts__Part_OnSender((KParts__Part*)self, (intptr_t)callback);
}

int32_t k_parts__part_sender_signal_index(void* self) {
    return KParts__Part_SenderSignalIndex((KParts__Part*)self);
}

int32_t k_parts__part_qbase_sender_signal_index(void* self) {
    return KParts__Part_QBaseSenderSignalIndex((KParts__Part*)self);
}

void k_parts__part_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KParts__Part_OnSenderSignalIndex((KParts__Part*)self, (intptr_t)callback);
}

int32_t k_parts__part_receivers(void* self, const char* signal) {
    return KParts__Part_Receivers((KParts__Part*)self, signal);
}

int32_t k_parts__part_qbase_receivers(void* self, const char* signal) {
    return KParts__Part_QBaseReceivers((KParts__Part*)self, signal);
}

void k_parts__part_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KParts__Part_OnReceivers((KParts__Part*)self, (intptr_t)callback);
}

bool k_parts__part_is_signal_connected(void* self, void* signal) {
    return KParts__Part_IsSignalConnected((KParts__Part*)self, (QMetaMethod*)signal);
}

bool k_parts__part_qbase_is_signal_connected(void* self, void* signal) {
    return KParts__Part_QBaseIsSignalConnected((KParts__Part*)self, (QMetaMethod*)signal);
}

void k_parts__part_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KParts__Part_OnIsSignalConnected((KParts__Part*)self, (intptr_t)callback);
}

const char* k_parts__part_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__Part_StandardsXmlFileLocation((KParts__Part*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__part_qbase_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__Part_QBaseStandardsXmlFileLocation((KParts__Part*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__part_on_standards_xml_file_location(void* self, const char* (*callback)()) {
    KParts__Part_OnStandardsXmlFileLocation((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_load_standards_xml_file(void* self) {
    KParts__Part_LoadStandardsXmlFile((KParts__Part*)self);
}

void k_parts__part_qbase_load_standards_xml_file(void* self) {
    KParts__Part_QBaseLoadStandardsXmlFile((KParts__Part*)self);
}

void k_parts__part_on_load_standards_xml_file(void* self, void (*callback)()) {
    KParts__Part_OnLoadStandardsXmlFile((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__part_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_parts__part_delete(void* self) {
    KParts__Part_Delete((KParts__Part*)(self));
}
