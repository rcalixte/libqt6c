#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwindow.hpp"
#include "libkwindowshadow.hpp"
#include "libkwindowshadow.h"

KWindowShadowTile* k_windowshadowtile_new() {
    return KWindowShadowTile_new();
}

QImage* k_windowshadowtile_image(void* self) {
    return KWindowShadowTile_Image((KWindowShadowTile*)self);
}

void k_windowshadowtile_set_image(void* self, void* image) {
    KWindowShadowTile_SetImage((KWindowShadowTile*)self, (QImage*)image);
}

bool k_windowshadowtile_is_created(void* self) {
    return KWindowShadowTile_IsCreated((KWindowShadowTile*)self);
}

bool k_windowshadowtile_create(void* self) {
    return KWindowShadowTile_Create((KWindowShadowTile*)self);
}

void k_windowshadowtile_delete(void* self) {
    KWindowShadowTile_Delete((KWindowShadowTile*)(self));
}

KWindowShadow* k_windowshadow_new() {
    return KWindowShadow_new();
}

KWindowShadow* k_windowshadow_new2(void* parent) {
    return KWindowShadow_new2((QObject*)parent);
}

const QMetaObject* k_windowshadow_meta_object(void* self) {
    return KWindowShadow_MetaObject((KWindowShadow*)self);
}

void* k_windowshadow_metacast(void* self, const char* param1) {
    return KWindowShadow_Metacast((KWindowShadow*)self, param1);
}

int32_t k_windowshadow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWindowShadow_Metacall((KWindowShadow*)self, param1, param2, param3);
}

void k_windowshadow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KWindowShadow_OnMetacall((KWindowShadow*)self, (intptr_t)callback);
}

int32_t k_windowshadow_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWindowShadow_QBaseMetacall((KWindowShadow*)self, param1, param2, param3);
}

