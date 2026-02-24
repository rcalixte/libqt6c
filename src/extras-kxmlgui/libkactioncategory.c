#include "libkactioncollection.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkactioncategory.hpp"
#include "libkactioncategory.h"

KActionCategory* k_actioncategory_new(const char* text) {
    return KActionCategory_new(qstring(text));
}

KActionCategory* k_actioncategory_new2(const char* text, void* parent) {
    return KActionCategory_new2(qstring(text), (KActionCollection*)parent);
}

const QMetaObject* k_actioncategory_meta_object(void* self) {
    return KActionCategory_MetaObject((KActionCategory*)self);
}

void k_actioncategory_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KActionCategory_OnMetaObject((KActionCategory*)self, (intptr_t)callback);
}

const QMetaObject* k_actioncategory_super_meta_object(void* self) {
    return KActionCategory_SuperMetaObject((KActionCategory*)self);
}

void* k_actioncategory_metacast(void* self, const char* param1) {
    return KActionCategory_Metacast((KActionCategory*)self, param1);
}

void k_actioncategory_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KActionCategory_OnMetacast((KActionCategory*)self, (intptr_t)callback);
}

void* k_actioncategory_super_metacast(void* self, const char* param1) {
    return KActionCategory_SuperMetacast((KActionCategory*)self, param1);
}

int32_t k_actioncategory_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KActionCategory_Metacall((KActionCategory*)self, param1, param2, param3);
}

void k_actioncategory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KActionCategory_OnMetacall((KActionCategory*)self, (intptr_t)callback);
}

int32_t k_actioncategory_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KActionCategory_SuperMetacall((KActionCategory*)self, param1, param2, param3);
}

const char* k_actioncategory_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* k_actioncategory_add_action(void* self, const char* name, void* action) {
    return KActionCategory_AddAction((KActionCategory*)self, qstring(name), (QAction*)action);
}

QAction* k_actioncategory_add_action2(void* self, int32_t actionType) {
    return KActionCategory_AddAction2((KActionCategory*)self, actionType);
}

QAction* k_actioncategory_add_action3(void* self, int32_t actionType, const char* name) {
    return KActionCategory_AddAction3((KActionCategory*)self, actionType, qstring(name));
}

QAction* k_actioncategory_add_action4(void* self, const char* name) {
    return KActionCategory_AddAction4((KActionCategory*)self, qstring(name));
}

QAction* k_actioncategory_add_action5(void* self, int32_t actionType) {
    return KActionCategory_AddAction5((KActionCategory*)self, actionType);
}

libqt_list /* of QAction* */ k_actioncategory_actions(void* self) {
    libqt_list _arr = KActionCategory_Actions((KActionCategory*)self);
    return _arr;
}

KActionCollection* k_actioncategory_collection(void* self) {
    return KActionCategory_Collection((KActionCategory*)self);
}

const char* k_actioncategory_text(void* self) {
    libqt_string _str = KActionCategory_Text((KActionCategory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actioncategory_set_text(void* self, const char* text) {
    KActionCategory_SetText((KActionCategory*)self, qstring(text));
}

const char* k_actioncategory_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_actioncategory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* k_actioncategory_add_action22(void* self, int32_t actionType, void* receiver) {
    return KActionCategory_AddAction22((KActionCategory*)self, actionType, (QObject*)receiver);
}

QAction* k_actioncategory_add_action32(void* self, int32_t actionType, void* receiver, const char* member) {
    return KActionCategory_AddAction32((KActionCategory*)self, actionType, (QObject*)receiver, member);
}

QAction* k_actioncategory_add_action33(void* self, int32_t actionType, const char* name, void* receiver) {
    return KActionCategory_AddAction33((KActionCategory*)self, actionType, qstring(name), (QObject*)receiver);
}

QAction* k_actioncategory_add_action42(void* self, int32_t actionType, const char* name, void* receiver, const char* member) {
    return KActionCategory_AddAction42((KActionCategory*)self, actionType, qstring(name), (QObject*)receiver, member);
}

QAction* k_actioncategory_add_action23(void* self, const char* name, void* receiver) {
    return KActionCategory_AddAction23((KActionCategory*)self, qstring(name), (QObject*)receiver);
}

QAction* k_actioncategory_add_action34(void* self, const char* name, void* receiver, const char* member) {
    return KActionCategory_AddAction34((KActionCategory*)self, qstring(name), (QObject*)receiver, member);
}

const char* k_actioncategory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actioncategory_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_actioncategory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_actioncategory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_actioncategory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_actioncategory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_actioncategory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_actioncategory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_actioncategory_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_actioncategory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_actioncategory_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_actioncategory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_actioncategory_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_actioncategory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_actioncategory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_actioncategory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_actioncategory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_actioncategory_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_actioncategory_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_actioncategory_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_actioncategory_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_actioncategory_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_actioncategory_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_actioncategory_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_actioncategory_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_actioncategory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_actioncategory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_actioncategory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_actioncategory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_actioncategory_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_actioncategory_dynamic_property_names\n");
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

QBindingStorage* k_actioncategory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_actioncategory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_actioncategory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_actioncategory_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_actioncategory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_actioncategory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_actioncategory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_actioncategory_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_actioncategory_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_actioncategory_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_actioncategory_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_actioncategory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_actioncategory_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_actioncategory_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_actioncategory_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_actioncategory_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_actioncategory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_actioncategory_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_actioncategory_event(void* self, void* event) {
    return KActionCategory_Event((KActionCategory*)self, (QEvent*)event);
}

bool k_actioncategory_super_event(void* self, void* event) {
    return KActionCategory_SuperEvent((KActionCategory*)self, (QEvent*)event);
}

void k_actioncategory_on_event(void* self, bool (*callback)(void*, void*)) {
    KActionCategory_OnEvent((KActionCategory*)self, (intptr_t)callback);
}

bool k_actioncategory_event_filter(void* self, void* watched, void* event) {
    return KActionCategory_EventFilter((KActionCategory*)self, (QObject*)watched, (QEvent*)event);
}

bool k_actioncategory_super_event_filter(void* self, void* watched, void* event) {
    return KActionCategory_SuperEventFilter((KActionCategory*)self, (QObject*)watched, (QEvent*)event);
}

void k_actioncategory_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KActionCategory_OnEventFilter((KActionCategory*)self, (intptr_t)callback);
}

void k_actioncategory_timer_event(void* self, void* event) {
    KActionCategory_TimerEvent((KActionCategory*)self, (QTimerEvent*)event);
}

void k_actioncategory_super_timer_event(void* self, void* event) {
    KActionCategory_SuperTimerEvent((KActionCategory*)self, (QTimerEvent*)event);
}

void k_actioncategory_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KActionCategory_OnTimerEvent((KActionCategory*)self, (intptr_t)callback);
}

void k_actioncategory_child_event(void* self, void* event) {
    KActionCategory_ChildEvent((KActionCategory*)self, (QChildEvent*)event);
}

void k_actioncategory_super_child_event(void* self, void* event) {
    KActionCategory_SuperChildEvent((KActionCategory*)self, (QChildEvent*)event);
}

void k_actioncategory_on_child_event(void* self, void (*callback)(void*, void*)) {
    KActionCategory_OnChildEvent((KActionCategory*)self, (intptr_t)callback);
}

void k_actioncategory_custom_event(void* self, void* event) {
    KActionCategory_CustomEvent((KActionCategory*)self, (QEvent*)event);
}

void k_actioncategory_super_custom_event(void* self, void* event) {
    KActionCategory_SuperCustomEvent((KActionCategory*)self, (QEvent*)event);
}

void k_actioncategory_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KActionCategory_OnCustomEvent((KActionCategory*)self, (intptr_t)callback);
}

