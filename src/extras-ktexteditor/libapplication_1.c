#include "libdocument.hpp"
#include "libmainwindow_1.hpp"
#include "libplugin.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libapplication_1.hpp"
#include "libapplication_1.h"

KTextEditor__Application* k_texteditor__application_new(void* parent) {
    return KTextEditor__Application_new((QObject*)parent);
}

const QMetaObject* k_texteditor__application_meta_object(void* self) {
    return KTextEditor__Application_MetaObject((KTextEditor__Application*)self);
}

void* k_texteditor__application_metacast(void* self, const char* param1) {
    return KTextEditor__Application_Metacast((KTextEditor__Application*)self, param1);
}

int32_t k_texteditor__application_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__Application_Metacall((KTextEditor__Application*)self, param1, param2, param3);
}

void k_texteditor__application_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTextEditor__Application_OnMetacall((KTextEditor__Application*)self, (intptr_t)callback);
}

int32_t k_texteditor__application_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__Application_QBaseMetacall((KTextEditor__Application*)self, param1, param2, param3);
}

const char* k_texteditor__application_tr(const char* s) {
    libqt_string _str = KTextEditor__Application_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texteditor__application_quit(void* self) {
    return KTextEditor__Application_Quit((KTextEditor__Application*)self);
}

libqt_list /* of KTextEditor__MainWindow* */ k_texteditor__application_main_windows(void* self) {
    libqt_list _arr = KTextEditor__Application_MainWindows((KTextEditor__Application*)self);
    return _arr;
}

KTextEditor__MainWindow* k_texteditor__application_active_main_window(void* self) {
    return KTextEditor__Application_ActiveMainWindow((KTextEditor__Application*)self);
}

libqt_list /* of KTextEditor__Document* */ k_texteditor__application_documents(void* self) {
    libqt_list _arr = KTextEditor__Application_Documents((KTextEditor__Application*)self);
    return _arr;
}

KTextEditor__Document* k_texteditor__application_find_url(void* self, void* url) {
    return KTextEditor__Application_FindUrl((KTextEditor__Application*)self, (QUrl*)url);
}

KTextEditor__Document* k_texteditor__application_open_url(void* self, void* url) {
    return KTextEditor__Application_OpenUrl((KTextEditor__Application*)self, (QUrl*)url);
}

bool k_texteditor__application_close_document(void* self, void* document) {
    return KTextEditor__Application_CloseDocument((KTextEditor__Application*)self, (KTextEditor__Document*)document);
}

bool k_texteditor__application_close_documents(void* self, libqt_list documents) {
    return KTextEditor__Application_CloseDocuments((KTextEditor__Application*)self, documents);
}

void k_texteditor__application_document_created(void* self, void* document) {
    KTextEditor__Application_DocumentCreated((KTextEditor__Application*)self, (KTextEditor__Document*)document);
}

void k_texteditor__application_on_document_created(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Application_Connect_DocumentCreated((KTextEditor__Application*)self, (intptr_t)callback);
}

void k_texteditor__application_document_will_be_deleted(void* self, void* document) {
    KTextEditor__Application_DocumentWillBeDeleted((KTextEditor__Application*)self, (KTextEditor__Document*)document);
}

void k_texteditor__application_on_document_will_be_deleted(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Application_Connect_DocumentWillBeDeleted((KTextEditor__Application*)self, (intptr_t)callback);
}

void k_texteditor__application_document_deleted(void* self, void* document) {
    KTextEditor__Application_DocumentDeleted((KTextEditor__Application*)self, (KTextEditor__Document*)document);
}

void k_texteditor__application_on_document_deleted(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Application_Connect_DocumentDeleted((KTextEditor__Application*)self, (intptr_t)callback);
}

KTextEditor__Plugin* k_texteditor__application_plugin(void* self, const char* name) {
    return KTextEditor__Application_Plugin((KTextEditor__Application*)self, qstring(name));
}

void k_texteditor__application_plugin_created(void* self, const char* name, void* plugin) {
    KTextEditor__Application_PluginCreated((KTextEditor__Application*)self, qstring(name), (KTextEditor__Plugin*)plugin);
}

void k_texteditor__application_on_plugin_created(void* self, void (*callback)(void*, const char*, void*)) {
    KTextEditor__Application_Connect_PluginCreated((KTextEditor__Application*)self, (intptr_t)callback);
}

void k_texteditor__application_plugin_deleted(void* self, const char* name, void* plugin) {
    KTextEditor__Application_PluginDeleted((KTextEditor__Application*)self, qstring(name), (KTextEditor__Plugin*)plugin);
}

void k_texteditor__application_on_plugin_deleted(void* self, void (*callback)(void*, const char*, void*)) {
    KTextEditor__Application_Connect_PluginDeleted((KTextEditor__Application*)self, (intptr_t)callback);
}

const char* k_texteditor__application_tr2(const char* s, const char* c) {
    libqt_string _str = KTextEditor__Application_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__application_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KTextEditor__Application_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KTextEditor__Document* k_texteditor__application_open_url2(void* self, void* url, const char* encoding) {
    return KTextEditor__Application_OpenUrl2((KTextEditor__Application*)self, (QUrl*)url, qstring(encoding));
}

const char* k_texteditor__application_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__application_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__application_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__application_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__application_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__application_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__application_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__application_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__application_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__application_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_texteditor__application_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__application_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__application_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__application_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texteditor__application_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__application_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__application_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__application_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__application_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__application_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_texteditor__application_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__application_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__application_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__application_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__application_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_texteditor__application_dynamic_property_names");
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

QBindingStorage* k_texteditor__application_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__application_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__application_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__application_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texteditor__application_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texteditor__application_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__application_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_texteditor__application_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_texteditor__application_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_texteditor__application_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__application_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_texteditor__application_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__application_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texteditor__application_event(void* self, void* event) {
    return KTextEditor__Application_Event((KTextEditor__Application*)self, (QEvent*)event);
}

bool k_texteditor__application_qbase_event(void* self, void* event) {
    return KTextEditor__Application_QBaseEvent((KTextEditor__Application*)self, (QEvent*)event);
}

void k_texteditor__application_on_event(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__Application_OnEvent((KTextEditor__Application*)self, (intptr_t)callback);
}

bool k_texteditor__application_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__Application_EventFilter((KTextEditor__Application*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texteditor__application_qbase_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__Application_QBaseEventFilter((KTextEditor__Application*)self, (QObject*)watched, (QEvent*)event);
}

void k_texteditor__application_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTextEditor__Application_OnEventFilter((KTextEditor__Application*)self, (intptr_t)callback);
}

void k_texteditor__application_timer_event(void* self, void* event) {
    KTextEditor__Application_TimerEvent((KTextEditor__Application*)self, (QTimerEvent*)event);
}

void k_texteditor__application_qbase_timer_event(void* self, void* event) {
    KTextEditor__Application_QBaseTimerEvent((KTextEditor__Application*)self, (QTimerEvent*)event);
}

void k_texteditor__application_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Application_OnTimerEvent((KTextEditor__Application*)self, (intptr_t)callback);
}

void k_texteditor__application_child_event(void* self, void* event) {
    KTextEditor__Application_ChildEvent((KTextEditor__Application*)self, (QChildEvent*)event);
}

void k_texteditor__application_qbase_child_event(void* self, void* event) {
    KTextEditor__Application_QBaseChildEvent((KTextEditor__Application*)self, (QChildEvent*)event);
}

void k_texteditor__application_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Application_OnChildEvent((KTextEditor__Application*)self, (intptr_t)callback);
}

