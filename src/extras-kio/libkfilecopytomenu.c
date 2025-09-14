#include "../libqcoreevent.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqwidget.hpp"
#include "libkfilecopytomenu.hpp"
#include "libkfilecopytomenu.h"

KFileCopyToMenu* k_filecopytomenu_new(void* parentWidget) {
    return KFileCopyToMenu_new((QWidget*)parentWidget);
}

const QMetaObject* k_filecopytomenu_meta_object(void* self) {
    return KFileCopyToMenu_MetaObject((KFileCopyToMenu*)self);
}

void* k_filecopytomenu_metacast(void* self, const char* param1) {
    return KFileCopyToMenu_Metacast((KFileCopyToMenu*)self, param1);
}

int32_t k_filecopytomenu_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileCopyToMenu_Metacall((KFileCopyToMenu*)self, param1, param2, param3);
}

void k_filecopytomenu_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFileCopyToMenu_OnMetacall((KFileCopyToMenu*)self, (intptr_t)callback);
}

int32_t k_filecopytomenu_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileCopyToMenu_QBaseMetacall((KFileCopyToMenu*)self, param1, param2, param3);
}

const char* k_filecopytomenu_tr(const char* s) {
    libqt_string _str = KFileCopyToMenu_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filecopytomenu_set_urls(void* self, libqt_list urls) {
    KFileCopyToMenu_SetUrls((KFileCopyToMenu*)self, urls);
}

void k_filecopytomenu_set_read_only(void* self, bool ro) {
    KFileCopyToMenu_SetReadOnly((KFileCopyToMenu*)self, ro);
}

void k_filecopytomenu_add_actions_to(void* self, void* menu) {
    KFileCopyToMenu_AddActionsTo((KFileCopyToMenu*)self, (QMenu*)menu);
}

void k_filecopytomenu_set_auto_error_handling_enabled(void* self, bool b) {
    KFileCopyToMenu_SetAutoErrorHandlingEnabled((KFileCopyToMenu*)self, b);
}

void k_filecopytomenu_error(void* self, int errorCode, const char* message) {
    KFileCopyToMenu_Error((KFileCopyToMenu*)self, errorCode, qstring(message));
}

void k_filecopytomenu_on_error(void* self, void (*callback)(void*, int, const char*)) {
    KFileCopyToMenu_Connect_Error((KFileCopyToMenu*)self, (intptr_t)callback);
}

const char* k_filecopytomenu_tr2(const char* s, const char* c) {
    libqt_string _str = KFileCopyToMenu_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filecopytomenu_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KFileCopyToMenu_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filecopytomenu_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filecopytomenu_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_filecopytomenu_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_filecopytomenu_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_filecopytomenu_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_filecopytomenu_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_filecopytomenu_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_filecopytomenu_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_filecopytomenu_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_filecopytomenu_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_filecopytomenu_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_filecopytomenu_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_filecopytomenu_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_filecopytomenu_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_filecopytomenu_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_filecopytomenu_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_filecopytomenu_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_filecopytomenu_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_filecopytomenu_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_filecopytomenu_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_filecopytomenu_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_filecopytomenu_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_filecopytomenu_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_filecopytomenu_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_filecopytomenu_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_filecopytomenu_dynamic_property_names");
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

QBindingStorage* k_filecopytomenu_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_filecopytomenu_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_filecopytomenu_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_filecopytomenu_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_filecopytomenu_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_filecopytomenu_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_filecopytomenu_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_filecopytomenu_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_filecopytomenu_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_filecopytomenu_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_filecopytomenu_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_filecopytomenu_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_filecopytomenu_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_filecopytomenu_event(void* self, void* event) {
    return KFileCopyToMenu_Event((KFileCopyToMenu*)self, (QEvent*)event);
}

bool k_filecopytomenu_qbase_event(void* self, void* event) {
    return KFileCopyToMenu_QBaseEvent((KFileCopyToMenu*)self, (QEvent*)event);
}

void k_filecopytomenu_on_event(void* self, bool (*callback)(void*, void*)) {
    KFileCopyToMenu_OnEvent((KFileCopyToMenu*)self, (intptr_t)callback);
}

bool k_filecopytomenu_event_filter(void* self, void* watched, void* event) {
    return KFileCopyToMenu_EventFilter((KFileCopyToMenu*)self, (QObject*)watched, (QEvent*)event);
}

bool k_filecopytomenu_qbase_event_filter(void* self, void* watched, void* event) {
    return KFileCopyToMenu_QBaseEventFilter((KFileCopyToMenu*)self, (QObject*)watched, (QEvent*)event);
}

void k_filecopytomenu_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFileCopyToMenu_OnEventFilter((KFileCopyToMenu*)self, (intptr_t)callback);
}

void k_filecopytomenu_timer_event(void* self, void* event) {
    KFileCopyToMenu_TimerEvent((KFileCopyToMenu*)self, (QTimerEvent*)event);
}

void k_filecopytomenu_qbase_timer_event(void* self, void* event) {
    KFileCopyToMenu_QBaseTimerEvent((KFileCopyToMenu*)self, (QTimerEvent*)event);
}

void k_filecopytomenu_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFileCopyToMenu_OnTimerEvent((KFileCopyToMenu*)self, (intptr_t)callback);
}

