#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvalidator.hpp"
#include "libkemailvalidator.hpp"
#include "libkemailvalidator.h"

KEmailValidator* k_emailvalidator_new() {
    return KEmailValidator_new();
}

KEmailValidator* k_emailvalidator_new2(void* parent) {
    return KEmailValidator_new2((QObject*)parent);
}

const QMetaObject* k_emailvalidator_meta_object(void* self) {
    return KEmailValidator_MetaObject((KEmailValidator*)self);
}

void* k_emailvalidator_metacast(void* self, const char* param1) {
    return KEmailValidator_Metacast((KEmailValidator*)self, param1);
}

int32_t k_emailvalidator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KEmailValidator_Metacall((KEmailValidator*)self, param1, param2, param3);
}

void k_emailvalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KEmailValidator_OnMetacall((KEmailValidator*)self, (intptr_t)callback);
}

int32_t k_emailvalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KEmailValidator_QBaseMetacall((KEmailValidator*)self, param1, param2, param3);
}

const char* k_emailvalidator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_emailvalidator_validate(void* self, const char* str, int* pos) {
    return KEmailValidator_Validate((KEmailValidator*)self, qstring(str), pos);
}

void k_emailvalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*)) {
    KEmailValidator_OnValidate((KEmailValidator*)self, (intptr_t)callback);
}

int32_t k_emailvalidator_qbase_validate(void* self, const char* str, int* pos) {
    return KEmailValidator_QBaseValidate((KEmailValidator*)self, qstring(str), pos);
}

void k_emailvalidator_fixup(void* self, const char* str) {
    KEmailValidator_Fixup((KEmailValidator*)self, qstring(str));
}

void k_emailvalidator_on_fixup(void* self, void (*callback)(void*, const char*)) {
    KEmailValidator_OnFixup((KEmailValidator*)self, (intptr_t)callback);
}

void k_emailvalidator_qbase_fixup(void* self, const char* str) {
    KEmailValidator_QBaseFixup((KEmailValidator*)self, qstring(str));
}

const char* k_emailvalidator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailvalidator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_emailvalidator_set_locale(void* self, void* locale) {
    QValidator_SetLocale((QValidator*)self, (QLocale*)locale);
}

QLocale* k_emailvalidator_locale(void* self) {
    return QValidator_Locale((QValidator*)self);
}

void k_emailvalidator_changed(void* self) {
    QValidator_Changed((QValidator*)self);
}

void k_emailvalidator_on_changed(void* self, void (*callback)(void*)) {
    QValidator_Connect_Changed((QValidator*)self, (intptr_t)callback);
}

const char* k_emailvalidator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_emailvalidator_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_emailvalidator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_emailvalidator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_emailvalidator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_emailvalidator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_emailvalidator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_emailvalidator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_emailvalidator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_emailvalidator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_emailvalidator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_emailvalidator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_emailvalidator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_emailvalidator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_emailvalidator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_emailvalidator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_emailvalidator_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_emailvalidator_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_emailvalidator_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_emailvalidator_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_emailvalidator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_emailvalidator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_emailvalidator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_emailvalidator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_emailvalidator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_emailvalidator_dynamic_property_names");
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

QBindingStorage* k_emailvalidator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_emailvalidator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_emailvalidator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_emailvalidator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_emailvalidator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_emailvalidator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_emailvalidator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_emailvalidator_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_emailvalidator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_emailvalidator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_emailvalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_emailvalidator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_emailvalidator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_emailvalidator_event(void* self, void* event) {
    return KEmailValidator_Event((KEmailValidator*)self, (QEvent*)event);
}

bool k_emailvalidator_qbase_event(void* self, void* event) {
    return KEmailValidator_QBaseEvent((KEmailValidator*)self, (QEvent*)event);
}

void k_emailvalidator_on_event(void* self, bool (*callback)(void*, void*)) {
    KEmailValidator_OnEvent((KEmailValidator*)self, (intptr_t)callback);
}

bool k_emailvalidator_event_filter(void* self, void* watched, void* event) {
    return KEmailValidator_EventFilter((KEmailValidator*)self, (QObject*)watched, (QEvent*)event);
}

bool k_emailvalidator_qbase_event_filter(void* self, void* watched, void* event) {
    return KEmailValidator_QBaseEventFilter((KEmailValidator*)self, (QObject*)watched, (QEvent*)event);
}

void k_emailvalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KEmailValidator_OnEventFilter((KEmailValidator*)self, (intptr_t)callback);
}