void k_actioncategory_connect_notify(void* self, void* signal) {
    KActionCategory_ConnectNotify((KActionCategory*)self, (QMetaMethod*)signal);
}

void k_actioncategory_super_connect_notify(void* self, void* signal) {
    KActionCategory_SuperConnectNotify((KActionCategory*)self, (QMetaMethod*)signal);
}

void k_actioncategory_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KActionCategory_OnConnectNotify((KActionCategory*)self, (intptr_t)callback);
}

void k_actioncategory_disconnect_notify(void* self, void* signal) {
    KActionCategory_DisconnectNotify((KActionCategory*)self, (QMetaMethod*)signal);
}

void k_actioncategory_super_disconnect_notify(void* self, void* signal) {
    KActionCategory_SuperDisconnectNotify((KActionCategory*)self, (QMetaMethod*)signal);
}

void k_actioncategory_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KActionCategory_OnDisconnectNotify((KActionCategory*)self, (intptr_t)callback);
}

QObject* k_actioncategory_sender(void* self) {
    return KActionCategory_Sender((KActionCategory*)self);
}

QObject* k_actioncategory_super_sender(void* self) {
    return KActionCategory_SuperSender((KActionCategory*)self);
}

void k_actioncategory_on_sender(void* self, QObject* (*callback)()) {
    KActionCategory_OnSender((KActionCategory*)self, (intptr_t)callback);
}

int32_t k_actioncategory_sender_signal_index(void* self) {
    return KActionCategory_SenderSignalIndex((KActionCategory*)self);
}

int32_t k_actioncategory_super_sender_signal_index(void* self) {
    return KActionCategory_SuperSenderSignalIndex((KActionCategory*)self);
}

void k_actioncategory_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KActionCategory_OnSenderSignalIndex((KActionCategory*)self, (intptr_t)callback);
}

int32_t k_actioncategory_receivers(void* self, const char* signal) {
    return KActionCategory_Receivers((KActionCategory*)self, signal);
}

int32_t k_actioncategory_super_receivers(void* self, const char* signal) {
    return KActionCategory_SuperReceivers((KActionCategory*)self, signal);
}

void k_actioncategory_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KActionCategory_OnReceivers((KActionCategory*)self, (intptr_t)callback);
}

bool k_actioncategory_is_signal_connected(void* self, void* signal) {
    return KActionCategory_IsSignalConnected((KActionCategory*)self, (QMetaMethod*)signal);
}

bool k_actioncategory_super_is_signal_connected(void* self, void* signal) {
    return KActionCategory_SuperIsSignalConnected((KActionCategory*)self, (QMetaMethod*)signal);
}

void k_actioncategory_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KActionCategory_OnIsSignalConnected((KActionCategory*)self, (intptr_t)callback);
}

void k_actioncategory_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_actioncategory_delete(void* self) {
    KActionCategory_Delete((KActionCategory*)(self));
}