void k_texteditor__application_custom_event(void* self, void* event) {
    KTextEditor__Application_CustomEvent((KTextEditor__Application*)self, (QEvent*)event);
}

void k_texteditor__application_qbase_custom_event(void* self, void* event) {
    KTextEditor__Application_QBaseCustomEvent((KTextEditor__Application*)self, (QEvent*)event);
}

void k_texteditor__application_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Application_OnCustomEvent((KTextEditor__Application*)self, (intptr_t)callback);
}

void k_texteditor__application_connect_notify(void* self, void* signal) {
    KTextEditor__Application_ConnectNotify((KTextEditor__Application*)self, (QMetaMethod*)signal);
}

void k_texteditor__application_qbase_connect_notify(void* self, void* signal) {
    KTextEditor__Application_QBaseConnectNotify((KTextEditor__Application*)self, (QMetaMethod*)signal);
}

void k_texteditor__application_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Application_OnConnectNotify((KTextEditor__Application*)self, (intptr_t)callback);
}

void k_texteditor__application_disconnect_notify(void* self, void* signal) {
    KTextEditor__Application_DisconnectNotify((KTextEditor__Application*)self, (QMetaMethod*)signal);
}

void k_texteditor__application_qbase_disconnect_notify(void* self, void* signal) {
    KTextEditor__Application_QBaseDisconnectNotify((KTextEditor__Application*)self, (QMetaMethod*)signal);
}

void k_texteditor__application_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Application_OnDisconnectNotify((KTextEditor__Application*)self, (intptr_t)callback);
}

QObject* k_texteditor__application_sender(void* self) {
    return KTextEditor__Application_Sender((KTextEditor__Application*)self);
}

QObject* k_texteditor__application_qbase_sender(void* self) {
    return KTextEditor__Application_QBaseSender((KTextEditor__Application*)self);
}

void k_texteditor__application_on_sender(void* self, QObject* (*callback)()) {
    KTextEditor__Application_OnSender((KTextEditor__Application*)self, (intptr_t)callback);
}

int32_t k_texteditor__application_sender_signal_index(void* self) {
    return KTextEditor__Application_SenderSignalIndex((KTextEditor__Application*)self);
}

int32_t k_texteditor__application_qbase_sender_signal_index(void* self) {
    return KTextEditor__Application_QBaseSenderSignalIndex((KTextEditor__Application*)self);
}

void k_texteditor__application_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTextEditor__Application_OnSenderSignalIndex((KTextEditor__Application*)self, (intptr_t)callback);
}

int32_t k_texteditor__application_receivers(void* self, const char* signal) {
    return KTextEditor__Application_Receivers((KTextEditor__Application*)self, signal);
}

int32_t k_texteditor__application_qbase_receivers(void* self, const char* signal) {
    return KTextEditor__Application_QBaseReceivers((KTextEditor__Application*)self, signal);
}

void k_texteditor__application_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTextEditor__Application_OnReceivers((KTextEditor__Application*)self, (intptr_t)callback);
}

bool k_texteditor__application_is_signal_connected(void* self, void* signal) {
    return KTextEditor__Application_IsSignalConnected((KTextEditor__Application*)self, (QMetaMethod*)signal);
}

bool k_texteditor__application_qbase_is_signal_connected(void* self, void* signal) {
    return KTextEditor__Application_QBaseIsSignalConnected((KTextEditor__Application*)self, (QMetaMethod*)signal);
}

void k_texteditor__application_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__Application_OnIsSignalConnected((KTextEditor__Application*)self, (intptr_t)callback);
}

void k_texteditor__application_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texteditor__application_delete(void* self) {
    KTextEditor__Application_Delete((KTextEditor__Application*)(self));
}
