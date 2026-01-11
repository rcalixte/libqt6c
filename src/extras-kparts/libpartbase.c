#include "../extras-kxmlgui/libkactioncollection.hpp"
#include "../extras-kxmlgui/libkxmlguiclient.hpp"
#include "../libqaction.hpp"
#include "../xml/libqdom.hpp"
#include "../libqobject.hpp"
#include "libpartbase.hpp"
#include "libpartbase.h"

KParts__PartBase* k_parts__partbase_new() {
    return KParts__PartBase_new();
}

void k_parts__partbase_set_part_object(void* self, void* object) {
    KParts__PartBase_SetPartObject((KParts__PartBase*)self, (QObject*)object);
}

QObject* k_parts__partbase_part_object(void* self) {
    return KParts__PartBase_PartObject((KParts__PartBase*)self);
}

QAction* k_parts__partbase_action(void* self, const char* name) {
    return KXMLGUIClient_Action((KXMLGUIClient*)self, qstring(name));
}

void k_parts__partbase_set_x_m_l_g_u_i_build_document(void* self, void* doc) {
    KXMLGUIClient_SetXMLGUIBuildDocument((KXMLGUIClient*)self, (QDomDocument*)doc);
}

QDomDocument* k_parts__partbase_xmlgui_build_document(void* self) {
    return KXMLGUIClient_XmlguiBuildDocument((KXMLGUIClient*)self);
}

void k_parts__partbase_set_factory(void* self, void* factory) {
    KXMLGUIClient_SetFactory((KXMLGUIClient*)self, (KXMLGUIFactory*)factory);
}

KXMLGUIFactory* k_parts__partbase_factory(void* self) {
    return KXMLGUIClient_Factory((KXMLGUIClient*)self);
}

KXMLGUIClient* k_parts__partbase_parent_client(void* self) {
    return KXMLGUIClient_ParentClient((KXMLGUIClient*)self);
}

