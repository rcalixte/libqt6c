#include "../libqcoreevent.hpp"
#include "../libqlayout.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkcolumnresizer.hpp"
#include "libkcolumnresizer.h"

KColumnResizer* k_columnresizer_new() {
    return KColumnResizer_new();
}

KColumnResizer* k_columnresizer_new2(void* parent) {
    return KColumnResizer_new2((QObject*)parent);
}

const QMetaObject* k_columnresizer_meta_object(void* self) {
    return KColumnResizer_MetaObject((KColumnResizer*)self);
}

void* k_columnresizer_metacast(void* self, const char* param1) {
    return KColumnResizer_Metacast((KColumnResizer*)self, param1);
}

int32_t k_columnresizer_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColumnResizer_Metacall((KColumnResizer*)self, param1, param2, param3);
}

void k_columnresizer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KColumnResizer_OnMetacall((KColumnResizer*)self, (intptr_t)callback);
}

int32_t k_columnresizer_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColumnResizer_QBaseMetacall((KColumnResizer*)self, param1, param2, param3);
}

const char* k_columnresizer_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_columnresizer_add_widgets_from_layout(void* self, void* layout) {
    KColumnResizer_AddWidgetsFromLayout((KColumnResizer*)self, (QLayout*)layout);
}

void k_columnresizer_add_widget(void* self, void* widget) {
    KColumnResizer_AddWidget((KColumnResizer*)self, (QWidget*)widget);
}

void k_columnresizer_remove_widget(void* self, void* widget) {
    KColumnResizer_RemoveWidget((KColumnResizer*)self, (QWidget*)widget);
}

bool k_columnresizer_event_filter(void* self, void* param1, void* event) {
    return KColumnResizer_EventFilter((KColumnResizer*)self, (QObject*)param1, (QEvent*)event);
}

void k_columnresizer_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KColumnResizer_OnEventFilter((KColumnResizer*)self, (intptr_t)callback);
}

bool k_columnresizer_qbase_event_filter(void* self, void* param1, void* event) {
    return KColumnResizer_QBaseEventFilter((KColumnResizer*)self, (QObject*)param1, (QEvent*)event);
}

const char* k_columnresizer_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_columnresizer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_columnresizer_add_widgets_from_layout2(void* self, void* layout, int column) {
    KColumnResizer_AddWidgetsFromLayout2((KColumnResizer*)self, (QLayout*)layout, column);
}

const char* k_columnresizer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_columnresizer_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_columnresizer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_columnresizer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_columnresizer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_columnresizer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_columnresizer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_columnresizer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_columnresizer_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_columnresizer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_columnresizer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_columnresizer_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_columnresizer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_columnresizer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_columnresizer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_columnresizer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_columnresizer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_columnresizer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_columnresizer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_columnresizer_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_columnresizer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_columnresizer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_columnresizer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_columnresizer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_columnresizer_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_columnresizer_dynamic_property_names");
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

QBindingStorage* k_columnresizer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_columnresizer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_columnresizer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_columnresizer_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_columnresizer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_columnresizer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_columnresizer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_columnresizer_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_columnresizer_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_columnresizer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_columnresizer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_columnresizer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_columnresizer_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_columnresizer_event(void* self, void* event) {
    return KColumnResizer_Event((KColumnResizer*)self, (QEvent*)event);
}

bool k_columnresizer_qbase_event(void* self, void* event) {
    return KColumnResizer_QBaseEvent((KColumnResizer*)self, (QEvent*)event);
}

void k_columnresizer_on_event(void* self, bool (*callback)(void*, void*)) {
    KColumnResizer_OnEvent((KColumnResizer*)self, (intptr_t)callback);
}

void k_columnresizer_timer_event(void* self, void* event) {
    KColumnResizer_TimerEvent((KColumnResizer*)self, (QTimerEvent*)event);
}

void k_columnresizer_qbase_timer_event(void* self, void* event) {
    KColumnResizer_QBaseTimerEvent((KColumnResizer*)self, (QTimerEvent*)event);
}

void k_columnresizer_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KColumnResizer_OnTimerEvent((KColumnResizer*)self, (intptr_t)callback);
}

