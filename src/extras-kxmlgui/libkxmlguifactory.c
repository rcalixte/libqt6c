#include "libkxmlguibuilder.hpp"
#include "libkxmlguiclient.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../xml/libqdom.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkxmlguifactory.hpp"
#include "libkxmlguifactory.h"

KXMLGUIFactory* k_xmlguifactory_new(void* builder) {
    return KXMLGUIFactory_new((KXMLGUIBuilder*)builder);
}

KXMLGUIFactory* k_xmlguifactory_new2(void* builder, void* parent) {
    return KXMLGUIFactory_new2((KXMLGUIBuilder*)builder, (QObject*)parent);
}

const QMetaObject* k_xmlguifactory_meta_object(void* self) {
    return KXMLGUIFactory_MetaObject((KXMLGUIFactory*)self);
}

void k_xmlguifactory_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KXMLGUIFactory_OnMetaObject((KXMLGUIFactory*)self, (intptr_t)callback);
}

const QMetaObject* k_xmlguifactory_qbase_meta_object(void* self) {
    return KXMLGUIFactory_QBaseMetaObject((KXMLGUIFactory*)self);
}

void* k_xmlguifactory_metacast(void* self, const char* param1) {
    return KXMLGUIFactory_Metacast((KXMLGUIFactory*)self, param1);
}

void k_xmlguifactory_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KXMLGUIFactory_OnMetacast((KXMLGUIFactory*)self, (intptr_t)callback);
}

void* k_xmlguifactory_qbase_metacast(void* self, const char* param1) {
    return KXMLGUIFactory_QBaseMetacast((KXMLGUIFactory*)self, param1);
}

int32_t k_xmlguifactory_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KXMLGUIFactory_Metacall((KXMLGUIFactory*)self, param1, param2, param3);
}

void k_xmlguifactory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KXMLGUIFactory_OnMetacall((KXMLGUIFactory*)self, (intptr_t)callback);
}

int32_t k_xmlguifactory_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KXMLGUIFactory_QBaseMetacall((KXMLGUIFactory*)self, param1, param2, param3);
}

