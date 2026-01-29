#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkdirwatch.hpp"
#include "libkdirwatch.h"

KDirWatch* k_dirwatch_new() {
    return KDirWatch_new();
}

KDirWatch* k_dirwatch_new2(void* parent) {
    return KDirWatch_new2((QObject*)parent);
}

const QMetaObject* k_dirwatch_meta_object(void* self) {
    return KDirWatch_MetaObject((KDirWatch*)self);
}

void k_dirwatch_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KDirWatch_OnMetaObject((KDirWatch*)self, (intptr_t)callback);
}

const QMetaObject* k_dirwatch_qbase_meta_object(void* self) {
    return KDirWatch_QBaseMetaObject((KDirWatch*)self);
}

void* k_dirwatch_metacast(void* self, const char* param1) {
    return KDirWatch_Metacast((KDirWatch*)self, param1);
}

void k_dirwatch_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KDirWatch_OnMetacast((KDirWatch*)self, (intptr_t)callback);
}

void* k_dirwatch_qbase_metacast(void* self, const char* param1) {
    return KDirWatch_QBaseMetacast((KDirWatch*)self, param1);
}

int32_t k_dirwatch_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirWatch_Metacall((KDirWatch*)self, param1, param2, param3);
}

void k_dirwatch_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDirWatch_OnMetacall((KDirWatch*)self, (intptr_t)callback);
}

int32_t k_dirwatch_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDirWatch_QBaseMetacall((KDirWatch*)self, param1, param2, param3);
}

const char* k_dirwatch_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dirwatch_add_dir(void* self, const char* path) {
    KDirWatch_AddDir((KDirWatch*)self, qstring(path));
}

void k_dirwatch_add_file(void* self, const char* file) {
    KDirWatch_AddFile((KDirWatch*)self, qstring(file));
}

QDateTime* k_dirwatch_ctime(void* self, const char* path) {
    return KDirWatch_Ctime((KDirWatch*)self, qstring(path));
}

void k_dirwatch_remove_dir(void* self, const char* path) {
    KDirWatch_RemoveDir((KDirWatch*)self, qstring(path));
}

void k_dirwatch_remove_file(void* self, const char* file) {
    KDirWatch_RemoveFile((KDirWatch*)self, qstring(file));
}

bool k_dirwatch_stop_dir_scan(void* self, const char* path) {
    return KDirWatch_StopDirScan((KDirWatch*)self, qstring(path));
}

bool k_dirwatch_restart_dir_scan(void* self, const char* path) {
    return KDirWatch_RestartDirScan((KDirWatch*)self, qstring(path));
}

void k_dirwatch_start_scan(void* self) {
    KDirWatch_StartScan((KDirWatch*)self);
}

void k_dirwatch_stop_scan(void* self) {
    KDirWatch_StopScan((KDirWatch*)self);
}

bool k_dirwatch_is_stopped(void* self) {
    return KDirWatch_IsStopped((KDirWatch*)self);
}

bool k_dirwatch_contains(void* self, const char* path) {
    return KDirWatch_Contains((KDirWatch*)self, qstring(path));
}

int32_t k_dirwatch_internal_method(void* self) {
    return KDirWatch_InternalMethod((KDirWatch*)self);
}

KDirWatch* k_dirwatch_self() {
    return KDirWatch_Self();
}

bool k_dirwatch_exists() {
    return KDirWatch_Exists();
}

bool k_dirwatch_event(void* self, void* event) {
    return KDirWatch_Event((KDirWatch*)self, (QEvent*)event);
}

void k_dirwatch_on_event(void* self, bool (*callback)(void*, void*)) {
    KDirWatch_OnEvent((KDirWatch*)self, (intptr_t)callback);
}

bool k_dirwatch_qbase_event(void* self, void* event) {
    return KDirWatch_QBaseEvent((KDirWatch*)self, (QEvent*)event);
}

void k_dirwatch_set_created(void* self, const char* path) {
    KDirWatch_SetCreated((KDirWatch*)self, qstring(path));
}

void k_dirwatch_set_dirty(void* self, const char* path) {
    KDirWatch_SetDirty((KDirWatch*)self, qstring(path));
}

void k_dirwatch_set_deleted(void* self, const char* path) {
    KDirWatch_SetDeleted((KDirWatch*)self, qstring(path));
}

void k_dirwatch_dirty(void* self, const char* path) {
    KDirWatch_Dirty((KDirWatch*)self, qstring(path));
}

void k_dirwatch_on_dirty(void* self, void (*callback)(void*, const char*)) {
    KDirWatch_Connect_Dirty((KDirWatch*)self, (intptr_t)callback);
}

void k_dirwatch_created(void* self, const char* path) {
    KDirWatch_Created((KDirWatch*)self, qstring(path));
}

void k_dirwatch_on_created(void* self, void (*callback)(void*, const char*)) {
    KDirWatch_Connect_Created((KDirWatch*)self, (intptr_t)callback);
}

void k_dirwatch_deleted(void* self, const char* path) {
    KDirWatch_Deleted((KDirWatch*)self, qstring(path));
}

void k_dirwatch_on_deleted(void* self, void (*callback)(void*, const char*)) {
    KDirWatch_Connect_Deleted((KDirWatch*)self, (intptr_t)callback);
}

const char* k_dirwatch_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_dirwatch_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dirwatch_add_dir2(void* self, const char* path, int32_t watchModes) {
    KDirWatch_AddDir2((KDirWatch*)self, qstring(path), watchModes);
}

void k_dirwatch_start_scan1(void* self, bool notify) {
    KDirWatch_StartScan1((KDirWatch*)self, notify);
}

void k_dirwatch_start_scan2(void* self, bool notify, bool skippedToo) {
    KDirWatch_StartScan2((KDirWatch*)self, notify, skippedToo);
}