void k_emailvalidator_timer_event(void* self, void* event) {
    KEmailValidator_TimerEvent((KEmailValidator*)self, (QTimerEvent*)event);
}

void k_emailvalidator_qbase_timer_event(void* self, void* event) {
    KEmailValidator_QBaseTimerEvent((KEmailValidator*)self, (QTimerEvent*)event);
}

void k_emailvalidator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KEmailValidator_OnTimerEvent((KEmailValidator*)self, (intptr_t)callback);
}

void k_emailvalidator_child_event(void* self, void* event) {
    KEmailValidator_ChildEvent((KEmailValidator*)self, (QChildEvent*)event);
}

void k_emailvalidator_qbase_child_event(void* self, void* event) {
    KEmailValidator_QBaseChildEvent((KEmailValidator*)self, (QChildEvent*)event);
}

void k_emailvalidator_on_child_event(void* self, void (*callback)(void*, void*)) {
    KEmailValidator_OnChildEvent((KEmailValidator*)self, (intptr_t)callback);
}

void k_emailvalidator_custom_event(void* self, void* event) {
    KEmailValidator_CustomEvent((KEmailValidator*)self, (QEvent*)event);
}

void k_emailvalidator_qbase_custom_event(void* self, void* event) {
    KEmailValidator_QBaseCustomEvent((KEmailValidator*)self, (QEvent*)event);
}

void k_emailvalidator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KEmailValidator_OnCustomEvent((KEmailValidator*)self, (intptr_t)callback);
}

void k_emailvalidator_connect_notify(void* self, void* signal) {
    KEmailValidator_ConnectNotify((KEmailValidator*)self, (QMetaMethod*)signal);
}

void k_emailvalidator_qbase_connect_notify(void* self, void* signal) {
    KEmailValidator_QBaseConnectNotify((KEmailValidator*)self, (QMetaMethod*)signal);
}

void k_emailvalidator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KEmailValidator_OnConnectNotify((KEmailValidator*)self, (intptr_t)callback);
}

void k_emailvalidator_disconnect_notify(void* self, void* signal) {
    KEmailValidator_DisconnectNotify((KEmailValidator*)self, (QMetaMethod*)signal);
}

void k_emailvalidator_qbase_disconnect_notify(void* self, void* signal) {
    KEmailValidator_QBaseDisconnectNotify((KEmailValidator*)self, (QMetaMethod*)signal);
}

void k_emailvalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KEmailValidator_OnDisconnectNotify((KEmailValidator*)self, (intptr_t)callback);
}

QObject* k_emailvalidator_sender(void* self) {
    return KEmailValidator_Sender((KEmailValidator*)self);
}

QObject* k_emailvalidator_qbase_sender(void* self) {
    return KEmailValidator_QBaseSender((KEmailValidator*)self);
}

void k_emailvalidator_on_sender(void* self, QObject* (*callback)()) {
    KEmailValidator_OnSender((KEmailValidator*)self, (intptr_t)callback);
}

int32_t k_emailvalidator_sender_signal_index(void* self) {
    return KEmailValidator_SenderSignalIndex((KEmailValidator*)self);
}

int32_t k_emailvalidator_qbase_sender_signal_index(void* self) {
    return KEmailValidator_QBaseSenderSignalIndex((KEmailValidator*)self);
}

void k_emailvalidator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KEmailValidator_OnSenderSignalIndex((KEmailValidator*)self, (intptr_t)callback);
}

int32_t k_emailvalidator_receivers(void* self, const char* signal) {
    return KEmailValidator_Receivers((KEmailValidator*)self, signal);
}

int32_t k_emailvalidator_qbase_receivers(void* self, const char* signal) {
    return KEmailValidator_QBaseReceivers((KEmailValidator*)self, signal);
}

void k_emailvalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KEmailValidator_OnReceivers((KEmailValidator*)self, (intptr_t)callback);
}

bool k_emailvalidator_is_signal_connected(void* self, void* signal) {
    return KEmailValidator_IsSignalConnected((KEmailValidator*)self, (QMetaMethod*)signal);
}

bool k_emailvalidator_qbase_is_signal_connected(void* self, void* signal) {
    return KEmailValidator_QBaseIsSignalConnected((KEmailValidator*)self, (QMetaMethod*)signal);
}

void k_emailvalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KEmailValidator_OnIsSignalConnected((KEmailValidator*)self, (intptr_t)callback);
}

void k_emailvalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_emailvalidator_delete(void* self) {
    KEmailValidator_Delete((KEmailValidator*)(self));
}
