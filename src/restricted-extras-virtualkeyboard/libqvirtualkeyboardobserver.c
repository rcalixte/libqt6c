#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqvirtualkeyboardobserver.hpp"
#include "libqvirtualkeyboardobserver.h"

QVirtualKeyboardObserver* q_virtualkeyboardobserver_new() {
    return QVirtualKeyboardObserver_New();
}

QVirtualKeyboardObserver* q_virtualkeyboardobserver_new2(void* parent) {
    return QVirtualKeyboardObserver_New2((QObject*)parent);
}

const QMetaObject* q_virtualkeyboardobserver_meta_object(void* self) {
    return QVirtualKeyboardObserver_MetaObject((QVirtualKeyboardObserver*)self);
}

void q_virtualkeyboardobserver_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QVirtualKeyboardObserver_OnMetaObject((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

const QMetaObject* q_virtualkeyboardobserver_super_meta_object(void* self) {
    return QVirtualKeyboardObserver_SuperMetaObject((QVirtualKeyboardObserver*)self);
}

void* q_virtualkeyboardobserver_metacast(void* self, const char* param1) {
    return QVirtualKeyboardObserver_Metacast((QVirtualKeyboardObserver*)self, param1);
}

void q_virtualkeyboardobserver_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QVirtualKeyboardObserver_OnMetacast((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

void* q_virtualkeyboardobserver_super_metacast(void* self, const char* param1) {
    return QVirtualKeyboardObserver_SuperMetacast((QVirtualKeyboardObserver*)self, param1);
}

int32_t q_virtualkeyboardobserver_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardObserver_Metacall((QVirtualKeyboardObserver*)self, param1, param2, param3);
}

void q_virtualkeyboardobserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVirtualKeyboardObserver_OnMetacall((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

int32_t q_virtualkeyboardobserver_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardObserver_SuperMetacall((QVirtualKeyboardObserver*)self, param1, param2, param3);
}

const char* q_virtualkeyboardobserver_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_virtualkeyboardobserver_layout(void* self) {
    return QVirtualKeyboardObserver_Layout((QVirtualKeyboardObserver*)self);
}

void q_virtualkeyboardobserver_layout_changed(void* self) {
    QVirtualKeyboardObserver_LayoutChanged((QVirtualKeyboardObserver*)self);
}

void q_virtualkeyboardobserver_on_layout_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardObserver_Connect_LayoutChanged((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

const char* q_virtualkeyboardobserver_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_virtualkeyboardobserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_virtualkeyboardobserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_virtualkeyboardobserver_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_virtualkeyboardobserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_virtualkeyboardobserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_virtualkeyboardobserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_virtualkeyboardobserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_virtualkeyboardobserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_virtualkeyboardobserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_virtualkeyboardobserver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_virtualkeyboardobserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_virtualkeyboardobserver_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_virtualkeyboardobserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_virtualkeyboardobserver_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_virtualkeyboardobserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_virtualkeyboardobserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_virtualkeyboardobserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_virtualkeyboardobserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_virtualkeyboardobserver_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_virtualkeyboardobserver_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_virtualkeyboardobserver_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_virtualkeyboardobserver_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardobserver_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_virtualkeyboardobserver_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_virtualkeyboardobserver_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_virtualkeyboardobserver_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_virtualkeyboardobserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_virtualkeyboardobserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_virtualkeyboardobserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_virtualkeyboardobserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_virtualkeyboardobserver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboardobserver_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_virtualkeyboardobserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_virtualkeyboardobserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_virtualkeyboardobserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_virtualkeyboardobserver_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboardobserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_virtualkeyboardobserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_virtualkeyboardobserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_virtualkeyboardobserver_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_virtualkeyboardobserver_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_virtualkeyboardobserver_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_virtualkeyboardobserver_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_virtualkeyboardobserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_virtualkeyboardobserver_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_virtualkeyboardobserver_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_virtualkeyboardobserver_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboardobserver_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_virtualkeyboardobserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_virtualkeyboardobserver_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_virtualkeyboardobserver_event(void* self, void* event) {
    return QVirtualKeyboardObserver_Event((QVirtualKeyboardObserver*)self, (QEvent*)event);
}

bool q_virtualkeyboardobserver_super_event(void* self, void* event) {
    return QVirtualKeyboardObserver_SuperEvent((QVirtualKeyboardObserver*)self, (QEvent*)event);
}

void q_virtualkeyboardobserver_on_event(void* self, bool (*callback)(void*, void*)) {
    QVirtualKeyboardObserver_OnEvent((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

bool q_virtualkeyboardobserver_event_filter(void* self, void* watched, void* event) {
    return QVirtualKeyboardObserver_EventFilter((QVirtualKeyboardObserver*)self, (QObject*)watched, (QEvent*)event);
}

bool q_virtualkeyboardobserver_super_event_filter(void* self, void* watched, void* event) {
    return QVirtualKeyboardObserver_SuperEventFilter((QVirtualKeyboardObserver*)self, (QObject*)watched, (QEvent*)event);
}

void q_virtualkeyboardobserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVirtualKeyboardObserver_OnEventFilter((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

void q_virtualkeyboardobserver_timer_event(void* self, void* event) {
    QVirtualKeyboardObserver_TimerEvent((QVirtualKeyboardObserver*)self, (QTimerEvent*)event);
}

void q_virtualkeyboardobserver_super_timer_event(void* self, void* event) {
    QVirtualKeyboardObserver_SuperTimerEvent((QVirtualKeyboardObserver*)self, (QTimerEvent*)event);
}

void q_virtualkeyboardobserver_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardObserver_OnTimerEvent((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

void q_virtualkeyboardobserver_child_event(void* self, void* event) {
    QVirtualKeyboardObserver_ChildEvent((QVirtualKeyboardObserver*)self, (QChildEvent*)event);
}

void q_virtualkeyboardobserver_super_child_event(void* self, void* event) {
    QVirtualKeyboardObserver_SuperChildEvent((QVirtualKeyboardObserver*)self, (QChildEvent*)event);
}

void q_virtualkeyboardobserver_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardObserver_OnChildEvent((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

void q_virtualkeyboardobserver_custom_event(void* self, void* event) {
    QVirtualKeyboardObserver_CustomEvent((QVirtualKeyboardObserver*)self, (QEvent*)event);
}

void q_virtualkeyboardobserver_super_custom_event(void* self, void* event) {
    QVirtualKeyboardObserver_SuperCustomEvent((QVirtualKeyboardObserver*)self, (QEvent*)event);
}

void q_virtualkeyboardobserver_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardObserver_OnCustomEvent((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

void q_virtualkeyboardobserver_connect_notify(void* self, void* signal) {
    QVirtualKeyboardObserver_ConnectNotify((QVirtualKeyboardObserver*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardobserver_super_connect_notify(void* self, void* signal) {
    QVirtualKeyboardObserver_SuperConnectNotify((QVirtualKeyboardObserver*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardobserver_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardObserver_OnConnectNotify((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

void q_virtualkeyboardobserver_disconnect_notify(void* self, void* signal) {
    QVirtualKeyboardObserver_DisconnectNotify((QVirtualKeyboardObserver*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardobserver_super_disconnect_notify(void* self, void* signal) {
    QVirtualKeyboardObserver_SuperDisconnectNotify((QVirtualKeyboardObserver*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardobserver_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QVirtualKeyboardObserver_OnDisconnectNotify((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboardobserver_sender(void* self) {
    return QVirtualKeyboardObserver_Sender((QVirtualKeyboardObserver*)self);
}

QObject* q_virtualkeyboardobserver_super_sender(void* self) {
    return QVirtualKeyboardObserver_SuperSender((QVirtualKeyboardObserver*)self);
}

void q_virtualkeyboardobserver_on_sender(void* self, QObject* (*callback)()) {
    QVirtualKeyboardObserver_OnSender((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

int32_t q_virtualkeyboardobserver_sender_signal_index(void* self) {
    return QVirtualKeyboardObserver_SenderSignalIndex((QVirtualKeyboardObserver*)self);
}

int32_t q_virtualkeyboardobserver_super_sender_signal_index(void* self) {
    return QVirtualKeyboardObserver_SuperSenderSignalIndex((QVirtualKeyboardObserver*)self);
}

void q_virtualkeyboardobserver_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QVirtualKeyboardObserver_OnSenderSignalIndex((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

int32_t q_virtualkeyboardobserver_receivers(void* self, const char* signal) {
    return QVirtualKeyboardObserver_Receivers((QVirtualKeyboardObserver*)self, signal);
}

int32_t q_virtualkeyboardobserver_super_receivers(void* self, const char* signal) {
    return QVirtualKeyboardObserver_SuperReceivers((QVirtualKeyboardObserver*)self, signal);
}

void q_virtualkeyboardobserver_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QVirtualKeyboardObserver_OnReceivers((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

bool q_virtualkeyboardobserver_is_signal_connected(void* self, void* signal) {
    return QVirtualKeyboardObserver_IsSignalConnected((QVirtualKeyboardObserver*)self, (QMetaMethod*)signal);
}

bool q_virtualkeyboardobserver_super_is_signal_connected(void* self, void* signal) {
    return QVirtualKeyboardObserver_SuperIsSignalConnected((QVirtualKeyboardObserver*)self, (QMetaMethod*)signal);
}

void q_virtualkeyboardobserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QVirtualKeyboardObserver_OnIsSignalConnected((QVirtualKeyboardObserver*)self, (intptr_t)callback);
}

void q_virtualkeyboardobserver_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_virtualkeyboardobserver_delete(void* self) {
    QVirtualKeyboardObserver_Delete((QVirtualKeyboardObserver*)(self));
}
