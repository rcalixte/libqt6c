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

void k_windowshadow_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KWindowShadow_OnMetaObject((KWindowShadow*)self, (intptr_t)callback);
}

const QMetaObject* k_windowshadow_super_meta_object(void* self) {
    return KWindowShadow_SuperMetaObject((KWindowShadow*)self);
}

void* k_windowshadow_metacast(void* self, const char* param1) {
    return KWindowShadow_Metacast((KWindowShadow*)self, param1);
}

void k_windowshadow_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KWindowShadow_OnMetacast((KWindowShadow*)self, (intptr_t)callback);
}

void* k_windowshadow_super_metacast(void* self, const char* param1) {
    return KWindowShadow_SuperMetacast((KWindowShadow*)self, param1);
}

int32_t k_windowshadow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWindowShadow_Metacall((KWindowShadow*)self, param1, param2, param3);
}

void k_windowshadow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KWindowShadow_OnMetacall((KWindowShadow*)self, (intptr_t)callback);
}

int32_t k_windowshadow_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWindowShadow_SuperMetacall((KWindowShadow*)self, param1, param2, param3);
}

const char* k_windowshadow_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
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
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowshadow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
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

void k_windowshadow_set_object_name(void* self, const char* name) {
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

int32_t k_windowshadow_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
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

QMetaObject__Connection* k_windowshadow_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_windowshadow_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_windowshadow_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_windowshadow_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_windowshadow_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_windowshadow_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_windowshadow_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_windowshadow_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
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
        fprintf(stderr, "Failed to allocate memory for string list in k_windowshadow_dynamic_property_names\n");
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

int32_t k_windowshadow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_windowshadow_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_windowshadow_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_windowshadow_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_windowshadow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_windowshadow_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_windowshadow_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_windowshadow_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_windowshadow_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
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

bool k_windowshadow_super_event(void* self, void* event) {
    return KWindowShadow_SuperEvent((KWindowShadow*)self, (QEvent*)event);
}

void k_windowshadow_on_event(void* self, bool (*callback)(void*, void*)) {
    KWindowShadow_OnEvent((KWindowShadow*)self, (intptr_t)callback);
}

bool k_windowshadow_event_filter(void* self, void* watched, void* event) {
    return KWindowShadow_EventFilter((KWindowShadow*)self, (QObject*)watched, (QEvent*)event);
}

bool k_windowshadow_super_event_filter(void* self, void* watched, void* event) {
    return KWindowShadow_SuperEventFilter((KWindowShadow*)self, (QObject*)watched, (QEvent*)event);
}

void k_windowshadow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KWindowShadow_OnEventFilter((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_timer_event(void* self, void* event) {
    KWindowShadow_TimerEvent((KWindowShadow*)self, (QTimerEvent*)event);
}

void k_windowshadow_super_timer_event(void* self, void* event) {
    KWindowShadow_SuperTimerEvent((KWindowShadow*)self, (QTimerEvent*)event);
}

void k_windowshadow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnTimerEvent((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_child_event(void* self, void* event) {
    KWindowShadow_ChildEvent((KWindowShadow*)self, (QChildEvent*)event);
}

void k_windowshadow_super_child_event(void* self, void* event) {
    KWindowShadow_SuperChildEvent((KWindowShadow*)self, (QChildEvent*)event);
}

void k_windowshadow_on_child_event(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnChildEvent((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_custom_event(void* self, void* event) {
    KWindowShadow_CustomEvent((KWindowShadow*)self, (QEvent*)event);
}

void k_windowshadow_super_custom_event(void* self, void* event) {
    KWindowShadow_SuperCustomEvent((KWindowShadow*)self, (QEvent*)event);
}

void k_windowshadow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnCustomEvent((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_connect_notify(void* self, void* signal) {
    KWindowShadow_ConnectNotify((KWindowShadow*)self, (QMetaMethod*)signal);
}

void k_windowshadow_super_connect_notify(void* self, void* signal) {
    KWindowShadow_SuperConnectNotify((KWindowShadow*)self, (QMetaMethod*)signal);
}

void k_windowshadow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnConnectNotify((KWindowShadow*)self, (intptr_t)callback);
}

void k_windowshadow_disconnect_notify(void* self, void* signal) {
    KWindowShadow_DisconnectNotify((KWindowShadow*)self, (QMetaMethod*)signal);
}

void k_windowshadow_super_disconnect_notify(void* self, void* signal) {
    KWindowShadow_SuperDisconnectNotify((KWindowShadow*)self, (QMetaMethod*)signal);
}

void k_windowshadow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KWindowShadow_OnDisconnectNotify((KWindowShadow*)self, (intptr_t)callback);
}

QObject* k_windowshadow_sender(void* self) {
    return KWindowShadow_Sender((KWindowShadow*)self);
}

QObject* k_windowshadow_super_sender(void* self) {
    return KWindowShadow_SuperSender((KWindowShadow*)self);
}

void k_windowshadow_on_sender(void* self, QObject* (*callback)()) {
    KWindowShadow_OnSender((KWindowShadow*)self, (intptr_t)callback);
}

int32_t k_windowshadow_sender_signal_index(void* self) {
    return KWindowShadow_SenderSignalIndex((KWindowShadow*)self);
}

int32_t k_windowshadow_super_sender_signal_index(void* self) {
    return KWindowShadow_SuperSenderSignalIndex((KWindowShadow*)self);
}

void k_windowshadow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KWindowShadow_OnSenderSignalIndex((KWindowShadow*)self, (intptr_t)callback);
}

int32_t k_windowshadow_receivers(void* self, const char* signal) {
    return KWindowShadow_Receivers((KWindowShadow*)self, signal);
}

int32_t k_windowshadow_super_receivers(void* self, const char* signal) {
    return KWindowShadow_SuperReceivers((KWindowShadow*)self, signal);
}

void k_windowshadow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KWindowShadow_OnReceivers((KWindowShadow*)self, (intptr_t)callback);
}

bool k_windowshadow_is_signal_connected(void* self, void* signal) {
    return KWindowShadow_IsSignalConnected((KWindowShadow*)self, (QMetaMethod*)signal);
}

bool k_windowshadow_super_is_signal_connected(void* self, void* signal) {
    return KWindowShadow_SuperIsSignalConnected((KWindowShadow*)self, (QMetaMethod*)signal);
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
