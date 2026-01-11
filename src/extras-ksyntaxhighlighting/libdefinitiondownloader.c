#include "librepository.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libdefinitiondownloader.hpp"
#include "libdefinitiondownloader.h"

KSyntaxHighlighting__DefinitionDownloader* k_syntaxhighlighting__definitiondownloader_new(void* repo) {
    return KSyntaxHighlighting__DefinitionDownloader_new((KSyntaxHighlighting__Repository*)repo);
}

KSyntaxHighlighting__DefinitionDownloader* k_syntaxhighlighting__definitiondownloader_new2(void* repo, void* parent) {
    return KSyntaxHighlighting__DefinitionDownloader_new2((KSyntaxHighlighting__Repository*)repo, (QObject*)parent);
}

const QMetaObject* k_syntaxhighlighting__definitiondownloader_meta_object(void* self) {
    return KSyntaxHighlighting__DefinitionDownloader_MetaObject((KSyntaxHighlighting__DefinitionDownloader*)self);
}

void* k_syntaxhighlighting__definitiondownloader_metacast(void* self, const char* param1) {
    return KSyntaxHighlighting__DefinitionDownloader_Metacast((KSyntaxHighlighting__DefinitionDownloader*)self, param1);
}

int32_t k_syntaxhighlighting__definitiondownloader_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSyntaxHighlighting__DefinitionDownloader_Metacall((KSyntaxHighlighting__DefinitionDownloader*)self, param1, param2, param3);
}

