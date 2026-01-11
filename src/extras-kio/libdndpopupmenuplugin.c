#include "libkfileitemlistproperties.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libdndpopupmenuplugin.hpp"
#include "libdndpopupmenuplugin.h"

KIO__DndPopupMenuPlugin* k_io__dndpopupmenuplugin_new(void* parent) {
    return KIO__DndPopupMenuPlugin_new((QObject*)parent);
}

const QMetaObject* k_io__dndpopupmenuplugin_meta_object(void* self) {
    return KIO__DndPopupMenuPlugin_MetaObject((KIO__DndPopupMenuPlugin*)self);
}

void* k_io__dndpopupmenuplugin_metacast(void* self, const char* param1) {
    return KIO__DndPopupMenuPlugin_Metacast((KIO__DndPopupMenuPlugin*)self, param1);
}

int32_t k_io__dndpopupmenuplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__DndPopupMenuPlugin_Metacall((KIO__DndPopupMenuPlugin*)self, param1, param2, param3);
}

void k_io__dndpopupmenuplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__DndPopupMenuPlugin_OnMetacall((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

int32_t k_io__dndpopupmenuplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__DndPopupMenuPlugin_QBaseMetacall((KIO__DndPopupMenuPlugin*)self, param1, param2, param3);
}

const char* k_io__dndpopupmenuplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QAction* */ k_io__dndpopupmenuplugin_setup(void* self, void* popupMenuInfo, void* destination) {
    libqt_list _arr = KIO__DndPopupMenuPlugin_Setup((KIO__DndPopupMenuPlugin*)self, (KFileItemListProperties*)popupMenuInfo, (QUrl*)destination);
    return _arr;
}

void k_io__dndpopupmenuplugin_on_setup(void* self, QAction** (*callback)(void*, void*, void*)) {
    KIO__DndPopupMenuPlugin_OnSetup((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

libqt_list /* of QAction* */ k_io__dndpopupmenuplugin_qbase_setup(void* self, void* popupMenuInfo, void* destination) {
    libqt_list _arr = KIO__DndPopupMenuPlugin_QBaseSetup((KIO__DndPopupMenuPlugin*)self, (KFileItemListProperties*)popupMenuInfo, (QUrl*)destination);
    return _arr;
}

const char* k_io__dndpopupmenuplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__dndpopupmenuplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__dndpopupmenuplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__dndpopupmenuplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__dndpopupmenuplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__dndpopupmenuplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__dndpopupmenuplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__dndpopupmenuplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__dndpopupmenuplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__dndpopupmenuplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__dndpopupmenuplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__dndpopupmenuplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__dndpopupmenuplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__dndpopupmenuplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__dndpopupmenuplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__dndpopupmenuplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__dndpopupmenuplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__dndpopupmenuplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__dndpopupmenuplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__dndpopupmenuplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__dndpopupmenuplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__dndpopupmenuplugin_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__dndpopupmenuplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__dndpopupmenuplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__dndpopupmenuplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__dndpopupmenuplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__dndpopupmenuplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__dndpopupmenuplugin_dynamic_property_names");
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

QBindingStorage* k_io__dndpopupmenuplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__dndpopupmenuplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__dndpopupmenuplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__dndpopupmenuplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__dndpopupmenuplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__dndpopupmenuplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__dndpopupmenuplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__dndpopupmenuplugin_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__dndpopupmenuplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__dndpopupmenuplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__dndpopupmenuplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__dndpopupmenuplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__dndpopupmenuplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__dndpopupmenuplugin_event(void* self, void* event) {
    return KIO__DndPopupMenuPlugin_Event((KIO__DndPopupMenuPlugin*)self, (QEvent*)event);
}

bool k_io__dndpopupmenuplugin_qbase_event(void* self, void* event) {
    return KIO__DndPopupMenuPlugin_QBaseEvent((KIO__DndPopupMenuPlugin*)self, (QEvent*)event);
}

void k_io__dndpopupmenuplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__DndPopupMenuPlugin_OnEvent((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

bool k_io__dndpopupmenuplugin_event_filter(void* self, void* watched, void* event) {
    return KIO__DndPopupMenuPlugin_EventFilter((KIO__DndPopupMenuPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__dndpopupmenuplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__DndPopupMenuPlugin_QBaseEventFilter((KIO__DndPopupMenuPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__dndpopupmenuplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__DndPopupMenuPlugin_OnEventFilter((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

void k_io__dndpopupmenuplugin_timer_event(void* self, void* event) {
    KIO__DndPopupMenuPlugin_TimerEvent((KIO__DndPopupMenuPlugin*)self, (QTimerEvent*)event);
}

void k_io__dndpopupmenuplugin_qbase_timer_event(void* self, void* event) {
    KIO__DndPopupMenuPlugin_QBaseTimerEvent((KIO__DndPopupMenuPlugin*)self, (QTimerEvent*)event);
}

void k_io__dndpopupmenuplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__DndPopupMenuPlugin_OnTimerEvent((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

void k_io__dndpopupmenuplugin_child_event(void* self, void* event) {
    KIO__DndPopupMenuPlugin_ChildEvent((KIO__DndPopupMenuPlugin*)self, (QChildEvent*)event);
}

void k_io__dndpopupmenuplugin_qbase_child_event(void* self, void* event) {
    KIO__DndPopupMenuPlugin_QBaseChildEvent((KIO__DndPopupMenuPlugin*)self, (QChildEvent*)event);
}

void k_io__dndpopupmenuplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__DndPopupMenuPlugin_OnChildEvent((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

void k_io__dndpopupmenuplugin_custom_event(void* self, void* event) {
    KIO__DndPopupMenuPlugin_CustomEvent((KIO__DndPopupMenuPlugin*)self, (QEvent*)event);
}

void k_io__dndpopupmenuplugin_qbase_custom_event(void* self, void* event) {
    KIO__DndPopupMenuPlugin_QBaseCustomEvent((KIO__DndPopupMenuPlugin*)self, (QEvent*)event);
}

void k_io__dndpopupmenuplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__DndPopupMenuPlugin_OnCustomEvent((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

void k_io__dndpopupmenuplugin_connect_notify(void* self, void* signal) {
    KIO__DndPopupMenuPlugin_ConnectNotify((KIO__DndPopupMenuPlugin*)self, (QMetaMethod*)signal);
}

void k_io__dndpopupmenuplugin_qbase_connect_notify(void* self, void* signal) {
    KIO__DndPopupMenuPlugin_QBaseConnectNotify((KIO__DndPopupMenuPlugin*)self, (QMetaMethod*)signal);
}

void k_io__dndpopupmenuplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__DndPopupMenuPlugin_OnConnectNotify((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

void k_io__dndpopupmenuplugin_disconnect_notify(void* self, void* signal) {
    KIO__DndPopupMenuPlugin_DisconnectNotify((KIO__DndPopupMenuPlugin*)self, (QMetaMethod*)signal);
}

void k_io__dndpopupmenuplugin_qbase_disconnect_notify(void* self, void* signal) {
    KIO__DndPopupMenuPlugin_QBaseDisconnectNotify((KIO__DndPopupMenuPlugin*)self, (QMetaMethod*)signal);
}

void k_io__dndpopupmenuplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__DndPopupMenuPlugin_OnDisconnectNotify((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

QObject* k_io__dndpopupmenuplugin_sender(void* self) {
    return KIO__DndPopupMenuPlugin_Sender((KIO__DndPopupMenuPlugin*)self);
}

QObject* k_io__dndpopupmenuplugin_qbase_sender(void* self) {
    return KIO__DndPopupMenuPlugin_QBaseSender((KIO__DndPopupMenuPlugin*)self);
}

void k_io__dndpopupmenuplugin_on_sender(void* self, QObject* (*callback)()) {
    KIO__DndPopupMenuPlugin_OnSender((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

int32_t k_io__dndpopupmenuplugin_sender_signal_index(void* self) {
    return KIO__DndPopupMenuPlugin_SenderSignalIndex((KIO__DndPopupMenuPlugin*)self);
}

int32_t k_io__dndpopupmenuplugin_qbase_sender_signal_index(void* self) {
    return KIO__DndPopupMenuPlugin_QBaseSenderSignalIndex((KIO__DndPopupMenuPlugin*)self);
}

void k_io__dndpopupmenuplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__DndPopupMenuPlugin_OnSenderSignalIndex((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

int32_t k_io__dndpopupmenuplugin_receivers(void* self, const char* signal) {
    return KIO__DndPopupMenuPlugin_Receivers((KIO__DndPopupMenuPlugin*)self, signal);
}

int32_t k_io__dndpopupmenuplugin_qbase_receivers(void* self, const char* signal) {
    return KIO__DndPopupMenuPlugin_QBaseReceivers((KIO__DndPopupMenuPlugin*)self, signal);
}

void k_io__dndpopupmenuplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__DndPopupMenuPlugin_OnReceivers((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

bool k_io__dndpopupmenuplugin_is_signal_connected(void* self, void* signal) {
    return KIO__DndPopupMenuPlugin_IsSignalConnected((KIO__DndPopupMenuPlugin*)self, (QMetaMethod*)signal);
}

bool k_io__dndpopupmenuplugin_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__DndPopupMenuPlugin_QBaseIsSignalConnected((KIO__DndPopupMenuPlugin*)self, (QMetaMethod*)signal);
}

void k_io__dndpopupmenuplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__DndPopupMenuPlugin_OnIsSignalConnected((KIO__DndPopupMenuPlugin*)self, (intptr_t)callback);
}

void k_io__dndpopupmenuplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__dndpopupmenuplugin_delete(void* self) {
    KIO__DndPopupMenuPlugin_Delete((KIO__DndPopupMenuPlugin*)(self));
}