void k_columnresizer_child_event(void* self, void* event) {
    KColumnResizer_ChildEvent((KColumnResizer*)self, (QChildEvent*)event);
}

void k_columnresizer_qbase_child_event(void* self, void* event) {
    KColumnResizer_QBaseChildEvent((KColumnResizer*)self, (QChildEvent*)event);
}

void k_columnresizer_on_child_event(void* self, void (*callback)(void*, void*)) {
    KColumnResizer_OnChildEvent((KColumnResizer*)self, (intptr_t)callback);
}

void k_columnresizer_custom_event(void* self, void* event) {
    KColumnResizer_CustomEvent((KColumnResizer*)self, (QEvent*)event);
}

void k_columnresizer_qbase_custom_event(void* self, void* event) {
    KColumnResizer_QBaseCustomEvent((KColumnResizer*)self, (QEvent*)event);
}

void k_columnresizer_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KColumnResizer_OnCustomEvent((KColumnResizer*)self, (intptr_t)callback);
}

void k_columnresizer_connect_notify(void* self, void* signal) {
    KColumnResizer_ConnectNotify((KColumnResizer*)self, (QMetaMethod*)signal);
}

void k_columnresizer_qbase_connect_notify(void* self, void* signal) {
    KColumnResizer_QBaseConnectNotify((KColumnResizer*)self, (QMetaMethod*)signal);
}

void k_columnresizer_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KColumnResizer_OnConnectNotify((KColumnResizer*)self, (intptr_t)callback);
}

void k_columnresizer_disconnect_notify(void* self, void* signal) {
    KColumnResizer_DisconnectNotify((KColumnResizer*)self, (QMetaMethod*)signal);
}

void k_columnresizer_qbase_disconnect_notify(void* self, void* signal) {
    KColumnResizer_QBaseDisconnectNotify((KColumnResizer*)self, (QMetaMethod*)signal);
}

void k_columnresizer_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KColumnResizer_OnDisconnectNotify((KColumnResizer*)self, (intptr_t)callback);
}

QObject* k_columnresizer_sender(void* self) {
    return KColumnResizer_Sender((KColumnResizer*)self);
}

QObject* k_columnresizer_qbase_sender(void* self) {
    return KColumnResizer_QBaseSender((KColumnResizer*)self);
}

void k_columnresizer_on_sender(void* self, QObject* (*callback)()) {
    KColumnResizer_OnSender((KColumnResizer*)self, (intptr_t)callback);
}

int32_t k_columnresizer_sender_signal_index(void* self) {
    return KColumnResizer_SenderSignalIndex((KColumnResizer*)self);
}

int32_t k_columnresizer_qbase_sender_signal_index(void* self) {
    return KColumnResizer_QBaseSenderSignalIndex((KColumnResizer*)self);
}

void k_columnresizer_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KColumnResizer_OnSenderSignalIndex((KColumnResizer*)self, (intptr_t)callback);
}

int32_t k_columnresizer_receivers(void* self, const char* signal) {
    return KColumnResizer_Receivers((KColumnResizer*)self, signal);
}

int32_t k_columnresizer_qbase_receivers(void* self, const char* signal) {
    return KColumnResizer_QBaseReceivers((KColumnResizer*)self, signal);
}

void k_columnresizer_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KColumnResizer_OnReceivers((KColumnResizer*)self, (intptr_t)callback);
}

bool k_columnresizer_is_signal_connected(void* self, void* signal) {
    return KColumnResizer_IsSignalConnected((KColumnResizer*)self, (QMetaMethod*)signal);
}

bool k_columnresizer_qbase_is_signal_connected(void* self, void* signal) {
    return KColumnResizer_QBaseIsSignalConnected((KColumnResizer*)self, (QMetaMethod*)signal);
}

void k_columnresizer_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KColumnResizer_OnIsSignalConnected((KColumnResizer*)self, (intptr_t)callback);
}

void k_columnresizer_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_columnresizer_delete(void* self) {
    KColumnResizer_Delete((KColumnResizer*)(self));
}
