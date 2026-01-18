#include "libkfileitemlistproperties.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkabstractfileitemactionplugin.hpp"
#include "libkabstractfileitemactionplugin.h"

KAbstractFileItemActionPlugin* k_abstractfileitemactionplugin_new(void* parent) {
    return KAbstractFileItemActionPlugin_new((QObject*)parent);
}

const QMetaObject* k_abstractfileitemactionplugin_meta_object(void* self) {
    return KAbstractFileItemActionPlugin_MetaObject((KAbstractFileItemActionPlugin*)self);
}

void* k_abstractfileitemactionplugin_metacast(void* self, const char* param1) {
    return KAbstractFileItemActionPlugin_Metacast((KAbstractFileItemActionPlugin*)self, param1);
}

int32_t k_abstractfileitemactionplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAbstractFileItemActionPlugin_Metacall((KAbstractFileItemActionPlugin*)self, param1, param2, param3);
}

void k_abstractfileitemactionplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KAbstractFileItemActionPlugin_OnMetacall((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

int32_t k_abstractfileitemactionplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KAbstractFileItemActionPlugin_QBaseMetacall((KAbstractFileItemActionPlugin*)self, param1, param2, param3);
}

const char* k_abstractfileitemactionplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAction* */ k_abstractfileitemactionplugin_actions(void* self, void* fileItemInfos, void* parentWidget) {
    libqt_list _arr = KAbstractFileItemActionPlugin_Actions((KAbstractFileItemActionPlugin*)self, (KFileItemListProperties*)fileItemInfos, (QWidget*)parentWidget);
    return _arr;
}

void k_abstractfileitemactionplugin_on_actions(void* self, QAction** (*callback)(void*, void*, void*)) {
    KAbstractFileItemActionPlugin_OnActions((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

libqt_list /* of QAction* */ k_abstractfileitemactionplugin_qbase_actions(void* self, void* fileItemInfos, void* parentWidget) {
    libqt_list _arr = KAbstractFileItemActionPlugin_QBaseActions((KAbstractFileItemActionPlugin*)self, (KFileItemListProperties*)fileItemInfos, (QWidget*)parentWidget);
    return _arr;
}

void k_abstractfileitemactionplugin_error(void* self, const char* errorMessage) {
    KAbstractFileItemActionPlugin_Error((KAbstractFileItemActionPlugin*)self, qstring(errorMessage));
}

void k_abstractfileitemactionplugin_on_error(void* self, void (*callback)(void*, const char*)) {
    KAbstractFileItemActionPlugin_Connect_Error((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

const char* k_abstractfileitemactionplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_abstractfileitemactionplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_abstractfileitemactionplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_abstractfileitemactionplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_abstractfileitemactionplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_abstractfileitemactionplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_abstractfileitemactionplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_abstractfileitemactionplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_abstractfileitemactionplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_abstractfileitemactionplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_abstractfileitemactionplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_abstractfileitemactionplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_abstractfileitemactionplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_abstractfileitemactionplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_abstractfileitemactionplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_abstractfileitemactionplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_abstractfileitemactionplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_abstractfileitemactionplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_abstractfileitemactionplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_abstractfileitemactionplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_abstractfileitemactionplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_abstractfileitemactionplugin_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_abstractfileitemactionplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_abstractfileitemactionplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_abstractfileitemactionplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_abstractfileitemactionplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_abstractfileitemactionplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_abstractfileitemactionplugin_dynamic_property_names\n");
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

QBindingStorage* k_abstractfileitemactionplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_abstractfileitemactionplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_abstractfileitemactionplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_abstractfileitemactionplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_abstractfileitemactionplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_abstractfileitemactionplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_abstractfileitemactionplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_abstractfileitemactionplugin_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_abstractfileitemactionplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_abstractfileitemactionplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_abstractfileitemactionplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_abstractfileitemactionplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_abstractfileitemactionplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_abstractfileitemactionplugin_event(void* self, void* event) {
    return KAbstractFileItemActionPlugin_Event((KAbstractFileItemActionPlugin*)self, (QEvent*)event);
}

bool k_abstractfileitemactionplugin_qbase_event(void* self, void* event) {
    return KAbstractFileItemActionPlugin_QBaseEvent((KAbstractFileItemActionPlugin*)self, (QEvent*)event);
}

void k_abstractfileitemactionplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    KAbstractFileItemActionPlugin_OnEvent((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

bool k_abstractfileitemactionplugin_event_filter(void* self, void* watched, void* event) {
    return KAbstractFileItemActionPlugin_EventFilter((KAbstractFileItemActionPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool k_abstractfileitemactionplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return KAbstractFileItemActionPlugin_QBaseEventFilter((KAbstractFileItemActionPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void k_abstractfileitemactionplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KAbstractFileItemActionPlugin_OnEventFilter((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

void k_abstractfileitemactionplugin_timer_event(void* self, void* event) {
    KAbstractFileItemActionPlugin_TimerEvent((KAbstractFileItemActionPlugin*)self, (QTimerEvent*)event);
}

void k_abstractfileitemactionplugin_qbase_timer_event(void* self, void* event) {
    KAbstractFileItemActionPlugin_QBaseTimerEvent((KAbstractFileItemActionPlugin*)self, (QTimerEvent*)event);
}

void k_abstractfileitemactionplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KAbstractFileItemActionPlugin_OnTimerEvent((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

void k_abstractfileitemactionplugin_child_event(void* self, void* event) {
    KAbstractFileItemActionPlugin_ChildEvent((KAbstractFileItemActionPlugin*)self, (QChildEvent*)event);
}

void k_abstractfileitemactionplugin_qbase_child_event(void* self, void* event) {
    KAbstractFileItemActionPlugin_QBaseChildEvent((KAbstractFileItemActionPlugin*)self, (QChildEvent*)event);
}

void k_abstractfileitemactionplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    KAbstractFileItemActionPlugin_OnChildEvent((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

void k_abstractfileitemactionplugin_custom_event(void* self, void* event) {
    KAbstractFileItemActionPlugin_CustomEvent((KAbstractFileItemActionPlugin*)self, (QEvent*)event);
}

void k_abstractfileitemactionplugin_qbase_custom_event(void* self, void* event) {
    KAbstractFileItemActionPlugin_QBaseCustomEvent((KAbstractFileItemActionPlugin*)self, (QEvent*)event);
}

void k_abstractfileitemactionplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KAbstractFileItemActionPlugin_OnCustomEvent((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

void k_abstractfileitemactionplugin_connect_notify(void* self, void* signal) {
    KAbstractFileItemActionPlugin_ConnectNotify((KAbstractFileItemActionPlugin*)self, (QMetaMethod*)signal);
}

void k_abstractfileitemactionplugin_qbase_connect_notify(void* self, void* signal) {
    KAbstractFileItemActionPlugin_QBaseConnectNotify((KAbstractFileItemActionPlugin*)self, (QMetaMethod*)signal);
}

void k_abstractfileitemactionplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KAbstractFileItemActionPlugin_OnConnectNotify((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

void k_abstractfileitemactionplugin_disconnect_notify(void* self, void* signal) {
    KAbstractFileItemActionPlugin_DisconnectNotify((KAbstractFileItemActionPlugin*)self, (QMetaMethod*)signal);
}

void k_abstractfileitemactionplugin_qbase_disconnect_notify(void* self, void* signal) {
    KAbstractFileItemActionPlugin_QBaseDisconnectNotify((KAbstractFileItemActionPlugin*)self, (QMetaMethod*)signal);
}

void k_abstractfileitemactionplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KAbstractFileItemActionPlugin_OnDisconnectNotify((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

QObject* k_abstractfileitemactionplugin_sender(void* self) {
    return KAbstractFileItemActionPlugin_Sender((KAbstractFileItemActionPlugin*)self);
}

QObject* k_abstractfileitemactionplugin_qbase_sender(void* self) {
    return KAbstractFileItemActionPlugin_QBaseSender((KAbstractFileItemActionPlugin*)self);
}

void k_abstractfileitemactionplugin_on_sender(void* self, QObject* (*callback)()) {
    KAbstractFileItemActionPlugin_OnSender((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

int32_t k_abstractfileitemactionplugin_sender_signal_index(void* self) {
    return KAbstractFileItemActionPlugin_SenderSignalIndex((KAbstractFileItemActionPlugin*)self);
}

int32_t k_abstractfileitemactionplugin_qbase_sender_signal_index(void* self) {
    return KAbstractFileItemActionPlugin_QBaseSenderSignalIndex((KAbstractFileItemActionPlugin*)self);
}

void k_abstractfileitemactionplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KAbstractFileItemActionPlugin_OnSenderSignalIndex((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

int32_t k_abstractfileitemactionplugin_receivers(void* self, const char* signal) {
    return KAbstractFileItemActionPlugin_Receivers((KAbstractFileItemActionPlugin*)self, signal);
}

int32_t k_abstractfileitemactionplugin_qbase_receivers(void* self, const char* signal) {
    return KAbstractFileItemActionPlugin_QBaseReceivers((KAbstractFileItemActionPlugin*)self, signal);
}

void k_abstractfileitemactionplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KAbstractFileItemActionPlugin_OnReceivers((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

bool k_abstractfileitemactionplugin_is_signal_connected(void* self, void* signal) {
    return KAbstractFileItemActionPlugin_IsSignalConnected((KAbstractFileItemActionPlugin*)self, (QMetaMethod*)signal);
}

bool k_abstractfileitemactionplugin_qbase_is_signal_connected(void* self, void* signal) {
    return KAbstractFileItemActionPlugin_QBaseIsSignalConnected((KAbstractFileItemActionPlugin*)self, (QMetaMethod*)signal);
}

void k_abstractfileitemactionplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KAbstractFileItemActionPlugin_OnIsSignalConnected((KAbstractFileItemActionPlugin*)self, (intptr_t)callback);
}

void k_abstractfileitemactionplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_abstractfileitemactionplugin_delete(void* self) {
    KAbstractFileItemActionPlugin_Delete((KAbstractFileItemActionPlugin*)(self));
}
