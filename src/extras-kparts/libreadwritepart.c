#include "../extras-kxmlgui/libkactioncollection.hpp"
#include "libguiactivateevent.hpp"
#include "libpart.hpp"
#include "libpartactivateevent.hpp"
#include "libpartbase.hpp"
#include "libpartmanager.hpp"
#include "libreadonlypart.hpp"
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
#include "libreadwritepart.hpp"
#include "libreadwritepart.h"

KParts__ReadWritePart* k_parts__readwritepart_new() {
    return KParts__ReadWritePart_new();
}

KParts__ReadWritePart* k_parts__readwritepart_new2(void* parent) {
    return KParts__ReadWritePart_new2((QObject*)parent);
}

KParts__ReadWritePart* k_parts__readwritepart_new3(void* parent, void* data) {
    return KParts__ReadWritePart_new3((QObject*)parent, (KPluginMetaData*)data);
}

const QMetaObject* k_parts__readwritepart_meta_object(void* self) {
    return KParts__ReadWritePart_MetaObject((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KParts__ReadWritePart_OnMetaObject((KParts__ReadWritePart*)self, (intptr_t)callback);
}

const QMetaObject* k_parts__readwritepart_qbase_meta_object(void* self) {
    return KParts__ReadWritePart_QBaseMetaObject((KParts__ReadWritePart*)self);
}

void* k_parts__readwritepart_metacast(void* self, const char* param1) {
    return KParts__ReadWritePart_Metacast((KParts__ReadWritePart*)self, param1);
}

void k_parts__readwritepart_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KParts__ReadWritePart_OnMetacast((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void* k_parts__readwritepart_qbase_metacast(void* self, const char* param1) {
    return KParts__ReadWritePart_QBaseMetacast((KParts__ReadWritePart*)self, param1);
}

int32_t k_parts__readwritepart_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__ReadWritePart_Metacall((KParts__ReadWritePart*)self, param1, param2, param3);
}

void k_parts__readwritepart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KParts__ReadWritePart_OnMetacall((KParts__ReadWritePart*)self, (intptr_t)callback);
}

int32_t k_parts__readwritepart_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__ReadWritePart_QBaseMetacall((KParts__ReadWritePart*)self, param1, param2, param3);
}

const char* k_parts__readwritepart_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_parts__readwritepart_is_read_write(void* self) {
    return KParts__ReadWritePart_IsReadWrite((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_set_read_write(void* self, bool readwrite) {
    KParts__ReadWritePart_SetReadWrite((KParts__ReadWritePart*)self, readwrite);
}

void k_parts__readwritepart_on_set_read_write(void* self, void (*callback)(void*, bool)) {
    KParts__ReadWritePart_OnSetReadWrite((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_qbase_set_read_write(void* self, bool readwrite) {
    KParts__ReadWritePart_QBaseSetReadWrite((KParts__ReadWritePart*)self, readwrite);
}

bool k_parts__readwritepart_is_modified(void* self) {
    return KParts__ReadWritePart_IsModified((KParts__ReadWritePart*)self);
}

bool k_parts__readwritepart_query_close(void* self) {
    return KParts__ReadWritePart_QueryClose((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_query_close(void* self, bool (*callback)()) {
    KParts__ReadWritePart_OnQueryClose((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_qbase_query_close(void* self) {
    return KParts__ReadWritePart_QBaseQueryClose((KParts__ReadWritePart*)self);
}

bool k_parts__readwritepart_close_url(void* self) {
    return KParts__ReadWritePart_CloseUrl((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_close_url(void* self, bool (*callback)()) {
    KParts__ReadWritePart_OnCloseUrl((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_qbase_close_url(void* self) {
    return KParts__ReadWritePart_QBaseCloseUrl((KParts__ReadWritePart*)self);
}

bool k_parts__readwritepart_close_url2(void* self, bool promptToSave) {
    return KParts__ReadWritePart_CloseUrl2((KParts__ReadWritePart*)self, promptToSave);
}

void k_parts__readwritepart_on_close_url2(void* self, bool (*callback)(void*, bool)) {
    KParts__ReadWritePart_OnCloseUrl2((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_qbase_close_url2(void* self, bool promptToSave) {
    return KParts__ReadWritePart_QBaseCloseUrl2((KParts__ReadWritePart*)self, promptToSave);
}

bool k_parts__readwritepart_save_as(void* self, void* url) {
    return KParts__ReadWritePart_SaveAs((KParts__ReadWritePart*)self, (QUrl*)url);
}

void k_parts__readwritepart_on_save_as(void* self, bool (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnSaveAs((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_qbase_save_as(void* self, void* url) {
    return KParts__ReadWritePart_QBaseSaveAs((KParts__ReadWritePart*)self, (QUrl*)url);
}

void k_parts__readwritepart_set_modified(void* self, bool modified) {
    KParts__ReadWritePart_SetModified((KParts__ReadWritePart*)self, modified);
}

void k_parts__readwritepart_on_set_modified(void* self, void (*callback)(void*, bool)) {
    KParts__ReadWritePart_OnSetModified((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_qbase_set_modified(void* self, bool modified) {
    KParts__ReadWritePart_QBaseSetModified((KParts__ReadWritePart*)self, modified);
}

void k_parts__readwritepart_sig_query_close(void* self, bool* handled, bool* abortClosing) {
    KParts__ReadWritePart_SigQueryClose((KParts__ReadWritePart*)self, (bool*)handled, (bool*)abortClosing);
}

void k_parts__readwritepart_on_sig_query_close(void* self, void (*callback)(void*, bool*, bool*)) {
    KParts__ReadWritePart_Connect_SigQueryClose((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_modified2(void* self) {
    KParts__ReadWritePart_SetModified2((KParts__ReadWritePart*)self);
}

bool k_parts__readwritepart_save(void* self) {
    return KParts__ReadWritePart_Save((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_save(void* self, bool (*callback)()) {
    KParts__ReadWritePart_OnSave((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_qbase_save(void* self) {
    return KParts__ReadWritePart_QBaseSave((KParts__ReadWritePart*)self);
}

bool k_parts__readwritepart_wait_save_complete(void* self) {
    return KParts__ReadWritePart_WaitSaveComplete((KParts__ReadWritePart*)self);
}

bool k_parts__readwritepart_save_file(void* self) {
    return KParts__ReadWritePart_SaveFile((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_save_file(void* self, bool (*callback)()) {
    KParts__ReadWritePart_OnSaveFile((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_qbase_save_file(void* self) {
    return KParts__ReadWritePart_QBaseSaveFile((KParts__ReadWritePart*)self);
}

bool k_parts__readwritepart_save_to_url(void* self) {
    return KParts__ReadWritePart_SaveToUrl((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_save_to_url(void* self, bool (*callback)()) {
    KParts__ReadWritePart_OnSaveToUrl((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_qbase_save_to_url(void* self) {
    return KParts__ReadWritePart_QBaseSaveToUrl((KParts__ReadWritePart*)self);
}

const char* k_parts__readwritepart_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readwritepart_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readwritepart_set_progress_info_enabled(void* self, bool show) {
    KParts__ReadOnlyPart_SetProgressInfoEnabled((KParts__ReadOnlyPart*)self, show);
}

bool k_parts__readwritepart_is_progress_info_enabled(void* self) {
    return KParts__ReadOnlyPart_IsProgressInfoEnabled((KParts__ReadOnlyPart*)self);
}

QUrl* k_parts__readwritepart_url(void* self) {
    return KParts__ReadOnlyPart_Url((KParts__ReadOnlyPart*)self);
}

KParts__NavigationExtension* k_parts__readwritepart_navigation_extension(void* self) {
    return KParts__ReadOnlyPart_NavigationExtension((KParts__ReadOnlyPart*)self);
}

void k_parts__readwritepart_set_arguments(void* self, void* arguments) {
    KParts__ReadOnlyPart_SetArguments((KParts__ReadOnlyPart*)self, (KParts__OpenUrlArguments*)arguments);
}

KParts__OpenUrlArguments* k_parts__readwritepart_arguments(void* self) {
    return KParts__ReadOnlyPart_Arguments((KParts__ReadOnlyPart*)self);
}

bool k_parts__readwritepart_open_stream(void* self, const char* mimeType, void* url) {
    return KParts__ReadOnlyPart_OpenStream((KParts__ReadOnlyPart*)self, qstring(mimeType), (QUrl*)url);
}

bool k_parts__readwritepart_write_stream(void* self, const char* data) {
    return KParts__ReadOnlyPart_WriteStream((KParts__ReadOnlyPart*)self, qstring(data));
}

bool k_parts__readwritepart_close_stream(void* self) {
    return KParts__ReadOnlyPart_CloseStream((KParts__ReadOnlyPart*)self);
}

void k_parts__readwritepart_started(void* self, void* job) {
    KParts__ReadOnlyPart_Started((KParts__ReadOnlyPart*)self, (KIO__Job*)job);
}

void k_parts__readwritepart_on_started(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_Connect_Started((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_completed(void* self) {
    KParts__ReadOnlyPart_Completed((KParts__ReadOnlyPart*)self);
}

void k_parts__readwritepart_on_completed(void* self, void (*callback)(void*)) {
    KParts__ReadOnlyPart_Connect_Completed((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_completed_with_pending_action(void* self) {
    KParts__ReadOnlyPart_CompletedWithPendingAction((KParts__ReadOnlyPart*)self);
}

void k_parts__readwritepart_on_completed_with_pending_action(void* self, void (*callback)(void*)) {
    KParts__ReadOnlyPart_Connect_CompletedWithPendingAction((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_canceled(void* self, const char* errMsg) {
    KParts__ReadOnlyPart_Canceled((KParts__ReadOnlyPart*)self, qstring(errMsg));
}

void k_parts__readwritepart_on_canceled(void* self, void (*callback)(void*, const char*)) {
    KParts__ReadOnlyPart_Connect_Canceled((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_url_changed(void* self, void* url) {
    KParts__ReadOnlyPart_UrlChanged((KParts__ReadOnlyPart*)self, (QUrl*)url);
}

void k_parts__readwritepart_on_url_changed(void* self, void (*callback)(void*, void*)) {
    KParts__ReadOnlyPart_Connect_UrlChanged((KParts__ReadOnlyPart*)self, (intptr_t)callback);
}

KParts__PartManager* k_parts__readwritepart_manager(void* self) {
    return KParts__Part_Manager((KParts__Part*)self);
}

void k_parts__readwritepart_set_auto_delete_widget(void* self, bool autoDeleteWidget) {
    KParts__Part_SetAutoDeleteWidget((KParts__Part*)self, autoDeleteWidget);
}

void k_parts__readwritepart_set_auto_delete_part(void* self, bool autoDeletePart) {
    KParts__Part_SetAutoDeletePart((KParts__Part*)self, autoDeletePart);
}

KPluginMetaData* k_parts__readwritepart_meta_data(void* self) {
    return KParts__Part_MetaData((KParts__Part*)self);
}

void k_parts__readwritepart_set_window_caption(void* self, const char* caption) {
    KParts__Part_SetWindowCaption((KParts__Part*)self, qstring(caption));
}

void k_parts__readwritepart_on_set_window_caption(void* self, void (*callback)(void*, const char*)) {
    KParts__Part_Connect_SetWindowCaption((KParts__Part*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_status_bar_text(void* self, const char* text) {
    KParts__Part_SetStatusBarText((KParts__Part*)self, qstring(text));
}

void k_parts__readwritepart_on_set_status_bar_text(void* self, void (*callback)(void*, const char*)) {
    KParts__Part_Connect_SetStatusBarText((KParts__Part*)self, (intptr_t)callback);
}

const char* k_parts__readwritepart_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readwritepart_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_parts__readwritepart_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_parts__readwritepart_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_parts__readwritepart_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_parts__readwritepart_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_parts__readwritepart_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_parts__readwritepart_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_parts__readwritepart_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_parts__readwritepart_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_parts__readwritepart_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_parts__readwritepart_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_parts__readwritepart_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_parts__readwritepart_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_parts__readwritepart_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_parts__readwritepart_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_parts__readwritepart_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_parts__readwritepart_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_parts__readwritepart_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_parts__readwritepart_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_parts__readwritepart_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_parts__readwritepart_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_parts__readwritepart_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_parts__readwritepart_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_parts__readwritepart_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_parts__readwritepart_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__readwritepart_dynamic_property_names\n");
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

QBindingStorage* k_parts__readwritepart_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_parts__readwritepart_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_parts__readwritepart_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_parts__readwritepart_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_parts__readwritepart_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_parts__readwritepart_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_parts__readwritepart_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_parts__readwritepart_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_parts__readwritepart_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_parts__readwritepart_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_parts__readwritepart_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_parts__readwritepart_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_parts__readwritepart_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_part_object(void* self, void* object) {
    KParts__PartBase_SetPartObject((KParts__PartBase*)self, (QObject*)object);
}

QObject* k_parts__readwritepart_part_object(void* self) {
    return KParts__PartBase_PartObject((KParts__PartBase*)self);
}

QAction* k_parts__readwritepart_action(void* self, const char* name) {
    return KXMLGUIClient_Action((KXMLGUIClient*)self, qstring(name));
}

void k_parts__readwritepart_set_x_m_l_g_u_i_build_document(void* self, void* doc) {
    KXMLGUIClient_SetXMLGUIBuildDocument((KXMLGUIClient*)self, (QDomDocument*)doc);
}

QDomDocument* k_parts__readwritepart_xmlgui_build_document(void* self) {
    return KXMLGUIClient_XmlguiBuildDocument((KXMLGUIClient*)self);
}

void k_parts__readwritepart_set_factory(void* self, void* factory) {
    KXMLGUIClient_SetFactory((KXMLGUIClient*)self, (KXMLGUIFactory*)factory);
}

KXMLGUIFactory* k_parts__readwritepart_factory(void* self) {
    return KXMLGUIClient_Factory((KXMLGUIClient*)self);
}

KXMLGUIClient* k_parts__readwritepart_parent_client(void* self) {
    return KXMLGUIClient_ParentClient((KXMLGUIClient*)self);
}

void k_parts__readwritepart_insert_child_client(void* self, void* child) {
    KXMLGUIClient_InsertChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

void k_parts__readwritepart_remove_child_client(void* self, void* child) {
    KXMLGUIClient_RemoveChildClient((KXMLGUIClient*)self, (KXMLGUIClient*)child);
}

libqt_list /* of KXMLGUIClient* */ k_parts__readwritepart_child_clients(void* self) {
    libqt_list _arr = KXMLGUIClient_ChildClients((KXMLGUIClient*)self);
    return _arr;
}

void k_parts__readwritepart_set_client_builder(void* self, void* builder) {
    KXMLGUIClient_SetClientBuilder((KXMLGUIClient*)self, (KXMLGUIBuilder*)builder);
}

KXMLGUIBuilder* k_parts__readwritepart_client_builder(void* self) {
    return KXMLGUIClient_ClientBuilder((KXMLGUIClient*)self);
}

void k_parts__readwritepart_reload_x_m_l(void* self) {
    KXMLGUIClient_ReloadXML((KXMLGUIClient*)self);
}

void k_parts__readwritepart_plug_action_list(void* self, const char* name, libqt_list /* of QAction* */ actionList) {
    KXMLGUIClient_PlugActionList((KXMLGUIClient*)self, qstring(name), actionList);
}

void k_parts__readwritepart_unplug_action_list(void* self, const char* name) {
    KXMLGUIClient_UnplugActionList((KXMLGUIClient*)self, qstring(name));
}

const char* k_parts__readwritepart_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__readwritepart_find_most_recent_x_m_l_file\n");
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

void k_parts__readwritepart_add_state_action_enabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionEnabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

void k_parts__readwritepart_add_state_action_disabled(void* self, const char* state, const char* action) {
    KXMLGUIClient_AddStateActionDisabled((KXMLGUIClient*)self, qstring(state), qstring(action));
}

KXMLGUIClient__StateChange* k_parts__readwritepart_get_actions_to_change_for_state(void* self, const char* state) {
    return KXMLGUIClient_GetActionsToChangeForState((KXMLGUIClient*)self, qstring(state));
}

void k_parts__readwritepart_begin_x_m_l_plug(void* self, void* param1) {
    KXMLGUIClient_BeginXMLPlug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__readwritepart_end_x_m_l_plug(void* self) {
    KXMLGUIClient_EndXMLPlug((KXMLGUIClient*)self);
}

void k_parts__readwritepart_prepare_x_m_l_unplug(void* self, void* param1) {
    KXMLGUIClient_PrepareXMLUnplug((KXMLGUIClient*)self, (QWidget*)param1);
}

void k_parts__readwritepart_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile) {
    KXMLGUIClient_ReplaceXMLFile((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile));
}

const char* k_parts__readwritepart_find_version_number(const char* xml) {
    libqt_string _str = KXMLGUIClient_FindVersionNumber(qstring(xml));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readwritepart_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge) {
    KXMLGUIClient_ReplaceXMLFile3((KXMLGUIClient*)self, qstring(xmlfile), qstring(localxmlfile), merge);
}

bool k_parts__readwritepart_open_url(void* self, void* url) {
    return KParts__ReadWritePart_OpenUrl((KParts__ReadWritePart*)self, (QUrl*)url);
}

bool k_parts__readwritepart_qbase_open_url(void* self, void* url) {
    return KParts__ReadWritePart_QBaseOpenUrl((KParts__ReadWritePart*)self, (QUrl*)url);
}

void k_parts__readwritepart_on_open_url(void* self, bool (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnOpenUrl((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_open_file(void* self) {
    return KParts__ReadWritePart_OpenFile((KParts__ReadWritePart*)self);
}

bool k_parts__readwritepart_qbase_open_file(void* self) {
    return KParts__ReadWritePart_QBaseOpenFile((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_open_file(void* self, bool (*callback)()) {
    KParts__ReadWritePart_OnOpenFile((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_gui_activate_event(void* self, void* event) {
    KParts__ReadWritePart_GuiActivateEvent((KParts__ReadWritePart*)self, (KParts__GUIActivateEvent*)event);
}

void k_parts__readwritepart_qbase_gui_activate_event(void* self, void* event) {
    KParts__ReadWritePart_QBaseGuiActivateEvent((KParts__ReadWritePart*)self, (KParts__GUIActivateEvent*)event);
}

void k_parts__readwritepart_on_gui_activate_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnGuiActivateEvent((KParts__ReadWritePart*)self, (intptr_t)callback);
}

QWidget* k_parts__readwritepart_widget(void* self) {
    return KParts__ReadWritePart_Widget((KParts__ReadWritePart*)self);
}

QWidget* k_parts__readwritepart_qbase_widget(void* self) {
    return KParts__ReadWritePart_QBaseWidget((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_widget(void* self, QWidget* (*callback)()) {
    KParts__ReadWritePart_OnWidget((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_manager(void* self, void* manager) {
    KParts__ReadWritePart_SetManager((KParts__ReadWritePart*)self, (KParts__PartManager*)manager);
}

void k_parts__readwritepart_qbase_set_manager(void* self, void* manager) {
    KParts__ReadWritePart_QBaseSetManager((KParts__ReadWritePart*)self, (KParts__PartManager*)manager);
}

void k_parts__readwritepart_on_set_manager(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnSetManager((KParts__ReadWritePart*)self, (intptr_t)callback);
}

KParts__Part* k_parts__readwritepart_hit_test(void* self, void* widget, void* globalPos) {
    return KParts__ReadWritePart_HitTest((KParts__ReadWritePart*)self, (QWidget*)widget, (QPoint*)globalPos);
}

KParts__Part* k_parts__readwritepart_qbase_hit_test(void* self, void* widget, void* globalPos) {
    return KParts__ReadWritePart_QBaseHitTest((KParts__ReadWritePart*)self, (QWidget*)widget, (QPoint*)globalPos);
}

void k_parts__readwritepart_on_hit_test(void* self, KParts__Part* (*callback)(void*, void*, void*)) {
    KParts__ReadWritePart_OnHitTest((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_widget(void* self, void* widget) {
    KParts__ReadWritePart_SetWidget((KParts__ReadWritePart*)self, (QWidget*)widget);
}

void k_parts__readwritepart_qbase_set_widget(void* self, void* widget) {
    KParts__ReadWritePart_QBaseSetWidget((KParts__ReadWritePart*)self, (QWidget*)widget);
}

void k_parts__readwritepart_on_set_widget(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnSetWidget((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_custom_event(void* self, void* event) {
    KParts__ReadWritePart_CustomEvent((KParts__ReadWritePart*)self, (QEvent*)event);
}

void k_parts__readwritepart_qbase_custom_event(void* self, void* event) {
    KParts__ReadWritePart_QBaseCustomEvent((KParts__ReadWritePart*)self, (QEvent*)event);
}

void k_parts__readwritepart_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnCustomEvent((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_part_activate_event(void* self, void* event) {
    KParts__ReadWritePart_PartActivateEvent((KParts__ReadWritePart*)self, (KParts__PartActivateEvent*)event);
}

void k_parts__readwritepart_qbase_part_activate_event(void* self, void* event) {
    KParts__ReadWritePart_QBasePartActivateEvent((KParts__ReadWritePart*)self, (KParts__PartActivateEvent*)event);
}

void k_parts__readwritepart_on_part_activate_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnPartActivateEvent((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_event(void* self, void* event) {
    return KParts__ReadWritePart_Event((KParts__ReadWritePart*)self, (QEvent*)event);
}

bool k_parts__readwritepart_qbase_event(void* self, void* event) {
    return KParts__ReadWritePart_QBaseEvent((KParts__ReadWritePart*)self, (QEvent*)event);
}

void k_parts__readwritepart_on_event(void* self, bool (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnEvent((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_event_filter(void* self, void* watched, void* event) {
    return KParts__ReadWritePart_EventFilter((KParts__ReadWritePart*)self, (QObject*)watched, (QEvent*)event);
}

bool k_parts__readwritepart_qbase_event_filter(void* self, void* watched, void* event) {
    return KParts__ReadWritePart_QBaseEventFilter((KParts__ReadWritePart*)self, (QObject*)watched, (QEvent*)event);
}

void k_parts__readwritepart_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KParts__ReadWritePart_OnEventFilter((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_timer_event(void* self, void* event) {
    KParts__ReadWritePart_TimerEvent((KParts__ReadWritePart*)self, (QTimerEvent*)event);
}

void k_parts__readwritepart_qbase_timer_event(void* self, void* event) {
    KParts__ReadWritePart_QBaseTimerEvent((KParts__ReadWritePart*)self, (QTimerEvent*)event);
}

void k_parts__readwritepart_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnTimerEvent((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_child_event(void* self, void* event) {
    KParts__ReadWritePart_ChildEvent((KParts__ReadWritePart*)self, (QChildEvent*)event);
}

void k_parts__readwritepart_qbase_child_event(void* self, void* event) {
    KParts__ReadWritePart_QBaseChildEvent((KParts__ReadWritePart*)self, (QChildEvent*)event);
}

void k_parts__readwritepart_on_child_event(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnChildEvent((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_connect_notify(void* self, void* signal) {
    KParts__ReadWritePart_ConnectNotify((KParts__ReadWritePart*)self, (QMetaMethod*)signal);
}

void k_parts__readwritepart_qbase_connect_notify(void* self, void* signal) {
    KParts__ReadWritePart_QBaseConnectNotify((KParts__ReadWritePart*)self, (QMetaMethod*)signal);
}

void k_parts__readwritepart_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnConnectNotify((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_disconnect_notify(void* self, void* signal) {
    KParts__ReadWritePart_DisconnectNotify((KParts__ReadWritePart*)self, (QMetaMethod*)signal);
}

void k_parts__readwritepart_qbase_disconnect_notify(void* self, void* signal) {
    KParts__ReadWritePart_QBaseDisconnectNotify((KParts__ReadWritePart*)self, (QMetaMethod*)signal);
}

void k_parts__readwritepart_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnDisconnectNotify((KParts__ReadWritePart*)self, (intptr_t)callback);
}

QAction* k_parts__readwritepart_action2(void* self, void* element) {
    return KParts__ReadWritePart_Action2((KParts__ReadWritePart*)self, (QDomElement*)element);
}

QAction* k_parts__readwritepart_qbase_action2(void* self, void* element) {
    return KParts__ReadWritePart_QBaseAction2((KParts__ReadWritePart*)self, (QDomElement*)element);
}

void k_parts__readwritepart_on_action2(void* self, QAction* (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnAction2((KParts__ReadWritePart*)self, (intptr_t)callback);
}

KActionCollection* k_parts__readwritepart_action_collection(void* self) {
    return KParts__ReadWritePart_ActionCollection((KParts__ReadWritePart*)self);
}

KActionCollection* k_parts__readwritepart_qbase_action_collection(void* self) {
    return KParts__ReadWritePart_QBaseActionCollection((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_action_collection(void* self, KActionCollection* (*callback)()) {
    KParts__ReadWritePart_OnActionCollection((KParts__ReadWritePart*)self, (intptr_t)callback);
}

const char* k_parts__readwritepart_component_name(void* self) {
    libqt_string _str = KParts__ReadWritePart_ComponentName((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readwritepart_qbase_component_name(void* self) {
    libqt_string _str = KParts__ReadWritePart_QBaseComponentName((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readwritepart_on_component_name(void* self, const char* (*callback)()) {
    KParts__ReadWritePart_OnComponentName((KParts__ReadWritePart*)self, (intptr_t)callback);
}

QDomDocument* k_parts__readwritepart_dom_document(void* self) {
    return KParts__ReadWritePart_DomDocument((KParts__ReadWritePart*)self);
}

QDomDocument* k_parts__readwritepart_qbase_dom_document(void* self) {
    return KParts__ReadWritePart_QBaseDomDocument((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_dom_document(void* self, QDomDocument* (*callback)()) {
    KParts__ReadWritePart_OnDomDocument((KParts__ReadWritePart*)self, (intptr_t)callback);
}

const char* k_parts__readwritepart_xml_file(void* self) {
    libqt_string _str = KParts__ReadWritePart_XmlFile((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readwritepart_qbase_xml_file(void* self) {
    libqt_string _str = KParts__ReadWritePart_QBaseXmlFile((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readwritepart_on_xml_file(void* self, const char* (*callback)()) {
    KParts__ReadWritePart_OnXmlFile((KParts__ReadWritePart*)self, (intptr_t)callback);
}

const char* k_parts__readwritepart_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__ReadWritePart_LocalXMLFile((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readwritepart_qbase_local_x_m_l_file(void* self) {
    libqt_string _str = KParts__ReadWritePart_QBaseLocalXMLFile((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readwritepart_on_local_x_m_l_file(void* self, const char* (*callback)()) {
    KParts__ReadWritePart_OnLocalXMLFile((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__ReadWritePart_SetComponentName((KParts__ReadWritePart*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__readwritepart_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName) {
    KParts__ReadWritePart_QBaseSetComponentName((KParts__ReadWritePart*)self, qstring(componentName), qstring(componentDisplayName));
}

void k_parts__readwritepart_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*)) {
    KParts__ReadWritePart_OnSetComponentName((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__ReadWritePart_SetXMLFile((KParts__ReadWritePart*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__readwritepart_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc) {
    KParts__ReadWritePart_QBaseSetXMLFile((KParts__ReadWritePart*)self, qstring(file), merge, setXMLDoc);
}

void k_parts__readwritepart_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool)) {
    KParts__ReadWritePart_OnSetXMLFile((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_local_x_m_l_file(void* self, const char* file) {
    KParts__ReadWritePart_SetLocalXMLFile((KParts__ReadWritePart*)self, qstring(file));
}

void k_parts__readwritepart_qbase_set_local_x_m_l_file(void* self, const char* file) {
    KParts__ReadWritePart_QBaseSetLocalXMLFile((KParts__ReadWritePart*)self, qstring(file));
}

void k_parts__readwritepart_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*)) {
    KParts__ReadWritePart_OnSetLocalXMLFile((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__ReadWritePart_SetXML((KParts__ReadWritePart*)self, qstring(document), merge);
}

void k_parts__readwritepart_qbase_set_x_m_l(void* self, const char* document, bool merge) {
    KParts__ReadWritePart_QBaseSetXML((KParts__ReadWritePart*)self, qstring(document), merge);
}

void k_parts__readwritepart_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool)) {
    KParts__ReadWritePart_OnSetXML((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__ReadWritePart_SetDOMDocument((KParts__ReadWritePart*)self, (QDomDocument*)document, merge);
}

void k_parts__readwritepart_qbase_set_d_o_m_document(void* self, void* document, bool merge) {
    KParts__ReadWritePart_QBaseSetDOMDocument((KParts__ReadWritePart*)self, (QDomDocument*)document, merge);
}

void k_parts__readwritepart_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool)) {
    KParts__ReadWritePart_OnSetDOMDocument((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__ReadWritePart_StateChanged((KParts__ReadWritePart*)self, qstring(newstate), reverse);
}

void k_parts__readwritepart_qbase_state_changed(void* self, const char* newstate, int32_t reverse) {
    KParts__ReadWritePart_QBaseStateChanged((KParts__ReadWritePart*)self, qstring(newstate), reverse);
}

void k_parts__readwritepart_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t)) {
    KParts__ReadWritePart_OnStateChanged((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_abort_load(void* self) {
    KParts__ReadWritePart_AbortLoad((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_qbase_abort_load(void* self) {
    KParts__ReadWritePart_QBaseAbortLoad((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_abort_load(void* self, void (*callback)()) {
    KParts__ReadWritePart_OnAbortLoad((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_url(void* self, void* url) {
    KParts__ReadWritePart_SetUrl((KParts__ReadWritePart*)self, (QUrl*)url);
}

void k_parts__readwritepart_qbase_set_url(void* self, void* url) {
    KParts__ReadWritePart_QBaseSetUrl((KParts__ReadWritePart*)self, (QUrl*)url);
}

void k_parts__readwritepart_on_set_url(void* self, void (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnSetUrl((KParts__ReadWritePart*)self, (intptr_t)callback);
}

const char* k_parts__readwritepart_local_file_path(void* self) {
    libqt_string _str = KParts__ReadWritePart_LocalFilePath((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readwritepart_qbase_local_file_path(void* self) {
    libqt_string _str = KParts__ReadWritePart_QBaseLocalFilePath((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readwritepart_on_local_file_path(void* self, const char* (*callback)()) {
    KParts__ReadWritePart_OnLocalFilePath((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_set_local_file_path(void* self, const char* localFilePath) {
    KParts__ReadWritePart_SetLocalFilePath((KParts__ReadWritePart*)self, qstring(localFilePath));
}

void k_parts__readwritepart_qbase_set_local_file_path(void* self, const char* localFilePath) {
    KParts__ReadWritePart_QBaseSetLocalFilePath((KParts__ReadWritePart*)self, qstring(localFilePath));
}

void k_parts__readwritepart_on_set_local_file_path(void* self, void (*callback)(void*, const char*)) {
    KParts__ReadWritePart_OnSetLocalFilePath((KParts__ReadWritePart*)self, (intptr_t)callback);
}

QWidget* k_parts__readwritepart_host_container(void* self, const char* containerName) {
    return KParts__ReadWritePart_HostContainer((KParts__ReadWritePart*)self, qstring(containerName));
}

QWidget* k_parts__readwritepart_qbase_host_container(void* self, const char* containerName) {
    return KParts__ReadWritePart_QBaseHostContainer((KParts__ReadWritePart*)self, qstring(containerName));
}

void k_parts__readwritepart_on_host_container(void* self, QWidget* (*callback)(void*, const char*)) {
    KParts__ReadWritePart_OnHostContainer((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_slot_widget_destroyed(void* self) {
    KParts__ReadWritePart_SlotWidgetDestroyed((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_qbase_slot_widget_destroyed(void* self) {
    KParts__ReadWritePart_QBaseSlotWidgetDestroyed((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_slot_widget_destroyed(void* self, void (*callback)()) {
    KParts__ReadWritePart_OnSlotWidgetDestroyed((KParts__ReadWritePart*)self, (intptr_t)callback);
}

QObject* k_parts__readwritepart_sender(void* self) {
    return KParts__ReadWritePart_Sender((KParts__ReadWritePart*)self);
}

QObject* k_parts__readwritepart_qbase_sender(void* self) {
    return KParts__ReadWritePart_QBaseSender((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_sender(void* self, QObject* (*callback)()) {
    KParts__ReadWritePart_OnSender((KParts__ReadWritePart*)self, (intptr_t)callback);
}

int32_t k_parts__readwritepart_sender_signal_index(void* self) {
    return KParts__ReadWritePart_SenderSignalIndex((KParts__ReadWritePart*)self);
}

int32_t k_parts__readwritepart_qbase_sender_signal_index(void* self) {
    return KParts__ReadWritePart_QBaseSenderSignalIndex((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KParts__ReadWritePart_OnSenderSignalIndex((KParts__ReadWritePart*)self, (intptr_t)callback);
}

int32_t k_parts__readwritepart_receivers(void* self, const char* signal) {
    return KParts__ReadWritePart_Receivers((KParts__ReadWritePart*)self, signal);
}

int32_t k_parts__readwritepart_qbase_receivers(void* self, const char* signal) {
    return KParts__ReadWritePart_QBaseReceivers((KParts__ReadWritePart*)self, signal);
}

void k_parts__readwritepart_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KParts__ReadWritePart_OnReceivers((KParts__ReadWritePart*)self, (intptr_t)callback);
}

bool k_parts__readwritepart_is_signal_connected(void* self, void* signal) {
    return KParts__ReadWritePart_IsSignalConnected((KParts__ReadWritePart*)self, (QMetaMethod*)signal);
}

bool k_parts__readwritepart_qbase_is_signal_connected(void* self, void* signal) {
    return KParts__ReadWritePart_QBaseIsSignalConnected((KParts__ReadWritePart*)self, (QMetaMethod*)signal);
}

void k_parts__readwritepart_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KParts__ReadWritePart_OnIsSignalConnected((KParts__ReadWritePart*)self, (intptr_t)callback);
}

const char* k_parts__readwritepart_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__ReadWritePart_StandardsXmlFileLocation((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__readwritepart_qbase_standards_xml_file_location(void* self) {
    libqt_string _str = KParts__ReadWritePart_QBaseStandardsXmlFileLocation((KParts__ReadWritePart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__readwritepart_on_standards_xml_file_location(void* self, const char* (*callback)()) {
    KParts__ReadWritePart_OnStandardsXmlFileLocation((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_load_standards_xml_file(void* self) {
    KParts__ReadWritePart_LoadStandardsXmlFile((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_qbase_load_standards_xml_file(void* self) {
    KParts__ReadWritePart_QBaseLoadStandardsXmlFile((KParts__ReadWritePart*)self);
}

void k_parts__readwritepart_on_load_standards_xml_file(void* self, void (*callback)()) {
    KParts__ReadWritePart_OnLoadStandardsXmlFile((KParts__ReadWritePart*)self, (intptr_t)callback);
}

void k_parts__readwritepart_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_parts__readwritepart_delete(void* self) {
    KParts__ReadWritePart_Delete((KParts__ReadWritePart*)(self));
}
