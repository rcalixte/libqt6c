#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvalidator.hpp"
#include "libkdatevalidator.hpp"
#include "libkdatevalidator.h"

KDateValidator* k_datevalidator_new() {
    return KDateValidator_new();
}

KDateValidator* k_datevalidator_new2(void* parent) {
    return KDateValidator_new2((QObject*)parent);
}

const QMetaObject* k_datevalidator_meta_object(void* self) {
    return KDateValidator_MetaObject((KDateValidator*)self);
}

void k_datevalidator_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KDateValidator_OnMetaObject((KDateValidator*)self, (intptr_t)callback);
}

const QMetaObject* k_datevalidator_qbase_meta_object(void* self) {
    return KDateValidator_QBaseMetaObject((KDateValidator*)self);
}

void* k_datevalidator_metacast(void* self, const char* param1) {
    return KDateValidator_Metacast((KDateValidator*)self, param1);
}

void k_datevalidator_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KDateValidator_OnMetacast((KDateValidator*)self, (intptr_t)callback);
}

void* k_datevalidator_qbase_metacast(void* self, const char* param1) {
    return KDateValidator_QBaseMetacast((KDateValidator*)self, param1);
}

int32_t k_datevalidator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDateValidator_Metacall((KDateValidator*)self, param1, param2, param3);
}

void k_datevalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDateValidator_OnMetacall((KDateValidator*)self, (intptr_t)callback);
}

int32_t k_datevalidator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDateValidator_QBaseMetacall((KDateValidator*)self, param1, param2, param3);
}

const char* k_datevalidator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_datevalidator_validate(void* self, const char* text, int* e) {
    return KDateValidator_Validate((KDateValidator*)self, qstring(text), e);
}

void k_datevalidator_on_validate(void* self, int32_t (*callback)(void*, const char*, int*)) {
    KDateValidator_OnValidate((KDateValidator*)self, (intptr_t)callback);
}

int32_t k_datevalidator_qbase_validate(void* self, const char* text, int* e) {
    return KDateValidator_QBaseValidate((KDateValidator*)self, qstring(text), e);
}

void k_datevalidator_fixup(void* self, const char* input) {
    KDateValidator_Fixup((KDateValidator*)self, qstring(input));
}

void k_datevalidator_on_fixup(void* self, void (*callback)(void*, const char*)) {
    KDateValidator_OnFixup((KDateValidator*)self, (intptr_t)callback);
}

void k_datevalidator_qbase_fixup(void* self, const char* input) {
    KDateValidator_QBaseFixup((KDateValidator*)self, qstring(input));
}

int32_t k_datevalidator_date(void* self, const char* text, void* date) {
    return KDateValidator_Date((KDateValidator*)self, qstring(text), (QDate*)date);
}

const char* k_datevalidator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datevalidator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datevalidator_set_locale(void* self, void* locale) {
    QValidator_SetLocale((QValidator*)self, (QLocale*)locale);
}

QLocale* k_datevalidator_locale(void* self) {
    return QValidator_Locale((QValidator*)self);
}

void k_datevalidator_changed(void* self) {
    QValidator_Changed((QValidator*)self);
}

void k_datevalidator_on_changed(void* self, void (*callback)(void*)) {
    QValidator_Connect_Changed((QValidator*)self, (intptr_t)callback);
}

const char* k_datevalidator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datevalidator_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_datevalidator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_datevalidator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_datevalidator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_datevalidator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_datevalidator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_datevalidator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_datevalidator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_datevalidator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_datevalidator_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_datevalidator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_datevalidator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_datevalidator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_datevalidator_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_datevalidator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_datevalidator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_datevalidator_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_datevalidator_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_datevalidator_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_datevalidator_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_datevalidator_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_datevalidator_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_datevalidator_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_datevalidator_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_datevalidator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_datevalidator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_datevalidator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_datevalidator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_datevalidator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_datevalidator_dynamic_property_names\n");
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

QBindingStorage* k_datevalidator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_datevalidator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_datevalidator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_datevalidator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_datevalidator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_datevalidator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_datevalidator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_datevalidator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_datevalidator_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_datevalidator_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_datevalidator_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_datevalidator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_datevalidator_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_datevalidator_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_datevalidator_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_datevalidator_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_datevalidator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_datevalidator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_datevalidator_event(void* self, void* event) {
    return KDateValidator_Event((KDateValidator*)self, (QEvent*)event);
}

bool k_datevalidator_qbase_event(void* self, void* event) {
    return KDateValidator_QBaseEvent((KDateValidator*)self, (QEvent*)event);
}

void k_datevalidator_on_event(void* self, bool (*callback)(void*, void*)) {
    KDateValidator_OnEvent((KDateValidator*)self, (intptr_t)callback);
}

