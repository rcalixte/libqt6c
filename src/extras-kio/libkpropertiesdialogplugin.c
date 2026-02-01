#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkpropertiesdialogplugin.hpp"
#include "libkpropertiesdialogplugin.h"

KPropertiesDialogPlugin* k_propertiesdialogplugin_new(void* parent) {
    return KPropertiesDialogPlugin_new((QObject*)parent);
}

const QMetaObject* k_propertiesdialogplugin_meta_object(void* self) {
    return KPropertiesDialogPlugin_MetaObject((KPropertiesDialogPlugin*)self);
}

void k_propertiesdialogplugin_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KPropertiesDialogPlugin_OnMetaObject((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

const QMetaObject* k_propertiesdialogplugin_qbase_meta_object(void* self) {
    return KPropertiesDialogPlugin_QBaseMetaObject((KPropertiesDialogPlugin*)self);
}

void* k_propertiesdialogplugin_metacast(void* self, const char* param1) {
    return KPropertiesDialogPlugin_Metacast((KPropertiesDialogPlugin*)self, param1);
}

void k_propertiesdialogplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KPropertiesDialogPlugin_OnMetacast((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

void* k_propertiesdialogplugin_qbase_metacast(void* self, const char* param1) {
    return KPropertiesDialogPlugin_QBaseMetacast((KPropertiesDialogPlugin*)self, param1);
}

int32_t k_propertiesdialogplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPropertiesDialogPlugin_Metacall((KPropertiesDialogPlugin*)self, param1, param2, param3);
}

void k_propertiesdialogplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPropertiesDialogPlugin_OnMetacall((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

int32_t k_propertiesdialogplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPropertiesDialogPlugin_QBaseMetacall((KPropertiesDialogPlugin*)self, param1, param2, param3);
}

const char* k_propertiesdialogplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialogplugin_apply_changes(void* self) {
    KPropertiesDialogPlugin_ApplyChanges((KPropertiesDialogPlugin*)self);
}

void k_propertiesdialogplugin_on_apply_changes(void* self, void (*callback)()) {
    KPropertiesDialogPlugin_OnApplyChanges((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

void k_propertiesdialogplugin_qbase_apply_changes(void* self) {
    KPropertiesDialogPlugin_QBaseApplyChanges((KPropertiesDialogPlugin*)self);
}

void k_propertiesdialogplugin_set_dirty(void* self) {
    KPropertiesDialogPlugin_SetDirty((KPropertiesDialogPlugin*)self);
}

bool k_propertiesdialogplugin_is_dirty(void* self) {
    return KPropertiesDialogPlugin_IsDirty((KPropertiesDialogPlugin*)self);
}

void k_propertiesdialogplugin_changed(void* self) {
    KPropertiesDialogPlugin_Changed((KPropertiesDialogPlugin*)self);
}

void k_propertiesdialogplugin_on_changed(void* self, void (*callback)(void*)) {
    KPropertiesDialogPlugin_Connect_Changed((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

int32_t k_propertiesdialogplugin_font_height(void* self) {
    return KPropertiesDialogPlugin_FontHeight((KPropertiesDialogPlugin*)self);
}

void k_propertiesdialogplugin_on_font_height(void* self, int32_t (*callback)()) {
    KPropertiesDialogPlugin_OnFontHeight((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

int32_t k_propertiesdialogplugin_qbase_font_height(void* self) {
    return KPropertiesDialogPlugin_QBaseFontHeight((KPropertiesDialogPlugin*)self);
}

const char* k_propertiesdialogplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_propertiesdialogplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialogplugin_set_dirty1(void* self, bool b) {
    KPropertiesDialogPlugin_SetDirty1((KPropertiesDialogPlugin*)self, b);
}

const char* k_propertiesdialogplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_propertiesdialogplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_propertiesdialogplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_propertiesdialogplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_propertiesdialogplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_propertiesdialogplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_propertiesdialogplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_propertiesdialogplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_propertiesdialogplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_propertiesdialogplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_propertiesdialogplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_propertiesdialogplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_propertiesdialogplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_propertiesdialogplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_propertiesdialogplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_propertiesdialogplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_propertiesdialogplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_propertiesdialogplugin_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_propertiesdialogplugin_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_propertiesdialogplugin_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_propertiesdialogplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_propertiesdialogplugin_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_propertiesdialogplugin_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_propertiesdialogplugin_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_propertiesdialogplugin_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_propertiesdialogplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_propertiesdialogplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_propertiesdialogplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_propertiesdialogplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_propertiesdialogplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_propertiesdialogplugin_dynamic_property_names\n");
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

QBindingStorage* k_propertiesdialogplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_propertiesdialogplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_propertiesdialogplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_propertiesdialogplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_propertiesdialogplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_propertiesdialogplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_propertiesdialogplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_propertiesdialogplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_propertiesdialogplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_propertiesdialogplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_propertiesdialogplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_propertiesdialogplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_propertiesdialogplugin_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_propertiesdialogplugin_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_propertiesdialogplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_propertiesdialogplugin_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_propertiesdialogplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_propertiesdialogplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_propertiesdialogplugin_event(void* self, void* event) {
    return KPropertiesDialogPlugin_Event((KPropertiesDialogPlugin*)self, (QEvent*)event);
}

bool k_propertiesdialogplugin_qbase_event(void* self, void* event) {
    return KPropertiesDialogPlugin_QBaseEvent((KPropertiesDialogPlugin*)self, (QEvent*)event);
}

void k_propertiesdialogplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    KPropertiesDialogPlugin_OnEvent((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

bool k_propertiesdialogplugin_event_filter(void* self, void* watched, void* event) {
    return KPropertiesDialogPlugin_EventFilter((KPropertiesDialogPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool k_propertiesdialogplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return KPropertiesDialogPlugin_QBaseEventFilter((KPropertiesDialogPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void k_propertiesdialogplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPropertiesDialogPlugin_OnEventFilter((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

void k_propertiesdialogplugin_timer_event(void* self, void* event) {
    KPropertiesDialogPlugin_TimerEvent((KPropertiesDialogPlugin*)self, (QTimerEvent*)event);
}

void k_propertiesdialogplugin_qbase_timer_event(void* self, void* event) {
    KPropertiesDialogPlugin_QBaseTimerEvent((KPropertiesDialogPlugin*)self, (QTimerEvent*)event);
}

void k_propertiesdialogplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialogPlugin_OnTimerEvent((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

void k_propertiesdialogplugin_child_event(void* self, void* event) {
    KPropertiesDialogPlugin_ChildEvent((KPropertiesDialogPlugin*)self, (QChildEvent*)event);
}

void k_propertiesdialogplugin_qbase_child_event(void* self, void* event) {
    KPropertiesDialogPlugin_QBaseChildEvent((KPropertiesDialogPlugin*)self, (QChildEvent*)event);
}

void k_propertiesdialogplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialogPlugin_OnChildEvent((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

void k_propertiesdialogplugin_custom_event(void* self, void* event) {
    KPropertiesDialogPlugin_CustomEvent((KPropertiesDialogPlugin*)self, (QEvent*)event);
}

void k_propertiesdialogplugin_qbase_custom_event(void* self, void* event) {
    KPropertiesDialogPlugin_QBaseCustomEvent((KPropertiesDialogPlugin*)self, (QEvent*)event);
}

void k_propertiesdialogplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialogPlugin_OnCustomEvent((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

void k_propertiesdialogplugin_connect_notify(void* self, void* signal) {
    KPropertiesDialogPlugin_ConnectNotify((KPropertiesDialogPlugin*)self, (QMetaMethod*)signal);
}

void k_propertiesdialogplugin_qbase_connect_notify(void* self, void* signal) {
    KPropertiesDialogPlugin_QBaseConnectNotify((KPropertiesDialogPlugin*)self, (QMetaMethod*)signal);
}

void k_propertiesdialogplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialogPlugin_OnConnectNotify((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

void k_propertiesdialogplugin_disconnect_notify(void* self, void* signal) {
    KPropertiesDialogPlugin_DisconnectNotify((KPropertiesDialogPlugin*)self, (QMetaMethod*)signal);
}

void k_propertiesdialogplugin_qbase_disconnect_notify(void* self, void* signal) {
    KPropertiesDialogPlugin_QBaseDisconnectNotify((KPropertiesDialogPlugin*)self, (QMetaMethod*)signal);
}

void k_propertiesdialogplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPropertiesDialogPlugin_OnDisconnectNotify((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

QObject* k_propertiesdialogplugin_sender(void* self) {
    return KPropertiesDialogPlugin_Sender((KPropertiesDialogPlugin*)self);
}

QObject* k_propertiesdialogplugin_qbase_sender(void* self) {
    return KPropertiesDialogPlugin_QBaseSender((KPropertiesDialogPlugin*)self);
}

void k_propertiesdialogplugin_on_sender(void* self, QObject* (*callback)()) {
    KPropertiesDialogPlugin_OnSender((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

int32_t k_propertiesdialogplugin_sender_signal_index(void* self) {
    return KPropertiesDialogPlugin_SenderSignalIndex((KPropertiesDialogPlugin*)self);
}

int32_t k_propertiesdialogplugin_qbase_sender_signal_index(void* self) {
    return KPropertiesDialogPlugin_QBaseSenderSignalIndex((KPropertiesDialogPlugin*)self);
}

void k_propertiesdialogplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPropertiesDialogPlugin_OnSenderSignalIndex((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

int32_t k_propertiesdialogplugin_receivers(void* self, const char* signal) {
    return KPropertiesDialogPlugin_Receivers((KPropertiesDialogPlugin*)self, signal);
}

int32_t k_propertiesdialogplugin_qbase_receivers(void* self, const char* signal) {
    return KPropertiesDialogPlugin_QBaseReceivers((KPropertiesDialogPlugin*)self, signal);
}

void k_propertiesdialogplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPropertiesDialogPlugin_OnReceivers((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

bool k_propertiesdialogplugin_is_signal_connected(void* self, void* signal) {
    return KPropertiesDialogPlugin_IsSignalConnected((KPropertiesDialogPlugin*)self, (QMetaMethod*)signal);
}

bool k_propertiesdialogplugin_qbase_is_signal_connected(void* self, void* signal) {
    return KPropertiesDialogPlugin_QBaseIsSignalConnected((KPropertiesDialogPlugin*)self, (QMetaMethod*)signal);
}

void k_propertiesdialogplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPropertiesDialogPlugin_OnIsSignalConnected((KPropertiesDialogPlugin*)self, (intptr_t)callback);
}

void k_propertiesdialogplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_propertiesdialogplugin_delete(void* self) {
    KPropertiesDialogPlugin_Delete((KPropertiesDialogPlugin*)(self));
}
