#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqlibrary.hpp"
#include "libqlibrary.h"

QLibrary* q_library_new() {
    return QLibrary_new();
}

QLibrary* q_library_new2(const char* fileName) {
    return QLibrary_new2(qstring(fileName));
}

QLibrary* q_library_new3(const char* fileName, int verNum) {
    return QLibrary_new3(qstring(fileName), verNum);
}

QLibrary* q_library_new4(const char* fileName, const char* version) {
    return QLibrary_new4(qstring(fileName), qstring(version));
}

QLibrary* q_library_new5(void* parent) {
    return QLibrary_new5((QObject*)parent);
}

QLibrary* q_library_new6(const char* fileName, void* parent) {
    return QLibrary_new6(qstring(fileName), (QObject*)parent);
}

QLibrary* q_library_new7(const char* fileName, int verNum, void* parent) {
    return QLibrary_new7(qstring(fileName), verNum, (QObject*)parent);
}

QLibrary* q_library_new8(const char* fileName, const char* version, void* parent) {
    return QLibrary_new8(qstring(fileName), qstring(version), (QObject*)parent);
}

const QMetaObject* q_library_meta_object(void* self) {
    return QLibrary_MetaObject((QLibrary*)self);
}

void* q_library_metacast(void* self, const char* param1) {
    return QLibrary_Metacast((QLibrary*)self, param1);
}

int32_t q_library_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLibrary_Metacall((QLibrary*)self, param1, param2, param3);
}

void q_library_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLibrary_OnMetacall((QLibrary*)self, (intptr_t)slot);
}

int32_t q_library_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLibrary_QBaseMetacall((QLibrary*)self, param1, param2, param3);
}

