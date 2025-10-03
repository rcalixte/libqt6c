#pragma once
#ifndef SRC_EXTRAS_KXMLGUIQT6C_LIBKXMLGUICLIENT_H
#define SRC_EXTRAS_KXMLGUIQT6C_LIBKXMLGUICLIENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kxmlguiclient.html

/// k_xmlguiclient_new constructs a new KXMLGUIClient object.
///
KXMLGUIClient* k_xmlguiclient_new();

/// k_xmlguiclient_new2 constructs a new KXMLGUIClient object.
///
/// @param parent KXMLGUIClient*
KXMLGUIClient* k_xmlguiclient_new2(void* parent);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KXMLGUIClient*
/// @param name const char*
QAction* k_xmlguiclient_action(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KXMLGUIClient*
/// @param element QDomElement*
QAction* k_xmlguiclient_action2(void* self, void* element);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback QAction* func(KXMLGUIClient* self, QDomElement* element)
void k_xmlguiclient_on_action2(void* self, QAction* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
/// @param element QDomElement*
QAction* k_xmlguiclient_qbase_action2(void* self, void* element);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// @param self KXMLGUIClient*
KActionCollection* k_xmlguiclient_action_collection(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback KActionCollection* func()
void k_xmlguiclient_on_action_collection(void* self, KActionCollection* (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
KActionCollection* k_xmlguiclient_qbase_action_collection(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXMLGUIClient*
const char* k_xmlguiclient_component_name(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback const char* func()
void k_xmlguiclient_on_component_name(void* self, const char* (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
const char* k_xmlguiclient_qbase_component_name(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// @param self KXMLGUIClient*
QDomDocument* k_xmlguiclient_dom_document(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback QDomDocument* func()
void k_xmlguiclient_on_dom_document(void* self, QDomDocument* (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
QDomDocument* k_xmlguiclient_qbase_dom_document(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXMLGUIClient*
const char* k_xmlguiclient_xml_file(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback const char* func()
void k_xmlguiclient_on_xml_file(void* self, const char* (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
const char* k_xmlguiclient_qbase_xml_file(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXMLGUIClient*
const char* k_xmlguiclient_local_x_m_l_file(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback const char* func()
void k_xmlguiclient_on_local_x_m_l_file(void* self, const char* (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
const char* k_xmlguiclient_qbase_local_x_m_l_file(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
///
/// @param self KXMLGUIClient*
/// @param doc QDomDocument*
void k_xmlguiclient_set_x_m_l_g_u_i_build_document(void* self, void* doc);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
///
/// @param self KXMLGUIClient*
QDomDocument* k_xmlguiclient_xmlgui_build_document(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setFactory)
///
/// @param self KXMLGUIClient*
/// @param factory KXMLGUIFactory*
void k_xmlguiclient_set_factory(void* self, void* factory);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#factory)
///
/// @param self KXMLGUIClient*
KXMLGUIFactory* k_xmlguiclient_factory(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#parentClient)
///
/// @param self KXMLGUIClient*
KXMLGUIClient* k_xmlguiclient_parent_client(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#insertChildClient)
///
/// @param self KXMLGUIClient*
/// @param child KXMLGUIClient*
void k_xmlguiclient_insert_child_client(void* self, void* child);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#removeChildClient)
///
/// @param self KXMLGUIClient*
/// @param child KXMLGUIClient*
void k_xmlguiclient_remove_child_client(void* self, void* child);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#childClients)
///
/// @param self KXMLGUIClient*
libqt_list /* of KXMLGUIClient* */ k_xmlguiclient_child_clients(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
///
/// @param self KXMLGUIClient*
/// @param builder KXMLGUIBuilder*
void k_xmlguiclient_set_client_builder(void* self, void* builder);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#clientBuilder)
///
/// @param self KXMLGUIClient*
KXMLGUIBuilder* k_xmlguiclient_client_builder(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#reloadXML)
///
/// @param self KXMLGUIClient*
void k_xmlguiclient_reload_x_m_l(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#plugActionList)
///
/// @param self KXMLGUIClient*
/// @param name const char*
/// @param actionList libqt_list /* of QAction* */
void k_xmlguiclient_plug_action_list(void* self, const char* name, libqt_list actionList);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#unplugActionList)
///
/// @param self KXMLGUIClient*
/// @param name const char*
void k_xmlguiclient_unplug_action_list(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
///
/// Caller is responsible for freeing the returned memory
///
/// @param files const char**
/// @param doc const char*
const char* k_xmlguiclient_find_most_recent_x_m_l_file(const char* files[], const char* doc);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
///
/// @param self KXMLGUIClient*
/// @param state const char*
/// @param action const char*
void k_xmlguiclient_add_state_action_enabled(void* self, const char* state, const char* action);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
///
/// @param self KXMLGUIClient*
/// @param state const char*
/// @param action const char*
void k_xmlguiclient_add_state_action_disabled(void* self, const char* state, const char* action);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
///
/// @param self KXMLGUIClient*
/// @param state const char*
KXMLGUIClient__StateChange* k_xmlguiclient_get_actions_to_change_for_state(void* self, const char* state);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
///
/// @param self KXMLGUIClient*
/// @param param1 QWidget*
void k_xmlguiclient_begin_x_m_l_plug(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
///
/// @param self KXMLGUIClient*
void k_xmlguiclient_end_x_m_l_plug(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
///
/// @param self KXMLGUIClient*
/// @param param1 QWidget*
void k_xmlguiclient_prepare_x_m_l_unplug(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KXMLGUIClient*
/// @param xmlfile const char*
/// @param localxmlfile const char*
void k_xmlguiclient_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
///
/// Caller is responsible for freeing the returned memory
///
/// @param xml const char*
const char* k_xmlguiclient_find_version_number(const char* xml);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// @param self KXMLGUIClient*
/// @param componentName const char*
/// @param componentDisplayName const char*
void k_xmlguiclient_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback void func(KXMLGUIClient* self, const char* componentName, const char* componentDisplayName)
void k_xmlguiclient_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*));

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
/// @param componentName const char*
/// @param componentDisplayName const char*
void k_xmlguiclient_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// @param self KXMLGUIClient*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
void k_xmlguiclient_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback void func(KXMLGUIClient* self, const char* file, bool merge, bool setXMLDoc)
void k_xmlguiclient_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool));

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
void k_xmlguiclient_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXMLGUIClient*
const char* k_xmlguiclient_standards_xml_file_location(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback const char* func()
void k_xmlguiclient_on_standards_xml_file_location(void* self, const char* (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
const char* k_xmlguiclient_qbase_standards_xml_file_location(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// @param self KXMLGUIClient*
void k_xmlguiclient_load_standards_xml_file(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback void func()
void k_xmlguiclient_on_load_standards_xml_file(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
void k_xmlguiclient_qbase_load_standards_xml_file(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// @param self KXMLGUIClient*
/// @param file const char*
void k_xmlguiclient_set_local_x_m_l_file(void* self, const char* file);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback void func(KXMLGUIClient* self, const char* file)
void k_xmlguiclient_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
/// @param file const char*
void k_xmlguiclient_qbase_set_local_x_m_l_file(void* self, const char* file);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// @param self KXMLGUIClient*
/// @param document const char*
/// @param merge bool
void k_xmlguiclient_set_x_m_l(void* self, const char* document, bool merge);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback void func(KXMLGUIClient* self, const char* document, bool merge)
void k_xmlguiclient_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool));

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
/// @param document const char*
/// @param merge bool
void k_xmlguiclient_qbase_set_x_m_l(void* self, const char* document, bool merge);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// @param self KXMLGUIClient*
/// @param document QDomDocument*
/// @param merge bool
void k_xmlguiclient_set_d_o_m_document(void* self, void* document, bool merge);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback void func(KXMLGUIClient* self, QDomDocument* document, bool merge)
void k_xmlguiclient_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool));

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
/// @param document QDomDocument*
/// @param merge bool
void k_xmlguiclient_qbase_set_d_o_m_document(void* self, void* document, bool merge);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// @param self KXMLGUIClient*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
void k_xmlguiclient_state_changed(void* self, const char* newstate, int32_t reverse);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIClient*
/// @param callback void func(KXMLGUIClient* self, const char* newstate, enum KXMLGUIClient__ReverseStateChange reverse)
void k_xmlguiclient_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t));

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Base class method implementation
///
/// @param self KXMLGUIClient*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
void k_xmlguiclient_qbase_state_changed(void* self, const char* newstate, int32_t reverse);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KXMLGUIClient*
/// @param xmlfile const char*
/// @param localxmlfile const char*
/// @param merge bool
void k_xmlguiclient_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge);

/// [Qt documentation](https://api.kde.org/kxmlguiclient.html#dtor.KXMLGUIClient)
///
/// Delete this object from C++ memory.
///
/// @param self KXMLGUIClient*
void k_xmlguiclient_delete(void* self);

/// https://api.kde.org/kxmlguiclient-statechange.html

/// [Qt documentation](https://api.kde.org/kxmlguiclient-statechange.html#actionsToEnable-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXMLGUIClient__StateChange*
const char** k_xmlguiclient__statechange_actions_to_enable(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient-statechange.html#actionsToEnable-var)
///
/// @param self KXMLGUIClient__StateChange*
/// @param actionsToEnable const char**
void k_xmlguiclient__statechange_set_actions_to_enable(void* self, const char* actionsToEnable[]);

/// [Qt documentation](https://api.kde.org/kxmlguiclient-statechange.html#actionsToDisable-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXMLGUIClient__StateChange*
const char** k_xmlguiclient__statechange_actions_to_disable(void* self);

/// [Qt documentation](https://api.kde.org/kxmlguiclient-statechange.html#actionsToDisable-var)
///
/// @param self KXMLGUIClient__StateChange*
/// @param actionsToDisable const char**
void k_xmlguiclient__statechange_set_actions_to_disable(void* self, const char* actionsToDisable[]);

/// Delete this object from C++ memory.
///
/// @param self KXMLGUIClient__StateChange*
void k_xmlguiclient__statechange_delete(void* self);

/// https://api.kde.org/kxmlguiclient.html#types

typedef enum {
    KXMLGUICLIENT_REVERSESTATECHANGE_STATENOREVERSE = 0,
    KXMLGUICLIENT_REVERSESTATECHANGE_STATEREVERSE = 1
} KXMLGUIClient__ReverseStateChange;

#endif