void k_syntaxhighlighting__definitiondownloader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnMetacall((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__definitiondownloader_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSyntaxHighlighting__DefinitionDownloader_QBaseMetacall((KSyntaxHighlighting__DefinitionDownloader*)self, param1, param2, param3);
}

const char* k_syntaxhighlighting__definitiondownloader_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_syntaxhighlighting__definitiondownloader_start(void* self) {
    KSyntaxHighlighting__DefinitionDownloader_Start((KSyntaxHighlighting__DefinitionDownloader*)self);
}

void k_syntaxhighlighting__definitiondownloader_information_message(void* self, const char* msg) {
    KSyntaxHighlighting__DefinitionDownloader_InformationMessage((KSyntaxHighlighting__DefinitionDownloader*)self, qstring(msg));
}

void k_syntaxhighlighting__definitiondownloader_on_information_message(void* self, void (*callback)(void*, const char*)) {
    KSyntaxHighlighting__DefinitionDownloader_Connect_InformationMessage((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__definitiondownloader_done(void* self) {
    KSyntaxHighlighting__DefinitionDownloader_Done((KSyntaxHighlighting__DefinitionDownloader*)self);
}

void k_syntaxhighlighting__definitiondownloader_on_done(void* self, void (*callback)(void*)) {
    KSyntaxHighlighting__DefinitionDownloader_Connect_Done((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

const char* k_syntaxhighlighting__definitiondownloader_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__definitiondownloader_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__definitiondownloader_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_syntaxhighlighting__definitiondownloader_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_syntaxhighlighting__definitiondownloader_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_syntaxhighlighting__definitiondownloader_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_syntaxhighlighting__definitiondownloader_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_syntaxhighlighting__definitiondownloader_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_syntaxhighlighting__definitiondownloader_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_syntaxhighlighting__definitiondownloader_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_syntaxhighlighting__definitiondownloader_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_syntaxhighlighting__definitiondownloader_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_syntaxhighlighting__definitiondownloader_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_syntaxhighlighting__definitiondownloader_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_syntaxhighlighting__definitiondownloader_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_syntaxhighlighting__definitiondownloader_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_syntaxhighlighting__definitiondownloader_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_syntaxhighlighting__definitiondownloader_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_syntaxhighlighting__definitiondownloader_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_syntaxhighlighting__definitiondownloader_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_syntaxhighlighting__definitiondownloader_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_syntaxhighlighting__definitiondownloader_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_syntaxhighlighting__definitiondownloader_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_syntaxhighlighting__definitiondownloader_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_syntaxhighlighting__definitiondownloader_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_syntaxhighlighting__definitiondownloader_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_syntaxhighlighting__definitiondownloader_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__definitiondownloader_dynamic_property_names");
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

QBindingStorage* k_syntaxhighlighting__definitiondownloader_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_syntaxhighlighting__definitiondownloader_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_syntaxhighlighting__definitiondownloader_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_syntaxhighlighting__definitiondownloader_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_syntaxhighlighting__definitiondownloader_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_syntaxhighlighting__definitiondownloader_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_syntaxhighlighting__definitiondownloader_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_syntaxhighlighting__definitiondownloader_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_syntaxhighlighting__definitiondownloader_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_syntaxhighlighting__definitiondownloader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_syntaxhighlighting__definitiondownloader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_syntaxhighlighting__definitiondownloader_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_syntaxhighlighting__definitiondownloader_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_syntaxhighlighting__definitiondownloader_event(void* self, void* event) {
    return KSyntaxHighlighting__DefinitionDownloader_Event((KSyntaxHighlighting__DefinitionDownloader*)self, (QEvent*)event);
}

bool k_syntaxhighlighting__definitiondownloader_qbase_event(void* self, void* event) {
    return KSyntaxHighlighting__DefinitionDownloader_QBaseEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (QEvent*)event);
}

void k_syntaxhighlighting__definitiondownloader_on_event(void* self, bool (*callback)(void*, void*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

bool k_syntaxhighlighting__definitiondownloader_event_filter(void* self, void* watched, void* event) {
    return KSyntaxHighlighting__DefinitionDownloader_EventFilter((KSyntaxHighlighting__DefinitionDownloader*)self, (QObject*)watched, (QEvent*)event);
}

bool k_syntaxhighlighting__definitiondownloader_qbase_event_filter(void* self, void* watched, void* event) {
    return KSyntaxHighlighting__DefinitionDownloader_QBaseEventFilter((KSyntaxHighlighting__DefinitionDownloader*)self, (QObject*)watched, (QEvent*)event);
}

void k_syntaxhighlighting__definitiondownloader_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnEventFilter((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__definitiondownloader_timer_event(void* self, void* event) {
    KSyntaxHighlighting__DefinitionDownloader_TimerEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (QTimerEvent*)event);
}

void k_syntaxhighlighting__definitiondownloader_qbase_timer_event(void* self, void* event) {
    KSyntaxHighlighting__DefinitionDownloader_QBaseTimerEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (QTimerEvent*)event);
}

void k_syntaxhighlighting__definitiondownloader_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnTimerEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__definitiondownloader_child_event(void* self, void* event) {
    KSyntaxHighlighting__DefinitionDownloader_ChildEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (QChildEvent*)event);
}

void k_syntaxhighlighting__definitiondownloader_qbase_child_event(void* self, void* event) {
    KSyntaxHighlighting__DefinitionDownloader_QBaseChildEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (QChildEvent*)event);
}

void k_syntaxhighlighting__definitiondownloader_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnChildEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__definitiondownloader_custom_event(void* self, void* event) {
    KSyntaxHighlighting__DefinitionDownloader_CustomEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (QEvent*)event);
}

void k_syntaxhighlighting__definitiondownloader_qbase_custom_event(void* self, void* event) {
    KSyntaxHighlighting__DefinitionDownloader_QBaseCustomEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (QEvent*)event);
}

void k_syntaxhighlighting__definitiondownloader_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnCustomEvent((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__definitiondownloader_connect_notify(void* self, void* signal) {
    KSyntaxHighlighting__DefinitionDownloader_ConnectNotify((KSyntaxHighlighting__DefinitionDownloader*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__definitiondownloader_qbase_connect_notify(void* self, void* signal) {
    KSyntaxHighlighting__DefinitionDownloader_QBaseConnectNotify((KSyntaxHighlighting__DefinitionDownloader*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__definitiondownloader_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnConnectNotify((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__definitiondownloader_disconnect_notify(void* self, void* signal) {
    KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify((KSyntaxHighlighting__DefinitionDownloader*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__definitiondownloader_qbase_disconnect_notify(void* self, void* signal) {
    KSyntaxHighlighting__DefinitionDownloader_QBaseDisconnectNotify((KSyntaxHighlighting__DefinitionDownloader*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__definitiondownloader_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnDisconnectNotify((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

QObject* k_syntaxhighlighting__definitiondownloader_sender(void* self) {
    return KSyntaxHighlighting__DefinitionDownloader_Sender((KSyntaxHighlighting__DefinitionDownloader*)self);
}

QObject* k_syntaxhighlighting__definitiondownloader_qbase_sender(void* self) {
    return KSyntaxHighlighting__DefinitionDownloader_QBaseSender((KSyntaxHighlighting__DefinitionDownloader*)self);
}

void k_syntaxhighlighting__definitiondownloader_on_sender(void* self, QObject* (*callback)()) {
    KSyntaxHighlighting__DefinitionDownloader_OnSender((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__definitiondownloader_sender_signal_index(void* self) {
    return KSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex((KSyntaxHighlighting__DefinitionDownloader*)self);
}

int32_t k_syntaxhighlighting__definitiondownloader_qbase_sender_signal_index(void* self) {
    return KSyntaxHighlighting__DefinitionDownloader_QBaseSenderSignalIndex((KSyntaxHighlighting__DefinitionDownloader*)self);
}

void k_syntaxhighlighting__definitiondownloader_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSyntaxHighlighting__DefinitionDownloader_OnSenderSignalIndex((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__definitiondownloader_receivers(void* self, const char* signal) {
    return KSyntaxHighlighting__DefinitionDownloader_Receivers((KSyntaxHighlighting__DefinitionDownloader*)self, signal);
}

int32_t k_syntaxhighlighting__definitiondownloader_qbase_receivers(void* self, const char* signal) {
    return KSyntaxHighlighting__DefinitionDownloader_QBaseReceivers((KSyntaxHighlighting__DefinitionDownloader*)self, signal);
}

void k_syntaxhighlighting__definitiondownloader_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnReceivers((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

bool k_syntaxhighlighting__definitiondownloader_is_signal_connected(void* self, void* signal) {
    return KSyntaxHighlighting__DefinitionDownloader_IsSignalConnected((KSyntaxHighlighting__DefinitionDownloader*)self, (QMetaMethod*)signal);
}

bool k_syntaxhighlighting__definitiondownloader_qbase_is_signal_connected(void* self, void* signal) {
    return KSyntaxHighlighting__DefinitionDownloader_QBaseIsSignalConnected((KSyntaxHighlighting__DefinitionDownloader*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__definitiondownloader_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSyntaxHighlighting__DefinitionDownloader_OnIsSignalConnected((KSyntaxHighlighting__DefinitionDownloader*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__definitiondownloader_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__definitiondownloader_delete(void* self) {
    KSyntaxHighlighting__DefinitionDownloader_Delete((KSyntaxHighlighting__DefinitionDownloader*)(self));
}
