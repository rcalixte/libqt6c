#include "../extras-kxmlgui/libkactioncollection.hpp"
#include "../extras-kio/libjob_base.hpp"
#include "libguiactivateevent.hpp"
#include "libnavigationextension.hpp"
#include "libopenurlarguments.hpp"
#include "libpart.hpp"
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
#include "../libqurl.hpp"
#include "../libqwidget.hpp"
#include "libreadonlypart.hpp"
#include "libreadonlypart.h"

KParts__ReadOnlyPart* k_parts__readonlypart_new() {
    return KParts__ReadOnlyPart_new();
}

KParts__ReadOnlyPart* k_parts__readonlypart_new2(void* parent) {
    return KParts__ReadOnlyPart_new2((QObject*)parent);
}

KParts__ReadOnlyPart* k_parts__readonlypart_new3(void* parent, void* data) {
    return KParts__ReadOnlyPart_new3((QObject*)parent, (KPluginMetaData*)data);
}

const QMetaObject* k_parts__readonlypart_meta_object(void* self) {
    return KParts__ReadOnlyPart_MetaObject((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KParts__ReadOnlyPart_OnMetaObject((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

const QMetaObject* k_parts__readonlypart_qbase_meta_object(void* self) {
    return KParts__ReadOnlyPart_QBaseMetaObject((KParts__ReadOnlyPart*)self);
}

void* k_parts__readonlypart_metacast(void* self, const char* param1) {
    return KParts__ReadOnlyPart_Metacast((KParts__ReadOnlyPart*)self, param1);
}

void k_parts__readonlypart_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KParts__ReadOnlyPart_OnMetacast((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void* k_parts__readonlypart_qbase_metacast(void* self, const char* param1) {
    return KParts__ReadOnlyPart_QBaseMetacast((KParts__ReadOnlyPart*)self, param1);
}

int32_t k_parts__readonlypart_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__ReadOnlyPart_Metacall((KParts__ReadOnlyPart*)self, param1, param2, param3);
}

void k_parts__readonlypart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KParts__ReadOnlyPart_OnMetacall((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

int32_t k_parts__readonlypart_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__ReadOnlyPart_QBaseMetacall((KParts__ReadOnlyPart*)self, param1, param2, param3);
}

const char* k_parts__readonlypart_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readonlypart_set_progress_info_enabled(void* self, bool show) {
    KParts__ReadOnlyPart_SetProgressInfoEnabled((KParts__ReadOnlyPart*)self, show);
}

bool k_parts__readonlypart_is_progress_info_enabled(void* self) {
    return KParts__ReadOnlyPart_IsProgressInfoEnabled((KParts__ReadOnlyPart*)self);
}

bool k_parts__readonlypart_open_url(void* self, void* url) {
    return KParts__ReadOnlyPart_OpenUrl((KParts__ReadOnlyPart*)self, (QUrl*)url);
}

void k_parts__readonlypart_on_open_url(void* self, bool (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnOpenUrl((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

bool k_parts__readonlypart_qbase_open_url(void* self, void* url) {
    return KParts__ReadOnlyPart_QBaseOpenUrl((KParts__ReadOnlyPart*)self, (QUrl*)url);
}

QUrl* k_parts__readonlypart_url(void* self) {
    return KParts__ReadOnlyPart_Url((KParts__ReadOnlyPart*)self);
}

bool k_parts__readonlypart_close_url(void* self) {
    return KParts__ReadOnlyPart_CloseUrl((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_close_url(void* self, bool (*callback)()) {
    KParts__ReadOnlyPart_OnCloseUrl((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

bool k_parts__readonlypart_qbase_close_url(void* self) {
    return KParts__ReadOnlyPart_QBaseCloseUrl((KParts__ReadOnlyPart*)self);
}

KParts__NavigationExtension* k_parts__readonlypart_navigation_extension(void* self) {
    return KParts__ReadOnlyPart_NavigationExtension((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_set_arguments(void* self, void* arguments) {
    KParts__ReadOnlyPart_SetArguments((KParts__ReadOnlyPart*)self, (KParts__OpenUrlArguments*)arguments);
}

KParts__OpenUrlArguments* k_parts__readonlypart_arguments(void* self) {
    return KParts__ReadOnlyPart_Arguments((KParts__ReadOnlyPart*)self);
}

bool k_parts__readonlypart_open_stream(void* self, const char* mimeType, void* url) {
    return KParts__ReadOnlyPart_OpenStream((KParts__ReadOnlyPart*)self, qstring(mimeType), (QUrl*)url);
}

bool k_parts__readonlypart_write_stream(void* self, const char* data) {
    return KParts__ReadOnlyPart_WriteStream((KParts__ReadOnlyPart*)self, qstring(data));
}

bool k_parts__readonlypart_close_stream(void* self) {
    return KParts__ReadOnlyPart_CloseStream((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_started(void* self, void* job) {
    KParts__ReadOnlyPart_Started((KParts__ReadOnlyPart*)self, (KIO__Job*)job);
}

void k_parts__readonlypart_on_started(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_Connect_Started((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_completed(void* self) {
    KParts__ReadOnlyPart_Completed((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_completed(void* self, void (*callback)(void*)) {
    KParts__ReadOnlyPart_Connect_Completed((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_completed_with_pending_action(void* self) {
    KParts__ReadOnlyPart_CompletedWithPendingAction((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_completed_with_pending_action(void* self, void (*callback)(void*)) {
    KParts__ReadOnlyPart_Connect_CompletedWithPendingAction((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_canceled(void* self, const char* errMsg) {
    KParts__ReadOnlyPart_Canceled((KParts__ReadOnlyPart*)self, qstring(errMsg));
}

void k_parts__readonlypart_on_canceled(void* self, void (*callback)(void*, const char*)) {
    KParts__ReadOnlyPart_Connect_Canceled((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_url_changed(void* self, void* url) {
    KParts__ReadOnlyPart_UrlChanged((KParts__ReadOnlyPart*)self, (QUrl*)url);
}

void k_parts__readonlypart_on_url_changed(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_Connect_UrlChanged((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

bool k_parts__readonlypart_open_file(void* self) {
    return KParts__ReadOnlyPart_OpenFile((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_open_file(void* self, bool (*callback)()) {
    KParts__ReadOnlyPart_OnOpenFile((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

bool k_parts__readonlypart_qbase_open_file(void* self) {
    return KParts__ReadOnlyPart_QBaseOpenFile((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_abort_load(void* self) {
    KParts__ReadOnlyPart_AbortLoad((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_abort_load(void* self, void (*callback)()) {
    KParts__ReadOnlyPart_OnAbortLoad((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_qbase_abort_load(void* self) {
    KParts__ReadOnlyPart_QBaseAbortLoad((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_gui_activate_event(void* self, void* event) {
    KParts__ReadOnlyPart_GuiActivateEvent((KParts__ReadOnlyPart*)self, (KParts__GUIActivateEvent*)event);
}

void k_parts__readonlypart_on_gui_activate_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnGuiActivateEvent((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_qbase_gui_activate_event(void* self, void* event) {
    KParts__ReadOnlyPart_QBaseGuiActivateEvent((KParts__ReadOnlyPart*)self, (KParts__GUIActivateEvent*)event);
}

void k_parts__readonlypart_set_url(void* self, void* url) {
    KParts__ReadOnlyPart_SetUrl((KParts__ReadOnlyPart*)self, (QUrl*)url);
}

void k_parts__readonlypart_on_set_url(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnSetUrl((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_qbase_set_url(void* self, void* url) {
    KParts__ReadOnlyPart_QBaseSetUrl((KParts__ReadOnlyPart*)self, (QUrl*)url);
}

const char* k_parts__readonlypart_local_file_path(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_LocalFilePath((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readonlypart_on_local_file_path(void* self, const char* (*callback)()) {
    KParts__ReadOnlyPart_OnLocalFilePath((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

const char* k_parts__readonlypart_qbase_local_file_path(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_QBaseLocalFilePath((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readonlypart_set_local_file_path(void* self, const char* localFilePath) {
    KParts__ReadOnlyPart_SetLocalFilePath((KParts__ReadOnlyPart*)self, qstring(localFilePath));
}

void k_parts__readonlypart_on_set_local_file_path(void* self, void (*callback)(void*, const char*)) {
    KParts__ReadOnlyPart_OnSetLocalFilePath((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_qbase_set_local_file_path(void* self, const char* localFilePath) {
    KParts__ReadOnlyPart_QBaseSetLocalFilePath((KParts__ReadOnlyPart*)self, qstring(localFilePath));
}

const char* k_parts__readonlypart_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readonlypart_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KParts__PartManager* k_parts__readonlypart_manager(void* self) {
    return KParts__Part_Manager((KParts__Part*)self);
}

void k_parts__readonlypart_set_auto_delete_widget(void* self, bool autoDeleteWidget) {
    KParts__Part_SetAutoDeleteWidget((KParts__Part*)self, autoDeleteWidget);
}

void k_parts__readonlypart_set_auto_delete_part(void* self, bool autoDeletePart) {
    KParts__Part_SetAutoDeletePart((KParts__Part*)self, autoDeletePart);
}

KPluginMetaData* k_parts__readonlypart_meta_data(void* self) {
    return KParts__Part_MetaData((KParts__Part*)self);
}

void k_parts__readonlypart_set_window_caption(void* self, const char* caption) {
    KParts__Part_SetWindowCaption((KParts__Part*)self, qstring(caption));
}

void k_parts__readonlypart_on_set_window_caption(void* self, void (*callback)(void*, const char*)) {
    KParts__Part_Connect_SetWindowCaption((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__readonlypart_set_status_bar_text(void* self, const char* text) {
    KParts__Part_SetStatusBarText((KParts__Part*)self, qstring(text));
}

void k_parts__readonlypart_on_set_status_bar_text(void* self, void (*callback)(void*, const char*)) {
    KParts__Part_Connect_SetStatusBarText((KParts__Part*)self, (intptr_t)callback);
}

const char* k_parts__readonlypart_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readonlypart_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_parts__readonlypart_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_parts__readonlypart_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_parts__readonlypart_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_parts__readonlypart_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_parts__readonlypart_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_parts__readonlypart_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_parts__readonlypart_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_parts__readonlypart_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_parts__readonlypart_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_parts__readonlypart_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_parts__readonlypart_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_parts__readonlypart_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_parts__readonlypart_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_parts__readonlypart_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_parts__readonlypart_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_parts__readonlypart_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_parts__readonlypart_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_parts__readonlypart_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_parts__readonlypart_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_parts__readonlypart_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_parts__readonlypart_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_parts__readonlypart_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_parts__readonlypart_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_parts__readonlypart_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_parts__readonlypart_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_parts__readonlypart_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_parts__readonlypart_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_parts__readonlypart_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__readonlypart_dynamic_property_names\n");
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

QBindingStorage* k_parts__readonlypart_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_parts__readonlypart_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_parts__readonlypart_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_parts__readonlypart_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_parts__readonlypart_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_parts__readonlypart_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_parts__readonlypart_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_parts__readonlypart_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_parts__readonlypart_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_parts__readonlypart_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_parts__readonlypart_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_parts__readonlypart_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_parts__readonlypart_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_parts__readonlypart_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_parts__readonlypart_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_parts__readonlypart_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_parts__readonlypart_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_parts__readonlypart_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_parts__readonlypart_set_part_object(void* self, void* object) {
    KParts__PartBase_SetPartObject((KParts__PartBase*)self, (QObject*)object);
}

QObject* k_parts__readonlypart_part_object(void* self) {
    return KParts__PartBase_PartObject((KParts__PartBase*)self);
}

QAction* k_parts__readonlypart_action(void* self, const char* name) {
    return KXMLGUIClient_Action((KXMLGUIClient*)self, qstring(name));
}

void k_parts__readonlypart_set_x_m_l_g_u_i_build_document(void* self, void* doc) {
    KXMLGUIClient_SetXMLGUIBuildDocument((KXMLGUIClient*)self, (QDomDocument*)doc);
}

QDomDocument* k_parts__readonlypart_xmlgui_build_document(void* self) {
    return KXMLGUIClient_XmlguiBuildDocument((KXMLGUIClient*)self);
}

void k_parts__readonlypart_set_factory(void* self, void* factory) {
    KXMLGUIClient_SetFactory((KXMLGUIClient*)self, (KXMLGUIFactory*)factory);
}

KXMLGUIFactory* k_parts__readonlypart_factory(void* self) {
    return KXMLGUIClient_Factory((KXMLGUIClient*)self);
}

KXMLGUIClient* k_parts__readonlypart_parent_client(void* self) {
    return KXMLGUIClient_ParentClient((KXMLGUIClient*)self);
}

void k_parts__readonlypart_insert_child_client(void* self, void* child) {
    KXMLGUIClient_InsertChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

void k_parts__readonlypart_remove_child_client(void* self, void* child) {
    KXMLGUIClient_RemoveChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

libqt_list /* of KXMLGUIClient* */ k_parts__readonlypart_child_clients(void* self) {
    libqt_list _arr = KXMLGUIClient_ChildClients((KXMLGUIClient*)self);
    return _arr;
}

void k_parts__readonlypart_set_client_builder(void* self, void* builder) {
    KXMLGUIClient_SetClientBuilder((KXMLGUIClient*)self, (KXMLGUIBuilder*)builder);
}

KXMLGUIBuilder* k_parts__readonlypart_client_builder(void* self) {
    return KXMLGUIClient_ClientBuilder((KXMLGUIClient*)self);
}

void k_parts__readonlypart_reload_x_m_l(void* self) {
    KXMLGUIClient_ReloadXML((KXMLGUIClient*)self);
}

void k_parts__readonlypart_plug_action_list(void* self, const char* name, libqt_list /* of QAction* */ actionList) {
    KXMLGUIClient_PlugActionList((KXMLGUIClient*)self, qstring(name), actionList);
}

void k_parts__readonlypart_unplug_action_list(void* self, const char* name) {
    KXMLGUIClient_UnplugActionList((KXMLGUIClient*)self, qstring(name));
}

const char* k_parts__readonlypart_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__readonlypart_find_most_recent_x_m_l_file\n");
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

void k_parts__readonlypart_add_state_action_enabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionEnabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

void k_parts__readonlypart_add_state_action_disabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionDisabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

KXMLGUIClient__StateChange* k_parts__readonlypart_get_actions_to_change_for_state(void* self, const char* state) {
    return KXMLGUIClient_GetActionsToChangeForState((KXMLGUIClient*)self, qstring(state));
}

void k_parts__readonlypart_begin_x_m_l_plug(void* self, void* param1) {
    KXMLGUIClient_BeginXMLPlug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__readonlypart_end_x_m_l_plug(void* self) {
    KXMLGUIClient_EndXMLPlug((KXMLGUIClient*)self);
}

void k_parts__readonlypart_prepare_x_m_l_unplug(void* self, void* param1) {
    KXMLGUIClient_PrepareXMLUnplug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__readonlypart_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile) {
    KXMLGUIClient_ReplaceXMLFile((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile));
}

const char* k_parts__readonlypart_find_version_number(const char* xml) {
    libqt_string _str = KXMLGUIClient_FindVersionNumber(qstring(xml));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readonlypart_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge) {
    KXMLGUIClient_ReplaceXMLFile3((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile), merge);
}

QWidget* k_parts__readonlypart_widget(void* self) {
    return KParts__ReadOnlyPart_Widget((KParts__ReadOnlyPart*)self);
}

QWidget* k_parts__readonlypart_qbase_widget(void* self) {
    return KParts__ReadOnlyPart_QBaseWidget((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_widget(void* self, QWidget* (*callback)()) {
    KParts__ReadOnlyPart_OnWidget((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_set_manager(void* self, void* manager) {
    KParts__ReadOnlyPart_SetManager((KParts__ReadOnlyPart*)self, (KParts__PartManager*)manager);
}

void k_parts__readonlypart_qbase_set_manager(void* self, void* manager) {
    KParts__ReadOnlyPart_QBaseSetManager((KParts__ReadOnlyPart*)self, (KParts__PartManager*)manager);
}

void k_parts__readonlypart_on_set_manager(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnSetManager((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

KParts__Part* k_parts__readonlypart_hit_test(void* self, void* widget, void* globalPos) {
    return KParts__ReadOnlyPart_HitTest((KParts__ReadOnlyPart*)self, (QWidget*)widget, (QPoint*)globalPos);
}

KParts__Part* k_parts__readonlypart_qbase_hit_test(void* self, void* widget, void* globalPos) {
    return KParts__ReadOnlyPart_QBaseHitTest((KParts__ReadOnlyPart*)self, (QWidget*)widget, (QPoint*)globalPos);
}

void k_parts__readonlypart_on_hit_test(void* self, KParts__Part* (*callback)(void*, void*, void*)) {
    KParts__ReadOnlyPart_OnHitTest((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_set_widget(void* self, void* widget) {
    KParts__ReadOnlyPart_SetWidget((KParts__ReadOnlyPart*)self, (QWidget*)widget);
}

void k_parts__readonlypart_qbase_set_widget(void* self, void* widget) {
    KParts__ReadOnlyPart_QBaseSetWidget((KParts__ReadOnlyPart*)self, (QWidget*)widget);
}

void k_parts__readonlypart_on_set_widget(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnSetWidget((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_custom_event(void* self, void* event) {
    KParts__ReadOnlyPart_CustomEvent((KParts__ReadOnlyPart*)self, (QEvent*)event);
}

void k_parts__readonlypart_qbase_custom_event(void* self, void* event) {
    KParts__ReadOnlyPart_QBaseCustomEvent((KParts__ReadOnlyPart*)self, (QEvent*)event);
}

void k_parts__readonlypart_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnCustomEvent((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_part_activate_event(void* self, void* event) {
    KParts__ReadOnlyPart_PartActivateEvent((KParts__ReadOnlyPart*)self, (KParts__PartActivateEvent*)event);
}

void k_parts__readonlypart_qbase_part_activate_event(void* self, void* event) {
    KParts__ReadOnlyPart_QBasePartActivateEvent((KParts__ReadOnlyPart*)self, (KParts__PartActivateEvent*)event);
}

void k_parts__readonlypart_on_part_activate_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnPartActivateEvent((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

bool k_parts__readonlypart_event(void* self, void* event) {
    return KParts__ReadOnlyPart_Event((KParts__ReadOnlyPart*)self, (QEvent*)event);
}

bool k_parts__readonlypart_qbase_event(void* self, void* event) {
    return KParts__ReadOnlyPart_QBaseEvent((KParts__ReadOnlyPart*)self, (QEvent*)event);
}

void k_parts__readonlypart_on_event(void* self, bool (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnEvent((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

bool k_parts__readonlypart_event_filter(void* self, void* watched, void* event) {
    return KParts__ReadOnlyPart_EventFilter((KParts__ReadOnlyPart*)self, (QObject*)watched, (QEvent*)event);
}

bool k_parts__readonlypart_qbase_event_filter(void* self, void* watched, void* event) {
    return KParts__ReadOnlyPart_QBaseEventFilter((KParts__ReadOnlyPart*)self, (QObject*)watched, (QEvent*)event);
}

void k_parts__readonlypart_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KParts__ReadOnlyPart_OnEventFilter((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_timer_event(void* self, void* event) {
    KParts__ReadOnlyPart_TimerEvent((KParts__ReadOnlyPart*)self, (QTimerEvent*)event);
}

void k_parts__readonlypart_qbase_timer_event(void* self, void* event) {
    KParts__ReadOnlyPart_QBaseTimerEvent((KParts__ReadOnlyPart*)self, (QTimerEvent*)event);
}

void k_parts__readonlypart_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnTimerEvent((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_child_event(void* self, void* event) {
    KParts__ReadOnlyPart_ChildEvent((KParts__ReadOnlyPart*)self, (QChildEvent*)event);
}

void k_parts__readonlypart_qbase_child_event(void* self, void* event) {
    KParts__ReadOnlyPart_QBaseChildEvent((KParts__ReadOnlyPart*)self, (QChildEvent*)event);
}

void k_parts__readonlypart_on_child_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnChildEvent((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_connect_notify(void* self, void* signal) {
    KParts__ReadOnlyPart_ConnectNotify((KParts__ReadOnlyPart*)self, (QMetaMethod*)signal);
}

void k_parts__readonlypart_qbase_connect_notify(void* self, void* signal) {
    KParts__ReadOnlyPart_QBaseConnectNotify((KParts__ReadOnlyPart*)self, (QMetaMethod*)signal);
}

void k_parts__readonlypart_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnConnectNotify((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_disconnect_notify(void* self, void* signal) {
    KParts__ReadOnlyPart_DisconnectNotify((KParts__ReadOnlyPart*)self, (QMetaMethod*)signal);
}

void k_parts__readonlypart_qbase_disconnect_notify(void* self, void* signal) {
    KParts__ReadOnlyPart_QBaseDisconnectNotify((KParts__ReadOnlyPart*)self, (QMetaMethod*)signal);
}

void k_parts__readonlypart_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnDisconnectNotify((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

QAction* k_parts__readonlypart_action2(void* self, void* element) {
    return KParts__ReadOnlyPart_Action2((KParts__ReadOnlyPart*)self, (QDomElement*)element);
}

QAction* k_parts__readonlypart_qbase_action2(void* self, void* element) {
    return KParts__ReadOnlyPart_QBaseAction2((KParts__ReadOnlyPart*)self, (QDomElement*)element);
}

void k_parts__readonlypart_on_action2(void* self, QAction* (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnAction2((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

KActionCollection* k_parts__readonlypart_action_collection(void* self) {
    return KParts__ReadOnlyPart_ActionCollection((KParts__ReadOnlyPart*)self);
}

KActionCollection* k_parts__readonlypart_qbase_action_collection(void* self) {
    return KParts__ReadOnlyPart_QBaseActionCollection((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_action_collection(void* self, KActionCollection* (*callback)()) {
    KParts__ReadOnlyPart_OnActionCollection((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

const char* k_parts__readonlypart_component_name(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_ComponentName((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readonlypart_qbase_component_name(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_QBaseComponentName((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readonlypart_on_component_name(void* self, const char* (*callback)()) {
    KParts__ReadOnlyPart_OnComponentName((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

QDomDocument* k_parts__readonlypart_dom_document(void* self) {
    return KParts__ReadOnlyPart_DomDocument((KParts__ReadOnlyPart*)self);
}

QDomDocument* k_parts__readonlypart_qbase_dom_document(void* self) {
    return KParts__ReadOnlyPart_QBaseDomDocument((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_dom_document(void* self, QDomDocument* (*callback)()) {
    KParts__ReadOnlyPart_OnDomDocument((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

const char* k_parts__readonlypart_xml_file(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_XmlFile((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readonlypart_qbase_xml_file(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_QBaseXmlFile((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readonlypart_on_xml_file(void* self, const char* (*callback)()) {
    KParts__ReadOnlyPart_OnXmlFile((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

const char* k_parts__readonlypart_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_LocalXMLFile((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readonlypart_qbase_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_QBaseLocalXMLFile((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readonlypart_on_local_x_m_l_file(void* self, const char* (*callback)()) {
    KParts__ReadOnlyPart_OnLocalXMLFile((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__ReadOnlyPart_SetComponentName((KParts__ReadOnlyPart*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__readonlypart_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__ReadOnlyPart_QBaseSetComponentName((KParts__ReadOnlyPart*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__readonlypart_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*)) {
    KParts__ReadOnlyPart_OnSetComponentName((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__ReadOnlyPart_SetXMLFile((KParts__ReadOnlyPart*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__readonlypart_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__ReadOnlyPart_QBaseSetXMLFile((KParts__ReadOnlyPart*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__readonlypart_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool)) {
    KParts__ReadOnlyPart_OnSetXMLFile((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_set_local_x_m_l_file(void* self, const char* file) {
    KParts__ReadOnlyPart_SetLocalXMLFile((KParts__ReadOnlyPart*)self, qstring(file));
}

void k_parts__readonlypart_qbase_set_local_x_m_l_file(void* self, const char* file) {
    KParts__ReadOnlyPart_QBaseSetLocalXMLFile((KParts__ReadOnlyPart*)self, qstring(file));
}

void k_parts__readonlypart_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*)) {
    KParts__ReadOnlyPart_OnSetLocalXMLFile((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__ReadOnlyPart_SetXML((KParts__ReadOnlyPart*)self, qstring(document), merge);
}

void k_parts__readonlypart_qbase_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__ReadOnlyPart_QBaseSetXML((KParts__ReadOnlyPart*)self, qstring(document), merge);
}

void k_parts__readonlypart_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool)) {
    KParts__ReadOnlyPart_OnSetXML((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__ReadOnlyPart_SetDOMDocument((KParts__ReadOnlyPart*)self, (QDomDocument*)document, merge);
}

void k_parts__readonlypart_qbase_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__ReadOnlyPart_QBaseSetDOMDocument((KParts__ReadOnlyPart*)self, (QDomDocument*)document, merge);
}

void k_parts__readonlypart_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool)) {
    KParts__ReadOnlyPart_OnSetDOMDocument((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__ReadOnlyPart_StateChanged((KParts__ReadOnlyPart*)self, qstring(newstate), reverse);
}

void k_parts__readonlypart_qbase_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__ReadOnlyPart_QBaseStateChanged((KParts__ReadOnlyPart*)self, qstring(newstate), reverse);
}

void k_parts__readonlypart_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t)) {
    KParts__ReadOnlyPart_OnStateChanged((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

QWidget* k_parts__readonlypart_host_container(void* self, const char* containerName) {
    return KParts__ReadOnlyPart_HostContainer((KParts__ReadOnlyPart*)self, qstring(containerName));
}

QWidget* k_parts__readonlypart_qbase_host_container(void* self, const char* containerName) {
    return KParts__ReadOnlyPart_QBaseHostContainer((KParts__ReadOnlyPart*)self, qstring(containerName));
}

void k_parts__readonlypart_on_host_container(void* self, QWidget* (*callback)(void*, const char*)) {
    KParts__ReadOnlyPart_OnHostContainer((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_slot_widget_destroyed(void* self) {
    KParts__ReadOnlyPart_SlotWidgetDestroyed((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_qbase_slot_widget_destroyed(void* self) {
    KParts__ReadOnlyPart_QBaseSlotWidgetDestroyed((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_slot_widget_destroyed(void* self, void (*callback)()) {
    KParts__ReadOnlyPart_OnSlotWidgetDestroyed((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

QObject* k_parts__readonlypart_sender(void* self) {
    return KParts__ReadOnlyPart_Sender((KParts__ReadOnlyPart*)self);
}

QObject* k_parts__readonlypart_qbase_sender(void* self) {
    return KParts__ReadOnlyPart_QBaseSender((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_sender(void* self, QObject* (*callback)()) {
    KParts__ReadOnlyPart_OnSender((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

int32_t k_parts__readonlypart_sender_signal_index(void* self) {
    return KParts__ReadOnlyPart_SenderSignalIndex((KParts__ReadOnlyPart*)self);
}

int32_t k_parts__readonlypart_qbase_sender_signal_index(void* self) {
    return KParts__ReadOnlyPart_QBaseSenderSignalIndex((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KParts__ReadOnlyPart_OnSenderSignalIndex((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

int32_t k_parts__readonlypart_receivers(void* self, const char* signal) {
    return KParts__ReadOnlyPart_Receivers((KParts__ReadOnlyPart*)self, signal);
}

int32_t k_parts__readonlypart_qbase_receivers(void* self, const char* signal) {
    return KParts__ReadOnlyPart_QBaseReceivers((KParts__ReadOnlyPart*)self, signal);
}

void k_parts__readonlypart_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KParts__ReadOnlyPart_OnReceivers((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

bool k_parts__readonlypart_is_signal_connected(void* self, void* signal) {
    return KParts__ReadOnlyPart_IsSignalConnected((KParts__ReadOnlyPart*)self, (QMetaMethod*)signal);
}

bool k_parts__readonlypart_qbase_is_signal_connected(void* self, void* signal) {
    return KParts__ReadOnlyPart_QBaseIsSignalConnected((KParts__ReadOnlyPart*)self, (QMetaMethod*)signal);
}

void k_parts__readonlypart_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_OnIsSignalConnected((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

const char* k_parts__readonlypart_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_StandardsXmlFileLocation((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readonlypart_qbase_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__ReadOnlyPart_QBaseStandardsXmlFileLocation((KParts__ReadOnlyPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readonlypart_on_standards_xml_file_location(void* self, const char* (*callback)()) {
    KParts__ReadOnlyPart_OnStandardsXmlFileLocation((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_load_standards_xml_file(void* self) {
    KParts__ReadOnlyPart_LoadStandardsXmlFile((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_qbase_load_standards_xml_file(void* self) {
    KParts__ReadOnlyPart_QBaseLoadStandardsXmlFile((KParts__ReadOnlyPart*)self);
}

void k_parts__readonlypart_on_load_standards_xml_file(void* self, void (*callback)()) {
    KParts__ReadOnlyPart_OnLoadStandardsXmlFile((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readonlypart_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_parts__readonlypart_delete(void* self) {
    KParts__ReadOnlyPart_Delete((KParts__ReadOnlyPart*)(self));
}