bool k_datevalidator_event_filter(void* self, void* watched, void* event) {
    return KDateValidator_EventFilter((KDateValidator*)self, (QObject*)watched, (QEvent*)event);
}

bool k_datevalidator_qbase_event_filter(void* self, void* watched, void* event) {
    return KDateValidator_QBaseEventFilter((KDateValidator*)self, (QObject*)watched, (QEvent*)event);
}

void k_datevalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDateValidator_OnEventFilter((KDateValidator*)self, (intptr_t)callback);
}

void k_datevalidator_timer_event(void* self, void* event) {
    KDateValidator_TimerEvent((KDateValidator*)self, (QTimerEvent*)event);
}

void k_datevalidator_qbase_timer_event(void* self, void* event) {
    KDateValidator_QBaseTimerEvent((KDateValidator*)self, (QTimerEvent*)event);
}

void k_datevalidator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDateValidator_OnTimerEvent((KDateValidator*)self, (intptr_t)callback);
}

void k_datevalidator_child_event(void* self, void* event) {
    KDateValidator_ChildEvent((KDateValidator*)self, (QChildEvent*)event);
}

void k_datevalidator_qbase_child_event(void* self, void* event) {
    KDateValidator_QBaseChildEvent((KDateValidator*)self, (QChildEvent*)event);
}

void k_datevalidator_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDateValidator_OnChildEvent((KDateValidator*)self, (intptr_t)callback);
}

void k_datevalidator_custom_event(void* self, void* event) {
    KDateValidator_CustomEvent((KDateValidator*)self, (QEvent*)event);
}

void k_datevalidator_qbase_custom_event(void* self, void* event) {
    KDateValidator_QBaseCustomEvent((KDateValidator*)self, (QEvent*)event);
}

void k_datevalidator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDateValidator_OnCustomEvent((KDateValidator*)self, (intptr_t)callback);
}

void k_datevalidator_connect_notify(void* self, void* signal) {
    KDateValidator_ConnectNotify((KDateValidator*)self, (QMetaMethod*)signal);
}

void k_datevalidator_qbase_connect_notify(void* self, void* signal) {
    KDateValidator_QBaseConnectNotify((KDateValidator*)self, (QMetaMethod*)signal);
}

void k_datevalidator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDateValidator_OnConnectNotify((KDateValidator*)self, (intptr_t)callback);
}

void k_datevalidator_disconnect_notify(void* self, void* signal) {
    KDateValidator_DisconnectNotify((KDateValidator*)self, (QMetaMethod*)signal);
}

void k_datevalidator_qbase_disconnect_notify(void* self, void* signal) {
    KDateValidator_QBaseDisconnectNotify((KDateValidator*)self, (QMetaMethod*)signal);
}

void k_datevalidator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDateValidator_OnDisconnectNotify((KDateValidator*)self, (intptr_t)callback);
}

QObject* k_datevalidator_sender(void* self) {
    return KDateValidator_Sender((KDateValidator*)self);
}

QObject* k_datevalidator_qbase_sender(void* self) {
    return KDateValidator_QBaseSender((KDateValidator*)self);
}

void k_datevalidator_on_sender(void* self, QObject* (*callback)()) {
    KDateValidator_OnSender((KDateValidator*)self, (intptr_t)callback);
}

int32_t k_datevalidator_sender_signal_index(void* self) {
    return KDateValidator_SenderSignalIndex((KDateValidator*)self);
}

int32_t k_datevalidator_qbase_sender_signal_index(void* self) {
    return KDateValidator_QBaseSenderSignalIndex((KDateValidator*)self);
}

void k_datevalidator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDateValidator_OnSenderSignalIndex((KDateValidator*)self, (intptr_t)callback);
}

int32_t k_datevalidator_receivers(void* self, const char* signal) {
    return KDateValidator_Receivers((KDateValidator*)self, signal);
}

int32_t k_datevalidator_qbase_receivers(void* self, const char* signal) {
    return KDateValidator_QBaseReceivers((KDateValidator*)self, signal);
}

void k_datevalidator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDateValidator_OnReceivers((KDateValidator*)self, (intptr_t)callback);
}

bool k_datevalidator_is_signal_connected(void* self, void* signal) {
    return KDateValidator_IsSignalConnected((KDateValidator*)self, (QMetaMethod*)signal);
}

bool k_datevalidator_qbase_is_signal_connected(void* self, void* signal) {
    return KDateValidator_QBaseIsSignalConnected((KDateValidator*)self, (QMetaMethod*)signal);
}

void k_datevalidator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDateValidator_OnIsSignalConnected((KDateValidator*)self, (intptr_t)callback);
}

void k_datevalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_datevalidator_delete(void* self) {
    KDateValidator_Delete((KDateValidator*)(self));
}
