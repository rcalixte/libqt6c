#include "libkactioncollection.hpp"
#include "libkxmlguibuilder.hpp"
#include "libkxmlguifactory.hpp"
#include "../libqaction.hpp"
#include "../xml/libqdom.hpp"
#include "../libqwidget.hpp"
#include "libkxmlguiclient.hpp"
#include "libkxmlguiclient.h"

KXMLGUIClient* k_xmlguiclient_new() {
    return KXMLGUIClient_new();
}

KXMLGUIClient* k_xmlguiclient_new2(void* parent) {
    return KXMLGUIClient_new2((KXMLGUIClient*)parent);
}

QAction* k_xmlguiclient_action(void* self, const char* name) {
    return KXMLGUIClient_Action((KXMLGUIClient*)self, qstring(name));
}

QAction* k_xmlguiclient_action2(void* self, void* element) {
    return KXMLGUIClient_Action2((KXMLGUIClient*)self, (QDomElement*)element);
}

void k_xmlguiclient_on_action2(void* self, QAction* (*callback)(void*, void*)) {
    KXMLGUIClient_OnAction2((KXMLGUIClient*)self, (intptr_t)callback);
}

QAction* k_xmlguiclient_super_action2(void* self, void* element) {
    return KXMLGUIClient_SuperAction2((KXMLGUIClient*)self, (QDomElement*)element);
}

KActionCollection* k_xmlguiclient_action_collection(void* self) {
    return KXMLGUIClient_ActionCollection((KXMLGUIClient*)self);
}

void k_xmlguiclient_on_action_collection(void* self, KActionCollection* (*callback)()) {
    KXMLGUIClient_OnActionCollection((KXMLGUIClient*)self, (intptr_t)callback);
}

KActionCollection* k_xmlguiclient_super_action_collection(void* self) {
    return KXMLGUIClient_SuperActionCollection((KXMLGUIClient*)self);
}

