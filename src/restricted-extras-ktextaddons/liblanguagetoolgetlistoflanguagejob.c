#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../network/libqnetworkaccessmanager.hpp"
#include "../libqobject.hpp"
#include "liblanguagetoolgetlistoflanguagejob.hpp"
#include "liblanguagetoolgetlistoflanguagejob.h"

TextGrammarCheck__LanguageToolGetListOfLanguageJob* k_textgrammarcheck__languagetoolgetlistoflanguagejob_new() {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_new();
}

TextGrammarCheck__LanguageToolGetListOfLanguageJob* k_textgrammarcheck__languagetoolgetlistoflanguagejob_new2(void* parent) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_new2((QObject*)parent);
}

const QMetaObject* k_textgrammarcheck__languagetoolgetlistoflanguagejob_meta_object(void* self) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_MetaObject((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetaObject((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

const QMetaObject* k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_meta_object(void* self) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetaObject((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
}

void* k_textgrammarcheck__languagetoolgetlistoflanguagejob_metacast(void* self, const char* param1) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacast((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, param1);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetacast((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

void* k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_metacast(void* self, const char* param1) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetacast((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, param1);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_Metacall((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, param1, param2, param3);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnMetacall((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperMetacall((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, param1, param2, param3);
}

const char* k_textgrammarcheck__languagetoolgetlistoflanguagejob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_can_start(void* self) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_CanStart((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_start(void* self) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_Start((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
}

const char* k_textgrammarcheck__languagetoolgetlistoflanguagejob_list_of_language_path(void* self) {
    libqt_string _str = TextGrammarCheck__LanguageToolGetListOfLanguageJob_ListOfLanguagePath((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_set_list_of_language_path(void* self, const char* listOfLanguagePath) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_SetListOfLanguagePath((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, qstring(listOfLanguagePath));
}

QNetworkAccessManager* k_textgrammarcheck__languagetoolgetlistoflanguagejob_network_access_manager(void* self) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_NetworkAccessManager((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_set_network_access_manager(void* self, void* networkAccessManager) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_SetNetworkAccessManager((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QNetworkAccessManager*)networkAccessManager);
}

const char* k_textgrammarcheck__languagetoolgetlistoflanguagejob_url(void* self) {
    libqt_string _str = TextGrammarCheck__LanguageToolGetListOfLanguageJob_Url((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_set_url(void* self, const char* url) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_SetUrl((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, qstring(url));
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_finished(void* self, const char* result) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_Finished((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, qstring(result));
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_finished(void* self, void (*callback)(void*, const char*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_Connect_Finished((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_error(void* self, const char* errorStr) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_Error((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, qstring(errorStr));
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_error(void* self, void (*callback)(void*, const char*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_Connect_Error((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

const char* k_textgrammarcheck__languagetoolgetlistoflanguagejob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolgetlistoflanguagejob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolgetlistoflanguagejob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textgrammarcheck__languagetoolgetlistoflanguagejob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textgrammarcheck__languagetoolgetlistoflanguagejob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolgetlistoflanguagejob_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolgetlistoflanguagejob_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolgetlistoflanguagejob_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textgrammarcheck__languagetoolgetlistoflanguagejob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textgrammarcheck__languagetoolgetlistoflanguagejob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__languagetoolgetlistoflanguagejob_dynamic_property_names\n");
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

QBindingStorage* k_textgrammarcheck__languagetoolgetlistoflanguagejob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textgrammarcheck__languagetoolgetlistoflanguagejob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__languagetoolgetlistoflanguagejob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolgetlistoflanguagejob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolgetlistoflanguagejob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolgetlistoflanguagejob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_event(void* self, void* event) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_Event((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QEvent*)event);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_event(void* self, void* event) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_event(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_event_filter(void* self, void* watched, void* event) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_EventFilter((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_event_filter(void* self, void* watched, void* event) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperEventFilter((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnEventFilter((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_timer_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_TimerEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_timer_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperTimerEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnTimerEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_child_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_ChildEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_child_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperChildEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnChildEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_custom_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_CustomEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_custom_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperCustomEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnCustomEvent((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_connect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_ConnectNotify((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_connect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperConnectNotify((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnConnectNotify((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_DisconnectNotify((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperDisconnectNotify((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnDisconnectNotify((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__languagetoolgetlistoflanguagejob_sender(void* self) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_Sender((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
}

QObject* k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_sender(void* self) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperSender((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_sender(void* self, QObject* (*callback)()) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnSender((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_sender_signal_index(void* self) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SenderSignalIndex((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_sender_signal_index(void* self) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperSenderSignalIndex((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnSenderSignalIndex((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_receivers(void* self, const char* signal) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_Receivers((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, signal);
}

int32_t k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_receivers(void* self, const char* signal) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperReceivers((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, signal);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnReceivers((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_IsSignalConnected((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QMetaMethod*)signal);
}

bool k_textgrammarcheck__languagetoolgetlistoflanguagejob_super_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__LanguageToolGetListOfLanguageJob_SuperIsSignalConnected((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_OnIsSignalConnected((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolgetlistoflanguagejob_delete(void* self) {
    TextGrammarCheck__LanguageToolGetListOfLanguageJob_Delete((TextGrammarCheck__LanguageToolGetListOfLanguageJob*)(self));
}
