#include "libdefinition.hpp"
#include "libtheme.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpalette.hpp"
#include "librepository.hpp"
#include "librepository.h"

KSyntaxHighlighting__Repository* k_syntaxhighlighting__repository_new() {
    return KSyntaxHighlighting__Repository_new();
}

const QMetaObject* k_syntaxhighlighting__repository_meta_object(void* self) {
    return KSyntaxHighlighting__Repository_MetaObject((KSyntaxHighlighting__Repository*)self);
}

void k_syntaxhighlighting__repository_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KSyntaxHighlighting__Repository_OnMetaObject((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

const QMetaObject* k_syntaxhighlighting__repository_qbase_meta_object(void* self) {
    return KSyntaxHighlighting__Repository_QBaseMetaObject((KSyntaxHighlighting__Repository*)self);
}

void* k_syntaxhighlighting__repository_metacast(void* self, const char* param1) {
    return KSyntaxHighlighting__Repository_Metacast((KSyntaxHighlighting__Repository*)self, param1);
}

void k_syntaxhighlighting__repository_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSyntaxHighlighting__Repository_OnMetacast((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

void* k_syntaxhighlighting__repository_qbase_metacast(void* self, const char* param1) {
    return KSyntaxHighlighting__Repository_QBaseMetacast((KSyntaxHighlighting__Repository*)self, param1);
}

int32_t k_syntaxhighlighting__repository_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSyntaxHighlighting__Repository_Metacall((KSyntaxHighlighting__Repository*)self, param1, param2, param3);
}

void k_syntaxhighlighting__repository_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSyntaxHighlighting__Repository_OnMetacall((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__repository_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSyntaxHighlighting__Repository_QBaseMetacall((KSyntaxHighlighting__Repository*)self, param1, param2, param3);
}

const char* k_syntaxhighlighting__repository_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KSyntaxHighlighting__Definition* k_syntaxhighlighting__repository_definition_for_name(void* self, const char* defName) {
    return KSyntaxHighlighting__Repository_DefinitionForName((KSyntaxHighlighting__Repository*)self, qstring(defName));
}

KSyntaxHighlighting__Definition* k_syntaxhighlighting__repository_definition_for_file_name(void* self, const char* fileName) {
    return KSyntaxHighlighting__Repository_DefinitionForFileName((KSyntaxHighlighting__Repository*)self, qstring(fileName));
}

libqt_list /* of KSyntaxHighlighting__Definition* */ k_syntaxhighlighting__repository_definitions_for_file_name(void* self, const char* fileName) {
    libqt_list _arr = KSyntaxHighlighting__Repository_DefinitionsForFileName((KSyntaxHighlighting__Repository*)self, qstring(fileName));
    return _arr;
}

KSyntaxHighlighting__Definition* k_syntaxhighlighting__repository_definition_for_mime_type(void* self, const char* mimeType) {
    return KSyntaxHighlighting__Repository_DefinitionForMimeType((KSyntaxHighlighting__Repository*)self, qstring(mimeType));
}

libqt_list /* of KSyntaxHighlighting__Definition* */ k_syntaxhighlighting__repository_definitions_for_mime_type(void* self, const char* mimeType) {
    libqt_list _arr = KSyntaxHighlighting__Repository_DefinitionsForMimeType((KSyntaxHighlighting__Repository*)self, qstring(mimeType));
    return _arr;
}

libqt_list /* of KSyntaxHighlighting__Definition* */ k_syntaxhighlighting__repository_definitions(void* self) {
    libqt_list _arr = KSyntaxHighlighting__Repository_Definitions((KSyntaxHighlighting__Repository*)self);
    return _arr;
}

libqt_list /* of KSyntaxHighlighting__Theme* */ k_syntaxhighlighting__repository_themes(void* self) {
    libqt_list _arr = KSyntaxHighlighting__Repository_Themes((KSyntaxHighlighting__Repository*)self);
    return _arr;
}

KSyntaxHighlighting__Theme* k_syntaxhighlighting__repository_theme(void* self, const char* themeName) {
    return KSyntaxHighlighting__Repository_Theme((KSyntaxHighlighting__Repository*)self, qstring(themeName));
}

KSyntaxHighlighting__Theme* k_syntaxhighlighting__repository_default_theme(void* self) {
    return KSyntaxHighlighting__Repository_DefaultTheme((KSyntaxHighlighting__Repository*)self);
}

KSyntaxHighlighting__Theme* k_syntaxhighlighting__repository_theme_for_palette(void* self, void* palette) {
    return KSyntaxHighlighting__Repository_ThemeForPalette((KSyntaxHighlighting__Repository*)self, (QPalette*)palette);
}

void k_syntaxhighlighting__repository_reload(void* self) {
    KSyntaxHighlighting__Repository_Reload((KSyntaxHighlighting__Repository*)self);
}

void k_syntaxhighlighting__repository_add_custom_search_path(void* self, const char* path) {
    KSyntaxHighlighting__Repository_AddCustomSearchPath((KSyntaxHighlighting__Repository*)self, qstring(path));
}

const char** k_syntaxhighlighting__repository_custom_search_paths(void* self) {
    libqt_list _arr = KSyntaxHighlighting__Repository_CustomSearchPaths((KSyntaxHighlighting__Repository*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__repository_custom_search_paths\n");
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

void k_syntaxhighlighting__repository_about_to_reload(void* self) {
    KSyntaxHighlighting__Repository_AboutToReload((KSyntaxHighlighting__Repository*)self);
}

void k_syntaxhighlighting__repository_on_about_to_reload(void* self, void (*callback)(void*)) {
    KSyntaxHighlighting__Repository_Connect_AboutToReload((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__repository_reloaded(void* self) {
    KSyntaxHighlighting__Repository_Reloaded((KSyntaxHighlighting__Repository*)self);
}

void k_syntaxhighlighting__repository_on_reloaded(void* self, void (*callback)(void*)) {
    KSyntaxHighlighting__Repository_Connect_Reloaded((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

const char* k_syntaxhighlighting__repository_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__repository_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KSyntaxHighlighting__Theme* k_syntaxhighlighting__repository_default_theme1(void* self, int32_t t) {
    return KSyntaxHighlighting__Repository_DefaultTheme1((KSyntaxHighlighting__Repository*)self, t);
}

const char* k_syntaxhighlighting__repository_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_syntaxhighlighting__repository_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_syntaxhighlighting__repository_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_syntaxhighlighting__repository_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_syntaxhighlighting__repository_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_syntaxhighlighting__repository_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_syntaxhighlighting__repository_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_syntaxhighlighting__repository_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_syntaxhighlighting__repository_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_syntaxhighlighting__repository_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_syntaxhighlighting__repository_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_syntaxhighlighting__repository_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_syntaxhighlighting__repository_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_syntaxhighlighting__repository_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_syntaxhighlighting__repository_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_syntaxhighlighting__repository_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_syntaxhighlighting__repository_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_syntaxhighlighting__repository_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_syntaxhighlighting__repository_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_syntaxhighlighting__repository_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_syntaxhighlighting__repository_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_syntaxhighlighting__repository_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_syntaxhighlighting__repository_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_syntaxhighlighting__repository_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_syntaxhighlighting__repository_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_syntaxhighlighting__repository_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_syntaxhighlighting__repository_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_syntaxhighlighting__repository_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_syntaxhighlighting__repository_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_syntaxhighlighting__repository_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__repository_dynamic_property_names\n");
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

QBindingStorage* k_syntaxhighlighting__repository_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_syntaxhighlighting__repository_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_syntaxhighlighting__repository_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_syntaxhighlighting__repository_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_syntaxhighlighting__repository_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_syntaxhighlighting__repository_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_syntaxhighlighting__repository_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_syntaxhighlighting__repository_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_syntaxhighlighting__repository_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_syntaxhighlighting__repository_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_syntaxhighlighting__repository_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_syntaxhighlighting__repository_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_syntaxhighlighting__repository_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_syntaxhighlighting__repository_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_syntaxhighlighting__repository_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_syntaxhighlighting__repository_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_syntaxhighlighting__repository_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_syntaxhighlighting__repository_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_syntaxhighlighting__repository_event(void* self, void* event) {
    return KSyntaxHighlighting__Repository_Event((KSyntaxHighlighting__Repository*)self, (QEvent*)event);
}

bool k_syntaxhighlighting__repository_qbase_event(void* self, void* event) {
    return KSyntaxHighlighting__Repository_QBaseEvent((KSyntaxHighlighting__Repository*)self, (QEvent*)event);
}

void k_syntaxhighlighting__repository_on_event(void* self, bool (*callback)(void*, void*)) {
    KSyntaxHighlighting__Repository_OnEvent((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

bool k_syntaxhighlighting__repository_event_filter(void* self, void* watched, void* event) {
    return KSyntaxHighlighting__Repository_EventFilter((KSyntaxHighlighting__Repository*)self, (QObject*)watched, (QEvent*)event);
}

bool k_syntaxhighlighting__repository_qbase_event_filter(void* self, void* watched, void* event) {
    return KSyntaxHighlighting__Repository_QBaseEventFilter((KSyntaxHighlighting__Repository*)self, (QObject*)watched, (QEvent*)event);
}

void k_syntaxhighlighting__repository_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSyntaxHighlighting__Repository_OnEventFilter((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__repository_timer_event(void* self, void* event) {
    KSyntaxHighlighting__Repository_TimerEvent((KSyntaxHighlighting__Repository*)self, (QTimerEvent*)event);
}

void k_syntaxhighlighting__repository_qbase_timer_event(void* self, void* event) {
    KSyntaxHighlighting__Repository_QBaseTimerEvent((KSyntaxHighlighting__Repository*)self, (QTimerEvent*)event);
}

void k_syntaxhighlighting__repository_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__Repository_OnTimerEvent((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__repository_child_event(void* self, void* event) {
    KSyntaxHighlighting__Repository_ChildEvent((KSyntaxHighlighting__Repository*)self, (QChildEvent*)event);
}

void k_syntaxhighlighting__repository_qbase_child_event(void* self, void* event) {
    KSyntaxHighlighting__Repository_QBaseChildEvent((KSyntaxHighlighting__Repository*)self, (QChildEvent*)event);
}

void k_syntaxhighlighting__repository_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__Repository_OnChildEvent((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__repository_custom_event(void* self, void* event) {
    KSyntaxHighlighting__Repository_CustomEvent((KSyntaxHighlighting__Repository*)self, (QEvent*)event);
}

void k_syntaxhighlighting__repository_qbase_custom_event(void* self, void* event) {
    KSyntaxHighlighting__Repository_QBaseCustomEvent((KSyntaxHighlighting__Repository*)self, (QEvent*)event);
}

void k_syntaxhighlighting__repository_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__Repository_OnCustomEvent((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__repository_connect_notify(void* self, void* signal) {
    KSyntaxHighlighting__Repository_ConnectNotify((KSyntaxHighlighting__Repository*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__repository_qbase_connect_notify(void* self, void* signal) {
    KSyntaxHighlighting__Repository_QBaseConnectNotify((KSyntaxHighlighting__Repository*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__repository_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__Repository_OnConnectNotify((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__repository_disconnect_notify(void* self, void* signal) {
    KSyntaxHighlighting__Repository_DisconnectNotify((KSyntaxHighlighting__Repository*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__repository_qbase_disconnect_notify(void* self, void* signal) {
    KSyntaxHighlighting__Repository_QBaseDisconnectNotify((KSyntaxHighlighting__Repository*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__repository_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__Repository_OnDisconnectNotify((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

QObject* k_syntaxhighlighting__repository_sender(void* self) {
    return KSyntaxHighlighting__Repository_Sender((KSyntaxHighlighting__Repository*)self);
}

QObject* k_syntaxhighlighting__repository_qbase_sender(void* self) {
    return KSyntaxHighlighting__Repository_QBaseSender((KSyntaxHighlighting__Repository*)self);
}

void k_syntaxhighlighting__repository_on_sender(void* self, QObject* (*callback)()) {
    KSyntaxHighlighting__Repository_OnSender((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__repository_sender_signal_index(void* self) {
    return KSyntaxHighlighting__Repository_SenderSignalIndex((KSyntaxHighlighting__Repository*)self);
}

int32_t k_syntaxhighlighting__repository_qbase_sender_signal_index(void* self) {
    return KSyntaxHighlighting__Repository_QBaseSenderSignalIndex((KSyntaxHighlighting__Repository*)self);
}

void k_syntaxhighlighting__repository_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSyntaxHighlighting__Repository_OnSenderSignalIndex((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__repository_receivers(void* self, const char* signal) {
    return KSyntaxHighlighting__Repository_Receivers((KSyntaxHighlighting__Repository*)self, signal);
}

int32_t k_syntaxhighlighting__repository_qbase_receivers(void* self, const char* signal) {
    return KSyntaxHighlighting__Repository_QBaseReceivers((KSyntaxHighlighting__Repository*)self, signal);
}

void k_syntaxhighlighting__repository_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSyntaxHighlighting__Repository_OnReceivers((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

bool k_syntaxhighlighting__repository_is_signal_connected(void* self, void* signal) {
    return KSyntaxHighlighting__Repository_IsSignalConnected((KSyntaxHighlighting__Repository*)self, (QMetaMethod*)signal);
}

bool k_syntaxhighlighting__repository_qbase_is_signal_connected(void* self, void* signal) {
    return KSyntaxHighlighting__Repository_QBaseIsSignalConnected((KSyntaxHighlighting__Repository*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__repository_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSyntaxHighlighting__Repository_OnIsSignalConnected((KSyntaxHighlighting__Repository*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__repository_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__repository_delete(void* self) {
    KSyntaxHighlighting__Repository_Delete((KSyntaxHighlighting__Repository*)(self));
}