const char* k_xmlguifactory_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguifactory_read_config_file(const char* filename) {
    libqt_string _str = KXMLGUIFactory_ReadConfigFile(qstring(filename));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_xmlguifactory_save_config_file(void* doc, const char* filename) {
    return KXMLGUIFactory_SaveConfigFile((QDomDocument*)doc, qstring(filename));
}

QDomElement* k_xmlguifactory_action_properties_element(void* doc) {
    return KXMLGUIFactory_ActionPropertiesElement((QDomDocument*)doc);
}

QDomElement* k_xmlguifactory_find_action_by_name(void* elem, const char* sName, bool create) {
    return KXMLGUIFactory_FindActionByName((QDomElement*)elem, qstring(sName), create);
}

void k_xmlguifactory_add_client(void* self, void* client) {
    KXMLGUIFactory_AddClient((KXMLGUIFactory*)self, (KXMLGUIClient*)client);
}

void k_xmlguifactory_remove_client(void* self, void* client) {
    KXMLGUIFactory_RemoveClient((KXMLGUIFactory*)self, (KXMLGUIClient*)client);
}

void k_xmlguifactory_plug_action_list(void* self, void* client, const char* name, libqt_list /* of QAction* */ actionList) {
    KXMLGUIFactory_PlugActionList((KXMLGUIFactory*)self, (KXMLGUIClient*)client, qstring(name), actionList);
}

void k_xmlguifactory_unplug_action_list(void* self, void* client, const char* name) {
    KXMLGUIFactory_UnplugActionList((KXMLGUIFactory*)self, (KXMLGUIClient*)client, qstring(name));
}

libqt_list /* of KXMLGUIClient* */ k_xmlguifactory_clients(void* self) {
    libqt_list _arr = KXMLGUIFactory_Clients((KXMLGUIFactory*)self);
    return _arr;
}

QWidget* k_xmlguifactory_container(void* self, const char* containerName, void* client) {
    return KXMLGUIFactory_Container((KXMLGUIFactory*)self, qstring(containerName), (KXMLGUIClient*)client);
}

libqt_list /* of QWidget* */ k_xmlguifactory_containers(void* self, const char* tagName) {
    libqt_list _arr = KXMLGUIFactory_Containers((KXMLGUIFactory*)self, qstring(tagName));
    return _arr;
}

void k_xmlguifactory_reset(void* self) {
    KXMLGUIFactory_Reset((KXMLGUIFactory*)self);
}

void k_xmlguifactory_reset_container(void* self, const char* containerName) {
    KXMLGUIFactory_ResetContainer((KXMLGUIFactory*)self, qstring(containerName));
}

void k_xmlguifactory_refresh_action_properties(void* self) {
    KXMLGUIFactory_RefreshActionProperties((KXMLGUIFactory*)self);
}

void k_xmlguifactory_show_configure_shortcuts_dialog(void* self) {
    KXMLGUIFactory_ShowConfigureShortcutsDialog((KXMLGUIFactory*)self);
}

void k_xmlguifactory_change_shortcut_scheme(void* self, const char* scheme) {
    KXMLGUIFactory_ChangeShortcutScheme((KXMLGUIFactory*)self, qstring(scheme));
}

void k_xmlguifactory_client_added(void* self, void* client) {
    KXMLGUIFactory_ClientAdded((KXMLGUIFactory*)self, (KXMLGUIClient*)client);
}

void k_xmlguifactory_on_client_added(void* self, void (*callback)(void*, void*)) {
    KXMLGUIFactory_Connect_ClientAdded((KXMLGUIFactory*)self, (intptr_t)callback);
}

void k_xmlguifactory_client_removed(void* self, void* client) {
    KXMLGUIFactory_ClientRemoved((KXMLGUIFactory*)self, (KXMLGUIClient*)client);
}

void k_xmlguifactory_on_client_removed(void* self, void (*callback)(void*, void*)) {
    KXMLGUIFactory_Connect_ClientRemoved((KXMLGUIFactory*)self, (intptr_t)callback);
}

void k_xmlguifactory_making_changes(void* self, bool param1) {
    KXMLGUIFactory_MakingChanges((KXMLGUIFactory*)self, param1);
}

void k_xmlguifactory_on_making_changes(void* self, void (*callback)(void*, bool)) {
    KXMLGUIFactory_Connect_MakingChanges((KXMLGUIFactory*)self, (intptr_t)callback);
}

void k_xmlguifactory_shortcuts_saved(void* self) {
    KXMLGUIFactory_ShortcutsSaved((KXMLGUIFactory*)self);
}

void k_xmlguifactory_on_shortcuts_saved(void* self, void (*callback)(void*)) {
    KXMLGUIFactory_Connect_ShortcutsSaved((KXMLGUIFactory*)self, (intptr_t)callback);
}

const char* k_xmlguifactory_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguifactory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xmlguifactory_read_config_file2(const char* filename, const char* componentName) {
    libqt_string _str = KXMLGUIFactory_ReadConfigFile2(qstring(filename), qstring(componentName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_xmlguifactory_save_config_file3(void* doc, const char* filename, const char* componentName) {
    return KXMLGUIFactory_SaveConfigFile3((QDomDocument*)doc, qstring(filename), qstring(componentName));
}

QWidget* k_xmlguifactory_container3(void* self, const char* containerName, void* client, bool useTagName) {
    return KXMLGUIFactory_Container3((KXMLGUIFactory*)self, qstring(containerName), (KXMLGUIClient*)client, useTagName);
}

void k_xmlguifactory_reset_container2(void* self, const char* containerName, bool useTagName) {
    KXMLGUIFactory_ResetContainer2((KXMLGUIFactory*)self, qstring(containerName), useTagName);
}

const char* k_xmlguifactory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xmlguifactory_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_xmlguifactory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_xmlguifactory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_xmlguifactory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_xmlguifactory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_xmlguifactory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_xmlguifactory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_xmlguifactory_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_xmlguifactory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_xmlguifactory_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_xmlguifactory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_xmlguifactory_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_xmlguifactory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_xmlguifactory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_xmlguifactory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_xmlguifactory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_xmlguifactory_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_xmlguifactory_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_xmlguifactory_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_xmlguifactory_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_xmlguifactory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_xmlguifactory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_xmlguifactory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_xmlguifactory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_xmlguifactory_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguifactory_dynamic_property_names\n");
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

QBindingStorage* k_xmlguifactory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_xmlguifactory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_xmlguifactory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_xmlguifactory_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_xmlguifactory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_xmlguifactory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_xmlguifactory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_xmlguifactory_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_xmlguifactory_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_xmlguifactory_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_xmlguifactory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_xmlguifactory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_xmlguifactory_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_xmlguifactory_event(void* self, void* event) {
    return KXMLGUIFactory_Event((KXMLGUIFactory*)self, (QEvent*)event);
}

bool k_xmlguifactory_qbase_event(void* self, void* event) {
    return KXMLGUIFactory_QBaseEvent((KXMLGUIFactory*)self, (QEvent*)event);
}

void k_xmlguifactory_on_event(void* self, bool (*callback)(void*, void*)) {
    KXMLGUIFactory_OnEvent((KXMLGUIFactory*)self, (intptr_t)callback);
}

bool k_xmlguifactory_event_filter(void* self, void* watched, void* event) {
    return KXMLGUIFactory_EventFilter((KXMLGUIFactory*)self, (QObject*)watched, (QEvent*)event);
}

bool k_xmlguifactory_qbase_event_filter(void* self, void* watched, void* event) {
    return KXMLGUIFactory_QBaseEventFilter((KXMLGUIFactory*)self, (QObject*)watched, (QEvent*)event);
}

void k_xmlguifactory_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KXMLGUIFactory_OnEventFilter((KXMLGUIFactory*)self, (intptr_t)callback);
}

void k_xmlguifactory_timer_event(void* self, void* event) {
    KXMLGUIFactory_TimerEvent((KXMLGUIFactory*)self, (QTimerEvent*)event);
}

void k_xmlguifactory_qbase_timer_event(void* self, void* event) {
    KXMLGUIFactory_QBaseTimerEvent((KXMLGUIFactory*)self, (QTimerEvent*)event);
}

void k_xmlguifactory_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KXMLGUIFactory_OnTimerEvent((KXMLGUIFactory*)self, (intptr_t)callback);
}

void k_xmlguifactory_child_event(void* self, void* event) {
    KXMLGUIFactory_ChildEvent((KXMLGUIFactory*)self, (QChildEvent*)event);
}

void k_xmlguifactory_qbase_child_event(void* self, void* event) {
    KXMLGUIFactory_QBaseChildEvent((KXMLGUIFactory*)self, (QChildEvent*)event);
}

void k_xmlguifactory_on_child_event(void* self, void (*callback)(void*, void*)) {
    KXMLGUIFactory_OnChildEvent((KXMLGUIFactory*)self, (intptr_t)callback);
}

void k_xmlguifactory_custom_event(void* self, void* event) {
    KXMLGUIFactory_CustomEvent((KXMLGUIFactory*)self, (QEvent*)event);
}

void k_xmlguifactory_qbase_custom_event(void* self, void* event) {
    KXMLGUIFactory_QBaseCustomEvent((KXMLGUIFactory*)self, (QEvent*)event);
}

void k_xmlguifactory_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KXMLGUIFactory_OnCustomEvent((KXMLGUIFactory*)self, (intptr_t)callback);
}

void k_xmlguifactory_connect_notify(void* self, void* signal) {
    KXMLGUIFactory_ConnectNotify((KXMLGUIFactory*)self, (QMetaMethod*)signal);
}

void k_xmlguifactory_qbase_connect_notify(void* self, void* signal) {
    KXMLGUIFactory_QBaseConnectNotify((KXMLGUIFactory*)self, (QMetaMethod*)signal);
}

void k_xmlguifactory_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KXMLGUIFactory_OnConnectNotify((KXMLGUIFactory*)self, (intptr_t)callback);
}

