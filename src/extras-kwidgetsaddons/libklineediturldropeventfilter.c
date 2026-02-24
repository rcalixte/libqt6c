#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libklineediturldropeventfilter.hpp"
#include "libklineediturldropeventfilter.h"

KLineEditUrlDropEventFilter* k_lineediturldropeventfilter_new() {
    return KLineEditUrlDropEventFilter_new();
}

KLineEditUrlDropEventFilter* k_lineediturldropeventfilter_new2(void* parent) {
    return KLineEditUrlDropEventFilter_new2((QObject*)parent);
}

const QMetaObject* k_lineediturldropeventfilter_meta_object(void* self) {
    return KLineEditUrlDropEventFilter_MetaObject((KLineEditUrlDropEventFilter*)self);
}

void k_lineediturldropeventfilter_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KLineEditUrlDropEventFilter_OnMetaObject((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

const QMetaObject* k_lineediturldropeventfilter_super_meta_object(void* self) {
    return KLineEditUrlDropEventFilter_SuperMetaObject((KLineEditUrlDropEventFilter*)self);
}

void* k_lineediturldropeventfilter_metacast(void* self, const char* param1) {
    return KLineEditUrlDropEventFilter_Metacast((KLineEditUrlDropEventFilter*)self, param1);
}

void k_lineediturldropeventfilter_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KLineEditUrlDropEventFilter_OnMetacast((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

void* k_lineediturldropeventfilter_super_metacast(void* self, const char* param1) {
    return KLineEditUrlDropEventFilter_SuperMetacast((KLineEditUrlDropEventFilter*)self, param1);
}

int32_t k_lineediturldropeventfilter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLineEditUrlDropEventFilter_Metacall((KLineEditUrlDropEventFilter*)self, param1, param2, param3);
}

void k_lineediturldropeventfilter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KLineEditUrlDropEventFilter_OnMetacall((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

int32_t k_lineediturldropeventfilter_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLineEditUrlDropEventFilter_SuperMetacall((KLineEditUrlDropEventFilter*)self, param1, param2, param3);
}

const char* k_lineediturldropeventfilter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_lineediturldropeventfilter_event_filter(void* self, void* object, void* event) {
    return KLineEditUrlDropEventFilter_EventFilter((KLineEditUrlDropEventFilter*)self, (QObject*)object, (QEvent*)event);
}

void k_lineediturldropeventfilter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KLineEditUrlDropEventFilter_OnEventFilter((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

bool k_lineediturldropeventfilter_super_event_filter(void* self, void* object, void* event) {
    return KLineEditUrlDropEventFilter_SuperEventFilter((KLineEditUrlDropEventFilter*)self, (QObject*)object, (QEvent*)event);
}

const char* k_lineediturldropeventfilter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lineediturldropeventfilter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_lineediturldropeventfilter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_lineediturldropeventfilter_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_lineediturldropeventfilter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_lineediturldropeventfilter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_lineediturldropeventfilter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_lineediturldropeventfilter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_lineediturldropeventfilter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_lineediturldropeventfilter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_lineediturldropeventfilter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_lineediturldropeventfilter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_lineediturldropeventfilter_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_lineediturldropeventfilter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_lineediturldropeventfilter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_lineediturldropeventfilter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_lineediturldropeventfilter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_lineediturldropeventfilter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_lineediturldropeventfilter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_lineediturldropeventfilter_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_lineediturldropeventfilter_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_lineediturldropeventfilter_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_lineediturldropeventfilter_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_lineediturldropeventfilter_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_lineediturldropeventfilter_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_lineediturldropeventfilter_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_lineediturldropeventfilter_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_lineediturldropeventfilter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_lineediturldropeventfilter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_lineediturldropeventfilter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_lineediturldropeventfilter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_lineediturldropeventfilter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_lineediturldropeventfilter_dynamic_property_names\n");
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

QBindingStorage* k_lineediturldropeventfilter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_lineediturldropeventfilter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_lineediturldropeventfilter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_lineediturldropeventfilter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_lineediturldropeventfilter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_lineediturldropeventfilter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_lineediturldropeventfilter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_lineediturldropeventfilter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_lineediturldropeventfilter_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_lineediturldropeventfilter_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_lineediturldropeventfilter_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_lineediturldropeventfilter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_lineediturldropeventfilter_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_lineediturldropeventfilter_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_lineediturldropeventfilter_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_lineediturldropeventfilter_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_lineediturldropeventfilter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_lineediturldropeventfilter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_lineediturldropeventfilter_event(void* self, void* event) {
    return KLineEditUrlDropEventFilter_Event((KLineEditUrlDropEventFilter*)self, (QEvent*)event);
}

bool k_lineediturldropeventfilter_super_event(void* self, void* event) {
    return KLineEditUrlDropEventFilter_SuperEvent((KLineEditUrlDropEventFilter*)self, (QEvent*)event);
}

void k_lineediturldropeventfilter_on_event(void* self, bool (*callback)(void*, void*)) {
    KLineEditUrlDropEventFilter_OnEvent((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

void k_lineediturldropeventfilter_timer_event(void* self, void* event) {
    KLineEditUrlDropEventFilter_TimerEvent((KLineEditUrlDropEventFilter*)self, (QTimerEvent*)event);
}

void k_lineediturldropeventfilter_super_timer_event(void* self, void* event) {
    KLineEditUrlDropEventFilter_SuperTimerEvent((KLineEditUrlDropEventFilter*)self, (QTimerEvent*)event);
}

void k_lineediturldropeventfilter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KLineEditUrlDropEventFilter_OnTimerEvent((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

void k_lineediturldropeventfilter_child_event(void* self, void* event) {
    KLineEditUrlDropEventFilter_ChildEvent((KLineEditUrlDropEventFilter*)self, (QChildEvent*)event);
}

void k_lineediturldropeventfilter_super_child_event(void* self, void* event) {
    KLineEditUrlDropEventFilter_SuperChildEvent((KLineEditUrlDropEventFilter*)self, (QChildEvent*)event);
}

void k_lineediturldropeventfilter_on_child_event(void* self, void (*callback)(void*, void*)) {
    KLineEditUrlDropEventFilter_OnChildEvent((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

void k_lineediturldropeventfilter_custom_event(void* self, void* event) {
    KLineEditUrlDropEventFilter_CustomEvent((KLineEditUrlDropEventFilter*)self, (QEvent*)event);
}

void k_lineediturldropeventfilter_super_custom_event(void* self, void* event) {
    KLineEditUrlDropEventFilter_SuperCustomEvent((KLineEditUrlDropEventFilter*)self, (QEvent*)event);
}

void k_lineediturldropeventfilter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KLineEditUrlDropEventFilter_OnCustomEvent((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

void k_lineediturldropeventfilter_connect_notify(void* self, void* signal) {
    KLineEditUrlDropEventFilter_ConnectNotify((KLineEditUrlDropEventFilter*)self, (QMetaMethod*)signal);
}

void k_lineediturldropeventfilter_super_connect_notify(void* self, void* signal) {
    KLineEditUrlDropEventFilter_SuperConnectNotify((KLineEditUrlDropEventFilter*)self, (QMetaMethod*)signal);
}

void k_lineediturldropeventfilter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KLineEditUrlDropEventFilter_OnConnectNotify((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

void k_lineediturldropeventfilter_disconnect_notify(void* self, void* signal) {
    KLineEditUrlDropEventFilter_DisconnectNotify((KLineEditUrlDropEventFilter*)self, (QMetaMethod*)signal);
}

void k_lineediturldropeventfilter_super_disconnect_notify(void* self, void* signal) {
    KLineEditUrlDropEventFilter_SuperDisconnectNotify((KLineEditUrlDropEventFilter*)self, (QMetaMethod*)signal);
}

void k_lineediturldropeventfilter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KLineEditUrlDropEventFilter_OnDisconnectNotify((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

QObject* k_lineediturldropeventfilter_sender(void* self) {
    return KLineEditUrlDropEventFilter_Sender((KLineEditUrlDropEventFilter*)self);
}

QObject* k_lineediturldropeventfilter_super_sender(void* self) {
    return KLineEditUrlDropEventFilter_SuperSender((KLineEditUrlDropEventFilter*)self);
}

void k_lineediturldropeventfilter_on_sender(void* self, QObject* (*callback)()) {
    KLineEditUrlDropEventFilter_OnSender((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

int32_t k_lineediturldropeventfilter_sender_signal_index(void* self) {
    return KLineEditUrlDropEventFilter_SenderSignalIndex((KLineEditUrlDropEventFilter*)self);
}

int32_t k_lineediturldropeventfilter_super_sender_signal_index(void* self) {
    return KLineEditUrlDropEventFilter_SuperSenderSignalIndex((KLineEditUrlDropEventFilter*)self);
}

void k_lineediturldropeventfilter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KLineEditUrlDropEventFilter_OnSenderSignalIndex((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

int32_t k_lineediturldropeventfilter_receivers(void* self, const char* signal) {
    return KLineEditUrlDropEventFilter_Receivers((KLineEditUrlDropEventFilter*)self, signal);
}

int32_t k_lineediturldropeventfilter_super_receivers(void* self, const char* signal) {
    return KLineEditUrlDropEventFilter_SuperReceivers((KLineEditUrlDropEventFilter*)self, signal);
}

void k_lineediturldropeventfilter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KLineEditUrlDropEventFilter_OnReceivers((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

bool k_lineediturldropeventfilter_is_signal_connected(void* self, void* signal) {
    return KLineEditUrlDropEventFilter_IsSignalConnected((KLineEditUrlDropEventFilter*)self, (QMetaMethod*)signal);
}

bool k_lineediturldropeventfilter_super_is_signal_connected(void* self, void* signal) {
    return KLineEditUrlDropEventFilter_SuperIsSignalConnected((KLineEditUrlDropEventFilter*)self, (QMetaMethod*)signal);
}

void k_lineediturldropeventfilter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KLineEditUrlDropEventFilter_OnIsSignalConnected((KLineEditUrlDropEventFilter*)self, (intptr_t)callback);
}

void k_lineediturldropeventfilter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_lineediturldropeventfilter_delete(void* self) {
    KLineEditUrlDropEventFilter_Delete((KLineEditUrlDropEventFilter*)(self));
}
