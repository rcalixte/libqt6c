#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../network/libqnetworkaccessmanager.hpp"
#include "../libqobject.hpp"
#include "libtranslatorengineaccessmanager.hpp"
#include "libtranslatorengineaccessmanager.h"

TextTranslator__TranslatorEngineAccessManager* k_texttranslator__translatorengineaccessmanager_new() {
    return TextTranslator__TranslatorEngineAccessManager_new();
}

TextTranslator__TranslatorEngineAccessManager* k_texttranslator__translatorengineaccessmanager_new2(void* parent) {
    return TextTranslator__TranslatorEngineAccessManager_new2((QObject*)parent);
}

const QMetaObject* k_texttranslator__translatorengineaccessmanager_meta_object(void* self) {
    return TextTranslator__TranslatorEngineAccessManager_MetaObject((TextTranslator__TranslatorEngineAccessManager*)self);
}

void k_texttranslator__translatorengineaccessmanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextTranslator__TranslatorEngineAccessManager_OnMetaObject((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

const QMetaObject* k_texttranslator__translatorengineaccessmanager_super_meta_object(void* self) {
    return TextTranslator__TranslatorEngineAccessManager_SuperMetaObject((TextTranslator__TranslatorEngineAccessManager*)self);
}

void* k_texttranslator__translatorengineaccessmanager_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorEngineAccessManager_Metacast((TextTranslator__TranslatorEngineAccessManager*)self, param1);
}

void k_texttranslator__translatorengineaccessmanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEngineAccessManager_OnMetacast((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

void* k_texttranslator__translatorengineaccessmanager_super_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorEngineAccessManager_SuperMetacast((TextTranslator__TranslatorEngineAccessManager*)self, param1);
}

int32_t k_texttranslator__translatorengineaccessmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorEngineAccessManager_Metacall((TextTranslator__TranslatorEngineAccessManager*)self, param1, param2, param3);
}

void k_texttranslator__translatorengineaccessmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextTranslator__TranslatorEngineAccessManager_OnMetacall((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineaccessmanager_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorEngineAccessManager_SuperMetacall((TextTranslator__TranslatorEngineAccessManager*)self, param1, param2, param3);
}

const char* k_texttranslator__translatorengineaccessmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

TextTranslator__TranslatorEngineAccessManager* k_texttranslator__translatorengineaccessmanager_self() {
    return TextTranslator__TranslatorEngineAccessManager_Self();
}

QNetworkAccessManager* k_texttranslator__translatorengineaccessmanager_network_manager(void* self) {
    return TextTranslator__TranslatorEngineAccessManager_NetworkManager((TextTranslator__TranslatorEngineAccessManager*)self);
}

const char* k_texttranslator__translatorengineaccessmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineaccessmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorengineaccessmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorengineaccessmanager_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texttranslator__translatorengineaccessmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texttranslator__translatorengineaccessmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texttranslator__translatorengineaccessmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texttranslator__translatorengineaccessmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texttranslator__translatorengineaccessmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texttranslator__translatorengineaccessmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texttranslator__translatorengineaccessmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texttranslator__translatorengineaccessmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texttranslator__translatorengineaccessmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texttranslator__translatorengineaccessmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texttranslator__translatorengineaccessmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texttranslator__translatorengineaccessmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texttranslator__translatorengineaccessmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texttranslator__translatorengineaccessmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texttranslator__translatorengineaccessmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texttranslator__translatorengineaccessmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorengineaccessmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texttranslator__translatorengineaccessmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texttranslator__translatorengineaccessmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texttranslator__translatorengineaccessmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texttranslator__translatorengineaccessmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texttranslator__translatorengineaccessmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texttranslator__translatorengineaccessmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texttranslator__translatorengineaccessmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texttranslator__translatorengineaccessmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texttranslator__translatorengineaccessmanager_dynamic_property_names\n");
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

QBindingStorage* k_texttranslator__translatorengineaccessmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texttranslator__translatorengineaccessmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texttranslator__translatorengineaccessmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texttranslator__translatorengineaccessmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorengineaccessmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texttranslator__translatorengineaccessmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texttranslator__translatorengineaccessmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texttranslator__translatorengineaccessmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texttranslator__translatorengineaccessmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texttranslator__translatorengineaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texttranslator__translatorengineaccessmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texttranslator__translatorengineaccessmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texttranslator__translatorengineaccessmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorengineaccessmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texttranslator__translatorengineaccessmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texttranslator__translatorengineaccessmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineaccessmanager_event(void* self, void* event) {
    return TextTranslator__TranslatorEngineAccessManager_Event((TextTranslator__TranslatorEngineAccessManager*)self, (QEvent*)event);
}

bool k_texttranslator__translatorengineaccessmanager_super_event(void* self, void* event) {
    return TextTranslator__TranslatorEngineAccessManager_SuperEvent((TextTranslator__TranslatorEngineAccessManager*)self, (QEvent*)event);
}

void k_texttranslator__translatorengineaccessmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineAccessManager_OnEvent((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineaccessmanager_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorEngineAccessManager_EventFilter((TextTranslator__TranslatorEngineAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texttranslator__translatorengineaccessmanager_super_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorEngineAccessManager_SuperEventFilter((TextTranslator__TranslatorEngineAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

void k_texttranslator__translatorengineaccessmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextTranslator__TranslatorEngineAccessManager_OnEventFilter((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineaccessmanager_timer_event(void* self, void* event) {
    TextTranslator__TranslatorEngineAccessManager_TimerEvent((TextTranslator__TranslatorEngineAccessManager*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorengineaccessmanager_super_timer_event(void* self, void* event) {
    TextTranslator__TranslatorEngineAccessManager_SuperTimerEvent((TextTranslator__TranslatorEngineAccessManager*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorengineaccessmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineAccessManager_OnTimerEvent((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineaccessmanager_child_event(void* self, void* event) {
    TextTranslator__TranslatorEngineAccessManager_ChildEvent((TextTranslator__TranslatorEngineAccessManager*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorengineaccessmanager_super_child_event(void* self, void* event) {
    TextTranslator__TranslatorEngineAccessManager_SuperChildEvent((TextTranslator__TranslatorEngineAccessManager*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorengineaccessmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineAccessManager_OnChildEvent((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineaccessmanager_custom_event(void* self, void* event) {
    TextTranslator__TranslatorEngineAccessManager_CustomEvent((TextTranslator__TranslatorEngineAccessManager*)self, (QEvent*)event);
}

void k_texttranslator__translatorengineaccessmanager_super_custom_event(void* self, void* event) {
    TextTranslator__TranslatorEngineAccessManager_SuperCustomEvent((TextTranslator__TranslatorEngineAccessManager*)self, (QEvent*)event);
}

void k_texttranslator__translatorengineaccessmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineAccessManager_OnCustomEvent((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineaccessmanager_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEngineAccessManager_ConnectNotify((TextTranslator__TranslatorEngineAccessManager*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineaccessmanager_super_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEngineAccessManager_SuperConnectNotify((TextTranslator__TranslatorEngineAccessManager*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineaccessmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineAccessManager_OnConnectNotify((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineaccessmanager_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEngineAccessManager_DisconnectNotify((TextTranslator__TranslatorEngineAccessManager*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineaccessmanager_super_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorEngineAccessManager_SuperDisconnectNotify((TextTranslator__TranslatorEngineAccessManager*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineaccessmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineAccessManager_OnDisconnectNotify((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorengineaccessmanager_sender(void* self) {
    return TextTranslator__TranslatorEngineAccessManager_Sender((TextTranslator__TranslatorEngineAccessManager*)self);
}

QObject* k_texttranslator__translatorengineaccessmanager_super_sender(void* self) {
    return TextTranslator__TranslatorEngineAccessManager_SuperSender((TextTranslator__TranslatorEngineAccessManager*)self);
}

void k_texttranslator__translatorengineaccessmanager_on_sender(void* self, QObject* (*callback)()) {
    TextTranslator__TranslatorEngineAccessManager_OnSender((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineaccessmanager_sender_signal_index(void* self) {
    return TextTranslator__TranslatorEngineAccessManager_SenderSignalIndex((TextTranslator__TranslatorEngineAccessManager*)self);
}

int32_t k_texttranslator__translatorengineaccessmanager_super_sender_signal_index(void* self) {
    return TextTranslator__TranslatorEngineAccessManager_SuperSenderSignalIndex((TextTranslator__TranslatorEngineAccessManager*)self);
}

void k_texttranslator__translatorengineaccessmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorEngineAccessManager_OnSenderSignalIndex((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorengineaccessmanager_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorEngineAccessManager_Receivers((TextTranslator__TranslatorEngineAccessManager*)self, signal);
}

int32_t k_texttranslator__translatorengineaccessmanager_super_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorEngineAccessManager_SuperReceivers((TextTranslator__TranslatorEngineAccessManager*)self, signal);
}

void k_texttranslator__translatorengineaccessmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextTranslator__TranslatorEngineAccessManager_OnReceivers((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorengineaccessmanager_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorEngineAccessManager_IsSignalConnected((TextTranslator__TranslatorEngineAccessManager*)self, (QMetaMethod*)signal);
}

bool k_texttranslator__translatorengineaccessmanager_super_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorEngineAccessManager_SuperIsSignalConnected((TextTranslator__TranslatorEngineAccessManager*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorengineaccessmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorEngineAccessManager_OnIsSignalConnected((TextTranslator__TranslatorEngineAccessManager*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineaccessmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texttranslator__translatorengineaccessmanager_delete(void* self) {
    TextTranslator__TranslatorEngineAccessManager_Delete((TextTranslator__TranslatorEngineAccessManager*)(self));
}