const char* k_dirwatch_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_dirwatch_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_dirwatch_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_dirwatch_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_dirwatch_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_dirwatch_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_dirwatch_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_dirwatch_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_dirwatch_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_dirwatch_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_dirwatch_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_dirwatch_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_dirwatch_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_dirwatch_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_dirwatch_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_dirwatch_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_dirwatch_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_dirwatch_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_dirwatch_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_dirwatch_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_dirwatch_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_dirwatch_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_dirwatch_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_dirwatch_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_dirwatch_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_dirwatch_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_dirwatch_dynamic_property_names\n");
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

QBindingStorage* k_dirwatch_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_dirwatch_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_dirwatch_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_dirwatch_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_dirwatch_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_dirwatch_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_dirwatch_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_dirwatch_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_dirwatch_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_dirwatch_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_dirwatch_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_dirwatch_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_dirwatch_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_dirwatch_event_filter(void* self, void* watched, void* event) {
    return KDirWatch_EventFilter((KDirWatch*)self, (QObject*)watched, (QEvent*)event);
}

bool k_dirwatch_qbase_event_filter(void* self, void* watched, void* event) {
    return KDirWatch_QBaseEventFilter((KDirWatch*)self, (QObject*)watched, (QEvent*)event);
}

void k_dirwatch_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDirWatch_OnEventFilter((KDirWatch*)self, (intptr_t)callback);
}

void k_dirwatch_timer_event(void* self, void* event) {
    KDirWatch_TimerEvent((KDirWatch*)self, (QTimerEvent*)event);
}

void k_dirwatch_qbase_timer_event(void* self, void* event) {
    KDirWatch_QBaseTimerEvent((KDirWatch*)self, (QTimerEvent*)event);
}

void k_dirwatch_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDirWatch_OnTimerEvent((KDirWatch*)self, (intptr_t)callback);
}

void k_dirwatch_child_event(void* self, void* event) {
    KDirWatch_ChildEvent((KDirWatch*)self, (QChildEvent*)event);
}

void k_dirwatch_qbase_child_event(void* self, void* event) {
    KDirWatch_QBaseChildEvent((KDirWatch*)self, (QChildEvent*)event);
}

void k_dirwatch_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDirWatch_OnChildEvent((KDirWatch*)self, (intptr_t)callback);
}

void k_dirwatch_custom_event(void* self, void* event) {
    KDirWatch_CustomEvent((KDirWatch*)self, (QEvent*)event);
}

void k_dirwatch_qbase_custom_event(void* self, void* event) {
    KDirWatch_QBaseCustomEvent((KDirWatch*)self, (QEvent*)event);
}

void k_dirwatch_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDirWatch_OnCustomEvent((KDirWatch*)self, (intptr_t)callback);
}

void k_dirwatch_connect_notify(void* self, void* signal) {
    KDirWatch_ConnectNotify((KDirWatch*)self, (QMetaMethod*)signal);
}

void k_dirwatch_qbase_connect_notify(void* self, void* signal) {
    KDirWatch_QBaseConnectNotify((KDirWatch*)self, (QMetaMethod*)signal);
}

void k_dirwatch_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDirWatch_OnConnectNotify((KDirWatch*)self, (intptr_t)callback);
}

void k_dirwatch_disconnect_notify(void* self, void* signal) {
    KDirWatch_DisconnectNotify((KDirWatch*)self, (QMetaMethod*)signal);
}

void k_dirwatch_qbase_disconnect_notify(void* self, void* signal) {
    KDirWatch_QBaseDisconnectNotify((KDirWatch*)self, (QMetaMethod*)signal);
}

void k_dirwatch_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDirWatch_OnDisconnectNotify((KDirWatch*)self, (intptr_t)callback);
}

QObject* k_dirwatch_sender(void* self) {
    return KDirWatch_Sender((KDirWatch*)self);
}

QObject* k_dirwatch_qbase_sender(void* self) {
    return KDirWatch_QBaseSender((KDirWatch*)self);
}

void k_dirwatch_on_sender(void* self, QObject* (*callback)()) {
    KDirWatch_OnSender((KDirWatch*)self, (intptr_t)callback);
}

int32_t k_dirwatch_sender_signal_index(void* self) {
    return KDirWatch_SenderSignalIndex((KDirWatch*)self);
}

int32_t k_dirwatch_qbase_sender_signal_index(void* self) {
    return KDirWatch_QBaseSenderSignalIndex((KDirWatch*)self);
}

void k_dirwatch_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDirWatch_OnSenderSignalIndex((KDirWatch*)self, (intptr_t)callback);
}

int32_t k_dirwatch_receivers(void* self, const char* signal) {
    return KDirWatch_Receivers((KDirWatch*)self, signal);
}

int32_t k_dirwatch_qbase_receivers(void* self, const char* signal) {
    return KDirWatch_QBaseReceivers((KDirWatch*)self, signal);
}

void k_dirwatch_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDirWatch_OnReceivers((KDirWatch*)self, (intptr_t)callback);
}

bool k_dirwatch_is_signal_connected(void* self, void* signal) {
    return KDirWatch_IsSignalConnected((KDirWatch*)self, (QMetaMethod*)signal);
}

bool k_dirwatch_qbase_is_signal_connected(void* self, void* signal) {
    return KDirWatch_QBaseIsSignalConnected((KDirWatch*)self, (QMetaMethod*)signal);
}

void k_dirwatch_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDirWatch_OnIsSignalConnected((KDirWatch*)self, (intptr_t)callback);
}

void k_dirwatch_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_dirwatch_delete(void* self) {
    KDirWatch_Delete((KDirWatch*)(self));
}