const char* k_windowshadow_tr(const char* s) {
    libqt_string _str = KWindowShadow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMargins* k_windowshadow_padding(void* self) {
    return KWindowShadow_Padding((KWindowShadow*)self);
}

void k_windowshadow_set_padding(void* self, void* padding) {
    KWindowShadow_SetPadding((KWindowShadow*)self, (QMargins*)padding);
}

QWindow* k_windowshadow_window(void* self) {
    return KWindowShadow_Window((KWindowShadow*)self);
}

void k_windowshadow_set_window(void* self, void* window) {
    KWindowShadow_SetWindow((KWindowShadow*)self, (QWindow*)window);
}

bool k_windowshadow_is_created(void* self) {
    return KWindowShadow_IsCreated((KWindowShadow*)self);
}

bool k_windowshadow_create(void* self) {
    return KWindowShadow_Create((KWindowShadow*)self);
}

void k_windowshadow_destroy(void* self) {
    KWindowShadow_Destroy((KWindowShadow*)self);
}

const char* k_windowshadow_tr2(const char* s, const char* c) {
    libqt_string _str = KWindowShadow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowshadow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KWindowShadow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowshadow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_windowshadow_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_windowshadow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_windowshadow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_windowshadow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_windowshadow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_windowshadow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_windowshadow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_windowshadow_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_windowshadow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_windowshadow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_windowshadow_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_windowshadow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_windowshadow_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_windowshadow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_windowshadow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_windowshadow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_windowshadow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_windowshadow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_windowshadow_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_windowshadow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_windowshadow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_windowshadow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_windowshadow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_windowshadow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_windowshadow_dynamic_property_names");
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

QBindingStorage* k_windowshadow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_windowshadow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_windowshadow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_windowshadow_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_windowshadow_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_windowshadow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_windowshadow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_windowshadow_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_windowshadow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_windowshadow_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_windowshadow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_windowshadow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_windowshadow_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_windowshadow_event(void* self, void* event) {
    return KWindowShadow_Event((KWindowShadow*)self, (QEvent*)event);
}

bool k_windowshadow_qbase_event(void* self, void* event) {
    return KWindowShadow_QBaseEvent((KWindowShadow*)self, (QEvent*)event);
}

void k_windowshadow_on_event(void* self, bool (*callback)(void*, void*)) {
    KWindowShadow_OnEvent((KWindowShadow*)self, (intptr_t)callback);
}

bool k_windowshadow_event_filter(void* self, void* watched, void* event) {
    return KWindowShadow_EventFilter((KWindowShadow*)self, (QObject*)watched, (QEvent*)event);
}

bool k_windowshadow_qbase_event_filter(void* self, void* watched, void* event) {
    return KWindowShadow_QBaseEventFilter((KWindowShadow*)self, (QObject*)watched, (QEvent*)event);
}

void k_windowshadow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KWindowShadow_OnEventFilter((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_timer_event(void* self, void* event) {
    KWindowShadow_TimerEvent((KWindowShadow*)self, (QTimerEvent*)event);
}

void k_windowshadow_qbase_timer_event(void* self, void* event) {
    KWindowShadow_QBaseTimerEvent((KWindowShadow*)self, (QTimerEvent*)event);
}

void k_windowshadow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnTimerEvent((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_child_event(void* self, void* event) {
    KWindowShadow_ChildEvent((KWindowShadow*)self, (QChildEvent*)event);
}

void k_windowshadow_qbase_child_event(void* self, void* event) {
    KWindowShadow_QBaseChildEvent((KWindowShadow*)self, (QChildEvent*)event);
}

void k_windowshadow_on_child_event(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnChildEvent((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_custom_event(void* self, void* event) {
    KWindowShadow_CustomEvent((KWindowShadow*)self, (QEvent*)event);
}

void k_windowshadow_qbase_custom_event(void* self, void* event) {
    KWindowShadow_QBaseCustomEvent((KWindowShadow*)self, (QEvent*)event);
}

void k_windowshadow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnCustomEvent((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_connect_notify(void* self, void* signal) {
    KWindowShadow_ConnectNotify((KWindowShadow*)self, (QMetaMethod*)signal);
}

void k_windowshadow_qbase_connect_notify(void* self, void* signal) {
    KWindowShadow_QBaseConnectNotify((KWindowShadow*)self, (QMetaMethod*)signal);
}

void k_windowshadow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnConnectNotify((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_disconnect_notify(void* self, void* signal) {
    KWindowShadow_DisconnectNotify((KWindowShadow*)self, (QMetaMethod*)signal);
}

void k_windowshadow_qbase_disconnect_notify(void* self, void* signal) {
    KWindowShadow_QBaseDisconnectNotify((KWindowShadow*)self, (QMetaMethod*)signal);
}

void k_windowshadow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnDisconnectNotify((KWindowShadow*)self, (intptr_t)callback);
}

QObject* k_windowshadow_sender(void* self) {
    return KWindowShadow_Sender((KWindowShadow*)self);
}

QObject* k_windowshadow_qbase_sender(void* self) {
    return KWindowShadow_QBaseSender((KWindowShadow*)self);
}

void k_windowshadow_on_sender(void* self, QObject* (*callback)()) {
    KWindowShadow_OnSender((KWindowShadow*)self, (intptr_t)callback);
}

int32_t k_windowshadow_sender_signal_index(void* self) {
    return KWindowShadow_SenderSignalIndex((KWindowShadow*)self);
}

int32_t k_windowshadow_qbase_sender_signal_index(void* self) {
    return KWindowShadow_QBaseSenderSignalIndex((KWindowShadow*)self);
}

void k_windowshadow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KWindowShadow_OnSenderSignalIndex((KWindowShadow*)self, (intptr_t)callback);
}

int32_t k_windowshadow_receivers(void* self, const char* signal) {
    return KWindowShadow_Receivers((KWindowShadow*)self, signal);
}

int32_t k_windowshadow_qbase_receivers(void* self, const char* signal) {
    return KWindowShadow_QBaseReceivers((KWindowShadow*)self, signal);
}

void k_windowshadow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KWindowShadow_OnReceivers((KWindowShadow*)self, (intptr_t)callback);
}

bool k_windowshadow_is_signal_connected(void* self, void* signal) {
    return KWindowShadow_IsSignalConnected((KWindowShadow*)self, (QMetaMethod*)signal);
}

bool k_windowshadow_qbase_is_signal_connected(void* self, void* signal) {
    return KWindowShadow_QBaseIsSignalConnected((KWindowShadow*)self, (QMetaMethod*)signal);
}

void k_windowshadow_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KWindowShadow_OnIsSignalConnected((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_windowshadow_delete(void* self) {
    KWindowShadow_Delete((KWindowShadow*)(self));
}