const char* q_library_tr(const char* s) {
    libqt_string _str = QLibrary_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_library_load(void* self) {
    return QLibrary_Load((QLibrary*)self);
}

bool q_library_unload(void* self) {
    return QLibrary_Unload((QLibrary*)self);
}

bool q_library_is_loaded(void* self) {
    return QLibrary_IsLoaded((QLibrary*)self);
}

bool q_library_is_library(const char* fileName) {
    return QLibrary_IsLibrary(qstring(fileName));
}

void q_library_set_file_name(void* self, const char* fileName) {
    QLibrary_SetFileName((QLibrary*)self, qstring(fileName));
}

const char* q_library_file_name(void* self) {
    libqt_string _str = QLibrary_FileName((QLibrary*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_library_set_file_name_and_version(void* self, const char* fileName, int verNum) {
    QLibrary_SetFileNameAndVersion((QLibrary*)self, qstring(fileName), verNum);
}

void q_library_set_file_name_and_version2(void* self, const char* fileName, const char* version) {
    QLibrary_SetFileNameAndVersion2((QLibrary*)self, qstring(fileName), qstring(version));
}

const char* q_library_error_string(void* self) {
    libqt_string _str = QLibrary_ErrorString((QLibrary*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_library_set_load_hints(void* self, int64_t hints) {
    QLibrary_SetLoadHints((QLibrary*)self, hints);
}

int64_t q_library_load_hints(void* self) {
    return QLibrary_LoadHints((QLibrary*)self);
}

const char* q_library_tr2(const char* s, const char* c) {
    libqt_string _str = QLibrary_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_library_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLibrary_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_library_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_library_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_library_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_library_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_library_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_library_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_library_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_library_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_library_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_library_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_library_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_library_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_library_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_library_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_library_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_library_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_library_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_library_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_library_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_library_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_library_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_library_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_library_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_library_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_library_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_library_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_library_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_library_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_library_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_library_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_library_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_library_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_library_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_library_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_library_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_library_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_library_event(void* self, void* event) {
    return QLibrary_Event((QLibrary*)self, (QEvent*)event);
}

bool q_library_qbase_event(void* self, void* event) {
    return QLibrary_QBaseEvent((QLibrary*)self, (QEvent*)event);
}

void q_library_on_event(void* self, bool (*slot)(void*, void*)) {
    QLibrary_OnEvent((QLibrary*)self, (intptr_t)slot);
}

bool q_library_event_filter(void* self, void* watched, void* event) {
    return QLibrary_EventFilter((QLibrary*)self, (QObject*)watched, (QEvent*)event);
}

bool q_library_qbase_event_filter(void* self, void* watched, void* event) {
    return QLibrary_QBaseEventFilter((QLibrary*)self, (QObject*)watched, (QEvent*)event);
}

void q_library_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLibrary_OnEventFilter((QLibrary*)self, (intptr_t)slot);
}

void q_library_timer_event(void* self, void* event) {
    QLibrary_TimerEvent((QLibrary*)self, (QTimerEvent*)event);
}

void q_library_qbase_timer_event(void* self, void* event) {
    QLibrary_QBaseTimerEvent((QLibrary*)self, (QTimerEvent*)event);
}

void q_library_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLibrary_OnTimerEvent((QLibrary*)self, (intptr_t)slot);
}

void q_library_child_event(void* self, void* event) {
    QLibrary_ChildEvent((QLibrary*)self, (QChildEvent*)event);
}

void q_library_qbase_child_event(void* self, void* event) {
    QLibrary_QBaseChildEvent((QLibrary*)self, (QChildEvent*)event);
}

void q_library_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLibrary_OnChildEvent((QLibrary*)self, (intptr_t)slot);
}

void q_library_custom_event(void* self, void* event) {
    QLibrary_CustomEvent((QLibrary*)self, (QEvent*)event);
}

void q_library_qbase_custom_event(void* self, void* event) {
    QLibrary_QBaseCustomEvent((QLibrary*)self, (QEvent*)event);
}

void q_library_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLibrary_OnCustomEvent((QLibrary*)self, (intptr_t)slot);
}

void q_library_connect_notify(void* self, void* signal) {
    QLibrary_ConnectNotify((QLibrary*)self, (QMetaMethod*)signal);
}

void q_library_qbase_connect_notify(void* self, void* signal) {
    QLibrary_QBaseConnectNotify((QLibrary*)self, (QMetaMethod*)signal);
}

void q_library_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLibrary_OnConnectNotify((QLibrary*)self, (intptr_t)slot);
}

void q_library_disconnect_notify(void* self, void* signal) {
    QLibrary_DisconnectNotify((QLibrary*)self, (QMetaMethod*)signal);
}

void q_library_qbase_disconnect_notify(void* self, void* signal) {
    QLibrary_QBaseDisconnectNotify((QLibrary*)self, (QMetaMethod*)signal);
}

void q_library_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLibrary_OnDisconnectNotify((QLibrary*)self, (intptr_t)slot);
}

QObject* q_library_sender(void* self) {
    return QLibrary_Sender((QLibrary*)self);
}

QObject* q_library_qbase_sender(void* self) {
    return QLibrary_QBaseSender((QLibrary*)self);
}

void q_library_on_sender(void* self, QObject* (*slot)()) {
    QLibrary_OnSender((QLibrary*)self, (intptr_t)slot);
}

int32_t q_library_sender_signal_index(void* self) {
    return QLibrary_SenderSignalIndex((QLibrary*)self);
}

int32_t q_library_qbase_sender_signal_index(void* self) {
    return QLibrary_QBaseSenderSignalIndex((QLibrary*)self);
}

void q_library_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLibrary_OnSenderSignalIndex((QLibrary*)self, (intptr_t)slot);
}

int32_t q_library_receivers(void* self, const char* signal) {
    return QLibrary_Receivers((QLibrary*)self, signal);
}

int32_t q_library_qbase_receivers(void* self, const char* signal) {
    return QLibrary_QBaseReceivers((QLibrary*)self, signal);
}

void q_library_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLibrary_OnReceivers((QLibrary*)self, (intptr_t)slot);
}

bool q_library_is_signal_connected(void* self, void* signal) {
    return QLibrary_IsSignalConnected((QLibrary*)self, (QMetaMethod*)signal);
}

bool q_library_qbase_is_signal_connected(void* self, void* signal) {
    return QLibrary_QBaseIsSignalConnected((QLibrary*)self, (QMetaMethod*)signal);
}

void q_library_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLibrary_OnIsSignalConnected((QLibrary*)self, (intptr_t)slot);
}

void q_library_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_library_delete(void* self) {
    QLibrary_Delete((QLibrary*)(self));
}