void k_xmlguifactory_disconnect_notify(void* self, void* signal) {
    KXMLGUIFactory_DisconnectNotify((KXMLGUIFactory*)self, (QMetaMethod*)signal);
}

void k_xmlguifactory_qbase_disconnect_notify(void* self, void* signal) {
    KXMLGUIFactory_QBaseDisconnectNotify((KXMLGUIFactory*)self, (QMetaMethod*)signal);
}

void k_xmlguifactory_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KXMLGUIFactory_OnDisconnectNotify((KXMLGUIFactory*)self, (intptr_t)callback);
}

QObject* k_xmlguifactory_sender(void* self) {
    return KXMLGUIFactory_Sender((KXMLGUIFactory*)self);
}

QObject* k_xmlguifactory_qbase_sender(void* self) {
    return KXMLGUIFactory_QBaseSender((KXMLGUIFactory*)self);
}

void k_xmlguifactory_on_sender(void* self, QObject* (*callback)()) {
    KXMLGUIFactory_OnSender((KXMLGUIFactory*)self, (intptr_t)callback);
}

int32_t k_xmlguifactory_sender_signal_index(void* self) {
    return KXMLGUIFactory_SenderSignalIndex((KXMLGUIFactory*)self);
}

int32_t k_xmlguifactory_qbase_sender_signal_index(void* self) {
    return KXMLGUIFactory_QBaseSenderSignalIndex((KXMLGUIFactory*)self);
}

void k_xmlguifactory_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KXMLGUIFactory_OnSenderSignalIndex((KXMLGUIFactory*)self, (intptr_t)callback);
}

int32_t k_xmlguifactory_receivers(void* self, const char* signal) {
    return KXMLGUIFactory_Receivers((KXMLGUIFactory*)self, signal);
}

int32_t k_xmlguifactory_qbase_receivers(void* self, const char* signal) {
    return KXMLGUIFactory_QBaseReceivers((KXMLGUIFactory*)self, signal);
}

void k_xmlguifactory_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KXMLGUIFactory_OnReceivers((KXMLGUIFactory*)self, (intptr_t)callback);
}

bool k_xmlguifactory_is_signal_connected(void* self, void* signal) {
    return KXMLGUIFactory_IsSignalConnected((KXMLGUIFactory*)self, (QMetaMethod*)signal);
}

bool k_xmlguifactory_qbase_is_signal_connected(void* self, void* signal) {
    return KXMLGUIFactory_QBaseIsSignalConnected((KXMLGUIFactory*)self, (QMetaMethod*)signal);
}

void k_xmlguifactory_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KXMLGUIFactory_OnIsSignalConnected((KXMLGUIFactory*)self, (intptr_t)callback);
}

void k_xmlguifactory_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_xmlguifactory_delete(void* self) {
    KXMLGUIFactory_Delete((KXMLGUIFactory*)(self));
}