const char* k_xmlguiclient_component_name(void* self) {
    libqt_string _str = KXMLGUIClient_ComponentName((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiclient_on_component_name(void* self, const char* (*callback)()) {
    KXMLGUIClient_OnComponentName((KXMLGUIClient*)self, (intptr_t)callback);
}

const char* k_xmlguiclient_super_component_name(void* self) {
    libqt_string _str = KXMLGUIClient_SuperComponentName((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomDocument* k_xmlguiclient_dom_document(void* self) {
    return KXMLGUIClient_DomDocument((KXMLGUIClient*)self);
}

void k_xmlguiclient_on_dom_document(void* self, QDomDocument* (*callback)()) {
    KXMLGUIClient_OnDomDocument((KXMLGUIClient*)self, (intptr_t)callback);
}

QDomDocument* k_xmlguiclient_super_dom_document(void* self) {
    return KXMLGUIClient_SuperDomDocument((KXMLGUIClient*)self);
}

const char* k_xmlguiclient_xml_file(void* self) {
    libqt_string _str = KXMLGUIClient_XmlFile((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiclient_on_xml_file(void* self, const char* (*callback)()) {
    KXMLGUIClient_OnXmlFile((KXMLGUIClient*)self, (intptr_t)callback);
}

const char* k_xmlguiclient_super_xml_file(void* self) {
    libqt_string _str = KXMLGUIClient_SuperXmlFile((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguiclient_local_x_m_l_file(void* self) {
    libqt_string _str = KXMLGUIClient_LocalXMLFile((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiclient_on_local_x_m_l_file(void* self, const char* (*callback)()) {
    KXMLGUIClient_OnLocalXMLFile((KXMLGUIClient*)self, (intptr_t)callback);
}

const char* k_xmlguiclient_super_local_x_m_l_file(void* self) {
    libqt_string _str = KXMLGUIClient_SuperLocalXMLFile((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiclient_set_x_m_l_g_u_i_build_document(void* self, void* doc) {
    KXMLGUIClient_SetXMLGUIBuildDocument((KXMLGUIClient*)self, (QDomDocument*)doc);
}

QDomDocument* k_xmlguiclient_xmlgui_build_document(void* self) {
    return KXMLGUIClient_XmlguiBuildDocument((KXMLGUIClient*)self);
}

void k_xmlguiclient_set_factory(void* self, void* factory) {
    KXMLGUIClient_SetFactory((KXMLGUIClient*)self, (KXMLGUIFactory*)factory);
}

KXMLGUIFactory* k_xmlguiclient_factory(void* self) {
    return KXMLGUIClient_Factory((KXMLGUIClient*)self);
}

KXMLGUIClient* k_xmlguiclient_parent_client(void* self) {
    return KXMLGUIClient_ParentClient((KXMLGUIClient*)self);
}

void k_xmlguiclient_insert_child_client(void* self, void* child) {
    KXMLGUIClient_InsertChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

void k_xmlguiclient_remove_child_client(void* self, void* child) {
    KXMLGUIClient_RemoveChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

libqt_list /* of KXMLGUIClient* */ k_xmlguiclient_child_clients(void* self) {
    libqt_list _arr = KXMLGUIClient_ChildClients((KXMLGUIClient*)self);
    return _arr;
}

void k_xmlguiclient_set_client_builder(void* self, void* builder) {
    KXMLGUIClient_SetClientBuilder((KXMLGUIClient*)self, (KXMLGUIBuilder*)builder);
}

KXMLGUIBuilder* k_xmlguiclient_client_builder(void* self) {
    return KXMLGUIClient_ClientBuilder((KXMLGUIClient*)self);
}

void k_xmlguiclient_reload_x_m_l(void* self) {
    KXMLGUIClient_ReloadXML((KXMLGUIClient*)self);
}

void k_xmlguiclient_plug_action_list(void* self, const char* name, libqt_list /* of QAction* */ actionList) {
    KXMLGUIClient_PlugActionList((KXMLGUIClient*)self, qstring(name), actionList);
}

void k_xmlguiclient_unplug_action_list(void* self, const char* name) {
    KXMLGUIClient_UnplugActionList((KXMLGUIClient*)self, qstring(name));
}

const char* k_xmlguiclient_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguiclient_find_most_recent_x_m_l_file\n");
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

void k_xmlguiclient_add_state_action_enabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionEnabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

void k_xmlguiclient_add_state_action_disabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionDisabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

KXMLGUIClient__StateChange* k_xmlguiclient_get_actions_to_change_for_state(void* self, const char* state) {
    return KXMLGUIClient_GetActionsToChangeForState((KXMLGUIClient*)self, qstring(state));
}

void k_xmlguiclient_begin_x_m_l_plug(void* self, void* param1) {
    KXMLGUIClient_BeginXMLPlug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_xmlguiclient_end_x_m_l_plug(void* self) {
    KXMLGUIClient_EndXMLPlug((KXMLGUIClient*)self);
}

void k_xmlguiclient_prepare_x_m_l_unplug(void* self, void* param1) {
    KXMLGUIClient_PrepareXMLUnplug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_xmlguiclient_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile) {
    KXMLGUIClient_ReplaceXMLFile((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile));
}

const char* k_xmlguiclient_find_version_number(const char* xml) {
    libqt_string _str = KXMLGUIClient_FindVersionNumber(qstring(xml));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiclient_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KXMLGUIClient_SetComponentName((KXMLGUIClient*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_xmlguiclient_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*)) {
    KXMLGUIClient_OnSetComponentName((KXMLGUIClient*)self, (intptr_t)callback);
}

void k_xmlguiclient_super_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KXMLGUIClient_SuperSetComponentName((KXMLGUIClient*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_xmlguiclient_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KXMLGUIClient_SetXMLFile((KXMLGUIClient*)self, qstring(file), merge, setXMLDoc);
}

void k_xmlguiclient_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool)) {
    KXMLGUIClient_OnSetXMLFile((KXMLGUIClient*)self, (intptr_t)callback);
}

void k_xmlguiclient_super_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KXMLGUIClient_SuperSetXMLFile((KXMLGUIClient*)self, qstring(file), merge, setXMLDoc);
}

const char* k_xmlguiclient_standards_xml_file_location(void* self) {
    libqt_string _str = KXMLGUIClient_StandardsXmlFileLocation((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiclient_on_standards_xml_file_location(void* self, const char* (*callback)()) {
    KXMLGUIClient_OnStandardsXmlFileLocation((KXMLGUIClient*)self, (intptr_t)callback);
}

const char* k_xmlguiclient_super_standards_xml_file_location(void* self) {
    libqt_string _str = KXMLGUIClient_SuperStandardsXmlFileLocation((KXMLGUIClient*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguiclient_load_standards_xml_file(void* self) {
    KXMLGUIClient_LoadStandardsXmlFile((KXMLGUIClient*)self);
}

void k_xmlguiclient_on_load_standards_xml_file(void* self, void (*callback)()) {
    KXMLGUIClient_OnLoadStandardsXmlFile((KXMLGUIClient*)self, (intptr_t)callback);
}

void k_xmlguiclient_super_load_standards_xml_file(void* self) {
    KXMLGUIClient_SuperLoadStandardsXmlFile((KXMLGUIClient*)self);
}

void k_xmlguiclient_set_local_x_m_l_file(void* self, const char* file) {
    KXMLGUIClient_SetLocalXMLFile((KXMLGUIClient*)self, qstring(file));
}

void k_xmlguiclient_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*)) {
    KXMLGUIClient_OnSetLocalXMLFile((KXMLGUIClient*)self, (intptr_t)callback);
}

void k_xmlguiclient_super_set_local_x_m_l_file(void* self, const char* file) {
    KXMLGUIClient_SuperSetLocalXMLFile((KXMLGUIClient*)self, qstring(file));
}

void k_xmlguiclient_set_x_m_l(void* self, const char* document, bool merge) {
    KXMLGUIClient_SetXML((KXMLGUIClient*)self, qstring(document), merge);
}

void k_xmlguiclient_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool)) {
    KXMLGUIClient_OnSetXML((KXMLGUIClient*)self, (intptr_t)callback);
}

void k_xmlguiclient_super_set_x_m_l(void* self, const char* document, bool merge) {
    KXMLGUIClient_SuperSetXML((KXMLGUIClient*)self, qstring(document), merge);
}

void k_xmlguiclient_set_d_o_m_document(void* self, void* document, bool merge) {
    KXMLGUIClient_SetDOMDocument((KXMLGUIClient*)self, (QDomDocument*)document, merge);
}

void k_xmlguiclient_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool)) {
    KXMLGUIClient_OnSetDOMDocument((KXMLGUIClient*)self, (intptr_t)callback);
}

void k_xmlguiclient_super_set_d_o_m_document(void* self, void* document, bool merge) {
    KXMLGUIClient_SuperSetDOMDocument((KXMLGUIClient*)self, (QDomDocument*)document, merge);
}

void k_xmlguiclient_state_changed(void* self, const char* newstate, int32_t reverse) {
    KXMLGUIClient_StateChanged((KXMLGUIClient*)self, qstring(newstate), reverse);
}

void k_xmlguiclient_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t)) {
    KXMLGUIClient_OnStateChanged((KXMLGUIClient*)self, (intptr_t)callback);
}

void k_xmlguiclient_super_state_changed(void* self, const char* newstate, int32_t reverse) {
    KXMLGUIClient_SuperStateChanged((KXMLGUIClient*)self, qstring(newstate), reverse);
}

void k_xmlguiclient_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge) {
    KXMLGUIClient_ReplaceXMLFile3((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile), merge);
}

void k_xmlguiclient_delete(void* self) {
    KXMLGUIClient_Delete((KXMLGUIClient*)(self));
}

const char** k_xmlguiclient__statechange_actions_to_enable(void* self) {
    libqt_list actionsToEnable_arr = KXMLGUIClient__StateChange_ActionsToEnable((KXMLGUIClient__StateChange*)self);
    const libqt_string* actionsToEnable_qstr = (libqt_string*)actionsToEnable_arr.data.ptr;
    const char** actionsToEnable_ret = (const char**)malloc((actionsToEnable_arr.len + 1) * sizeof(const char*));
    if (actionsToEnable_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguiclient__statechange_actions_to_enable\n");
        abort();
    }
    for (size_t i = 0; i < actionsToEnable_arr.len; ++i) {
        actionsToEnable_ret[i] = qstring_to_char(actionsToEnable_qstr[i]);
    }
    actionsToEnable_ret[actionsToEnable_arr.len] = NULL;
    for (size_t i = 0; i < actionsToEnable_arr.len; ++i) {
        libqt_string_free((libqt_string*)&actionsToEnable_qstr[i]);
    }
    libqt_free(actionsToEnable_arr.data.ptr);
    return actionsToEnable_ret;
}

void k_xmlguiclient__statechange_set_actions_to_enable(void* self, const char* actionsToEnable[static 1]) {
    size_t actionsToEnable_len = libqt_strv_length(actionsToEnable);
    libqt_string* actionsToEnable_qstr = (libqt_string*)malloc(actionsToEnable_len * sizeof(libqt_string));
    if (actionsToEnable_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguiclient__statechange_set_actions_to_enable\n");
        abort();
    }
    for (size_t i = 0; i < actionsToEnable_len; ++i) {
        actionsToEnable_qstr[i] = qstring(actionsToEnable[i]);
    }
    libqt_list actionsToEnable_list = qlist(actionsToEnable_qstr, actionsToEnable_len);
    KXMLGUIClient__StateChange_SetActionsToEnable((KXMLGUIClient__StateChange*)self, actionsToEnable_list);
    free(actionsToEnable_qstr);
}

const char** k_xmlguiclient__statechange_actions_to_disable(void* self) {
    libqt_list actionsToDisable_arr = KXMLGUIClient__StateChange_ActionsToDisable((KXMLGUIClient__StateChange*)self);
    const libqt_string* actionsToDisable_qstr = (libqt_string*)actionsToDisable_arr.data.ptr;
    const char** actionsToDisable_ret = (const char**)malloc((actionsToDisable_arr.len + 1) * sizeof(const char*));
    if (actionsToDisable_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguiclient__statechange_actions_to_disable\n");
        abort();
    }
    for (size_t i = 0; i < actionsToDisable_arr.len; ++i) {
        actionsToDisable_ret[i] = qstring_to_char(actionsToDisable_qstr[i]);
    }
    actionsToDisable_ret[actionsToDisable_arr.len] = NULL;
    for (size_t i = 0; i < actionsToDisable_arr.len; ++i) {
        libqt_string_free((libqt_string*)&actionsToDisable_qstr[i]);
    }
    libqt_free(actionsToDisable_arr.data.ptr);
    return actionsToDisable_ret;
}

void k_xmlguiclient__statechange_set_actions_to_disable(void* self, const char* actionsToDisable[static 1]) {
    size_t actionsToDisable_len = libqt_strv_length(actionsToDisable);
    libqt_string* actionsToDisable_qstr = (libqt_string*)malloc(actionsToDisable_len * sizeof(libqt_string));
    if (actionsToDisable_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguiclient__statechange_set_actions_to_disable\n");
        abort();
    }
    for (size_t i = 0; i < actionsToDisable_len; ++i) {
        actionsToDisable_qstr[i] = qstring(actionsToDisable[i]);
    }
    libqt_list actionsToDisable_list = qlist(actionsToDisable_qstr, actionsToDisable_len);
    KXMLGUIClient__StateChange_SetActionsToDisable((KXMLGUIClient__StateChange*)self, actionsToDisable_list);
    free(actionsToDisable_qstr);
}

void k_xmlguiclient__statechange_delete(void* self) {
    KXMLGUIClient__StateChange_Delete((KXMLGUIClient__StateChange*)(self));
}
