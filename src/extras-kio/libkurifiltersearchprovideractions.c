#include "../libqcoreevent.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkurifiltersearchprovideractions.hpp"
#include "libkurifiltersearchprovideractions.h"

KIO__KUriFilterSearchProviderActions* k_io__kurifiltersearchprovideractions_new() {
    return KIO__KUriFilterSearchProviderActions_new();
}

KIO__KUriFilterSearchProviderActions* k_io__kurifiltersearchprovideractions_new2(void* parent) {
    return KIO__KUriFilterSearchProviderActions_new2((QObject*)parent);
}

const QMetaObject* k_io__kurifiltersearchprovideractions_meta_object(void* self) {
    return KIO__KUriFilterSearchProviderActions_MetaObject((KIO__KUriFilterSearchProviderActions*)self);
}

void k_io__kurifiltersearchprovideractions_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KIO__KUriFilterSearchProviderActions_OnMetaObject((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

const QMetaObject* k_io__kurifiltersearchprovideractions_qbase_meta_object(void* self) {
    return KIO__KUriFilterSearchProviderActions_QBaseMetaObject((KIO__KUriFilterSearchProviderActions*)self);
}

void* k_io__kurifiltersearchprovideractions_metacast(void* self, const char* param1) {
    return KIO__KUriFilterSearchProviderActions_Metacast((KIO__KUriFilterSearchProviderActions*)self, param1);
}

void k_io__kurifiltersearchprovideractions_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KIO__KUriFilterSearchProviderActions_OnMetacast((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

void* k_io__kurifiltersearchprovideractions_qbase_metacast(void* self, const char* param1) {
    return KIO__KUriFilterSearchProviderActions_QBaseMetacast((KIO__KUriFilterSearchProviderActions*)self, param1);
}

int32_t k_io__kurifiltersearchprovideractions_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__KUriFilterSearchProviderActions_Metacall((KIO__KUriFilterSearchProviderActions*)self, param1, param2, param3);
}

void k_io__kurifiltersearchprovideractions_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__KUriFilterSearchProviderActions_OnMetacall((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

int32_t k_io__kurifiltersearchprovideractions_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__KUriFilterSearchProviderActions_QBaseMetacall((KIO__KUriFilterSearchProviderActions*)self, param1, param2, param3);
}

const char* k_io__kurifiltersearchprovideractions_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__kurifiltersearchprovideractions_selected_text(void* self) {
    libqt_string _str = KIO__KUriFilterSearchProviderActions_SelectedText((KIO__KUriFilterSearchProviderActions*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__kurifiltersearchprovideractions_set_selected_text(void* self, const char* selectedText) {
    KIO__KUriFilterSearchProviderActions_SetSelectedText((KIO__KUriFilterSearchProviderActions*)self, qstring(selectedText));
}

void k_io__kurifiltersearchprovideractions_add_web_shortcuts_to_menu(void* self, void* menu) {
    KIO__KUriFilterSearchProviderActions_AddWebShortcutsToMenu((KIO__KUriFilterSearchProviderActions*)self, (QMenu*)menu);
}

const char* k_io__kurifiltersearchprovideractions_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__kurifiltersearchprovideractions_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__kurifiltersearchprovideractions_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__kurifiltersearchprovideractions_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__kurifiltersearchprovideractions_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__kurifiltersearchprovideractions_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__kurifiltersearchprovideractions_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__kurifiltersearchprovideractions_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__kurifiltersearchprovideractions_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__kurifiltersearchprovideractions_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__kurifiltersearchprovideractions_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__kurifiltersearchprovideractions_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__kurifiltersearchprovideractions_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__kurifiltersearchprovideractions_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__kurifiltersearchprovideractions_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__kurifiltersearchprovideractions_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__kurifiltersearchprovideractions_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__kurifiltersearchprovideractions_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__kurifiltersearchprovideractions_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__kurifiltersearchprovideractions_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_io__kurifiltersearchprovideractions_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__kurifiltersearchprovideractions_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_io__kurifiltersearchprovideractions_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_io__kurifiltersearchprovideractions_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_io__kurifiltersearchprovideractions_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__kurifiltersearchprovideractions_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__kurifiltersearchprovideractions_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__kurifiltersearchprovideractions_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__kurifiltersearchprovideractions_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__kurifiltersearchprovideractions_dynamic_property_names\n");
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

QBindingStorage* k_io__kurifiltersearchprovideractions_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__kurifiltersearchprovideractions_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__kurifiltersearchprovideractions_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__kurifiltersearchprovideractions_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__kurifiltersearchprovideractions_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__kurifiltersearchprovideractions_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__kurifiltersearchprovideractions_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_io__kurifiltersearchprovideractions_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__kurifiltersearchprovideractions_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__kurifiltersearchprovideractions_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_io__kurifiltersearchprovideractions_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_io__kurifiltersearchprovideractions_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_io__kurifiltersearchprovideractions_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_io__kurifiltersearchprovideractions_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_io__kurifiltersearchprovideractions_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__kurifiltersearchprovideractions_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__kurifiltersearchprovideractions_event(void* self, void* event) {
    return KIO__KUriFilterSearchProviderActions_Event((KIO__KUriFilterSearchProviderActions*)self, (QEvent*)event);
}

bool k_io__kurifiltersearchprovideractions_qbase_event(void* self, void* event) {
    return KIO__KUriFilterSearchProviderActions_QBaseEvent((KIO__KUriFilterSearchProviderActions*)self, (QEvent*)event);
}

void k_io__kurifiltersearchprovideractions_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__KUriFilterSearchProviderActions_OnEvent((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

bool k_io__kurifiltersearchprovideractions_event_filter(void* self, void* watched, void* event) {
    return KIO__KUriFilterSearchProviderActions_EventFilter((KIO__KUriFilterSearchProviderActions*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__kurifiltersearchprovideractions_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__KUriFilterSearchProviderActions_QBaseEventFilter((KIO__KUriFilterSearchProviderActions*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__kurifiltersearchprovideractions_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__KUriFilterSearchProviderActions_OnEventFilter((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

void k_io__kurifiltersearchprovideractions_timer_event(void* self, void* event) {
    KIO__KUriFilterSearchProviderActions_TimerEvent((KIO__KUriFilterSearchProviderActions*)self, (QTimerEvent*)event);
}

void k_io__kurifiltersearchprovideractions_qbase_timer_event(void* self, void* event) {
    KIO__KUriFilterSearchProviderActions_QBaseTimerEvent((KIO__KUriFilterSearchProviderActions*)self, (QTimerEvent*)event);
}

void k_io__kurifiltersearchprovideractions_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__KUriFilterSearchProviderActions_OnTimerEvent((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

void k_io__kurifiltersearchprovideractions_child_event(void* self, void* event) {
    KIO__KUriFilterSearchProviderActions_ChildEvent((KIO__KUriFilterSearchProviderActions*)self, (QChildEvent*)event);
}

void k_io__kurifiltersearchprovideractions_qbase_child_event(void* self, void* event) {
    KIO__KUriFilterSearchProviderActions_QBaseChildEvent((KIO__KUriFilterSearchProviderActions*)self, (QChildEvent*)event);
}

void k_io__kurifiltersearchprovideractions_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__KUriFilterSearchProviderActions_OnChildEvent((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

void k_io__kurifiltersearchprovideractions_custom_event(void* self, void* event) {
    KIO__KUriFilterSearchProviderActions_CustomEvent((KIO__KUriFilterSearchProviderActions*)self, (QEvent*)event);
}

void k_io__kurifiltersearchprovideractions_qbase_custom_event(void* self, void* event) {
    KIO__KUriFilterSearchProviderActions_QBaseCustomEvent((KIO__KUriFilterSearchProviderActions*)self, (QEvent*)event);
}

void k_io__kurifiltersearchprovideractions_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__KUriFilterSearchProviderActions_OnCustomEvent((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

void k_io__kurifiltersearchprovideractions_connect_notify(void* self, void* signal) {
    KIO__KUriFilterSearchProviderActions_ConnectNotify((KIO__KUriFilterSearchProviderActions*)self, (QMetaMethod*)signal);
}

void k_io__kurifiltersearchprovideractions_qbase_connect_notify(void* self, void* signal) {
    KIO__KUriFilterSearchProviderActions_QBaseConnectNotify((KIO__KUriFilterSearchProviderActions*)self, (QMetaMethod*)signal);
}

void k_io__kurifiltersearchprovideractions_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__KUriFilterSearchProviderActions_OnConnectNotify((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

void k_io__kurifiltersearchprovideractions_disconnect_notify(void* self, void* signal) {
    KIO__KUriFilterSearchProviderActions_DisconnectNotify((KIO__KUriFilterSearchProviderActions*)self, (QMetaMethod*)signal);
}

void k_io__kurifiltersearchprovideractions_qbase_disconnect_notify(void* self, void* signal) {
    KIO__KUriFilterSearchProviderActions_QBaseDisconnectNotify((KIO__KUriFilterSearchProviderActions*)self, (QMetaMethod*)signal);
}

void k_io__kurifiltersearchprovideractions_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__KUriFilterSearchProviderActions_OnDisconnectNotify((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

QObject* k_io__kurifiltersearchprovideractions_sender(void* self) {
    return KIO__KUriFilterSearchProviderActions_Sender((KIO__KUriFilterSearchProviderActions*)self);
}

QObject* k_io__kurifiltersearchprovideractions_qbase_sender(void* self) {
    return KIO__KUriFilterSearchProviderActions_QBaseSender((KIO__KUriFilterSearchProviderActions*)self);
}

void k_io__kurifiltersearchprovideractions_on_sender(void* self, QObject* (*callback)()) {
    KIO__KUriFilterSearchProviderActions_OnSender((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

int32_t k_io__kurifiltersearchprovideractions_sender_signal_index(void* self) {
    return KIO__KUriFilterSearchProviderActions_SenderSignalIndex((KIO__KUriFilterSearchProviderActions*)self);
}

int32_t k_io__kurifiltersearchprovideractions_qbase_sender_signal_index(void* self) {
    return KIO__KUriFilterSearchProviderActions_QBaseSenderSignalIndex((KIO__KUriFilterSearchProviderActions*)self);
}

void k_io__kurifiltersearchprovideractions_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__KUriFilterSearchProviderActions_OnSenderSignalIndex((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

int32_t k_io__kurifiltersearchprovideractions_receivers(void* self, const char* signal) {
    return KIO__KUriFilterSearchProviderActions_Receivers((KIO__KUriFilterSearchProviderActions*)self, signal);
}

int32_t k_io__kurifiltersearchprovideractions_qbase_receivers(void* self, const char* signal) {
    return KIO__KUriFilterSearchProviderActions_QBaseReceivers((KIO__KUriFilterSearchProviderActions*)self, signal);
}

void k_io__kurifiltersearchprovideractions_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__KUriFilterSearchProviderActions_OnReceivers((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

bool k_io__kurifiltersearchprovideractions_is_signal_connected(void* self, void* signal) {
    return KIO__KUriFilterSearchProviderActions_IsSignalConnected((KIO__KUriFilterSearchProviderActions*)self, (QMetaMethod*)signal);
}

bool k_io__kurifiltersearchprovideractions_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__KUriFilterSearchProviderActions_QBaseIsSignalConnected((KIO__KUriFilterSearchProviderActions*)self, (QMetaMethod*)signal);
}

void k_io__kurifiltersearchprovideractions_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__KUriFilterSearchProviderActions_OnIsSignalConnected((KIO__KUriFilterSearchProviderActions*)self, (intptr_t)callback);
}

void k_io__kurifiltersearchprovideractions_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__kurifiltersearchprovideractions_delete(void* self) {
    KIO__KUriFilterSearchProviderActions_Delete((KIO__KUriFilterSearchProviderActions*)(self));
}
