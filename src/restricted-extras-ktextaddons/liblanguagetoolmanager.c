#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../network/libqnetworkaccessmanager.hpp"
#include "../libqobject.hpp"
#include "liblanguagetoolmanager.hpp"
#include "liblanguagetoolmanager.h"

TextGrammarCheck__LanguageToolManager* k_textgrammarcheck__languagetoolmanager_new() {
    return TextGrammarCheck__LanguageToolManager_new();
}

TextGrammarCheck__LanguageToolManager* k_textgrammarcheck__languagetoolmanager_new2(void* parent) {
    return TextGrammarCheck__LanguageToolManager_new2((QObject*)parent);
}

const QMetaObject* k_textgrammarcheck__languagetoolmanager_meta_object(void* self) {
    return TextGrammarCheck__LanguageToolManager_MetaObject((TextGrammarCheck__LanguageToolManager*)self);
}

void k_textgrammarcheck__languagetoolmanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextGrammarCheck__LanguageToolManager_OnMetaObject((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

const QMetaObject* k_textgrammarcheck__languagetoolmanager_super_meta_object(void* self) {
    return TextGrammarCheck__LanguageToolManager_SuperMetaObject((TextGrammarCheck__LanguageToolManager*)self);
}

void* k_textgrammarcheck__languagetoolmanager_metacast(void* self, const char* param1) {
    return TextGrammarCheck__LanguageToolManager_Metacast((TextGrammarCheck__LanguageToolManager*)self, param1);
}

void k_textgrammarcheck__languagetoolmanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextGrammarCheck__LanguageToolManager_OnMetacast((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

void* k_textgrammarcheck__languagetoolmanager_super_metacast(void* self, const char* param1) {
    return TextGrammarCheck__LanguageToolManager_SuperMetacast((TextGrammarCheck__LanguageToolManager*)self, param1);
}

int32_t k_textgrammarcheck__languagetoolmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__LanguageToolManager_Metacall((TextGrammarCheck__LanguageToolManager*)self, param1, param2, param3);
}

void k_textgrammarcheck__languagetoolmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextGrammarCheck__LanguageToolManager_OnMetacall((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolmanager_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__LanguageToolManager_SuperMetacall((TextGrammarCheck__LanguageToolManager*)self, param1, param2, param3);
}

const char* k_textgrammarcheck__languagetoolmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

TextGrammarCheck__LanguageToolManager* k_textgrammarcheck__languagetoolmanager_self() {
    return TextGrammarCheck__LanguageToolManager_Self();
}

QNetworkAccessManager* k_textgrammarcheck__languagetoolmanager_network_access_manager(void* self) {
    return TextGrammarCheck__LanguageToolManager_NetworkAccessManager((TextGrammarCheck__LanguageToolManager*)self);
}

const char* k_textgrammarcheck__languagetoolmanager_language_tool_path(void* self) {
    libqt_string _str = TextGrammarCheck__LanguageToolManager_LanguageToolPath((TextGrammarCheck__LanguageToolManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolmanager_set_language_tool_path(void* self, const char* path) {
    TextGrammarCheck__LanguageToolManager_SetLanguageToolPath((TextGrammarCheck__LanguageToolManager*)self, qstring(path));
}

void k_textgrammarcheck__languagetoolmanager_load_settings(void* self) {
    TextGrammarCheck__LanguageToolManager_LoadSettings((TextGrammarCheck__LanguageToolManager*)self);
}

void k_textgrammarcheck__languagetoolmanager_save_settings(void* self) {
    TextGrammarCheck__LanguageToolManager_SaveSettings((TextGrammarCheck__LanguageToolManager*)self);
}

const char* k_textgrammarcheck__languagetoolmanager_language(void* self) {
    libqt_string _str = TextGrammarCheck__LanguageToolManager_Language((TextGrammarCheck__LanguageToolManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolmanager_set_language(void* self, const char* language) {
    TextGrammarCheck__LanguageToolManager_SetLanguage((TextGrammarCheck__LanguageToolManager*)self, qstring(language));
}

bool k_textgrammarcheck__languagetoolmanager_use_local_instance(void* self) {
    return TextGrammarCheck__LanguageToolManager_UseLocalInstance((TextGrammarCheck__LanguageToolManager*)self);
}

void k_textgrammarcheck__languagetoolmanager_set_use_local_instance(void* self, bool useLocalInstance) {
    TextGrammarCheck__LanguageToolManager_SetUseLocalInstance((TextGrammarCheck__LanguageToolManager*)self, useLocalInstance);
}

const char* k_textgrammarcheck__languagetoolmanager_language_tool_check_path(void* self) {
    libqt_string _str = TextGrammarCheck__LanguageToolManager_LanguageToolCheckPath((TextGrammarCheck__LanguageToolManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolmanager_language_tool_languages_path(void* self) {
    libqt_string _str = TextGrammarCheck__LanguageToolManager_LanguageToolLanguagesPath((TextGrammarCheck__LanguageToolManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolmanager_convert_to_language_path(const char* path) {
    libqt_string _str = TextGrammarCheck__LanguageToolManager_ConvertToLanguagePath(qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* k_textgrammarcheck__languagetoolmanager_grammar_color_for_error(void* self, const char* error) {
    return TextGrammarCheck__LanguageToolManager_GrammarColorForError((TextGrammarCheck__LanguageToolManager*)self, qstring(error));
}

bool k_textgrammarcheck__languagetoolmanager_allow_to_get_list_of_languages(void* self) {
    return TextGrammarCheck__LanguageToolManager_AllowToGetListOfLanguages((TextGrammarCheck__LanguageToolManager*)self);
}

const char* k_textgrammarcheck__languagetoolmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolmanager_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textgrammarcheck__languagetoolmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textgrammarcheck__languagetoolmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textgrammarcheck__languagetoolmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textgrammarcheck__languagetoolmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textgrammarcheck__languagetoolmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textgrammarcheck__languagetoolmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textgrammarcheck__languagetoolmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textgrammarcheck__languagetoolmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textgrammarcheck__languagetoolmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textgrammarcheck__languagetoolmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textgrammarcheck__languagetoolmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textgrammarcheck__languagetoolmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textgrammarcheck__languagetoolmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textgrammarcheck__languagetoolmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textgrammarcheck__languagetoolmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textgrammarcheck__languagetoolmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__languagetoolmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textgrammarcheck__languagetoolmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textgrammarcheck__languagetoolmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textgrammarcheck__languagetoolmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textgrammarcheck__languagetoolmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textgrammarcheck__languagetoolmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textgrammarcheck__languagetoolmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textgrammarcheck__languagetoolmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textgrammarcheck__languagetoolmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__languagetoolmanager_dynamic_property_names\n");
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

QBindingStorage* k_textgrammarcheck__languagetoolmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textgrammarcheck__languagetoolmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textgrammarcheck__languagetoolmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textgrammarcheck__languagetoolmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__languagetoolmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textgrammarcheck__languagetoolmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textgrammarcheck__languagetoolmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textgrammarcheck__languagetoolmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textgrammarcheck__languagetoolmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textgrammarcheck__languagetoolmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textgrammarcheck__languagetoolmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textgrammarcheck__languagetoolmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__languagetoolmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textgrammarcheck__languagetoolmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textgrammarcheck__languagetoolmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolmanager_event(void* self, void* event) {
    return TextGrammarCheck__LanguageToolManager_Event((TextGrammarCheck__LanguageToolManager*)self, (QEvent*)event);
}

bool k_textgrammarcheck__languagetoolmanager_super_event(void* self, void* event) {
    return TextGrammarCheck__LanguageToolManager_SuperEvent((TextGrammarCheck__LanguageToolManager*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolManager_OnEvent((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolmanager_event_filter(void* self, void* watched, void* event) {
    return TextGrammarCheck__LanguageToolManager_EventFilter((TextGrammarCheck__LanguageToolManager*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textgrammarcheck__languagetoolmanager_super_event_filter(void* self, void* watched, void* event) {
    return TextGrammarCheck__LanguageToolManager_SuperEventFilter((TextGrammarCheck__LanguageToolManager*)self, (QObject*)watched, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextGrammarCheck__LanguageToolManager_OnEventFilter((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolmanager_timer_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolManager_TimerEvent((TextGrammarCheck__LanguageToolManager*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__languagetoolmanager_super_timer_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolManager_SuperTimerEvent((TextGrammarCheck__LanguageToolManager*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__languagetoolmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolManager_OnTimerEvent((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolmanager_child_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolManager_ChildEvent((TextGrammarCheck__LanguageToolManager*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__languagetoolmanager_super_child_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolManager_SuperChildEvent((TextGrammarCheck__LanguageToolManager*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__languagetoolmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolManager_OnChildEvent((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolmanager_custom_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolManager_CustomEvent((TextGrammarCheck__LanguageToolManager*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolmanager_super_custom_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolManager_SuperCustomEvent((TextGrammarCheck__LanguageToolManager*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolManager_OnCustomEvent((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolmanager_connect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolManager_ConnectNotify((TextGrammarCheck__LanguageToolManager*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolmanager_super_connect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolManager_SuperConnectNotify((TextGrammarCheck__LanguageToolManager*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolManager_OnConnectNotify((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolmanager_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolManager_DisconnectNotify((TextGrammarCheck__LanguageToolManager*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolmanager_super_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolManager_SuperDisconnectNotify((TextGrammarCheck__LanguageToolManager*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolManager_OnDisconnectNotify((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__languagetoolmanager_sender(void* self) {
    return TextGrammarCheck__LanguageToolManager_Sender((TextGrammarCheck__LanguageToolManager*)self);
}

QObject* k_textgrammarcheck__languagetoolmanager_super_sender(void* self) {
    return TextGrammarCheck__LanguageToolManager_SuperSender((TextGrammarCheck__LanguageToolManager*)self);
}

void k_textgrammarcheck__languagetoolmanager_on_sender(void* self, QObject* (*callback)()) {
    TextGrammarCheck__LanguageToolManager_OnSender((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolmanager_sender_signal_index(void* self) {
    return TextGrammarCheck__LanguageToolManager_SenderSignalIndex((TextGrammarCheck__LanguageToolManager*)self);
}

int32_t k_textgrammarcheck__languagetoolmanager_super_sender_signal_index(void* self) {
    return TextGrammarCheck__LanguageToolManager_SuperSenderSignalIndex((TextGrammarCheck__LanguageToolManager*)self);
}

void k_textgrammarcheck__languagetoolmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextGrammarCheck__LanguageToolManager_OnSenderSignalIndex((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolmanager_receivers(void* self, const char* signal) {
    return TextGrammarCheck__LanguageToolManager_Receivers((TextGrammarCheck__LanguageToolManager*)self, signal);
}

int32_t k_textgrammarcheck__languagetoolmanager_super_receivers(void* self, const char* signal) {
    return TextGrammarCheck__LanguageToolManager_SuperReceivers((TextGrammarCheck__LanguageToolManager*)self, signal);
}

void k_textgrammarcheck__languagetoolmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextGrammarCheck__LanguageToolManager_OnReceivers((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolmanager_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__LanguageToolManager_IsSignalConnected((TextGrammarCheck__LanguageToolManager*)self, (QMetaMethod*)signal);
}

bool k_textgrammarcheck__languagetoolmanager_super_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__LanguageToolManager_SuperIsSignalConnected((TextGrammarCheck__LanguageToolManager*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolManager_OnIsSignalConnected((TextGrammarCheck__LanguageToolManager*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolmanager_delete(void* self) {
    TextGrammarCheck__LanguageToolManager_Delete((TextGrammarCheck__LanguageToolManager*)(self));
}