void k_filecopytomenu_child_event(void* self, void* event) {
    KFileCopyToMenu_ChildEvent((KFileCopyToMenu*)self, (QChildEvent*)event);
}

void k_filecopytomenu_qbase_child_event(void* self, void* event) {
    KFileCopyToMenu_QBaseChildEvent((KFileCopyToMenu*)self, (QChildEvent*)event);
}

void k_filecopytomenu_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFileCopyToMenu_OnChildEvent((KFileCopyToMenu*)self, (intptr_t)callback);
}

void k_filecopytomenu_custom_event(void* self, void* event) {
    KFileCopyToMenu_CustomEvent((KFileCopyToMenu*)self, (QEvent*)event);
}

void k_filecopytomenu_qbase_custom_event(void* self, void* event) {
    KFileCopyToMenu_QBaseCustomEvent((KFileCopyToMenu*)self, (QEvent*)event);
}

void k_filecopytomenu_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFileCopyToMenu_OnCustomEvent((KFileCopyToMenu*)self, (intptr_t)callback);
}

void k_filecopytomenu_connect_notify(void* self, void* signal) {
    KFileCopyToMenu_ConnectNotify((KFileCopyToMenu*)self, (QMetaMethod*)signal);
}

void k_filecopytomenu_qbase_connect_notify(void* self, void* signal) {
    KFileCopyToMenu_QBaseConnectNotify((KFileCopyToMenu*)self, (QMetaMethod*)signal);
}

void k_filecopytomenu_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFileCopyToMenu_OnConnectNotify((KFileCopyToMenu*)self, (intptr_t)callback);
}

void k_filecopytomenu_disconnect_notify(void* self, void* signal) {
    KFileCopyToMenu_DisconnectNotify((KFileCopyToMenu*)self, (QMetaMethod*)signal);
}

void k_filecopytomenu_qbase_disconnect_notify(void* self, void* signal) {
    KFileCopyToMenu_QBaseDisconnectNotify((KFileCopyToMenu*)self, (QMetaMethod*)signal);
}

void k_filecopytomenu_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFileCopyToMenu_OnDisconnectNotify((KFileCopyToMenu*)self, (intptr_t)callback);
}

QObject* k_filecopytomenu_sender(void* self) {
    return KFileCopyToMenu_Sender((KFileCopyToMenu*)self);
}

QObject* k_filecopytomenu_qbase_sender(void* self) {
    return KFileCopyToMenu_QBaseSender((KFileCopyToMenu*)self);
}

void k_filecopytomenu_on_sender(void* self, QObject* (*callback)()) {
    KFileCopyToMenu_OnSender((KFileCopyToMenu*)self, (intptr_t)callback);
}

int32_t k_filecopytomenu_sender_signal_index(void* self) {
    return KFileCopyToMenu_SenderSignalIndex((KFileCopyToMenu*)self);
}

int32_t k_filecopytomenu_qbase_sender_signal_index(void* self) {
    return KFileCopyToMenu_QBaseSenderSignalIndex((KFileCopyToMenu*)self);
}

void k_filecopytomenu_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFileCopyToMenu_OnSenderSignalIndex((KFileCopyToMenu*)self, (intptr_t)callback);
}

int32_t k_filecopytomenu_receivers(void* self, const char* signal) {
    return KFileCopyToMenu_Receivers((KFileCopyToMenu*)self, signal);
}

int32_t k_filecopytomenu_qbase_receivers(void* self, const char* signal) {
    return KFileCopyToMenu_QBaseReceivers((KFileCopyToMenu*)self, signal);
}

void k_filecopytomenu_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFileCopyToMenu_OnReceivers((KFileCopyToMenu*)self, (intptr_t)callback);
}

bool k_filecopytomenu_is_signal_connected(void* self, void* signal) {
    return KFileCopyToMenu_IsSignalConnected((KFileCopyToMenu*)self, (QMetaMethod*)signal);
}

bool k_filecopytomenu_qbase_is_signal_connected(void* self, void* signal) {
    return KFileCopyToMenu_QBaseIsSignalConnected((KFileCopyToMenu*)self, (QMetaMethod*)signal);
}

void k_filecopytomenu_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFileCopyToMenu_OnIsSignalConnected((KFileCopyToMenu*)self, (intptr_t)callback);
}

void k_filecopytomenu_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_filecopytomenu_delete(void* self) {
    KFileCopyToMenu_Delete((KFileCopyToMenu*)(self));
}