void k_parts__partbase_insert_child_client(void* self, void* child) {
    KXMLGUIClient_InsertChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

void k_parts__partbase_remove_child_client(void* self, void* child) {
    KXMLGUIClient_RemoveChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

libqt_list /* of KXMLGUIClient* */ k_parts__partbase_child_clients(void* self) {
    libqt_list _arr = KXMLGUIClient_ChildClients((KXMLGUIClient*)self);
    return _arr;
}

void k_parts__partbase_set_client_builder(void* self, void* builder) {
    KXMLGUIClient_SetClientBuilder((KXMLGUIClient*)self, (KXMLGUIBuilder*)builder);
}

KXMLGUIBuilder* k_parts__partbase_client_builder(void* self) {
    return KXMLGUIClient_ClientBuilder((KXMLGUIClient*)self);
}

void k_parts__partbase_reload_x_m_l(void* self) {
    KXMLGUIClient_ReloadXML((KXMLGUIClient*)self);
}

void k_parts__partbase_plug_action_list(void* self, const char* name, libqt_list actionList) {
    KXMLGUIClient_PlugActionList((KXMLGUIClient*)self, qstring(name), actionList);
}

void k_parts__partbase_unplug_action_list(void* self, const char* name) {
    KXMLGUIClient_UnplugActionList((KXMLGUIClient*)self, qstring(name));
}

const char* k_parts__partbase_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__partbase_find_most_recent_x_m_l_file");
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

void k_parts__partbase_add_state_action_enabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionEnabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

void k_parts__partbase_add_state_action_disabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionDisabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

KXMLGUIClient__StateChange* k_parts__partbase_get_actions_to_change_for_state(void* self, const char* state) {
    return KXMLGUIClient_GetActionsToChangeForState((KXMLGUIClient*)self, qstring(state));
}

void k_parts__partbase_begin_x_m_l_plug(void* self, void* param1) {
    KXMLGUIClient_BeginXMLPlug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__partbase_end_x_m_l_plug(void* self) {
    KXMLGUIClient_EndXMLPlug((KXMLGUIClient*)self);
}

void k_parts__partbase_prepare_x_m_l_unplug(void* self, void* param1) {
    KXMLGUIClient_PrepareXMLUnplug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__partbase_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile) {
    KXMLGUIClient_ReplaceXMLFile((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile));
}

const char* k_parts__partbase_find_version_number(const char* xml) {
    libqt_string _str = KXMLGUIClient_FindVersionNumber(qstring(xml));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__partbase_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge) {
    KXMLGUIClient_ReplaceXMLFile3((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile), merge);
}

QAction* k_parts__partbase_action2(void* self, void* element) {
    return KParts__PartBase_Action2((KParts__PartBase*)self, (QDomElement*)element);
}

QAction* k_parts__partbase_qbase_action2(void* self, void* element) {
    return KParts__PartBase_QBaseAction2((KParts__PartBase*)self, (QDomElement*)element);
}

void k_parts__partbase_on_action2(void* self, QAction* (*callback)(void*, void*)) {
    KParts__PartBase_OnAction2((KParts__PartBase*)self, (intptr_t)callback);
}

KActionCollection* k_parts__partbase_action_collection(void* self) {
    return KParts__PartBase_ActionCollection((KParts__PartBase*)self);
}

KActionCollection* k_parts__partbase_qbase_action_collection(void* self) {
    return KParts__PartBase_QBaseActionCollection((KParts__PartBase*)self);
}

void k_parts__partbase_on_action_collection(void* self, KActionCollection* (*callback)()) {
    KParts__PartBase_OnActionCollection((KParts__PartBase*)self, (intptr_t)callback);
}

const char* k_parts__partbase_component_name(void* self) {
    libqt_string _str = KParts__PartBase_ComponentName((KParts__PartBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__partbase_qbase_component_name(void* self) {
    libqt_string _str = KParts__PartBase_QBaseComponentName((KParts__PartBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__partbase_on_component_name(void* self, const char* (*callback)()) {
    KParts__PartBase_OnComponentName((KParts__PartBase*)self, (intptr_t)callback);
}

QDomDocument* k_parts__partbase_dom_document(void* self) {
    return KParts__PartBase_DomDocument((KParts__PartBase*)self);
}

QDomDocument* k_parts__partbase_qbase_dom_document(void* self) {
    return KParts__PartBase_QBaseDomDocument((KParts__PartBase*)self);
}

void k_parts__partbase_on_dom_document(void* self, QDomDocument* (*callback)()) {
    KParts__PartBase_OnDomDocument((KParts__PartBase*)self, (intptr_t)callback);
}

const char* k_parts__partbase_xml_file(void* self) {
    libqt_string _str = KParts__PartBase_XmlFile((KParts__PartBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__partbase_qbase_xml_file(void* self) {
    libqt_string _str = KParts__PartBase_QBaseXmlFile((KParts__PartBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__partbase_on_xml_file(void* self, const char* (*callback)()) {
    KParts__PartBase_OnXmlFile((KParts__PartBase*)self, (intptr_t)callback);
}

const char* k_parts__partbase_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__PartBase_LocalXMLFile((KParts__PartBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__partbase_qbase_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__PartBase_QBaseLocalXMLFile((KParts__PartBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__partbase_on_local_x_m_l_file(void* self, const char* (*callback)()) {
    KParts__PartBase_OnLocalXMLFile((KParts__PartBase*)self, (intptr_t)callback);
}

void k_parts__partbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__PartBase_SetComponentName((KParts__PartBase*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__partbase_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__PartBase_QBaseSetComponentName((KParts__PartBase*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__partbase_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*)) {
    KParts__PartBase_OnSetComponentName((KParts__PartBase*)self, (intptr_t)callback);
}

void k_parts__partbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__PartBase_SetXMLFile((KParts__PartBase*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__partbase_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__PartBase_QBaseSetXMLFile((KParts__PartBase*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__partbase_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool)) {
    KParts__PartBase_OnSetXMLFile((KParts__PartBase*)self, (intptr_t)callback);
}

void k_parts__partbase_set_local_x_m_l_file(void* self, const char* file) {
    KParts__PartBase_SetLocalXMLFile((KParts__PartBase*)self, qstring(file));
}

void k_parts__partbase_qbase_set_local_x_m_l_file(void* self, const char* file) {
    KParts__PartBase_QBaseSetLocalXMLFile((KParts__PartBase*)self, qstring(file));
}

void k_parts__partbase_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*)) {
    KParts__PartBase_OnSetLocalXMLFile((KParts__PartBase*)self, (intptr_t)callback);
}

void k_parts__partbase_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__PartBase_SetXML((KParts__PartBase*)self, qstring(document), merge);
}

void k_parts__partbase_qbase_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__PartBase_QBaseSetXML((KParts__PartBase*)self, qstring(document), merge);
}

void k_parts__partbase_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool)) {
    KParts__PartBase_OnSetXML((KParts__PartBase*)self, (intptr_t)callback);
}

void k_parts__partbase_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__PartBase_SetDOMDocument((KParts__PartBase*)self, (QDomDocument*)document, merge);
}

void k_parts__partbase_qbase_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__PartBase_QBaseSetDOMDocument((KParts__PartBase*)self, (QDomDocument*)document, merge);
}

void k_parts__partbase_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool)) {
    KParts__PartBase_OnSetDOMDocument((KParts__PartBase*)self, (intptr_t)callback);
}

void k_parts__partbase_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__PartBase_StateChanged((KParts__PartBase*)self, qstring(newstate), reverse);
}

void k_parts__partbase_qbase_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__PartBase_QBaseStateChanged((KParts__PartBase*)self, qstring(newstate), reverse);
}

void k_parts__partbase_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t)) {
    KParts__PartBase_OnStateChanged((KParts__PartBase*)self, (intptr_t)callback);
}

const char* k_parts__partbase_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__PartBase_StandardsXmlFileLocation((KParts__PartBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__partbase_qbase_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__PartBase_QBaseStandardsXmlFileLocation((KParts__PartBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__partbase_on_standards_xml_file_location(void* self, const char* (*callback)()) {
    KParts__PartBase_OnStandardsXmlFileLocation((KParts__PartBase*)self, (intptr_t)callback);
}

void k_parts__partbase_load_standards_xml_file(void* self) {
    KParts__PartBase_LoadStandardsXmlFile((KParts__PartBase*)self);
}

void k_parts__partbase_qbase_load_standards_xml_file(void* self) {
    KParts__PartBase_QBaseLoadStandardsXmlFile((KParts__PartBase*)self);
}

void k_parts__partbase_on_load_standards_xml_file(void* self, void (*callback)()) {
    KParts__PartBase_OnLoadStandardsXmlFile((KParts__PartBase*)self, (intptr_t)callback);
}

void k_parts__partbase_delete(void* self) {
    KParts__PartBase_Delete((KParts__PartBase*)(self));
}
